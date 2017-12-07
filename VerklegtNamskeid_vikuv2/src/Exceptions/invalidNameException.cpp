#include "invalidNameException.h"

invalidNameException::invalidNameException(string message) {
    this->message = message;
};

string invalidNameException::getMessage() {
    return this->message;
}

