///*
//2017年10月16日
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
//	int count = L == NULL ? 0 : 1;//L是否为空
//	
//	if (count != 0) //不为空则顺序查找
//		while (count != i - 1 && p->next != NULL) {//寻找第i-1个节点
//			p = p->next;
//			count++;
//		}
//	
//	if (i < 1 || i > count + 1) return 0;//i小于1或者大于表长加1
//	if (count == 0) {//L为空，需要创建第一个节点
//		L = (LinkList)malloc(sizeof(LNode));
//		L->data = e; L->next = NULL;
//	}
//	else {//不为空，插入新节点
//		LinkList np = (LinkList)malloc(sizeof(LNode));
//		np->data = e; np->next = p->next;
//		p->next = np;
//	}
//	return 1;
//	//与带头结点的线性链表插入相比，更麻烦的地方在于：因为没有头结点，导致对于表长判断的时候更加复杂
//	//而且在插入节点的时候，创建第一个节点时也需要特殊处理
// }
//
////3
//void delete(LinkList &L, int min, int max) {
//	LinkList p;
//	while (L->next != NULL) {//根据判断条件，需要遍历一遍链表，所以时间复杂度O（链表长度）
//		p = L->next;
//		if (p->data < max && p->data > min) {
//			L->next = p->next;
//			L = L->next;
//			free(p);
//		}
//		else p = p->next;
//
//		if (p->data > max) break;//因为是递增有序，所以大于max时不再删除
//	}
//}
//
////4
//Status DeleteList(SqList &L, ElemType &e) {
//	if (L.length != 0) {//表非空
//		if (L.cur < L.length) {//存在后期元素
//			for (int i = L.cur + 1; i <= L.length; i++)//后继元素前移
//				L.elem[i - 1] = L.elem[i];
//		else L.cur -= 1;//不存在后继元素，则当前位置前移
//
//		L.length -= 1;//删除成功，表长减1
//		return 1;
//		}
//	}
//	else return 0;
//}
//
////5
//Status ListDelete_SL(SLinkList &SL, ElemType &e) {
//	int i = 0;
//	while (SL[i].cur) {//在表中顺序查找
//		int tmp = SL[i].cur;
//		if (SL[tmp].data == e) break;
//		else i = tmp;
//	}
//
//	int pos = SL[i].cur;
//	if (SL[i].cur != 0) {//有可能没找到e而到了表的尾部，所以需要再次判断
//		SL[i].cur = SL[pos].cur;
//		free_SL(pos);
//		return 1;
//	}
//	else return 0;
//}