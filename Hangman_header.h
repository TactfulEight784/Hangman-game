/**
 * @file    Lab7_1.h
 * @author  Dylan Brown
 * @brief   This file is teh ehader for 7.1
 * @version 0.1
 * @date    2022-04-3
 *
 * @copyright Copyright (c) 2022
 *
 */


#pragma once        // make sure the functions are defined
#include <iostream> // imports input and output library

std::string hidden(std::string); // changes the original word to a hidden word with _

void hangman(std::string, std::string, int, char); // plays the hangman game