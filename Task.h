#ifndef TASK_H
#define TASK_H

#include "task_tracker_CLI.h"
#include <string>
#include <chrono>

class Task
{
public:
    Task() = default;

    Task(const std::string& descript);

    Task(const std::string& descript, const settings::Status& status);

    void updateTask(const std::string& name);

    void updateStatus(const settings::Status& status);

    static unsigned& getID();

    std::string& getDescript();

    settings::Status& getStatus();

    bool getUpdated() const;

    void printWhenCreated();

    void printWhenUpdated();

    ~Task();

private:
    static inline unsigned m_id{ Task::getID() };
    std::string m_descript{};
    settings::Status m_status{};
    std::chrono::time_point<std::chrono::system_clock> m_createdAt{};
    std::chrono::time_point<std::chrono::system_clock> m_updatedAt{};
    bool m_updated{ false };
};

#endif
