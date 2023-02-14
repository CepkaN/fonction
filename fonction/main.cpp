#include<iostream>

// Функция не возвращающая никаких значений и выводящая сообщение.
void say_hello() {
	std::cout << "Hello world!\n";
	std::cout << "Bye world!\n";
}

// Функция не возвращающая никаких значений, но принимающая два числа и выводящая их суммы.
void print_sum(int num1,int num2) {
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
}

// Функция, возвращающая сумму двух переданных в неё целых чисел.
int sum(int num1, int num2) {
	// int tmp = num1 + num2;
	return num1 + num2;   // вернуть сумму чисел.  // return tmp; 
}

// Вывод массива в консоль.
void print_arr(int array[],const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << array[i] << ", ";
	std::cout << "\b\b]\n";
}

// Сумма элементов массива.
int sum_arr(int array[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += array[i];
	return sum;
}

// 
void x2(int num) { // num - параметр функции.
	num *= 2;
}
void arrx2(int arr[]) { // массив не копируется, изменения идут в элемент массива.
	arr[3] *= 2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Функция void
	/*say_hello();// вызов функции с типом void и без параметров
	say_hello();
	std::cout << "Введите два числа : ";
	std::cin >> n >> m;
	print_sum(n,m); //  вызов функции с типом void b двумя параметрами
	print_sum(10, 7);*/

	//Функция, возвращающая значение.
	/*std::cout << "Введите два числа : ";
	std::cin >> n >> m;
	int result = sum(n, m);   // Запись результата работы sum
	std::cout << "Сумма равна " << result << '\n';*/

	// Массивы и функции.
	/*const int size = 7;
	int arr[size]{ 5,54,1,75,16,45,3 };
	std::cout << "Массив.\n";
	print_arr(arr,size);
	std::cout << "Сумма элементов массива равна " << sum_arr(arr, size) << '\n';*/

	n = 10;
	//std::cout << x2(n) << '\n';
	x2(n); // n - аргумент функции.
	std::cout << n << '\n';  // 10

	int mas[5]{ 53,73,21346,4,35 };
	x2(mas[3]);
	std::cout << mas[3] << '\n'; //
	arrx2(mas);
	std::cout << mas[3] << '\n';

	return 0;
}