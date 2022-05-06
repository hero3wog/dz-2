#pragma once
#ifndef Header
#define Header
#include <iostream>
#include <cstdlib>

using namespace std;

void invers(int* ar, int size);
void vozr(int* ar, int size);
void ubiv(int* ar, int size);
void proverka(int* ar, int size);
void funk(int* ar, int size, void(*bufFunc)(int*, int));

#endif Header