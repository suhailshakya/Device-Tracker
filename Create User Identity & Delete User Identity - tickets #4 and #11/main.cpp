//Author: Abdullah Khan
//Description: This main.cpp file tests that DB connection class works as it should

#include <iostream> 
#include <sqlite3.h>
#include "user.cpp"

using namespace std;
  
int main() { 
	DBConnection *test = new DBConnection();
	test->createUser();
	test->deleteUser();
 
return 0;
} 
