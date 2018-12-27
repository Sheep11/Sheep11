//#include<stdio.h>
//#include<stdlib.h>
//
//struct Node {
//	int grade;
//	int time;
//};
//
//int cmp(const void* a, const void* b)
//{
//	return 	((struct Node*)a)->grade < ((struct Node*)b)->grade;
//}
//
//int main() {
//	int n, ntime = 0;
//	long long ans = 0;
//	struct Node nodes[10001];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &nodes[i].grade);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &nodes[i].time);
//		if (nodes[i].time > ntime) ntime = nodes[i].time;
//	}
//
//	qsort(nodes, n, sizeof(struct Node), cmp);
//	
//	
//	int pos = 0;
//	while (ntime)
//	{
//		for (pos = 0; pos < n; pos++)
//			if (nodes[pos].time >= ntime) break;
//		if (pos != n)
//		{
//			ans += nodes[pos].grade;
//			nodes[pos].time = 0;
//		}
//		ntime--;
//	}
//	printf("%lld\n", ans);
//
//	return 0;
//}