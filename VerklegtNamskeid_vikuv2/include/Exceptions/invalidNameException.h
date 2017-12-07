#ifndef INVALIDNAMEEXCEPTION_H
#define INVALIDNAMEEXCEPTION_H


//
//  invalidNameException.hpp
//  verkefni2
//
//  Created by Arnbjšrg Fr’mannsd—ttir on 12/7/17.
//  Copyright © 2017 Arnbjšrg Fr’mannsd—ttir. All rights reserved.
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


