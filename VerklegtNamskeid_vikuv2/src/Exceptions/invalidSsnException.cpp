//
//  invalidSsnException.cpp
//  verkefni 2
//
//  Created by Arnbjörg Frímannsdóttir on 12/7/17.
//  Copyright © 2017 Arnbjörg Frímannsdóttir. All rights reserved.
//

#include "invalidSsnException.h"

invalidSsnException::invalidSsnException(string message) {
    this->message = message;
};

string invalidSsnException::getMessage() {
    return this->message;
}
