#include "Functions.h"

void gcd(unsigned int m, unsigned int n)   // to find the greatest common divisor by Euclidean algorithm
{
	unsigned int a, b, r; // a = b(q) + r ...

	a = m; b = n;
	cout << "\n   gcd(" << a << "," << b << ")";
	while (b)
	{
		r = a % b;
		a = b;
		b = r;
		cout << "\n\n   = gcd(" << a << "," << b << ")";
	}
	cout << " = " << a << endl;
	cout << "\n   --> gcd(" << m << "," << n << ") = " << a << endl;
}

void mod(unsigned int a, unsigned int n, unsigned int p)  // to calculate the modulo by Fermat's little theorem
{
	if (a % p == 0)
	{
		cout << "\n   " << a << "^" << n << " mod " << p << " = " << 0 << "   ..... because " << a << " mod " << p << " = " << 0 << endl;
		return;
	}

	cout << "\n   Since " << p << " is prime , and gcd(" << a << "," << p << ") = 1" << endl;
	unsigned int q, r;
	q = n / (p - 1);
	r = n % (p - 1);
	cout << "\n   " << a << "^" << p - 1 << " = 1 (mod " << p << ")   ...... by Fermat's little theorem." << endl;
	cout << "\n   we know that  " << n << " = " << p - 1 << " * " << q << " + " << r << endl;
	cout << "\n   then  =>" << endl;
	cout << "\n   " << a << "^" << n << " mod " << p << endl;
	cout << "\n   = " << a << "^(" << p-1 << " * " << q << " + " << r << ") mod " << p << endl;
	cout << "\n   = ((" << a << "^" << p - 1 << ")^" << q << ") * " << a << "^" << r << " mod " << p << endl;
	cout << "\n   = (" << 1 << ")^" << q << " * " << a << "^" << r << " mod " << p << endl;
	if (a > p)
	{
		cout << "\n   we know  " << a << " mod " << p << " = " << a % p << endl;
		cout << "\n   " << a << "^" << r << " mod " << p << " = " << a % p << "^" << r << " mod " << p << endl;
		a = a % p;
	}
	cout << "\n   = " << pow(a, r) << " mod " << p << endl;
	cout << "\n   = " << (int)pow(a, r) % p << endl;
}

bool is_prime(int n)   // to check whether the number is prime or not ...
{
	if (n < 2) return false;

	int i, k = (int)sqrt(n);
	for (i = 2; i <= k; i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}

int menu()  // to print the menu and return user choice
{
	cout << "\t\t\t\t       **** DISCRETE MATHEMATICS ****" << endl;
	cout << "\n\n   Description : This program provides some operations in Number Theory"
		<< "\n   such as Euclidean Algorithm and Fermat's Little Theorem." << endl;
	cout << "\n   ----------------------------------------------------------------" << endl;
	cout << "\n    ____________________ Main Menu ____________________"
		<< "\n   |                                                   |"
		<< "\n   |  1) Find the GCD between two positive numbers.    |"
		<< "\n   |  2) Find (a^n mod p) by Fermat's Little Theory.   |"
		<< "\n   |  3) Exit.                                         |"
		<< "\n   |___________________________________________________|" << endl;
	int choice;
	cout << "\n   Enter your choice : "; cin >> choice;
	while (cin.fail() || choice < 1 || choice > 3)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "\n   Invalid input .. please choose from the menu above : "; cin >> choice;
	}
	return choice;
}

int read_positive_int()  // to read integer and check the input .
{
	int n;
	cin >> n;
	while (cin.fail() || n < 1)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "\n   Invalid input .. enter again : "; cin >> n;
	}
	return n;
}