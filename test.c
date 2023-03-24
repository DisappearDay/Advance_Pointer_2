/
//一维数组传参
//
//void test(int arr[]) {}//都可以
//void test(int arr[10]) {}
//void test(int* arr) {}
//void test2(int* arr[10]) {}
//void test2(int **arr) {}
//
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* arr2[10] = {0};
//	test(arr);
//	test2(arr2);
//
//	return 0;
//
//}


//
//二维数组传参
//

//void test1(int arr[3][5]) {}
//void test1(int arr[][5]) {}//可以省略行不能省略列
//void test2(int (*ip)[5]) {}//因为二维数组的数组名是首元素地址，该首元素地址是第一个以为数组的地址，所以此时写一个指针数组进行接收
//
//int main() {
//	
//	int arr[3][5] = {0};
//	test1(arr);
//	test2(arr);
//	return 0;
//}


//
//二级指针传参
//

void test1(int ** p) {}

//int main() {
//
//	int a = 10;
//	int* p = &a;
//	int** pw = &p;
//	int* pa[10] = { 0 };
//	test1(&p);
//	test1(pw);
//	test1(pa);//当接受参数为二级指针的情况下，不仅能传一级指针的地址和二级指针，也能传指针数组
//
//	return 0;
//}

int Add(int x, int y) {
	return x + y;
}

//int main() {
//
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 }; 
//	//printf("%d\n",Add(a, b));
//
//	//&函数名 == 函数名   得到是函数的地址（没有什么首元素之说）
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//	int (*pm)(int, int) = &Add;  //指向函数的指针--用来存放函数的地址的
//	printf("%d\n", (*pm)(3, 5));
//	return 0;
//}

void Print(char* pc) {
	printf("%s\n", pc);
}

int main() {
	void(* p)(char*) = Print;
	(*p)("hello mq");
	return 0;
}
