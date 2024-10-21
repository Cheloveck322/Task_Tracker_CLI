#ifndef TASK_TRACKER_CLI_H
#define TASK_TRACKER_CLI_H

#include <array>
#include <string_view>

namespace settings
{
    enum Status
    {
        todo,
        in_progress,
        done,
        all_status
    };

    constexpr std::array<std::string_view, all_status> status_name{ "todo", "in-progress", "done" };

}

#endif
