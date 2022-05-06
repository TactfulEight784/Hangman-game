/**
 * @file    Hangman.cpp
 * @author  Dylan Brown
 * @brief   This file is the driver for hangman
 * @version 0.1
 * @date    2022-04-3
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Hangman_header.h" // including the header file with the functions

using namespace std;

int main(){
    string originalWord = "jazz"; // original word harcode
    int guesses = 6; // setting how many guesses they get
    char guess; // delcaring guess as a char
    string hiddenWord = hidden(originalWord); // calling the function with these variabels and setting it = to hidden word so we have it
    hangman(originalWord, hiddenWord, guesses, guess); // calling the actual game function with these variables
    
    return 0;
}
