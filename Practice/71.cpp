///*小学期程设之欢度国庆 25 真.新感情醉酒
//	2017.9.20
//*/
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int gcd(int a, int b) {
//	return b == 0 ? a : gcd(b, a%b);
//}
//
//int main() {
//	long long s, a, b;
//	while (scanf("%lld %lld %lld", &s, &a, &b) != EOF) {
//		if (a < b)
//		{
//			int tmp = a;
//			a = b; b = tmp;
//		}
//		int r = gcd(a, b);
//		if (s % 2 == 1 || s / 2 % r != 0) {
//			printf("ZGQ drinks off !\n"); 
//			continue;
//		}
//
//		int times = 0, tmp = 0;
//		while (tmp != s / 2)
//		{
//			if (tmp > s / 2) tmp -= b;
//			else tmp += a;
//			times += 1;
//		}
//		times = times * 2 - 1;
//		printf("%lld\n", times);
//
//	}
//	return 0;
//}