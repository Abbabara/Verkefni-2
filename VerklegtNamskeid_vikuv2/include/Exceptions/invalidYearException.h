//
//  invalidYearException.hpp
//  verkefni22
//
//  Created by Arnbjörg Frímannsdóttir on 12/7/17.
//  Copyright © 2017 Arnbjörg Frímannsdóttir. All rights reserved.
//

#ifndef invalidYearException_h
#define invalidYearException_h

#include <string>
using namespace std;

class invalidYearException {
public:
    invalidYearException(string message);
    string getMessage();
private:
    string message;
};

#endif /* invalidYearException_hpp */
