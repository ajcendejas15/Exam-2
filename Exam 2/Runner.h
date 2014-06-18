//
//  Runner.h
//  Exam 2
//
//  Created by AJ Cendejas on 6/17/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//
// I affirm that all code given below was written solely by me,
// AJ Cendejas, and that any help I received adhered to the
// rules stated for this exam.

#ifndef __Exam_2__Runner__
#define __Exam_2__Runner__

#include <iostream>

using namespace std;

class Runner
{
private:
    string first_name, last_name;
    int pace;
public:
    string getFirstName();
    string getLastName();
    int getPace();
    
    Runner(string, string, int);
};

#endif /* defined(__Exam_2__Runner__) */
