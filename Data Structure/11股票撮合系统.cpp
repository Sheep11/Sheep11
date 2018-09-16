///*
//2017Äê10ÔÂ27ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 10000
//
//typedef struct weituo{
//	int orderid;
//	double price;
//	int quantity;
//	char tag;
//
//	struct weituo *next;
//}ORDER;
//
//typedef struct gupiao{
//	int stockid;
//	struct weituo *sell_order;
//	struct weituo *buy_order;
//}STOCK;
//
//int Min(int a, int b) {
//	return a < b ? a : b;
//}
//
//void InsertOrder(STOCK stocks[], ORDER *neworder, int stockid) {
//	STOCK *stock = &stocks[stockid];
//	ORDER *first_buyorder = stock->buy_order->next, *first_sellorder = stock->sell_order->next;
//
//	if (neworder->tag == 'b') {
//		do {
//			if (first_sellorder == NULL) break;
//			if (neworder->price >= first_sellorder->price) {
//				double deal_price = (neworder->price + first_sellorder->price) / 2;
//				int deal_quantity = Min(neworder->quantity, first_sellorder->quantity);
//
//				first_sellorder->quantity -= deal_quantity;
//				neworder->quantity -= deal_quantity;
//
//				printf("deal--price:%6.1f  quantity:%4d  buyorder:%04d  sellorder:%04d\n", deal_price, deal_quantity, neworder->orderid, first_sellorder->orderid);
//
//				if (first_sellorder->quantity == 0) {
//					stock->sell_order->next = first_sellorder->next;
//					free(first_sellorder);
//				}
//			}
//			else break;
//		} while (first_sellorder = stock->sell_order->next, neworder->quantity != 0);
//
//		if (neworder->quantity != 0) {
//			ORDER *order = stock->buy_order;
//			while (order->next != NULL) {
//				if (order->next->price >= neworder->price) order = order->next;
//				else break;
//			}
//			neworder->next = order->next;
//			order->next = neworder;
//		}
//	}
//
//	if (neworder->tag == 's') {
//		do {
//			if (first_buyorder == NULL) break;
//			if (neworder->price <= first_buyorder->price) {
//				double deal_price = (neworder->price + first_buyorder->price) / 2;
//				int deal_quantity = Min(neworder->quantity, first_buyorder->quantity);
//
//				first_buyorder->quantity -= deal_quantity;
//				neworder->quantity -= deal_quantity;
//
//				printf("deal--price:%6.1f  quantity:%4d  sellorder:%04d  buyorder:%04d\n", deal_price, deal_quantity, neworder->orderid, first_buyorder->orderid);
//
//				if (first_buyorder->quantity == 0) {
//					stock->buy_order->next = first_buyorder->next;
//					free(first_buyorder);
//				}
//			}
//			else break;
//		} while (first_buyorder = stock->buy_order->next, neworder->quantity != 0);
//
//		if (neworder->quantity != 0) {
//			ORDER *order = stock->sell_order;
//			while (order->next != NULL) {
//				if (order->next->price <= neworder->price) order = order->next;
//				else break;
//			}
//			neworder->next = order->next;
//			order->next = neworder;
//		}
//	}
//}
//
//void Query(STOCK stocks[], int stockid) {
//	STOCK *stock = &stocks[stockid];
//	ORDER *order;
//
//	//output
//	printf("buy orders:\n");
//	order = stock->buy_order;
//	while (order->next != NULL) {
//		order = order->next;
//		//output
//		printf("orderid: %04d, stockid:%04d, price: %6.1f, quantity: %4d, b/s: %c\n", order->orderid, stock->stockid, order->price, order->quantity, order->tag);
//	}
//	//output
//	printf("sell orders:\n");
//	order = stock->sell_order;
//	while (order->next != NULL) {
//		order = order->next;
//		//output
//		printf("orderid: %04d, stockid:%04d, price: %6.1f, quantity: %4d, b/s: %c\n", order->orderid, stock->stockid, order->price, order->quantity, order->tag);
//	}
//}
//
//void Delete(STOCK stocks[], int order_to_stock[], int deleted_orderid) {
//	int stockid = order_to_stock[deleted_orderid];
//	STOCK *stock = &stocks[stockid];
//	ORDER *order, *tmporder;
//
//	int found = 0;
//	order = stock->buy_order;
//	while (order->next != NULL && !found) {
//		tmporder = order;
//		order = order->next;
//
//		if (order->orderid == deleted_orderid) {
//			found = 1;
//			break;
//		}
//	}
//	if (!found) {
//		order = stock->sell_order;
//		while (order->next != NULL) {
//			tmporder = order;
//			order = order->next;
//
//			if (order->orderid == deleted_orderid) {
//				found = 1;
//				break;
//			}
//		}
//	}
//
//	if (!found) printf("not found\n");
//	else {
//		printf("deleted order:orderid: %04d, stockid:%04d, price: %6.1f, quantity: %4d, b/s: %c\n", order->orderid, stock->stockid, order->price, order->quantity, order->tag);
//
//		tmporder->next = order->next;
//		free(order);
//	}
//}
//
//int main() {
//	STOCK stocks[MAXN];
//	for (int i = 0; i < MAXN; i++) {
//		STOCK *stock = &stocks[i];
//
//		stock->stockid = i;
//		stock->buy_order = (ORDER*)malloc(sizeof(ORDER));
//		stock->sell_order = (ORDER*)malloc(sizeof(ORDER));
//		stock->buy_order->next = stock->sell_order->next = NULL;
//	}
//	int order_to_stock[MAXN] = { 0 };
//
//	char op;
//	int orderid = 1;
//	while (op = getchar(), op != '0') {
//		switch (op)
//		{
//		case '1': {
//			int stockid, quantity;
//			double price;
//			char tag;
//			scanf("%d %lf %d %c", &stockid, &price, &quantity, &tag); getchar();
//
//			ORDER *neworder = (ORDER*)malloc(sizeof(ORDER));
//			neworder->orderid = orderid++; order_to_stock[orderid - 1] = stockid;
//			neworder->price = price;
//			neworder->quantity = quantity;
//			neworder->tag = tag;
//			//output
//			printf("orderid: %04d\n", neworder->orderid);
//
//			InsertOrder(stocks, neworder, stockid);
//			break;
//		}
//		case '2': {
//			int stockid;
//			scanf("%d", &stockid); getchar();
//
//			Query(stocks, stockid);
//			break;
//		}
//		case '3': {
//			int deleted_orderid;
//			scanf("%d", &deleted_orderid); getchar();
//
//			Delete(stocks, order_to_stock, deleted_orderid);
//			break;
//		}
//		default:
//			break;
//		}
//	}
//	return 0;
//}