#include "pch.h"
#include "CppCalc.h"

#include "Wrapper.h"

int CppCalc::Calc()
{
	return (rand() % 100) + 1;
}

int CppCalc::CalcWrap()
{
	return Wrapper::calc();
}
