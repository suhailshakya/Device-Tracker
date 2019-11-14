//Author: Abdullah Khan
//Description: This is a DB connection class which allows for creation and deletion of a user

#include <iostream>
#include <sqlite3.h> 

using namespace std;

class DBConnection {
	
	private: 
		sqlite3* DB;
		int exit = 0;
		 
		
	public: 
		DBConnection() {
			cout << "--------------------------------------------------------------------------" << endl;
			exit = sqlite3_open("example.db", &DB);
			if (exit) { 
				cerr << "Error open DB " << sqlite3_errmsg(DB) << std::endl << std::endl; 
				return; 
			} 
			else {
				cout << "Opened Database Successfully in Constructor!" << std::endl << std::endl; 
			}
			char* messaggeError; 
			string sql = "CREATE TABLE PERSON("
                      "ID INT PRIMARY KEY     NOT NULL, "
                      "NAME           TEXT    NOT NULL, "
                      "SURNAME          TEXT     NOT NULL, "
                      "AGE            INT     NOT NULL, "
                      "LOCATION        CHAR(50), "
                      "ISADMIN         INT );";
            exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messaggeError); 
            if (exit != SQLITE_OK) { 
				cerr << "Error Create Table in Constructor" << std::endl << std::endl; 
				sqlite3_free(messaggeError); 
			} 
			else {
				cout << "Table created Successfully in Constructor!" << std::endl << std::endl;
			}
			sqlite3_close(DB); 
			cout << "--------------------------------------------------------------------------" << endl;
		}
		
		void createUser() {
			exit = sqlite3_open("example.db", &DB);
			if (exit) { 
				cerr << "Error open DB " << sqlite3_errmsg(DB) << std::endl; 
				return; 
			} 
			else {
				cout << "Opened Database Successfully in createUser!" << std::endl; 
			}
			char* messaggeError; 
			string query = "SELECT * FROM PERSON;";
			string sql("INSERT INTO PERSON VALUES(1, 'Abdullah', 'Khan', 20, '3,5', 1);"
               "INSERT INTO PERSON VALUES(2, 'Brad', 'Steven', 43, '7,4', 0);");
               exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messaggeError); 
			if (exit != SQLITE_OK) { 
				std::cerr << "Error Insert" << std::endl; 
				sqlite3_free(messaggeError); 
			} 
			else {
				std::cout << "Records created Successfully!" << std::endl; 
			}
  
			cout << "STATE OF TABLE AFTER INSERT" << endl; 
			sqlite3_exec(DB, query.c_str(), callback, NULL, NULL);
			sqlite3_close(DB); 
			cout << "--------------------------------------------------------------------------" << endl;
		}
		
		void deleteUser() {
			exit = sqlite3_open("example.db", &DB);
			if (exit) { 
				cerr << "Error open DB " << sqlite3_errmsg(DB) << std::endl; 
				return; 
			} 
			else {
				cout << "Opened Database Successfully in deleteUser!" << std::endl; 
			}
			char* messaggeError; 
			string query = "SELECT * FROM PERSON;";
			string sql("DELETE FROM PERSON WHERE ID = 2");
               exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messaggeError); 
			if (exit != SQLITE_OK) { 
				std::cerr << "Error Insert" << std::endl; 
				sqlite3_free(messaggeError); 
			} 
			else {
				std::cout << "Records deleted Successfully!" << std::endl; 
			}
  
			cout << "STATE OF TABLE AFTER DELETE" << endl; 
			sqlite3_exec(DB, query.c_str(), callback, NULL, NULL);
			sqlite3_close(DB);
			cout << "--------------------------------------------------------------------------" << endl;
		}
		
	static int callback(void* data, int argc, char** argv, char** azColName) { 
		int i;
  
		for (i = 1; i < argc; i++) { 
			printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL"); 
		} 
  
		printf("\n"); 
		return 0; 
	} 
};









    
  
