# age-calculator-c
An age calculator made in C language (works on both Windows and Linux)

To run the program, download all files (.h and .c) and compile as follows:

GCC: gcc -o some_output_name *.c *.h

Clang: clang some_output_name *.c *.h

You need to enter the dates using the forward slash (/), for example: 12/14/2001

The idea is to enter the oldest date first and then the most recent date, for example: 12/14/2001 and 04/03/2023. But if the most recent date is entered first, the second date will assume the day of birth, for example: 04/03/2023 and 12/14/2001.
