#include<iostream>
using namespace std;

 inline int sum(int num1, int num2) { // inline нужен дл€ того чтобы не занимать пам€ть в компьютере
	return num1 + num2;
} // если функцию не удаЄтс€ встроить, то она превращаетс€ в обычную функцию и занимает место в пам€ти
 int max_el(int num1, int num2) {
	 cout << "int\n";
	 if (num1 > num2)
		 return num1;
	 return num2;
 }
 
 double max_el(double num1, double num2) { // перегруженные функции облад несколькими экземпл€рами, отличающ друг от друга 
	 // параметрами ( типами данных и/или  количеством)
	 cout << "double\n";
	 if (num1 > num2)
		 return num1;
	 return num2;
}
 /*int max_el(int num1, int num2, int num3) {
	 cout << "three int\n";
	 int max = num1;
	 if (num2 > max) max = num2;
	 if (num3 > max)max = num3;
	 return max;

 }*/
 /*template <typename T>
 double mean(T num1, T num2 ) {  // может хранить любой тип данных  тайпнейм , int, double, float         
	 return (num1 + num2) / 2.0;
 }*/

int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;
	
	//перегрузка функции
	/*cout << "введите 2 числа:";
	cin >> n >> m;
	cout << n<< "+" << m << "=" << sum(n, m)<<"\n\n";*/
	/*cout << max_el(10, 5) << "\n";
	cout << max_el(1.2, 1.9) << "\n";
	cout << max_el(5, 7, 6) << "\n";*/
	// шаблонна€ функци€ 
	cout << mean(4, 7) << "\n";  //5.5
	cout << mean(2.2, 2.4) << "\n";//2.3
	cout << mean(10, 9) << "\n";
	// тернарный оператор
	/*int a = 10, b = 7;
	//int max = a > b ? a : b; // двоеточие аналог else 
	
	//int max;
	//if (a > b)
	//	max = a;
	//else
	//	max = b;
	cout << "max=" << max << "\n";*/








	return 0;
}