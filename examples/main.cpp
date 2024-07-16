#include <iostream>
#include "planners/SST_CPU.h"
#include "config/config.h"

int main(void)
{
    // float h_initial[SAMPLE_DIM] = {.5, .5, 0.0, 0.0, 0.0, 0.0, 0.0}, h_goal[SAMPLE_DIM] = {2, 18, 0.0, 0.0, 0.0, 0.0, 0.0};
    float h_initial[SAMPLE_DIM] = {0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
          h_goal[SAMPLE_DIM]    = {2, 19, 2, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

    return 0;
}