#define _CRT_SECURE_NO_WARNINGS

#include "Task.h"
#include <iomanip>
#include <ctime>
#include <iostream>
#include <thread>

Task::Task(const std::string& descript, const settings::Status& status)
        : m_descript{ descript }, m_status{ status }, 
          m_createdAt{ std::chrono::system_clock::now() },
          m_updatedAt{}
{
    m_id = ++Task::getID();
}

Task::Task(const std::string& descript)
        : m_descript{ descript }, m_status{ settings::todo },
          m_createdAt{ std::chrono::system_clock::now() },
          m_updatedAt{}
{
    m_id = ++Task::getID();
}

void Task::updateTask(const std::string& name)
{
    m_descript = name;
    using namespace std::this_thread;     // sleep_for, sleep_until
    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
    using std::chrono::system_clock;

    sleep_for(10ns);
    sleep_until(system_clock::now() + 1s);
    m_updatedAt = std::chrono::system_clock::now();
    m_updated = true;
}

void Task::updateStatus(const settings::Status& status)
{
    m_status = status;
    using namespace std::this_thread;  
    using namespace std::chrono_literals;
    using std::chrono::system_clock;

    sleep_for(10ns);
    sleep_until(system_clock::now() + 1s);
    m_updatedAt = std::chrono::system_clock::now();
    m_updated = true;
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

bool Task::getUpdated() const
{
    return m_updated;
}

void Task::printWhenCreated()
{
    const std::time_t t_c{ std::chrono::system_clock::to_time_t(m_createdAt) };
    std::cout << "Created at: " << std::put_time(std::localtime(&t_c), "%F %T.\n") << std::flush;
}

void Task::printWhenUpdated()
{
    const std::time_t t_c{ std::chrono::system_clock::to_time_t(m_updatedAt) };
    std::cout << "Updated at: " << std::put_time(std::localtime(&t_c), "%F %T.\n") << std::flush;
}

Task::~Task()
{
}