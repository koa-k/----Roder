void printpath(Graph &g, dist[], path[], int v)
{
	cout << "从路由器" << g.getValue(v) << "到其他各路由器的路由表为：";
	int i, j, k;
	int n = g.NumberOfVertices;
	int *d = new int[n];
	for (i = 0; i<n; i++)
		if (i = 0; i<n; i++)
			if (i != v) {
				j = i; k = 0;
				while (j != v) {
					d[k++] = j; j = path[j];
				}
				cout << g.getValue(i) << '\t' << "最短路由长度为：" << g.getValue(v);
				while (k > 0)
				{
					cout << g.getValue(d[--k]) << "";
					cout << "路由路径为：" << dist[i] << endl;
				}
				delete[]d;
			}
}