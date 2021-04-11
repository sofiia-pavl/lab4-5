#pragma once
#include "Array.h"
class SortArray :
	public Array
{
	int size;
	double* arr;
public:
	SortArray(int n = 0)
		: size(n)
	{
		arr = new double[size];
		for (int i = 0; i < size; i++)
			arr[i] = 0;
	}
	~SortArray()
	{
		delete[] arr;
	}

	int GetSize() const { return size; }
	double* GetArr() { return arr; }

	SortArray& operator = (const SortArray& a);
	double& operator [] (const int i);
	const double& operator [] (const int i) const;

    void Print(const SortArray& a);
    void Read(SortArray& a);
	virtual void add(Array& a, Array& b, Array& c);
	virtual void foreach();
};
