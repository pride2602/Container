#pragma once
#include <iostream>
#ifndef INTARRAY_H
#define INTARRAY_H
#include <assert.h>

using namespace std;

class IntArray : public exception
{
private:

	int* m_data;
	
public:
    int m_length;
	IntArray() = default;
	IntArray(int lenght);
	IntArray(const IntArray& array);
	~IntArray();

	void erase();
	int& operator[](int index);
	void getLength() const;
    void resize(int index, int data);
	void Insert(int value, int index);
	void InsertAtBegging(int value) { Insert(value, 0); }
	void InsertAtEnd(int value);
	void Remove(int new_size);
};
#endif