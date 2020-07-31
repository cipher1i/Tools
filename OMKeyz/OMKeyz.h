#ifndef OMKEYZ_H
#define OMKEYZ_H
//#pragma once

#ifdef OMKEYZ_LIB
#define OMKAPI __declspec(dllexport)
#else
#define OMKAPI __declspec(dllimport)
#endif

#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

class OMKAPI OMKeyz
{
private:
	const char* file;
	short save(int key);
public:
	OMKeyz() { file = "log.txt"; }
	~OMKeyz() {}
	void logger();
};

#endif