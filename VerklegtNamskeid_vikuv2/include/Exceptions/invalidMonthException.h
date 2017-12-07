//
//  invalidMonthException.hpp
//  verkefni22
//
//  Created by Arnbjörg Frímannsdóttir on 12/7/17.
//  Copyright © 2017 Arnbjörg Frímannsdóttir. All rights reserved.
//

#ifndef invalidMonthException_h
#define invalidMonthException_h

#include <string>
using namespace std;

class invalidMonthException {
public:
    invalidMonthException(string message);
    string getMessage();
private:
    string message;
};

#endif /* invalidMonthException_hpp */
