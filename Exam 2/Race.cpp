//
//  Race.cpp
//  Exam 2
//
//  Created by AJ Cendejas on 6/17/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//
// I affirm that all code given below was written solely by me,
// AJ Cendejas, and that any help I received adhered to the
// rules stated for this exam.

#include "Race.h"
#include <fstream>
using namespace std;

Race::Race(string n, string filename)
{
    name = n;
    string fname, lname;
    int p;
    fstream race(filename);
    if(!race.fail())
    {
        while(!race.eof())
        {
            race >> fname;
            race >> lname;
            race >> p;
            runners.push_back(Runner(fname, lname, p));
        }
        race.close();
    }
}

string Race::getName()
{
    return name;
}

int Race::race_size()
{
    return runners.size();
}

void Race::sort_pace()
{
    for(int i = 0; i < runners.size(); i++)
    {
        for (int j = runners.size()-1; j > i; j--)
        {
            if(runners[j-1].getPace() > runners[j].getPace())
            {
                Runner tmp = runners[j-1];
                runners[j-1] = runners[j];
                runners[j] = tmp;
            }
        }
    }
}

void Race::assign_colors()
{
    ofstream white("/Users/ajcendejas15/Documents/CS 172/Exam 2/Exam 2/white.txt");
    ofstream yellow("/Users/ajcendejas15/Documents/CS 172/Exam 2/Exam 2/yellow.txt");
    ofstream green("/Users/ajcendejas15/Documents/CS 172/Exam 2/Exam 2/green.txt");
    ofstream orange("/Users/ajcendejas15/Documents/CS 172/Exam 2/Exam 2/orange.txt");
    ofstream blue("/Users/ajcendejas15/Documents/CS 172/Exam 2/Exam 2/blue.txt");
    ofstream lilac("/Users/ajcendejas15/Documents/CS 172/Exam 2/Exam 2/lilac.txt");
    ofstream red("/Users/ajcendejas15/Documents/CS 172/Exam 2/Exam 2/red.txt");
    for (int i = 0; i < runners.size(); i++)
    {
        if(runners[i].getPace() < 361)
        {
            white << runners[i].getFirstName() << " " << runners[i].getLastName() << " "
            << runners[i].getPace() << endl;
        }
        else if(runners[i].getPace() < 421)
        {
            yellow << runners[i].getFirstName() << " " << runners[i].getLastName() << " "
            << runners[i].getPace() << endl;
        }
        else if(runners[i].getPace() < 481)
        {
            green << runners[i].getFirstName() << " " << runners[i].getLastName() << " "
            << runners[i].getPace() << endl;
        }
        else if(runners[i].getPace() < 541)
        {
            orange << runners[i].getFirstName() << " " << runners[i].getLastName() << " "
            << runners[i].getPace() << endl;
        }
        else if(runners[i].getPace() < 601)
        {
            blue << runners[i].getFirstName() << " " << runners[i].getLastName() << " "
            << runners[i].getPace() << endl;
        }
        else if(runners[i].getPace() < 721)
        {
            lilac << runners[i].getFirstName() << " " << runners[i].getLastName() << " "
            << runners[i].getPace() << endl;
        }
        else
        {
            red << runners[i].getFirstName() << " " << runners[i].getLastName() << " "
            << runners[i].getPace() << endl;
        }
    }
}