//
//  invalidSsnException.hpp
//  verkefni 2
//
//  Created by Arnbjörg Frímannsdóttir on 12/7/17.
//  Copyright © 2017 Arnbjörg Frímannsdóttir. All rights reserved.
//

#ifndef invalidSsnException_h
#define invalidSsnException_h
#include <string>
using namespace std;

class invalidSsnException {
public:
    invalidSsnException(string message);
    string getMessage();
private:
    string message;
};

#endif /* invalidSsnException_h */
