using UnityEngine;

public class LightningBolt
{
    EdgeCollider2D edgeCollider;

    public LineRenderer[] lineRenderer { get; set; }
    public LineRenderer lightRenderer { get; set; }

    public float SegmentLength { get; set; }
    public int Index { get; private set; }
    public bool IsActive { get; private set; }

    public LightningBolt(float segmentLength, int index)
    {
        SegmentLength = segmentLength;
        Index = index;
    }

    public void Init(int lineRendererCount, GameObject lineRendererPrefab, GameObject lightRendererPrefab)
    {
        //Create the needed LineRenderer instances
        lineRenderer = new LineRenderer[lineRendererCount];
        for (int i = 0; i < lineRendererCount; i++)
        {
            lineRenderer[i] = (GameObject.Instantiate(lineRendererPrefab) as GameObject).GetComponent<LineRenderer>();
            lineRenderer[i].enabled = false;
        }
        lightRenderer = (GameObject.Instantiate(lightRendererPrefab) as GameObject).GetComponent<LineRenderer>();
        IsActive = false;
    }

    public void Activate()
    {
        //Active this LightningBolt with all of its LineRenderers
        for (int i = 0; i < lineRenderer.Length; i++)
        {
            lineRenderer[i].enabled = true;
        }
        lightRenderer.enabled = true;
        IsActive = true;
    }

    
    public void DrawLightning(Vector2 source, Vector2 target)
    {
        //Calculated amount of Segments
        float distance = Vector2.Distance(source, target);
        int segments = 5;
        if (distance > SegmentLength)
        {
            segments = Mathf.FloorToInt(distance / SegmentLength) + 2;
        }
        else
        {
            segments = 4;
        }

        for (int i = 0; i < lineRenderer.Length; i++)
        {
            // Set the amount of points to the calculated value
            lineRenderer[i].SetVertexCount(segments);
            lineRenderer[i].SetPosition(0, source);
            Vector2 lastPosition = source;
            for (int j = 1; j < segments - 1; j++)
            {
                //Go linear from source to target
                Vector2 tmp = Vector2.Lerp(source, target, (float)j / (float)segments);
                //Add randomness
                lastPosition = new Vector2(tmp.x + Random.Range(-0.1f, 0.1f), tmp.y + Random.Range(-0.1f, 0.1f));
                //Set the calculated position
                lineRenderer[i].SetPosition(j, lastPosition);
            }
            lineRenderer[i].SetPosition(segments - 1, target);
        }
        //Set the points for the light
        lightRenderer.SetPosition(0, source);
        lightRenderer.SetPosition(1, target);
        //Set the color of the light
        Color lightColor = new Color(0.5647f, 0.58823f, 1f, Random.Range(0.2f, 1f));
        lightRenderer.startColor = lightColor;
        lightRenderer.endColor = new Color(1f, 0.58823f, 0f, Random.Range(0.2f, 1f));
    }
}