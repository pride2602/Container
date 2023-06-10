#include <iostream>
#include "IntArray.h"
#include <exception>
#ifndef INTARRAY_H
#define INTARRAY_H
using namespace std;

IntArray::IntArray(int lenght) : m_lenght{ lenght }
{
	if (lenght < 0)
	{
		throw bad_lenght();
	}
	if (lenght > 0)
		m_data = new int[lenght];
};
IntArray::IntArray(const IntArray& array)
{
	int m_lenght = m_lenght;
	m_data = new int[m_data];
};

IntArray::~IntArray()
{
	delete[] m_data;
};
IntArray::erase()
{
	delete[] m_data;
	m_data = nullptr;
	int m_lenght = 0;
};

int& operator[](int index)
{
	IntArray(index >= 0 && index < m_lenght);

	return m_data[index];
};
const char* IntArray::what() const noexcept
{
	return "Ошибка: выход за границы массива - bad_range";
};
void IntArray::InserBefore(int value, int index)
{
	assert(index >= 0 && index <= m_length);

	int* data{ new int[m_length + 1] };

	for (int before{ 0 }; before < index; ++before)
		data[before] = m_data[before];

	data[index] = value;

	for (int after{ index }; after < m_length; ++after)
		data[after + 1] = m_data[after];

	delete[] m_data;
	m_data = data;
	++m_length;
};
void IntArray::getArraySize() const
{
	cout << int m_lenght << endl;
};

void IntArray::resize(int newLenght)
{
	if (newLenght == m_lenght)
	{
		return;
	}
	if (newLenght <= 0)
	{
	}
		throw bad_length()
	{
		return;
	}
	int* data{ new int[newLenght]

    int(m_lenght > 0)
	{
	int elementsToCopy{ newLenght > m_lenght) ? m_Lenght : newLenght };

	for (int index{ 0 }; index < ElementsToCopy; ++index)

	data[index] = m_data[index]
	}
	delete[] m_data
	m_data = data
	m_lenght = newLenght
};
void IntArray::remove(int index)
{
	if (index < 0 && index > m_lenght)
	{
			throw IntArray();
	}
	int* data = new int[m_lenght - 1];

	for (int before{ 0 }; before < index; ++before)
	{
			data[before] = m_data[before];
	}
	for (int after = { index + 1 }; after < m_lenght; ++after)
	{
			data[after - 1] = m_data[after];
	}

	delete[] m_data;
	m_data = data;
	--m_lenght;
};
ostream& operator<<(ostream& output, const IntArray& array)
{
	for (int i = 0; i < m_lenght; ++i)
	{
		output << m_data[i] << endl;
	}
	return output;
};
void insertAtBeginning(int value) { insertBefore(value, 0); }
void insertAtEnd(int value) { insertBefore(value, m_length); }
int getLength() const { return m_length; }
};
#endif