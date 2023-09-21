using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Path1 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        int[,] map = new int[5, 5]
        {
            { 0,1,1,1,0},
            { 0,1,1,1,0},
            { 0,1,1,0,0},
            { 0,0,1,1,0},
            { 1,0,0,0,0},
        };
        var graph = new Graph(map);

        var search = new SearchGraph(graph);
        search.Start(graph.nodes[0], graph.nodes[4]);
        while (!search.finished)
        {
            search.Step();
        }
        print("Search done. Path length " + search.path.Count + " iterations " + search.iterations);

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
