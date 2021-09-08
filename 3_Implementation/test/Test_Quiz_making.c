#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(show_record);
  RUN_TEST(reset_score);
  RUN_TEST(help_);
  RUN_TEST(_edit_score(float , char []));
  return UNITY_END();
}