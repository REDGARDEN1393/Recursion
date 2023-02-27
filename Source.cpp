#include<iostream>


long long factorial(int num){
	if (num < 0)
		return 0;
	if (num == 0)
		return 1;
	return factorial(num - 1) * num;
}

int fibonacci(int num) {
	if(num == 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
	setlocale(LC_ALL, "rus");
	int n;
	//Факториал
	/*std::cout << "Введите число -> ";
	std::cin >> n;

	std::cout << n << "Factorial != " << factorial(n) << "\n\n";*/

	//Числа Фибоначчи
	std::cout << "Введите номер числа Фибоначчи ->";
	std::cin >> n;
	std::cout << "Число фибоначи №" << n << ": " << fibonacci(n) << std::endl;



















	return 0;
}