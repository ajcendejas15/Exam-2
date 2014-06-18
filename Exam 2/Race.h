//
//  Race.h
//  Exam 2
//
//  Created by AJ Cendejas on 6/17/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//
// I affirm that all code given below was written solely by me,
// AJ Cendejas, and that any help I received adhered to the
// rules stated for this exam.

#ifndef __Exam_2__Race__
#define __Exam_2__Race__

#include <iostream>
#include <vector>
#include "Runner.h"

using namespace std;

class Race
{
private:
    string name;
    vector<Runner> runners;
public:
    Race(string, string);
    string getName();
    int race_size();
    void sort_pace();
    void assign_colors();
};

#endif /* defined(__Exam_2__Race__) */
