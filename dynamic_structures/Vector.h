#pragma once
#include <iostream>
using namespace std;

typedef unsigned int uint;

template <typename T>
class Vector
{
private:
	T* data;
	uint count;
public:

	Vector() : data(0), count(0) {}
	explicit Vector(uint initCount); // explicit - переопределять конструктор нельзя, для создания неконвертирующегося конструктора
	Vector(const Vector& v); // конструктор копирования
	Vector(T array[], uint arraySize);

	~Vector() { Clear(); }


	void Clear();


	Vector& operator=(const Vector& v); // оператор присваивания


	uint GetCount() const { return count; }
	bool IsEmpty() const { return count == 0; }
	bool operator!() const { return IsEmpty(); }

	T& operator[](uint index); // перегруженный оператор индекса массива


	void Add(const T& item);
	void Insert(uint index, const T& item);
	void Remove(uint index);
};


template <typename T>
Vector<T>::Vector(uint initCount)
{
	count = initCount;
	data = new T[count];
	for (uint i = 0; i < count; i++)
	{
		data[i] = 0;
	}
}

template <typename T>
Vector<T>::Vector(const Vector<T>& v)
{
	count = v.count;
	data = new T[count];
	for (uint i = 0; i < count; i++)
	{
		data[i] = v.data[i];
	}
}

template <typename T>
Vector<T>::Vector(T array[], uint arraySize)
{
	count = arraySize;
	data = new T[count];
	for (uint i = 0; i < count; i++)
	{
		data[i] = array[i];
	}
}

template <typename T>
void Vector<T>::Clear()
{
	delete[] data;
	data = NULL;
}

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& v)
{
	if (&v == this)
		return *this;

	count = v.count;
	data = new T[count];
	for (uint i = 0; i < count; i++)
	{
		data[i] = v.data[i];
	}

	return *this;
}

template <typename T>
T& Vector<T>::operator[](uint index)
{
	if (index >= 0 && index < count)
		return data[index];

	cout << "ERROR: index out of range!\n";
	return data[0];
}

template <typename T>
void Vector<T>::Add(const T& item)
{
	T* tmp = new T[count + 1];

	for (uint i = 0; i < count; i++)
	{
		tmp[i] = data[i];
	}
	tmp[count] = item;
	count++;
	delete[] data;
	data = tmp;
}

template <typename T>
void Vector<T>::Insert(uint index, const T& item)
{
	T* tmp = new T[count + 1];

	for (uint i = 0; i < count + 1; i++)
	{
		if (i < index)
		{
			tmp[i] = data[i];
		}
		else if (i == index)
		{
			tmp[i] = item;
		}
		else
		{
			tmp[i] = data[i - 1];
		}
	}

	count++;
	delete[] data;
	data = tmp;
}

template <typename T>
void Vector<T>::Remove(uint index)
{
	T* tmp = new T[count - 1];

	for (uint i = 0; i < count - 1; i++)
	{
		if (i < index)
		{
			tmp[i] = data[i];
		}
		else if (i >= index)
		{
			tmp[i] = data[i + 1];
		}
	}

	count--;
	delete[] data;
	data = tmp;
}
