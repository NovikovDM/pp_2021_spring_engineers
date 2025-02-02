// Copyright 2021 Rachin Igor
#ifndef MODULES_TASK_3_RACHIN_I_LIN_HIST_STRET_TBB_LIN_HIST_STRET_H_
#define MODULES_TASK_3_RACHIN_I_LIN_HIST_STRET_TBB_LIN_HIST_STRET_H_

#include <vector>

std::vector<int> getRandomMatrix(int rows, int clmns);
std::vector<int> histogramStretching(const std::vector<int>& mx, int rows, int clmns);
std::vector<int> histogramStretchingTbb(const std::vector<int>& mx, int rows, int clmns);

#endif  // MODULES_TASK_3_RACHIN_I_LIN_HIST_STRET_TBB_LIN_HIST_STRET_H_
