/**
 * @file    Hangman_functions.cpp
 * @author  Dylan Brown
 * @brief   This file has the functions for hangman driver
 * @version 0.1
 * @date    2022-04-3
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Hangman_header.h"

std::string hidden(std::string originalWord){ // gets the original word and changes it
    std::string hiddenWord; // declaring the original word
    for(int i = 0; i<originalWord.length();i++){ // changes the original word into underscores 
        originalWord[i] = '_';
        hiddenWord = originalWord; // sets the underscore word to hidden word
    }
    return hiddenWord; // returns the hidden word to be used
}
void hangman(std::string originalWord, std::string hiddenWord, int guesses, char guess){
    int x; // declaring x used used to make sure you cant gain lives
    for(guesses = 6;guesses > 0;guesses--){ // 6 wrong guesses to get the word 
        x = 0; // sets x to 0 everytime
        std::cout << hiddenWord << std::endl; // displays hidden word
        std::cout << "Guess remaining: " << guesses << std::endl; // prints to terminal
        std::cout << "Enter character to guess lower case only: "; // asking for and receiving there guess
        std::cin >> guess;
        for(int i = 0; i<originalWord.length(); i++){ // checking if the letter they guessed is part of the word
            if (guess == originalWord[i]){
                hiddenWord[i] = guess; // if it is the underscore become that letter
                if(x==0){
                    guesses++; // adds one to guess so when it gets taken away the guess remain the same if the letter is gotten
                    ++x; // if multiple letters are guessed at once say z in jazz it would glitch and give a life this makes it so it does not
                }
            }
        }
        if(hiddenWord == originalWord){ // if they get the word it runs this
            std::cout << originalWord << std::endl; // tells the word and that they won
            std::cout << "You won ";
            break; // breaks the loop so that is does not keep running
        }
        
    }
    if(guesses == 0){ // if they lose all of there guesses they lose 
        std::cout << "You lose";
    }
}
