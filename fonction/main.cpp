#include<iostream>

// ������� �� ������������ ������� �������� � ��������� ���������.
void say_hello() {
	std::cout << "Hello world!\n";
	std::cout << "Bye world!\n";
}

// ������� �� ������������ ������� ��������, �� ����������� ��� ����� � ��������� �� �����.
void print_sum(int num1,int num2) {
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
}

// �������, ������������ ����� ���� ���������� � �� ����� �����.
int sum(int num1, int num2) {
	// int tmp = num1 + num2;
	return num1 + num2;   // ������� ����� �����.  // return tmp; 
}

// ����� ������� � �������.
void print_arr(int array[],const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << array[i] << ", ";
	std::cout << "\b\b]\n";
}

// ����� ��������� �������.
int sum_arr(int array[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += array[i];
	return sum;
}

// 
void x2(int num) { // num - �������� �������.
	num *= 2;
}
void arrx2(int arr[]) { // ������ �� ����������, ��������� ���� � ������� �������.
	arr[3] *= 2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// ������� void
	/*say_hello();// ����� ������� � ����� void � ��� ����������
	say_hello();
	std::cout << "������� ��� ����� : ";
	std::cin >> n >> m;
	print_sum(n,m); //  ����� ������� � ����� void b ����� �����������
	print_sum(10, 7);*/

	//�������, ������������ ��������.
	/*std::cout << "������� ��� ����� : ";
	std::cin >> n >> m;
	int result = sum(n, m);   // ������ ���������� ������ sum
	std::cout << "����� ����� " << result << '\n';*/

	// ������� � �������.
	/*const int size = 7;
	int arr[size]{ 5,54,1,75,16,45,3 };
	std::cout << "������.\n";
	print_arr(arr,size);
	std::cout << "����� ��������� ������� ����� " << sum_arr(arr, size) << '\n';*/

	n = 10;
	//std::cout << x2(n) << '\n';
	x2(n); // n - �������� �������.
	std::cout << n << '\n';  // 10

	int mas[5]{ 53,73,21346,4,35 };
	x2(mas[3]);
	std::cout << mas[3] << '\n'; //
	arrx2(mas);
	std::cout << mas[3] << '\n';

	return 0;
}