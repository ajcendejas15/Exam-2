//
//  Runner.cpp
//  Exam 2
//
//  Created by AJ Cendejas on 6/17/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//
// I affirm that all code given below was written solely by me,
// AJ Cendejas, and that any help I received adhered to the
// rules stated for this exam.

#include "Runner.h"

string Runner::getFirstName()
{
    return first_name;
}

string Runner::getLastName()
{
    return last_name;
}

int Runner::getPace()
{
    return pace;
}

Runner::Runner(string fname, string lname, int p)
{
    first_name = fname;
    last_name = lname;
    pace = p;
}