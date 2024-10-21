#ifndef TASK_H
#define TASK_H

#include "include/task_tracker_CLI.h"
#include <string>

class Task
{
public:
    Task() = default;

    Task(unsigned id, const std::string& descript, const settings::Status& status);


private:
    unsigned m_id{};
    std::string m_descript{};
    settings::Status m_status{};
};

#endif
