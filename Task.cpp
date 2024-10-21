#include "Task.h"
#include "task_tracker_CLI.h"
#include <string>

Task::Task(const std::string& descript, const settings::Status& status)
    : m_descript{ descript }, m_status{ status }
{
    m_id = ++Task::getID();
}

Task::Task(const std::string& descript)
    : m_descript{ descript }, m_status{ settings::todo }
{
    m_id = ++Task::getID();
}

void Task::updateTask(const std::string& name)
{
    m_descript = name;
}

void Task::updateStatus(const settings::Status& status)
{
    m_status = status;
}

unsigned& Task::getID()
{
    return m_id;
}

std::string& Task::getDescript() 
{
    return m_descript;
}

settings::Status& Task::getStatus()
{
    return m_status;
}

Task::~Task()
{
}