/*
Title: Chapter 3 Exercise 17 - Math Tutor
File Name: Chatper3Ex17.cpp
Programmer: Tyler Hively
Date: 10/29/2024
Requirements:

Write a program that can be used as a math tutor for a young studtent.
The program should display two random numbers to be added, such as:

  247
 +129
 -----

 The program should then pause while the student works on the problem.
 When the student is ready to check the answer, he or she can press
 a key and the program will display the correct solution:

  247
 +129
 -----
  376
*/


#include <iostream>
#include <cmath>
#include<random>
using namespace std;

int main()
{
 
	random_device mathTutor;
	uniform_int_distribution<int> randomValue(100, 300);
	
	int Value1 = randomValue(mathTutor);
	int Value2 = randomValue(mathTutor);
	int Solution = Value1 + Value2;

	cout << "----------[Math Tutor]----------" << endl;
	cout << endl;
	cout << "This program will present you with" << endl;
	cout << "two random numbers to add together." << endl;
	cout << "When you are ready to begin, press" << endl;
	cout << "[Enter] to receive your equation." << endl;
	cin.get();
	cout << endl;
	cout << "Generating equation..." << endl;
	cout << endl;
	cout << " " << Value1 << endl;
	cout << "+" << Value2 << endl;
	cout << "-----" << endl;
	cout << endl;
	cout << "This program will now pause so that" << endl;
	cout << "you may work to solve the equation." << endl;
	cout << "When you are ready to see the answer," << endl;
	cout << "press [Enter] to view the solution." << endl;
	cin.get();
	cout << endl;
	cout << " " << Value1 << endl;
	cout << "+" << Value2 << endl;
	cout << "-----" << endl;
	cout << " " << Solution << endl;




}
