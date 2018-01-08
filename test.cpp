#include"Graph.h"
int main(){
	Graph a;
	int i = 0;
	int flag = 1;
	int No = 0;
	int *dist = new int[a.Max_vertexs];
	int *path = new int[a.Max_vertexs];
	while (flag){
		cout << "******************************" << endl;
		cout << "********请选择你的操作********" << endl;
		cout << "********1.加载路由信息********" << endl;
		cout << "********2.输出路由信息********" << endl;
		cout << "**********3.删除路由**********" << endl;
		cout << "************4.退出************" << endl;
		cout << "******************************" << endl;
		cin >> i;
		switch (i){
		case 1:a.add_Edges(); 
			cout << "加载成功。" << endl;
			break;
		case 2:cout << "请输入路由器序号。" << endl;
			cin >> No;
			a.add_Edges();
			a.searchtheway(a, No-1, dist, path);
			break;
		case 3:cout << "请输入路由器序号。" << endl;
			cin >> No;
			a.inc_Edges(No-1);
			cout << "删除成功" << endl;
			break;
		case 4:flag = 0; break;
		default:cout << "error" << endl;
		}
	}
}