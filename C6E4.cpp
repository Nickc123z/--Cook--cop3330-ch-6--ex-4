/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nick Cook
 */

#include<vector>
#include <iostream>
using namespace std;



class Names {
    public:
        string name;
        int value;
        Names(string n, int v)
            :name(n), value(v) { }
};

int main()
{
    
    vector<Names> record;

    cout << "Enter name";
    string name = "";
    int val = -1;
    int i = 0;


    vector<Names> vec;
    while (cin>>name>>val) {
        for (i = 0; i<vec.size(); ++i)
            if (name == vec[i].name)
        vec.push_back(Names(name,val));
    }

    for (i = 0; i<vec.size(); ++i) {
        cout << "(" << vec[i].name << ',' << vec[i].value << ")\n";
    }
}