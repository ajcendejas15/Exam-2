//
//  main.cpp
//  Exam 2
//  
//  Created by AJ Cendejas on 6/17/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//
// I affirm that all code given below was written solely by me,
// AJ Cendejas, and that any help I received adhered to the
// rules stated for this exam.

#include <iostream>
#include "Runner.h"
#include "Race.h"

int main()
{
    Race r1("Bloomsday", "/Users/ajcendejas15/Downloads/registrants.txt");
    r1.sort_pace();
    r1.assign_colors();
    cout << r1.getName() << " runners assigned to colors in text files according to pace.\n";
}


