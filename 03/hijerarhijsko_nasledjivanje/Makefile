main:	student master_student
	g++ -std=c++20 main.cpp -l student master_student 

student:	student.cpp student.hpp
	g++ -std=c++20 -Wall -Wextra student.cpp student.hpp -o student

master_student:	master_student.cpp master_student.hpp	
	g++ -std=c++20 -Wall -Wextra master_student.hpp master_student.cpp -o master_student

