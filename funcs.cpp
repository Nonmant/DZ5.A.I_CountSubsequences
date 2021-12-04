//https://contest.yandex.ru/contest/27794/problems/I/

#include "funcs.h"
#include <bits/stdc++.h>

void parseFile(std::istream & input, std::ostream & output){

    int k;
    input >> k;
    std::string line;
    input >> line;

    unsigned long usages = 0;

    for(auto left = line.begin(), right = line.begin()+k;
        right != line.end();
        ++left, ++right){
        unsigned int i = 0;
        while (*(left+i) == *(right+i)){
            ++i;
        }
        usages+=i;
    }

    output << usages;
}
