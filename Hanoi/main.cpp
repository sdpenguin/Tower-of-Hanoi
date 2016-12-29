/*
 * main.cpp
 *
 *  Created on: 29 Dec 2016
 *      Author: Waleed
 */

#include <iostream>
#include <string>

void move(std::string begin, std::string end);

void Han(int n, std::string A, std::string B, std::string C)
{
	if(n==2) //Move the top pin (or group of pins if n>2)
	{
		move(A,B);
	}
	else
	{
		Han(n-1,A,C,B);
	}

	move(A,C); //Move the bottom pin

	if(n==2)
	{
		move(B,C);
	}
	else  //Move the top pin (or group of pins if n>2)
	{
		Han(n-1,B,A,C);
	}
}

void move(std::string begin, std::string end)
{
	std::cout << "Move " << begin << " to " << end << "\n";
	//could also implement graphics logic here and store the new state
}

int main()
{
	std::string a = "First Pin";
	std::string b = "Second Pin";
	std::string c = "Third Pin";

	int numberOfSlates;

	std::cout << "Please input the number of slates: ";
	std::cin >> numberOfSlates;

	Han(numberOfSlates,a,b,c);
}
