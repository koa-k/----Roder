#include "Graph.h" 
void Graph::printpath(Graph &g, int dist[], int path[], int v)            //起始路由表序号，目的路由表序号
{
	
	int i, j, k;
	int n = g.Max_vertexs;
	int *d = new int[n];
	for (i = 0; i < n-1; i++)
	{
		if(i != v)
		{
			k = i;
			while (1)
			{
				j = path[k];
				if (j != v)
				{
					k = j;
				}
				if (j == v)
				{
					cout << "从路由器" << v+1 << "到" << i+1 << "路由器的下一跳为:" << k+1 << endl;
					break;
				}
			}
		}
	}
	cout<<"2333"<<endl; 
}
