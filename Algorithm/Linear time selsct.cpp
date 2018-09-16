#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>


const int LIMIT = 75;
const int PART = 5;
const int MAXN = 2000000;

template<class Type>
int Partition(Type a[], int start, int end, int mid) {
	std::swap(a[mid], a[end]);
	int pivotkey = a[end];

	while (start < end) {
		while (start < end&&a[start] < pivotkey) start++;
		if (start < end) a[end--] = a[start];
		while (start < end&&a[end] > pivotkey) end--;
		if (start < end) a[start++] = a[end];
	}
	a[start] = pivotkey;
	return start;
}

//k为第k大，而不是数组下标
template<class Type>
Type Select(Type a[], int start, int end, int k) {
	if (end - start < LIMIT) {
		std::sort(&a[start], &a[end]);
		return start + k - 1;
	}

	//线性时间选近似中位数
	int num_of_mid = (end - start + 1) / PART;
	for (int i = 0; i < num_of_mid; i++) {
		int loc = PART * i;
		std::sort(&a[loc], &a[loc + PART - 1]);
		std::swap(a[i], a[loc + PART / 2]);
	}
	int mid = Select<int>(a, start, start + num_of_mid - 1, (num_of_mid + 1) / 2);
	//int mid = rand() % (end - start + 1) + start;
	//int mid = start;
	int loc = Partition<Type>(a, start, end, mid);
	
	int num = loc - start + 1;
	if (k <= num) return Select(a, start, loc, k);
	else return Select(a, loc + 1, end, k - num);
}

int main() {
	int *a = new int[MAXN];
	int len = 0, tmp;
	while (scanf("%d,%d", &tmp, &a[len++]) != EOF);
	len--;

	int ans = Select<int>(a, 0, len - 1, (len + 1) / 2);
	std::cout << a[ans] << std::endl;

	return 0;
}

