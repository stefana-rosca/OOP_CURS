#include "shape.h"

//H3 1)
shape::shape(string name, double flache)
{
	this->name = name;
	this->flache = flache;
}
shape::shape()
{
}

string shape::get_name()const
{
	return name;
}
double shape::get_fl()const
{
	return flache;
}
void shape::set_name(string name)
{
	this->name = name;
}
void shape::set_fl(double fl)
{
	this->flache = fl;
}


shape::~shape()
{
}