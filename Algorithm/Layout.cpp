///*
//2018��4��6�� ���Լ��-����Ȩͼ
//*/
//
//#include<stdio.h>
//#include<queue>
//using namespace std;
//
//const int MAXN = 1010;
//const int INF = 0x7f7f7f7f;
//
//class EDGE {
//public:
//	EDGE *next;
//	int to;
//	int len;
//
//	EDGE() {
//		next = NULL;
//		to = len = 0;
//	}
//	EDGE(int to, int len) {
//		this->to = to;
//		this->len = len;
//		this->next = NULL;
//	}
//};
//
//class POINT {
//public:
//	int num;
//	EDGE *edges;
//
//	POINT() {
//		edges = new EDGE;
//		num = 0;
//	}
//	void addEdge(int to, int len) {
//		EDGE *p = edges;
//		while (p->next != NULL)
//			p = p->next;
//		p->next = new EDGE(to, len);
//	}
//};
//
//POINT points[MAXN];
//int n, ML, MD;
//
//int Spfa() {
//	int count[MAXN] = { 0 };//��¼����������>n����ڸ���·
//	int dis[MAXN] = { 0 };
//	for (int i = 2; i <= n; i++)
//		dis[i] = INF;
//
//	queue<POINT> que;
//	que.push(points[1]);
//	while (!que.empty()) {
//		POINT point = que.front();
//		que.pop();
//
//		EDGE *p = point.edges->next;
//		while (p != NULL) {
//			count[point.num]++;
//			if (count[point.num] > n) return -1;//����·���
//
//			//�ɳ�
//			if (dis[point.num] + p->len < dis[p->to]) {
//				dis[p->to] = dis[point.num] + p->len;
//				que.push(points[p->to]);
//			}
//
//			p = p->next;
//		}
//	}
//
//	if (dis[n] == INF) return -2;
//	else return dis[n];
//}
//
//int main() {
//	scanf("%d %d %d", &n, &ML, &MD);
//	for (int i = 1; i <= n; i++)//�Ŷ�Ҫ��˳�������������i+1 -> i��0����
//		points[i].num = i;
//	for (int i = 2; i <= n; i++)
//		points[i].addEdge(i - 1, 0);
//
//	//����
//	int from, to, len;
//	for (int i = 1; i <= ML; i++) {
//		scanf("%d %d %d", &from, &to, &len);
//		points[from].addEdge(to, len);
//	}
//	for (int i = 1; i <= MD; i++) {
//		scanf("%d %d %d", &from, &to, &len);
//		points[to].addEdge(from, 0 - len);
//	}
//
//	printf("%d\n", Spfa());
//
//	return 0;
//}