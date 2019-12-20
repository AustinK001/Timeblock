#include <iomanip>
#include <iostream>
#include <ctime>
#include <cmath>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include <string>
  void a(){




  }
        void b() {
          system("clear");
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
                      std::string file = "/Users/admin/Desktop/TimeBlockingAlarm/Timeblock/AlarmSounds/Sirens.wav";
                      std::string command = "afplay " + file;
                      system(command.c_str());
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
                       std::string file = "/Users/admin/Desktop/TimeBlockingAlarm/Timeblock/AlarmSounds/Sirens.wav";
                       std::string command = "afplay " + file;
                       system(command.c_str());
                  }
                else if (evaltype == 3){
                  int howlong;
                  std::cout << "How many of given type?";
                  std::cin >> howlong;
                  system("clear");
                  char hou[6] = "Hours";
                  std::cout << "|"  << "For:" << std::setw(3) << "|" << why << std::setw(5)<<"   |   " << std::setw(5)<< hou << "  " << howlong <<  std::setw(5)<<"   |"<< std::endl;
                  std::cin.get();
                  clock_t startTime = clock(); //Start timer based on seconds
                  double secondsPassed;
                  howlong = howlong*3600;
                  int actualM = howlong/3600;
                  double secondsToDelay = howlong;
                  std::cout << h << " to delay: " << actualM << std::endl;
                  bool flag = true;
                  while(flag)
                   {
                    secondsPassed = (clock() - startTime) / CLOCKS_PER_SEC;
                    if(secondsPassed >= secondsToDelay)
                     {
                      std::cout << actualM << " Hours have passed" << std::endl;
                      flag = false;
                       }
                     }
                     std::string file = "/Users/admin/Desktop/TimeBlockingAlarm/Timeblock/AlarmSounds/Sirens.wav";
                     std::string command = "afplay " + file;
                     system(command.c_str());
                }
                else if (evaltype == 4){
                    int howlong;
                    std::cout << "How many of given type?";
                    std::cin >> howlong;
                    system("clear");
                     char days[5] = "Days";
                     std::cout << "|"  << "For:" << std::setw(20) << "|" << why << std::setw(20)<<"   |   " << std::setw(5)<< days << "  " << howlong <<  std::setw(5)<<"   |"<< std::endl;
                     std::cin.get();
                     clock_t startTime = clock(); //Start timer based on seconds
                     double secondsPassed;
                     howlong = howlong*86400;
                     int actualM = howlong/86400;
                     double secondsToDelay = howlong;
                     std::cout << d << " to delay: " << actualM << std::endl;
                     bool flag = true;
                     while(flag)
                      {
                       secondsPassed = (clock() - startTime) / CLOCKS_PER_SEC;
                       if(secondsPassed >= secondsToDelay)
                        {
                         std::cout << actualM << " Days have passed" << std::endl;
                         flag = false;
                          }
                        }
                        std::string file = "/Users/admin/Desktop/TimeBlockingAlarm/Timeblock/AlarmSounds/Sirens.wav";
                        std::string command = "afplay " + file;
                        system(command.c_str());
                   }

                   else if (evaltype == 5){
                     int howlong;
                     system("clear");
                     std::cout << "How many of given type?";
                     std::cin >> howlong;
                      char wee[6] = "Weeks";
                      std::cout << "|"  << "For:" << std::setw(20) << "|" << why << std::setw(20)<<"   |   " << std::setw(5) << wee << "  " << howlong <<  std::setw(5)<<"   |"<< std::endl;
                       std::cin.get();
                       clock_t startTime = clock(); //Start timer based on seconds
                       double secondsPassed;
                       howlong = howlong*604800;
                       int actualM = howlong/604800;
                       double secondsToDelay = howlong;
                       std::cout << w << " to delay: " << actualM << std::endl;
                       bool flag = true;
                       while(flag)
                        {
                         secondsPassed = (clock() - startTime) / CLOCKS_PER_SEC;
                         if(secondsPassed >= secondsToDelay)
                          {
                           std::cout << actualM << " Weeks have passed" << std::endl;
                           flag = false;
                            }
                          }
                          std::string file = "/Users/admin/Desktop/TimeBlockingAlarm/Timeblock/AlarmSounds/Sirens.wav";
                          std::string command = "afplay " + file;
                          system(command.c_str());

                     }
                   }


int main()  {
  std::cout << "Welcome to the Time Blocking App & Quick Alarm for Time Mannagement!" << std::endl;
  std::cout << "For 24 Hour Time Blocking Enter 1" << std::endl;
  std::cout << "For Quick Alarm Enter 2 " << std::endl;
  int ans;
  std::cin >> ans;

  if (ans == 1){

  }
  else if (ans == 2){
    b();
}
                return 0;
            }
