using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ChainLightning : MonoBehaviour{
	[Header("Prefabs")]
	public GameObject lineRendererPrefab;
	public GameObject lightRendererPrefab;

	[Header("Config")]
	public int chainLength;
	public int lightnings;

	private float nextRefresh;
	private float segmentLength=0.2f;
	
	private List<LightningBolt> LightningBolts{get; set;}
	private List<Vector2> Targets{get; set;}
	
	void Awake(){
		LightningBolts=new List<LightningBolt>();
		Targets=new List<Vector2>();
		
		LightningBolt tmpLightningBolt;
		for(int i=0;i<chainLength;i++){
			tmpLightningBolt=new LightningBolt(segmentLength, i);
			tmpLightningBolt.Init(lightnings, lineRendererPrefab, lightRendererPrefab);
			LightningBolts.Add(tmpLightningBolt);
		}
		BuildChain();
	}
	
	public void BuildChain(){
		//Build a chain, in a real project this might be enemies ;)
		for(int i=0;i<chainLength;i++){
			Targets.Add(new Vector2(Random.Range (-2f, 2f), Random.Range (-2f, 2f)));
			LightningBolts[i].Activate();
		}
	}
	
	void Update(){
		//Refresh the LightningBolts
		if(Time.time>nextRefresh){
			BuildChain();
			for(int i=0;i<Targets.Count;i++){
				if(i==0){
					LightningBolts[i].DrawLightning(Vector2.zero, Targets[i]);
				}else{
					LightningBolts[i].DrawLightning(Targets[i-1], Targets[i]);
				}
			}
			nextRefresh=Time.time+0.01f;
		}
	}
}
