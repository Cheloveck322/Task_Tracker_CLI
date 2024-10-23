#ifndef USER_H
#define USER_H

#include <string>
#include "task_tracker_CLI.h"

class User
{
public:
    User() = default;

    void chooseFunction();

    void chooseBody();

    std::string& getFunction();

    unsigned getIDTask();

    std::string& getBody();

private:
    std::string m_function{};
    unsigned m_IDTask{};
    std::string m_functionBody{};
};

#endif