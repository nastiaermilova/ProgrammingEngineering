#pragma once

#include <iostream>
using namespace std;

// ��������
class worker
{
	// ��� ���������
	string _name;

	// �������� ���������
	double _salary;

	// ��������� ���������
	string _job;

public:
	// �����������
	worker(string n, double sal, string j) : _name(n), _job(j)
	{
		salary(sal);
	}

	// ���������� ��� ���������
	string name() const;

	// ���������� �������� ���������
	double salary() const;

	// ���������� ��������� ���������
	string job() const;

	// ������������� ����� ��� ���������
	void name(string);

	// ������������� ����� �������� ���������
	void salary(double);

	// ������������� ����� ��������� ���������
	void job(string newJob);
};

// ������������� �������� ������ ���������� � ��������� � �����
inline ostream& operator<<(ostream& os, const worker& w)
{
	return os << "���: " << w.name() << "\n��������: " << w.salary() << "\n���������: " << w.job();
}