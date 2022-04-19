#pragma once
/* ScrollingText.h
*  Bryson McBreen
*  4-12-22
*  Purpose:
*		Take in a string and output it into the console at a variable speed
*/

/* How to Setup:
*  1. go under #define SPEED and change the number to the speed in miliseconds you would like it too output
*  2. add #include "ScrollingText.h" too whatever file you want to use it in
*  3. when you want to use it, do scroll([string]); The program will handle the rest :)
*/

#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
using namespace std;

// Change the speed of the output (in miliseconds)
#define SPEED 200

void sleep(int s) {
	// CREDIT: Mark Wheeler, this_thread::sleep_for() function
	this_thread::sleep_for(chrono::milliseconds(s));
}

void scroll(string s) {
	int length;
	length = s.length();

	vector<char> v(s.begin(), s.end());


	for (int i = 0; i < length; i++) {
		cout << v[i];
		sleep(SPEED);
	}
}

// Created by Bryson McBreen, use it, modify it, IDC
