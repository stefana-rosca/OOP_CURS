#pragma once
#include <iostream>
#include <string>
//H3
using namespace std;
class shape
{
public:
	shape(string name, double flache);
	shape();

	string get_name()const;
	void set_name(string name);
	double get_fl()const;
	void set_fl(double fl);
	~shape();

private:
	string name;
	double flache;
};

//a)
class mul
{
private:
	double x;

public:
	mul(double elem) : x(elem) {}
	double operator () (shape* sh) const {
		sh->set_fl(sh->get_fl() * x);
		return sh->get_fl();
	}

};

//b)
class divide
{
private:
	double y;

public:
	divide(double elem) : y(elem) {}
	double operator () (shape* sh) const {
		sh->set_fl(sh->get_fl() / y);
		return sh->get_fl();
	}

};

//c)
class __str__
{
public:
	void operator() (shape* sh) const {
		cout << sh->get_name() << " " << sh->get_fl() << " !\n";
	}
};