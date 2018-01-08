#include"cfh.h"
#include"zxd.h"
void searchtheway(Graph &g,int v,int dist[],int path[])
{
	int n = g.Max_vertexs;
	bool *S = new bool[n];
	int i, j, k;
	int w, min;
	for (i = 0; i<n; i++)
	{
		dist[i] = g.get_length(v, i);
		S[i] = false;
		if (i != v && dist[i] <16)
			path[i] = v;
		else
		{
			path[i] = -1;
		}
	}
	S[v] = true;
	dist[v] = 0;
	for (i = 0; i<n - 1; i++)
	{
		min = 16;
		int u = v;
		for (j = 0; j<n; j++)
		{
			if (S[j] == false && dist[j] < min)
			{
				u = j;
				min = dist[j];
			}
		}
		S[u] = true;
		for (k = 0; k<n; k++)
		{
			w = g.get_length(u, k);
			if (S[k] == false && w <16 && dist[u] + w<dist[k])
			{
				dist[k] = dist[u] + w;
				path[k] = u;
			}
		}
	}
	printpath(g,dist,path,v);
}
