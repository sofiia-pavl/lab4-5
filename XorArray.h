#pragma once
#include "Array.h"
class XorArray :
    public Array
{
	int size;
	double* arr;
public:
	XorArray(int n = 0)
		: size(n)
	{
		arr = new double[size];
		for (int i = 0; i < size; i++)
			arr[i] = 0;
	}
	~XorArray()
	{
		delete[] arr;
	}

	int GetSize() const { return size; }
	double* GetArr() { return arr; }

	XorArray& operator = (const XorArray& a);
	double& operator [] (const int i);
	const double& operator [] (const int i) const;

	void Print(const XorArray& a);
	void Read(XorArray& a);
	virtual void add(Array& a, Array& b, Array& c);
	virtual void foreach();
};

