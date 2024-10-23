#include "User.h"
#include <iostream>
#include <limits>

static void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void User::chooseFunction()
{

}

void User::chooseBody()
{

}

std::string& User::getFunction()
{
    return m_function;
}

unsigned User::getIDTask()
{
    return m_IDTask;
}

std::string& User::getBody()
{
    return m_functionBody;
}