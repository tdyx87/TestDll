#ifndef TESTDLL_H
#define TESTDLL_H

#include "testdll_global.h"


typedef struct
{

    int b;
    long c;

}ParamASt;

typedef struct
{
    char a[256];
    char b[256];
    char c[256];
    char d[256];
    int e;
}ParamBSt;


extern "C" __declspec(dllexport) int __stdcall    testint(int a, int  b);
extern "C" __declspec(dllexport) int __stdcall    testAdd(ParamASt  &a, ParamBSt   &b);
#endif // TESTDLL_H
