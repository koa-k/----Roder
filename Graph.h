#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
class Graph
{
public:
	int get_length(int a,int b);	//��ý���ľ���
	void add_Edges();				//���ļ������ڽӾ���
	int Max_vertexs;				//�洢��������Ŀ
	void get_Max_vertexs();			//��ȡ��������Ŀ
	void inc_Edges(int x);
	Graph();
	~Graph();

private:
	int **ptr;
};
