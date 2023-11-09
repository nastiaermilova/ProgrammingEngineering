#pragma once

#include "worker.h"
#include <vector>

// ����� ��������
class department
{
	// �������� ������
	string _name;

	// ��������� ��������
	vector<worker> _workers;

public:
	// �����������
	department(string n) : _name(n) {}

	// ���������� �������� ������
	string name() const;
	
	// ������������� ����� �������� ������
	void name(string);

	// ������������� �������� += ��� ���������� ��������� � �����
	department& operator+=(const worker&);

	// ���������� ���������� ���������� � ������
	int get_number_of_workers() const;

	// ���������� ������� �������� ����������� ������� ������
	double get_average_salary();

	// ������������� �������� ������ �������� �������� � �����
	friend ostream& operator<<(ostream&, const department&);
};