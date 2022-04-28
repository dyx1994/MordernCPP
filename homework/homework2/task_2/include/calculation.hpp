// @file      calculation.hpp
// @author  Yongxu Duan     [duanyongxu1994@gmail.com]
//
// Copyright (c) 2022 Yongxu Duan, all rights reserved
#ifndef CALCULATION_HPP
#define CALCULATION_HPP
#include <iostream>

/**
 * @brief This is an awesome function that will perform the sum of to elements
 *
 * @param num_1 input filename1
 * @param num_2 input filename2
 * @param ext_1 input extension1
 * @param ext_2 input extension2
 * @return mean value if both are .txt, sum value if both are .png, modula value
                      if the first is .txt and the second is .png, returns error in the other conditions

 */

void calculation(int num_1, int num_2, std::string ext_1, std::string ext_2);

#endif  // CALCULATION_HPP