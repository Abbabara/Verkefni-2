//
//  invalidWageException.hpp
//  verkefni22
//
//  Created by Arnbjörg Frímannsdóttir on 12/7/17.
//  Copyright © 2017 Arnbjörg Frímannsdóttir. All rights reserved.
//

#ifndef invalidWageException_h
#define invalidWageException_h

#include <string>
using namespace std;

class invalidWageException {
public:
    invalidWageException(string message);
    string getMessage();
private:
    string message;
};

#endif /* invalidWageException_hpp */
