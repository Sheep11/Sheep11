///*
//2017Äê11ÔÂ21ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 10000
//
//typedef struct ArcNode {
//	int adjvex;
//	int len;
//	struct ArcNode *next;
//}ArcNode;
//typedef struct VNode {
//	char name[100];
//	ArcNode *arcnode;
//}VNode;
//typedef struct Graph {
//	VNode *vertices;
//	int vexnum, arcnum;
//}Graph;
//
//typedef struct Path {
//	int res[MAXN];
//	int count;
//}Path;
//
//void CreateGraph(Graph &G) {
//	VNode *pvex = G.vertices;
//	for (int i = 0; i < G.vexnum; i++, pvex++) {
//		int count = 0; char c;
//		while (c = getchar(), c != ','&&c != '\n')
//			pvex->name[count++] = c;
//	}
//	for (int i = 0; i < G.arcnum; i++) {
//		int v1, v2, len;
//		scanf("<%d,%d,%d>", &v1, &v2, &len); getchar();
//
//		pvex = G.vertices + v1;
//		ArcNode *parc = pvex->arcnode, *tmp = (ArcNode*)malloc(sizeof(ArcNode));
//		tmp->adjvex = v2; tmp->len = len; tmp->next = NULL;
//		if (parc == NULL)
//			pvex->arcnode = tmp;
//		else {
//			if (tmp->adjvex < pvex->arcnode->adjvex) {
//				tmp->next = pvex->arcnode;
//				pvex->arcnode = tmp;
//			}
//			else {
//				while (parc->next != NULL&&parc->next->adjvex < tmp->adjvex)
//					parc = parc->next;
//				tmp->next = parc->next;
//				parc->next = tmp;
//			}
//		}
//	}
//}
//
//void GetInDegree(Graph G, int indegree[]) {
//	VNode *head = G.vertices;
//	for (int i = 0; i < G.vexnum; i++) {
//		ArcNode *parc = head[i].arcnode;
//		while (parc != NULL) {
//			indegree[parc->adjvex] += 1;
//			parc = parc->next;
//		}
//	}
//	return;
//}
//
//int TopologicalSort(Graph G, int res[]) {
//	VNode *head = G.vertices;
//	int indegree[MAXN] = { 0 }; GetInDegree(G, indegree);
//	int count = 0;
//
//	while (count < G.vexnum) {
//		int find = 0;
//		for (int i = 0; i < G.vexnum; i++)
//			if (indegree[i] == 0) {
//				res[count++] = i; indegree[i] = -1;
//
//				ArcNode *parc = head[i].arcnode;
//				while (parc != NULL) {
//					indegree[parc->adjvex] -= 1;
//					parc = parc->next;
//				}
//
//				find = 1; break;
//			}
//		if (!find) break;
//	}
//	if (count == G.vexnum) return true;
//	else return false;
//}
//
//void GetVeVl(Graph G, int topological_seq[], int ve[], int vl[]) {
//	VNode *head = G.vertices;
//
//	for (int i = 0; i < G.vexnum; i++) {
//		int beg = topological_seq[i];
//		ArcNode *parc = head[beg].arcnode;
//		while (parc != NULL) {
//			int end = parc->adjvex;
//			if (ve[beg] + parc->len > ve[end]) ve[end] = ve[beg] + parc->len;
//			parc = parc->next;
//		}
//	}
//
//	for (int i = 0; i < G.vexnum; i++)
//		vl[i] = ve[i];
//
//	for (int i = G.vexnum - 2; i >= 0; i--) {
//		int beg = topological_seq[i], delay = 0x3f3f3f3f;
//		ArcNode *parc = head[beg].arcnode;
//		while (parc != NULL) {
//			int end = parc->adjvex;
//			if (vl[end] - (ve[beg] + parc->len) < delay) delay = ve[end] - (ve[beg] + parc->len);
//			parc = parc->next;
//		}
//		vl[beg] = ve[beg] + delay;
//	}
//	return;
//}
//
//void Putout(Graph G, int ve[], int vl[], Path path) {
//	int num = path.res[path.count - 1];
//
//	ArcNode *parc = G.vertices[num].arcnode;
//	if (parc == NULL) {
//		//output
//		printf("%s", G.vertices[path.res[0]].name);
//		for (int i = 1; i < path.count; i++)
//			printf("-%s", G.vertices[path.res[i]].name);
//		printf("\n");
//		return;
//	}
//	while (parc != NULL) {
//		if (ve[parc->adjvex] == vl[parc->adjvex] && ve[num]+parc->len==ve[parc->adjvex]) {
//			Path newpath = path;
//			newpath.res[newpath.count++] = parc->adjvex;
//			Putout(G, ve, vl, newpath);
//		}
//		parc = parc->next;
//	}
//	return;
//}
//
//int main() {
//	int n, m;
//	scanf("%d,%d", &n, &m); getchar();
//
//	Graph G;
//	G.vexnum = n; G.arcnum = m;
//	G.vertices = (VNode*)malloc(sizeof(VNode)*n);
//	memset(G.vertices, 0, sizeof(VNode)*n);
//
//	CreateGraph(G);
//	int topological_seq[MAXN];
//	if (!TopologicalSort(G, topological_seq)) {
//		printf("NO TOPOLOGICAL PATH\n");
//		return 0;
//	}
//	printf("%s", G.vertices[topological_seq[0]].name);
//	for (int i = 1; i < G.vexnum; i++)
//		printf("-%s", G.vertices[topological_seq[i]].name);
//	printf("\n");
//
//	int ve[MAXN] = { 0 }, vl[MAXN] = { 0 };
//	GetVeVl(G, topological_seq, ve, vl);
//
//	for (int i = 0; i < G.vexnum; i++) {
//		if (ve[i] == 0) {
//			Path path;
//			path.count = 1; path.res[0] = i;
//			Putout(G, ve, vl, path);
//		}
//	}
//
//	return 0;
//}