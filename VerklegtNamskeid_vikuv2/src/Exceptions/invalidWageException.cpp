//
//  invalidWageException.cpp
//  verkefni22
//
//  Created by Arnbjörg Frímannsdóttir on 12/7/17.
//  Copyright © 2017 Arnbjörg Frímannsdóttir. All rights reserved.
//

#include "invalidWageException.h"

invalidWageException::invalidWageException(string message) {
    this->message = message;
};

string invalidWageException::getMessage() {
    return this->message;
}
