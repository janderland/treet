#pragma once

#include <exception>
#include <string>


namespace depengine {
using std::exception;
using std::string;


class DepException: public exception {
private:
    const string _message;

public:
    DepException(const string& message):
        _message(message) { }

    virtual const char* what() const noexcept {
        return _message.c_str();
    }
};


} // namespace depengine