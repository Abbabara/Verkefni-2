#ifndef INVALIDNAMEEXCEPTION_H
#define INVALIDNAMEEXCEPTION_H


//
//  invalidNameException.hpp
//  verkefni2
//
//  Created by Arnbj�rg Fr�mannsd�ttir on 12/7/17.
//  Copyright � 2017 Arnbj�rg Fr�mannsd�ttir. All rights reserved.
//

#include <string>
using namespace std;

class invalidNameException {
public:
    invalidNameException(string message);
    string getMessage();
private:
    string message;
};

#endif /* invalidNameException_hpp */


