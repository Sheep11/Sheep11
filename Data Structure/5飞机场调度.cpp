///*
//2017Äê10ÔÂ13ÈÕ
//*/
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//typedef struct plane {
//	int num, time;
//	struct plane *next;
//}PLANE;
//
//typedef struct queue {
//	float waittime;
//	PLANE *front, *rear;
//}QUEUE;
//
//void InitQueue(QUEUE *q) {
//	q->front = q->rear = (PLANE*)malloc(sizeof(PLANE));
//	q->front->next = NULL;
//}
//
//void EnQueue(QUEUE *que, int num, int time) {
//	PLANE *p = (PLANE*)malloc(sizeof(PLANE));
//	p->next = NULL;
//	p->num = num;
//	p->time = time;
//
//	que->rear->next = p;
//	que->rear = p;
//}
//
//PLANE DeQueue(QUEUE *que) {
//	if (que->front != que->rear) {
//		PLANE *p = que->front->next;
//		PLANE e = *p;
//		que->front->next = p->next;
//
//		if (que->rear == p) que->rear = que->front;
//
//		free(p);
//		return e;
//	}
//}
//
//int IsEmpty(QUEUE *que) {
//	if (que->front == que->rear) return 1;
//	else return 0;
//}
//
//void UpdateQueue(QUEUE *que) {
//	if (que->front == que->rear) return;
//	PLANE *q = que->front;
//	int count = 0;
//
//	while (q != que->rear) {
//		count++;
//		q = q->next;
//	}
//	que->waittime += count;
//}
//
//int main() {
//	int N, LAND_TIME, TAKEOFF_TIME;
//	int n_land, n_takeoff, counter_land = 5001, counter_takeoff = 1;
//	int sum_land = 0, sum_takeoff = 0;
//	scanf("%d %d %d", &N, &LAND_TIME, &TAKEOFF_TIME);
//
//	PLANE *runway = (PLANE*)malloc((N + 1) * sizeof(PLANE));
//	memset(runway, 0, (N + 1) * sizeof(PLANE));
//	int *runway_busytime = (int*)malloc((N + 1) * sizeof(int));
//	memset(runway_busytime, 0, (N + 1) * sizeof(int));
//
//	QUEUE *land = (QUEUE*)malloc(sizeof(QUEUE)), *takeoff = (QUEUE*)malloc(sizeof(QUEUE));
//	land->waittime = 0; takeoff->waittime = 0;
//	InitQueue(land); InitQueue(takeoff);
//
//	int time = 0;
//	int end = 0, isbusy = 0;
//	printf("Current Time:    0\n");
//	while (!IsEmpty(land) || !IsEmpty(takeoff) || end == 0 || isbusy) {
//		time++;
//		if (!end) scanf("%d %d", &n_land, &n_takeoff);
//		if (n_land < 0 && n_takeoff < 0) end = 1;
//		if (!end) {
//			sum_land += n_land;
//			sum_takeoff += n_takeoff;
//		}
//
//		for (int i = 1; i <= n_land; i++)
//			EnQueue(land, counter_land++, LAND_TIME);
//		for (int i = 1; i <= n_takeoff; i++)
//			EnQueue(takeoff, counter_takeoff++,TAKEOFF_TIME);
//
//		for (int i = 1; i <= N; i++) {
//			if (IsEmpty(land) && IsEmpty(takeoff)) break;
//			if (runway[i].time == 0) {
//				if (!IsEmpty(land)) {
//					runway[i] = DeQueue(land);
//					runway_busytime[i] += runway[i].time;
//					printf("airplane %04d is ready to land on runway %02d\n", runway[i].num, i);
//				}
//				else {
//					runway[i] = DeQueue(takeoff);
//					runway_busytime[i] += runway[i].time;
//					printf("airplane %04d is ready to takeoff on runway %02d\n", runway[i].num, i);
//				}
//			}
//		}
//
//		printf("Current Time: %4d\n", time);
//		for (int i = 1; i <= N; i++) {
//			if (runway[i].time == 1) printf("runway %02d is free\n", i);
//			if (runway[i].time != 0)
//				runway[i].time -= 1;
//		}
//		isbusy = 0;
//		for (int i = 1; i <= N; i++)
//			if (runway[i].time != 0) isbusy = 1;
//		UpdateQueue(land);
//		UpdateQueue(takeoff);
//	}
//	printf("simulation finished\n");
//	printf("simulation time: %4d\n", time);
//	printf("average waiting time of landing: %4.1f\n", land->waittime/sum_land);
//	printf("average waiting time of takeoff: %4.1f\n", takeoff->waittime / sum_takeoff);
//	float sum_busytime = 0;
//	for (int i = 1; i <= N; i++) {
//		printf("runway %02d busy time: %4d\n", i, runway_busytime[i]);
//		sum_busytime += runway_busytime[i];
//	}
//	printf("runway average busy time percentage: %4.1f%%\n", sum_busytime * 100 / (time * N));
//
//	return 0;
//}