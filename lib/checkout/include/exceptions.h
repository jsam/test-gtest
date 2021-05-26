//
// Created by sam on 26.05.21.
//

#ifndef GOOGLE_TEST_EXCEPTIONS_H
#define GOOGLE_TEST_EXCEPTIONS_H

#include <exception>
#include <string>


class NotFound : public std::exception {

public:
    NotFound() {}
    virtual ~NotFound() noexcept {}

    const std::string what() {
        return "element not found";
    }

};

#endif //GOOGLE_TEST_EXCEPTIONS_H
