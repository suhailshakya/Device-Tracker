Download the database and database library connection to c++:
	sudo apt-get install sqlite3 libsqlite3-dev
To compile the Program:
	g++ main.cpp user.cpp -lsqlite3 -o test
To run the program:
	./test
To clean:
	rm test example.db


***Note:
the following DBConnnection class which inserts Users into the db file called "example.db" as the test has 2 inserts
INSERT INTO PERSON VALUES(1, 'Abdullah', 'Khan', 20, '3,5', 1);
INSERT INTO PERSON VALUES(2, 'Brad', 'Steven', 43, '7,4', 0);

These are the 2 users which are put into the databases as tests!

Then to test the delete user function
DELETE FROM PERSON WHERE ID = 2;

This deletes the user with the user ID of 2!

The test case shows the database visually after the inserting of the users.
Also, it shows the database visually after the deletion of the user ID of 2 which is "Brad".

------------------------------Test cases on the ticket------------------------------------------------------------

Test that multiple users can an account (pass): You can definetely see in the output of the program that multiple users can be inserted into the database because it shows that "Abdullah" and "Brad" are inserted as it shows the state of the database
Test the user to create the same account twice (fail): When you try to rerun the program without cleaning you can see that there is an error when trying to create a new database becuase "example.db" exists already and also "Abdullah" is still inside the database after the first run. The program returns an error when you rerun and try to insert "Abdullah" again
Test the user to create multiple distinct accounts (pass): Much like the reasoning above, the program will not allow the insertion of the same primary key ie. for "Abdullah", it is '1'. Therefore all users are distinct
Test the database to see if the specified user is deleted (pass): You can see after we run the delete test, that the user with user id 2 is no longer in the database which is brad. This is shown in the program output
Test the database to see if the specified user is not deleted (fail): You can see after we run the delete test, that the user with user id 2 is no longer in the database which is brad. This is shown in the program output