void searchtheway(Graph &g,int x,int y,int dist[],int path[])
{
	int n = g.Max_vertexs;
	int i,j,m;
	int min;
	int a[n] = {0};
	for(i = 0;i<n;i++)
	{
		if(i != x)
		{
			dist[i] == g.get_length(x,i);
			if(dist[i] < 16)
			   path[i] = v;
			else
			   path[i] = -1;
		}
	}
	dist[v] = 0;
	a[v] = 1;
	for(j = 0;i<n-1;j++)
	{
		min = 16;
	    m = v;
		for(int k = 0;k<n;k++)
		{
			if(dist[k]<min && a[k] == 0)
			{
				min = dist[k];
				m = k;
			}
		}
		a[k] = 1;
		for(int l = 0;l<n;l++)
		{
			int z = g.get_length(m,l);
			if(a[l] == 0&&dist[l]>min+z)
			{
				dist[l] = min + z;
				path[l] = m;
			}
			   
		}
		
	}
	
}