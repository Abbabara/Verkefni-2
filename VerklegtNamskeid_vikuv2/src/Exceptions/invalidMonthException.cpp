//
//  invalidMonthException.cpp
//  verkefni22
//
//  Created by Arnbjörg Frímannsdóttir on 12/7/17.
//  Copyright © 2017 Arnbjörg Frímannsdóttir. All rights reserved.
//

#include "invalidMonthException.h"

invalidMonthException::invalidMonthException(string message) {
    this->message = message;
};

string invalidMonthException::getMessage() {
    return this->message;
}
