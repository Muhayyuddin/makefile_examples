#include "logger.h"
#include "pthread_example.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    logger log;
    log.message();

    parallel_messages pm;
    pm.ThreadHandler();

    return 0;
}

