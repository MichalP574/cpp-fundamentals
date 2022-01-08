#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

using shared_pointers = std::vector<std::shared_ptr<int>>;

shared_pointers generate(const int &);
void print(const shared_pointers);
void add10(const shared_pointers);
void sub10(int* const);
void sub10(const shared_pointers);
