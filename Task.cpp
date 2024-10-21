#include "include/Task.h"
#include "include/task_tracker_CLI.h"
#include <string>

Task::Task(unsigned id, const std::string& descript, const settings::Status& status)
    : m_id{ id }, m_descript{ descript }, m_status{ status }
{
}

