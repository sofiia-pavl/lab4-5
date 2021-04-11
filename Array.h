#pragma once
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <fcntl.h>

using namespace std;

class Array
{
public:
	virtual int GetSize() const = 0;
	virtual double* GetArr() = 0;

	virtual void add(Array& a, Array& b, Array& c) = 0;
	virtual void foreach() = 0;
};