#include "SortArray.h"

void SortArray::foreach()
{
	double temp = 0;
	for (int i = 0; i < GetSize() - 1; i++)
	{
		for (int j = 0; j < GetSize() - i - 1; j++)
		{
			if (GetArr()[j] > GetArr()[j + 1])
			{
				temp = GetArr()[j];
				GetArr()[j] = GetArr()[j + 1];
				GetArr()[j + 1] = temp;
			}
		}
	}
}

void SortArray::add(Array& a, Array& b, Array& c)
{
	int i = 0, j = 0, k = 0;

	while (i < a.GetSize() && j < b.GetSize())
	{
		if (a.GetArr()[i] < b.GetArr()[j])
		{
			c.GetArr()[k++] = a.GetArr()[i++];
		}
		else
			c.GetArr()[k++] = b.GetArr()[j++];
	}

	while (i < a.GetSize())
		c.GetArr()[k++] = a.GetArr()[i++];

	while (j < b.GetSize())
		c.GetArr()[k++] = b.GetArr()[j++];

}
void SortArray::Read(SortArray& a)
{
	for (int i = 0; i < a.GetSize(); i++)
	{
		cout << " arr[" << i << "] - ? "; cin >> a[i];
	}
	cout << endl;
}

void SortArray::Print(const SortArray& a)
{
	cout << "The value of the elements of array" << endl;
	for (int i = 0; i < a.GetSize(); i++)
		cout << "arr[" << i << "] = " << a[i] << endl;
	cout << endl;
}

SortArray& SortArray::operator = (const SortArray& a)
{
	if (&a == this) return *this;
	size = a.size;
	delete[] arr;
	arr = new double[size];
	for (int i = 0; i < size; i++)
		arr[i] = a.arr[i];
	return *this;
}

double& SortArray::operator [] (const int i)
{
	return arr[i];
}

const double& SortArray::operator [] (const int i) const
{
	return arr[i];
}