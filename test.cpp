#include"Graph.h"
int main(){
	Graph a;
	int i = 0;
	int flag = 1;
	int No = 0;
	int *dist = new int[a.Max_vertexs];
	int *path = new int[a.Max_vertexs];
	a.add_Edges();
	a.inc_Edges(1);
	while (flag){
		cout << "******************************" << endl;
		cout << "********��ѡ����Ĳ���********" << endl;
		cout << "********1.����·����Ϣ********" << endl;
		cout << "********2.���·����Ϣ********" << endl;
		cout << "**********3.ɾ��·��**********" << endl;
		cout << "************4.�˳�************" << endl;
		cout << "******************************" << endl;
		cin >> i;
		switch (i){
		case 1:a.add_Edges(); break;
		case 2:cout << "������·������š�" << endl;
			cin >> No;
			a.searchtheway(a, No-1, dist, path); break;
		case 3:cout << "������·������š�" << endl;
			cin >> No;
			a.inc_Edges(No);
		case 4:flag = 0; break;
		default:cout << "error" << endl;
		}
	}
}