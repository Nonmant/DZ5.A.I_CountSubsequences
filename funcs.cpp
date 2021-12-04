//https://contest.yandex.ru/contest/27794/problems/I/

#include "funcs.h"
#include <bits/stdc++.h>

void parseFile(std::istream & input, std::ostream & output){

    int k;
    input >> k;
    std::string line;
    input >> line;

    unsigned long usages = 0;
    //One letter +1 variant, 2 letters +2 variants:
    //abca   +1 : abca
    //abcab  +2 : abcab, bcab
    //abcabc +3 : abcabc, bcabc, cabc
    unsigned int consecutiveEqualLetters = 0;
    for(auto left = line.begin(), right = line.begin()+k;
        right != line.end();
        ++left, ++right){
        if(*left == *right){
            ++consecutiveEqualLetters;
            usages+=consecutiveEqualLetters;
        } else {
            consecutiveEqualLetters = 0;
        }
    }

    output << usages;
}
