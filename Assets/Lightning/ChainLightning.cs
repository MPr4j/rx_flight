using System.Collections.Generic;
using UnityEngine;

public class ChainLightning : MonoBehaviour
{
    [Header("Prefabs")]
    public GameObject lineRendererPrefab;
    public GameObject lightRendererPrefab;

    [Header("Config")]
    public int chainLength = 2;
    public int lightnings;

    private float nextRefresh;
    private float destroyTime;
    private float segmentLength = 0.2f;



    private List<LightningBolt> LightningBolts { get; set; }
    private List<Vector2> Targets { get; set; }

    void Awake()
    {
        LightningBolts = new List<LightningBolt>();
        Targets = new List<Vector2>();

        LightningBolt tmpLightningBolt;
        for (int i = 0; i < chainLength; i++)
        {
            tmpLightningBolt = new LightningBolt(segmentLength, i);
            tmpLightningBolt.Init(lightnings, lineRendererPrefab, lightRendererPrefab);
            LightningBolts.Add(tmpLightningBolt);
        }
        BuildChain();
    }

    public void BuildChain()
    {
        Targets.Clear();
        Targets.Add(transform.position);
        float rotationOfPlayer = transform.eulerAngles.z + 90;
        Vector2 distinationPoint = new Vector3(transform.position.x + Mathf.Cos(Mathf.Deg2Rad * rotationOfPlayer) * 10f, transform.position.y + Mathf.Sin(Mathf.Deg2Rad * rotationOfPlayer) * 10f);
        Targets.Add(distinationPoint);
        LightningBolts[0].Activate();
        LightningBolts[1].Activate();
        
    }

    void Update()
    {
        
            if (Time.time > destroyTime) {
            foreach(var i in LightningBolts)
            {
                print("Destroying line renderer");
                Destroy(i.lightRenderer.gameObject);
            }
            print("Destroying gameObject");
            Destroy(gameObject);
              }
            //Refresh the LightningBolts
            if (Time.time > nextRefresh)
            {
                print("Lightning bolts" + LightningBolts.Count + " Targets " + Targets.Count);
                BuildChain();
                for (int i = 0; i < Targets.Count; i++)
                {
                    if (i == 0)
                    {
                        LightningBolts[i].DrawLightning(transform.position, Targets[i]);
                    }
                    else
                    {
                        LightningBolts[i].DrawLightning(Targets[i - 1], Targets[i]);
                    }
                }
                nextRefresh = Time.time + 0.01f;
               
            }
        destroyTime = Time.time + 8f;

    }
}