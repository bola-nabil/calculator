#include <iostream>
#include <cmath>
using namespace std;
class Calculator{
public:
	virtual void sum(float n1,float n2)=0;
	virtual void sub(float n1, float n2)=0;
	virtual void mul(float n1,float n2)=0;
	virtual void div(float n1,float n2)=0;
	virtual void power(float n1,float n2)=0;
	virtual void sq(float n)=0;
};
class Fuctions_Cal : public Calculator {
public:
	void sum(float n1,float n2) {
		float s = (n1 + n2);
		cout << "Result Is: " << s << endl;
	}
	void sub(float n1,float n2) {
		float su = (n1 - n2);
		cout << "Result Is: " << su << endl;
	}
	void mul(float n1,float n2) {
		float m = (n1 * n2);
		cout << "Result Is: " << m << endl;
	}
	void div(float n1,float n2) {
		try {
			float d = (n1 / n2);
			if (n2 > 0) cout << "Result Is: " << d << endl;
			else {
				throw(n2);
			}
		}
		catch (...) {
			cout << "Sorry!. Don't divide by zero" << endl;
		}
	}
	void power(float n1,float n2) {
		float po = pow(n1, n2);
		cout << "Result Is: " << po << endl;
	}
	void sq(float n) {
		float s = sqrt(n);
		cout << "Result Is: " << s << endl;
	}
};
int main() {
	Fuctions_Cal f;
	char c,ch;
	float num1, num2;
	cout << "\t---------------------- Calculator ----------------------\t" << endl;
	cout << endl;
	cout << "*************************************************************************" << endl;
	cout << "Enter (+) To Find The Addition\t\t";
	cout << "Enter (-) To Find The Subtraction\n";
	cout << "Enter (*) To Find The Multiplication\t";
	cout << "Enter (/) To Find The Division\n";
	cout << "Enter (P) To Find The Power\t\t";
	cout << "Enter (S) To Find The Root\n";
	cout << "*************************************************************************" << endl;
	cout << endl;
	do {
		cout << "Please Enter Your Choice: "; cin >> c;
		cout << endl;
		switch (c) {
		case '+': {
			cout << "--------------------------------\n";
			cout << "Enter Number 1: "; cin >> num1; cout << "Enter Number 2: "; cin >> num2;
			cout << "--------------------------------\n";
			cout << endl; f.sum(num1, num2); break; }
		case '-': {
			cout << "--------------------------------\n";
			cout << "Enter Number 1: "; cin >> num1; cout << "Enter Number 2: "; cin >> num2;
			cout << "--------------------------------\n";
			cout << endl; f.sub(num1, num2); break; }
		case '*': {
			cout << "--------------------------------\n";
			cout << "Enter Number 1: "; cin >> num1; cout << "Enter Number 2: "; cin >> num2;
			cout << "--------------------------------\n";
			cout << endl; f.mul(num1, num2); break; }
		case '/': {
			cout << "--------------------------------\n";
			cout << "Enter Number 1: "; cin >> num1; cout << "Enter Number 2: "; cin >> num2;
			cout << "--------------------------------\n";
			cout << endl; f.div(num1, num2); break; }
		case 'P': {
			cout << "--------------------------------\n";
			cout << "Enter Base: "; cin >> num1; cout << "Enter Power: "; cin >> num2;
			cout << "--------------------------------\n";
			cout << endl; f.power(num1, num2); break; }
		case 'S': {
			cout << "--------------------------------\n";
			cout << "Enter Number: "; cin >> num1;
			cout << "--------------------------------\n";
			cout << endl; f.sq(num1); break; }
		default: cout << "Sorry!. There is no such math" << endl; break;
	}
	cout << endl;
	cout << "=============================\n";
	cout << "Enter (Y) To Continue\nEnter (N) To Exit\n";
	cout << "=============================\n";
	cout << endl;
	cout << "Enter The Process: "; cin >> ch;
	cout << endl;
} while (ch == 'Y');
cout << "\t---------------------- Finsh ----------------------\t" << endl;
	return 0;
}