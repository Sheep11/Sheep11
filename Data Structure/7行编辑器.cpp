///*
//2017年10月14日
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAX_STR_LEN 100000
//
//typedef struct line {
//	char str[MAX_STR_LEN];
//	struct line *next;
//}LINE;
//
//LINE *head = (LINE*)malloc(sizeof(LINE));
//LINE *kong = NULL;
//int n;
//
//char *GetPara() {//多个参数时接受参数字符串
//	char *s = (char*)malloc(MAX_STR_LEN);
//	int pos = 0;
//	char tmp;
//
//	while (tmp = getchar(), tmp != '\n') {
//		if (tmp == '\\') {
//			s[pos++] = getchar();
//			continue;
//		}
//		if (tmp == '/') break;
//
//		s[pos++] = tmp;
//	}
//	s[pos] = '\0';
//	return s;
//}
//
//char *GetPara1() {//多个参数时接受参数字符串
//	char *s = (char*)malloc(MAX_STR_LEN);
//	int pos = 0;
//	char tmp;
//
//	while (tmp = getchar(), tmp != '\n') {
//		if (tmp == '\\') {
//			s[pos++] = getchar();
//			continue;
//		}
//
//		s[pos++] = tmp;
//	}
//	s[pos] = '\0';
//	return s;
//}
//
//LINE *GetPos(int pos) {//返回指向第pos位置的指针
//	if (pos > n) return NULL;
//
//	int count = 0;
//	LINE *p = head;
//	while (count != pos) {
//		count++;
//		p = p->next;
//	}
//	return p;
//}
//
//void Insert(int pos, char source[]) {//source插入的内容
//	if (pos > n) pos = n + 1;
//	LINE *p = GetPos(pos - 1);
//
//	LINE *np = (LINE*)malloc(sizeof(LINE));
//	strcpy(np->str, source); np->next = p->next;
//	p->next = np;
//
//	n++;
//}
//
//void Delete(int pos) {
//	LINE *p = GetPos(pos - 1);
//	LINE *np = p->next;
//	p->next = np->next;
//
//	n--;
//}
//
//int Search(char *s, char *t, int pos) {//s为整行，t为被替换串
//	int s_len = strlen(s), t_len = strlen(t);
//	for (int i = pos; i < s_len; i++) {
//		int j = 0;
//		while (s[i + j] == t[j] && i + j < s_len && j < t_len) j++;
//
//		if (j == t_len) return i;
//	}
//	return -1;
//}
//
//void Replace(char* t, char* newstr) {//t为被替换串，newstr为新串
//	int t_len = strlen(t);
//
//	LINE *p = head;
//	while (p->next != NULL) {
//		p = p->next;
//		int pos = 0;
//
//		while (pos = Search(p->str, t, pos), pos != -1) {
//			char buff[MAX_STR_LEN];
//			strcpy(buff, &p->str[pos + t_len]);
//
//			p->str[pos] = '\0';
//			strcat(p->str, newstr);
//			pos = strlen(p->str);
//			strcat(p->str, buff);
//
//		}
//	}
//}
//
//int main() {
//	head->next = NULL;//头指针
//	n = 0;//总行数
//
//	char rec[MAX_STR_LEN];
//	gets(rec);
//	while (gets(rec), strcmp(rec, "[/Text]") != 0) {
//		Insert(n + 1, rec);
//	}
//
//	char op;
//	while (op = getchar(), getchar(), op != EOF) {
//		switch (op)
//		{
//		case 'i': {
//			int pos;
//			scanf("%d", &pos); getchar();
//			gets(rec);
//
//			if (pos >= 0)
//				Insert(pos, rec);
//			break;
//		}
//		case 'c': {
//			char *t = GetPara(), *newstr = GetPara1();
//			if (strlen(t) == 0) continue;
//
//			Replace(t, newstr);
//			free(t); free(newstr);
//			break;
//		}
//		case 'd': {
//			int pos;
//			scanf("%d ", &pos);
//
//			if (pos >= 0 && pos <= n)
//				Delete(pos);
//			break;
//		}
//		case 'f': {
//			int num[MAX_STR_LEN] = { 0 };
//			int pos = 0;
//			do {
//				scanf("%d", &num[pos++]);
//			} while (getchar() != '\n');
//
//			for (int i = 1; i < pos; i++) {
//				int pos1 = num[0], pos2 = num[i];
//				if (!(pos1 >= 0 && pos1 <= n&&pos2 >= 0 && pos2 <= n) || pos1 == pos2)
//					continue;
//
//				LINE *p1 = GetPos(pos1), *p2 = GetPos(pos2);
//				strcat(p1->str, p2->str);
//				Delete(pos2);
//
//				if (num[0] > pos2) num[0] -= 1;
//				for (int j = i + 1; j < pos; j++)
//					if (num[j] > pos2) num[j] -= 1;
//			}
//			break;
//		}
//		default:
//			break;
//
//		}
//
//	//输出函数
//	LINE *p = head;
//	while (p->next != NULL) {
//		p = p->next;
//
//		int i = 0;
//		while (p->str[i] != '\0')
//			printf("%c", p->str[i++]);
//		printf("\n");
//	}
//
//	return 0;
//}