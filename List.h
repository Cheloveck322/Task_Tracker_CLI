#ifndef LIST_H
#define LIST_H

#include <map>
#include "Task.h"
#include "task_tracker_CLI.h"

class List
{
public:
    List() = default;

    void add(const std::string& name);

    void update(unsigned id, const std::string& name);

    void remove(unsigned id);

    void mark(const settings::Status& status, unsigned id);

    void list();

    void list(const settings::Status& status);

private:
    std::map<unsigned, Task> m_list{};
};

#endif