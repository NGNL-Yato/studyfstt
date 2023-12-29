To launch multiple files in cpp

Execute these command on the folder via terminal 

./studyfstt/C++/TD2 for example

____________________________________________________________________________________


g++ -c File_method.cpp -o File_main.cpp         //Compile the class implementation source file 


g++ File_main.cpp File_method.o -o my_program       //Compile the main source file (File_main.cpp) and link it with the object file from step 1


./my_program        // Run the program