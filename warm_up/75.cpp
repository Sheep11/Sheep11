///*小学期程设之欢度国庆 29 微处理器模拟
//2017.9.24
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#define MAXN 256
//
//int ToDec(char high, char low) {
//	int a = high >= 'A' ? high - 'A' + 10 : high - '0';
//	int b = low >= 'A' ? low - 'A' + 10 : low - '0';
//	
//	return 16 * a + b;
//}
//
//int main() {
//	char memory[MAXN] = { '\0' }, regis1='0', regis2='0';
//	while (scanf("%c", &memory[0]), memory[0] != '8') {
//		for (int i = 1; i < MAXN; i++) {
//			scanf("%c", &memory[i]);
//		}
//
//		char tmp;
//		int a, b, high, low;
//		int times = 0;
//		for (int i = 0; memory[i] != '8'; i++) {
//			if (i == 0) times += 1;
//			switch (memory[i]) {
//			case '0':
//				regis1 = memory[ToDec(memory[i + 1], memory[i + 2])];
//				i += 2;
//				break;
//			case '1':
//				memory[ToDec(memory[i + 1], memory[i + 2])] = regis1;
//				i += 2;
//				//regis1 = '0';
//				break;
//			case '2':
//				tmp = regis1;
//				regis1 = regis2; regis2 = tmp;
//				break;
//			case '3':
//				a = regis1 >= 'A' ? regis1 - 'A' + 10 : regis1 - '0';
//				b = regis2 >= 'A' ? regis2 - 'A' + 10 : regis2 - '0';
//				high = (a + b) / 16; low = (a + b) % 16;
//				regis1 = low >= 10 ? low + 'A' - 10 : low + '0';
//				regis2 = high >= 10 ? high + 'A' - 10 : high + '0';
//				break;
//			case '4':
//				if (regis1 == 'F') {
//					regis1 = '0'; break;
//				}
//				if (regis1 == '9') {
//					regis1 = 'A'; break;
//				}
//				regis1 += 1;
//				break;
//			case '5':
//				if (regis1 == 'A') {
//					regis1 = '9'; break;
//				}
//				if (regis1 == '0') {
//					regis1 = 'F'; break;
//				}
//				regis1 -= 1;
//				break;
//			case '6':
//				i = regis1 == '0' ? ToDec(memory[i + 1], memory[i + 2]) - 1 : i + 2;
//				break;
//			case '7':
//				i = ToDec(memory[i + 1], memory[i + 2]) - 1;
//				break;
//
//			default:
//				break;
//			}
//		}
//		for (int i = 0; i < MAXN; i++)
//			printf("%c", memory[i]);
//		printf("\n"); getchar();
//	}
//	return 0;
//}