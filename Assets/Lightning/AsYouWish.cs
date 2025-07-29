    using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(EdgeCollider2D))]
public class AsYouWish : MonoBehaviour
{
    EdgeCollider2D edgeCollider;
    LineRenderer lineRenderer;
    private float delayDestroy = .09f;

    // Start is called before the first frame update
    void Start()
    {
        edgeCollider = GetComponent<EdgeCollider2D>();
        lineRenderer = GetComponent<LineRenderer>();
        delayDestroy = Time.time + delayDestroy;
    }

    IEnumerator destroy()
    {
        yield return new WaitForSeconds(delayDestroy);
        Destroy(lineRenderer);
        Destroy(gameObject);
    }

    // Update is called once per frame
    void Update()
    {

        if (Time.time > delayDestroy)
        {
            print("Destroy fucking bith");
            Destroy(lineRenderer.gameObject);
            Destroy(gameObject);
        }
        SetEdgeController();

    }

    void SetEdgeController()
    {
        List<Vector2> edges = new List<Vector2>();

        for (int p = 0; p < lineRenderer.positionCount; p++)
        {   
            Vector3  lineRendererPoint = lineRenderer.GetPosition(p);
            edges.Add(lineRendererPoint);
        }

        edgeCollider.SetPoints(edges);
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
       
    }
}
