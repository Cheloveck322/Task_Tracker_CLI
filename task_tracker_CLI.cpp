#include <iostream>
#include <limits>
#include "Task.h"
#include "task_tracker_CLI.h"
#include "List.h"

static void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main()
{
    List list{};

    list.add("Buy groceries");

    list.list();

    list.update(1, "Buy grocerios and cool dinner");

    list.add("Pay bills");

    list.list();

    list.mark(settings::in_progress, 1);

    list.list();

    list.mark(settings::done, 1);

    list.list(settings::todo);

    list.list();

    return 0;
}