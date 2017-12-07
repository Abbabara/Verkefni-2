//
//  invalidYearException.cpp
//  verkefni22
//
//  Created by Arnbjörg Frímannsdóttir on 12/7/17.
//  Copyright © 2017 Arnbjörg Frímannsdóttir. All rights reserved.
//

#include "invalidYearException.h"

invalidYearException::invalidYearException(string message) {
    this->message = message;
};

string invalidYearException::getMessage() {
    return this->message;
}
