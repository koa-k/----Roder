#include"Graph.h"

int Graph::get_length(int a, int b){
	return ptr[a][b];
}

void Graph::add_Edges(){
	int count1 = 0;
	int count2 = 0;
	fstream infile("Graph_edges.txt", ios::in);
	if (!infile){
		cerr << "open error!" << endl;
		exit(1);
	}
	ptr = new int*[Max_vertexs];
	while (count1<Max_vertexs){
		ptr[count1] = new int[Max_vertexs];
		count1++;
	}
	for (count1 = 0; count1 < Max_vertexs; count1++){
		for (; count2 < Max_vertexs; count2++){
			infile >> ptr[count1][count2];
		}
	}
}

void Graph::get_Max_vertexs(){
	fstream infile("Graph.txt", ios::in);
	if (!infile){
		cerr << "open error!" << endl;
		exit(1);
	}
	while (!infile.eof()){
		Max_vertexs++;
	}
	Max_vertexs = sqrt(Max_vertexs);
}

Graph::Graph()
{
}

Graph::~Graph()
{
	delete []ptr;
}