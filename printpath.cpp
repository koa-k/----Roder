void printpath(Graph &g, dist[], path[], int v)
{
	cout << "��·����" << g.getValue(v) << "��������·������·�ɱ�Ϊ��";
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
				cout << g.getValue(i) << '\t' << "���·�ɳ���Ϊ��" << g.getValue(v);
				while (k > 0)
				{
					cout << g.getValue(d[--k]) << "";
					cout << "·��·��Ϊ��" << dist[i] << endl;
				}
				delete[]d;
			}
}