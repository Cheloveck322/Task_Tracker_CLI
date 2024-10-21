#include "List.h"
#include "task_tracker_CLI.h"
#include <string>
#include <iostream>

void List::add(const std::string& name)
{
    m_list[Task::getID()] = Task{ name };
}

void List::update(unsigned id, const std::string& name)
{
    m_list[id].updateTask(name);
}

void List::remove(unsigned id)
{
    m_list.erase(id);
}

void List::mark(const settings::Status& status, unsigned id)
{
    m_list[id].updateStatus(status);
}

void List::list()
{
    for (auto& element : m_list)
    {
        std::cout << "ID: " << element.first << '\n';
        std::cout << "task: " << element.second.getDescript() << '\n';
        std::cout << "status: " << settings::status_name[element.second.getStatus()] << "\n\n";
    }
}

void List::list(const settings::Status& status)
{
    for (auto& element : m_list)
    {
        if (element.second.getStatus() == status)
        {
            std::cout << "ID: " << element.first << '\n';
            std::cout << "task: " << element.second.getDescript() << '\n';
            std::cout << "status: " << settings::status_name[element.second.getStatus()] << "\n\n";
        }
    }
}