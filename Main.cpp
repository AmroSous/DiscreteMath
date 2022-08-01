#include"Functions.h"
#include<cstdlib>

int main()
{
	int choice;
	choice = menu();

	while (choice != 3)   // loop of menu ..
	{
		system("cls");

		switch (choice)
		{
		case 1 :
		{
			int m, n;
			cout << "\n   Find gcd(m,n) .. " << endl;
			cout << "\n   Enter the positive Number m : "; m = read_positive_int();
			cout << "\n   Enter the positive Number n : "; n = read_positive_int();
			cout << "\n   ----------------------------------" << endl;
			gcd(m, n);
		}
		break;
		case 2 :
		{
			int a, n, p;
			cout << "\n   Find  a^n mod p .." << endl;
			cout << "\n   Enter the positive number a : "; a = read_positive_int();
			cout << "\n   Enter the positive number n : "; n = read_positive_int();
			cout << "\n   Enter the positive >prime< number p : "; p = read_positive_int();
			cout << "\n   ----------------------------------------" << endl;
			if (!is_prime(p)) cout << "\n   Sorry .. " << p << " is not a prime number ." << endl;
			else
				mod(a, n, p);
		}
		break;
		}

		cout << "\n   Press enter to choose another choice .. ";
		cin.ignore();
		cin.get();
		system("cls");
		choice = menu();
	}

	cout << "\n\n     Ok .. thank you :)  .\n\n" << endl;         // if exit .

	return EXIT_SUCCESS;
}