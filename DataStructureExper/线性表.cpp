///*
//2017��10��16��
//*/
//
//
//
////1
//int LocateElem_Sq(SqList L, ElemType e, Status(*compare)(ElemType, ElemType)) {
//	int pos = 1;
//	while (pos < L.length && !(compare(L.elem[pos], e)))
//		pos += 1;
//	if (pos <= L.length) return pos;
//	else return 0;
//}
//
////2
//Status ListInsert_L(LinkList &L, int i, ElemType e) {
//	LinkList p = L;
//	int count = L == NULL ? 0 : 1;//L�Ƿ�Ϊ��
//	
//	if (count != 0) //��Ϊ����˳�����
//		while (count != i - 1 && p->next != NULL) {//Ѱ�ҵ�i-1���ڵ�
//			p = p->next;
//			count++;
//		}
//	
//	if (i < 1 || i > count + 1) return 0;//iС��1���ߴ��ڱ���1
//	if (count == 0) {//LΪ�գ���Ҫ������һ���ڵ�
//		L = (LinkList)malloc(sizeof(LNode));
//		L->data = e; L->next = NULL;
//	}
//	else {//��Ϊ�գ������½ڵ�
//		LinkList np = (LinkList)malloc(sizeof(LNode));
//		np->data = e; np->next = p->next;
//		p->next = np;
//	}
//	return 1;
//	//���ͷ�����������������ȣ����鷳�ĵط����ڣ���Ϊû��ͷ��㣬���¶��ڱ��жϵ�ʱ����Ӹ���
//	//�����ڲ���ڵ��ʱ�򣬴�����һ���ڵ�ʱҲ��Ҫ���⴦��
// }
//
////3
//void delete(LinkList &L, int min, int max) {
//	LinkList p;
//	while (L->next != NULL) {//�����ж���������Ҫ����һ����������ʱ�临�Ӷ�O�������ȣ�
//		p = L->next;
//		if (p->data < max && p->data > min) {
//			L->next = p->next;
//			L = L->next;
//			free(p);
//		}
//		else p = p->next;
//
//		if (p->data > max) break;//��Ϊ�ǵ����������Դ���maxʱ����ɾ��
//	}
//}
//
////4
//Status DeleteList(SqList &L, ElemType &e) {
//	if (L.length != 0) {//��ǿ�
//		if (L.cur < L.length) {//���ں���Ԫ��
//			for (int i = L.cur + 1; i <= L.length; i++)//���Ԫ��ǰ��
//				L.elem[i - 1] = L.elem[i];
//		else L.cur -= 1;//�����ں��Ԫ�أ���ǰλ��ǰ��
//
//		L.length -= 1;//ɾ���ɹ�������1
//		return 1;
//		}
//	}
//	else return 0;
//}
//
////5
//Status ListDelete_SL(SLinkList &SL, ElemType &e) {
//	int i = 0;
//	while (SL[i].cur) {//�ڱ���˳�����
//		int tmp = SL[i].cur;
//		if (SL[tmp].data == e) break;
//		else i = tmp;
//	}
//
//	int pos = SL[i].cur;
//	if (SL[i].cur != 0) {//�п���û�ҵ�e�����˱��β����������Ҫ�ٴ��ж�
//		SL[i].cur = SL[pos].cur;
//		free_SL(pos);
//		return 1;
//	}
//	else return 0;
//}