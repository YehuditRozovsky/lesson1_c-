
#include <iostream>
#include <bitset>
int readNumber();
void writeAnswer(int);


void multi();
int func23(int,int);
int func24(int, int);
int func20(int);
int func41(int,int);
void func47(int, int);
int findMin(int, int);
int findMax(int, int);
int main()
{	
	//writeAnswer(readNumber() + readNumber());
	//multi();
	int n = 5, q = 3;
	std::cout << func23(5, 3);
	std::cout << "\n";
	//std::cout << sizeof(int);
	int num1 = 6, num2 = 8;
	std::cout << func24(num1, num2);
	std::cout << "\n";
	std::cout << func20(761622921);
	std::cout << "\n";
	std::cout << func41(3,3);
	std::cout << "\n";
	func47(5,8);
	//std::cout <<(n << q);
}
void multi() {
	double num1, num2;
	char ch;
	std::cout << "enter two numbers and char\n";
	std::cin >> num1;
	std::cin >> num2;
	std::cin >> ch;
	switch (ch)
	{
	case'*':
		std::cout << num1 * num2;
		break;
	case'+':
		std::cout << num1 + num2;
		break;
	case'-':
		std::cout << num1 - num2;
		break;
	case'/':
		std::cout << num1 / num2;
		break;
	default:
		break;
	} 
}
int func23(int n,int k) {
	return (n << k) | (n >> (32 - k));
}
int func24(int num1,int num2) {
	return(num1 | num2) - (num1&num2);
}
int func20(int num) {
	return ((num & 0xAAAAAAAA) >> 1) | ((num & 0x55555555)<<1);
}
int func41(int temp,int num) {
	if (num == 0)
		return 0;
	num = num - 1;
	return temp+ func41(temp,num);
}
void func47(int num1, int num2) {
	std::cout << findMin(num1, num2);
	std::cout << "\n";
	std::cout << findMax(num1, num2);
}
int findMin(int num1, int num2) {
	return	num1 + ((num2 - num1) & ((num2 - num1) >> 31));
}
int findMax(int num1, int num2) {
	return num2 - ((num2 - num1) & ((num2 - num1) >> 31));
}