/**
 * @file Quizmaking.h
 * @author ruchithasevakula (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#indef QUIZMAKING_H
#define QUIZMAKING_H

#include "Quiz.h"
/**
 * @brief 
 * 
 */
int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     /**
      * @brief 
      * 
      */
void show_record();
/**
 * @brief 
 * 
 */
void reset_score();
/**
 * @brief 
 * 
 */
void help();
/**
 * @brief 
 * 
 */
void edit_score(float , char []);
#endif