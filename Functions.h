#pragma once

#include<iostream>

using namespace std;

void gcd(unsigned int, unsigned int); // to find the greatest common divisor by Euclidean algorithm

void mod(unsigned int, unsigned int, unsigned int);  // to calculate the modulo by Fermat's little theorem

bool is_prime(int);  // to check whether the number is prime or not ...

int menu(); // to print the menu and return user choice

int read_positive_int();  // to read integer and check the input .