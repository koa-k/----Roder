#include"wqy.h"
#include"zxd.h"
#include"cfh.h"
int main(){
	Graph a;
	int i = 0;
	int flag = 1;
	int No = 0;
	int No1 = 0;
	int *dist = new int[a.Max_vertexs];
	int *path = new int[a.Max_vertexs];
	while (flag){
		cout << "******************************" << endl;
		cout << "********��ѡ����Ĳ���********" << endl;
		cout << "********1.����·����Ϣ********" << endl;
		cout << "********2.���·����Ϣ********" << endl;
		cout << "**********3.ɾ��·��**********" << endl;
		cout << "**********4.ɾ����·**********" << endl;
		cout << "************5.�˳�************" << endl;
		cout << "******************************" << endl;
		cin >> i;
		switch (i){
		case 1:a.add_Edges(); 
			cout << "���سɹ���" << endl;
			break;
		case 2:cout << "������·������š�" << endl;
			cin >> No;
			a.add_Edges();
			searchtheway(a, No-1, dist, path);
			break;
		case 3:cout << "������·������š�" << endl;
			cin >> No;
			a.inc_Edges(No-1);
			cout << "ɾ���ɹ�" << endl;
			break;
		case 4:cout << "����������·�ɱ��" << endl;
			cin >> No >> No1;
			a.del_list(No - 1, No1 - 1);
			cout << "ɾ���ɹ�" << endl;
			a.add_Edges();
			break;
		case 5:flag = 0; break;
		default:cout << "error" << endl;
		}
	}
}