#include<iostream>
using namespace std;

int mytriangle (int base,int height);
//function definition
int mytriangle( int base, int height) {
	int area;
	area = base * height * 0.5;
	return area;
}

//main function
int main() {

	int b, h, a;
	char resp;
	do {
		cout << "Please put in the base and height ";
		cin >> b >>  h;
		a = mytriangle(b, h);
		cout << "The area of the Triangle is :  " << a << endl;
		cout << "Do you wish to continue ? "; 
		cin >> resp;

	} while (resp == 'y');


	return 0;
}