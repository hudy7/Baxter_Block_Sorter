#include <ros/ros.h>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv){
  
  string keyboard_input;
  
  while(ros::ok() && keyboard_input != 'p'){
    cout << "Type 'p' to pause while putting blocks on table" << endl
         << "Type anything else to resume";
    cin >> keyboard_input;
    
    
    //code for sorting
    
  }
  cin >> keyboard_input;
}
