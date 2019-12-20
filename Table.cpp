#include <iomanip>
#include <iostream>
#include <ctime>
#include <cmath>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

        void a() {
          char why[20];
          int evaltype;
          char s[10] = "Seconds";
          char m[10] = "Minutes";
          char h[10] = "Hours";
          char d[10] = "Days";
          char w[10] = "Weeks";

          std::cout << " *!ONE WORD PLS!* What are you using timer for? " << std::endl;
          std::cin >> why;
          system("clear");
          std::cout << "What unit of time? :" << std::endl;
          std::cout << "Seconds , Minutes, Hours, Days, Weeks?" << std::endl;
          std::cout << "Enter 1 for Seconds , 2 for Minutes, 3 for Hours, 4 for Days, 5 for Weeks!" << std::endl;
          std::cin >> evaltype;
          system("clear");
                  if (evaltype == 1) {
                    int howlong;
                    std::cout << "How many of given type?" << std::endl;
                    std::cin >> howlong;
                    system("clear");
                    char sec[8] = "Seconds";
                    std::cout << "|"  << "For:" << std::setw(3) <<"|" << why << std::setw(5) << "   |   " << std::setw(5) << sec << "  "  << howlong <<   std::setw(5) <<"   |"<< std::endl;
                    std::cin.get();
                    clock_t startTime = clock(); //Start timer based on seconds
                    double secondsPassed;
                    double secondsToDelay = howlong;
                    std::cout << s << " to delay: " << secondsToDelay << std::endl;
                    bool flag = true;
                    while(flag)
                      {
                        secondsPassed = (clock() - startTime) / CLOCKS_PER_SEC;
                        if(secondsPassed >= secondsToDelay)
                        {
                          std::cout << secondsPassed << " seconds have passed" << std::endl;
                          flag = false;
                        }
                      }
                    }
                  else if (evaltype == 2){
                    int howlong;
                    std::cout << "How many of given type?";
                    std::cin >> howlong;
                    system("clear");
                    char min[8] = "Minutes";
                    std::cout << "|"  << "For:" << std::setw(3) << "|" << why << std::setw(5)<<"   |   " << std::setw(5) << min << "  " << howlong <<  std::setw(5)<<"   |"<< std::endl;
                    std::cin.get();
                    clock_t startTime = clock(); //Start timer based on seconds
                    double secondsPassed;
                    howlong = howlong*60;
                    int actualM = howlong/60;
                    double secondsToDelay = howlong;
                    std::cout << m << " to delay: " << actualM << std::endl;
                    bool flag = true;
                    while(flag)
                     {
                      secondsPassed = (clock() - startTime) / CLOCKS_PER_SEC;
                      if(secondsPassed >= secondsToDelay)
                       {
                        std::cout << actualM << " Minutes have passed" << std::endl;
                        flag = false;
                         }
                       }
                  }
                else if (evaltype == 3){
                  int howlong;
                  std::cout << "How many of given type?";
                  std::cin >> howlong;
                  system("clear");
                  char hou[6] = "Hours";
                  std::cout << "|"  << "For:" << std::setw(3) << "|" << why << std::setw(5)<<"   |   " << std::setw(5)<< hou << "  " << howlong <<  std::setw(5)<<"   |"<< std::endl;
                  std::cin.get();
                }
                else if (evaltype == 4){
                    int howlong;
                    std::cout << "How many of given type?";
                    std::cin >> howlong;
                    system("clear");
                     char days[5] = "Days";
                     std::cout << "|"  << "For:" << std::setw(20) << "|" << why << std::setw(20)<<"   |   " << std::setw(5)<< days << "  " << howlong <<  std::setw(5)<<"   |"<< std::endl;
                     std::cin.get();
                          }
                   else if (evaltype == 5){
                     int howlong;
                     system("clear");
                     std::cout << "How many of given type?";
                     std::cin >> howlong;
                      char wee[6] = "Weeks";
                      std::cout << "|"  << "For:" << std::setw(20) << "|" << why << std::setw(20)<<"   |   " << std::setw(5) << wee << "  " << howlong <<  std::setw(5)<<"   |"<< std::endl;
                       std::cin.get();
                     }
                   }

int main()  {
a();
                return 0;
            }
