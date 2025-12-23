*This project has been created as part of 42 curriculum by <theoppon>*

DESCRIPTION

This project called ft_printf has been made replicate the behaviour of the printf function from libc.
to a certain extent. 

The buffer management was not implemented and it only handles the following conversions: cspdiuxX%

The algorithm used is fairly simple and straightforward as I did not account for: parameter,flags, width, precision or lenght. If these were to be taken into account the only change would be how it iterates throught the format string adding one more variable like int advance so we could take into everything found and skip it in accordante to take into account the type.

The use of complicated data structures was not reqired, only primitive variables.

int ft_printf(const char * format, ...)

First parameter: Const char * format = format string.

Second parameter: ... = elipsis.

Format is a pointer variable that points to a string of characters and these are constant meaning that we can't modify the characthers through the pointer.

The elipsis is used to represent a variadic funtcion wich allows a funtcion to accept an undefined number of arguments of different types.

The goal of printf is to send formatted output to the screen so each funtcion is written on this base, although the return of printf is the total amount of characters printed.

To access the variable arguments that correspond to the format directives(%s, %d), I make use of macros defined in stdarg.h. The va_list macro provides access to this list and by decracling a variable of type va_list I can inherit to this list of arguments.

An index is used to iterate through the string.It starts by checking if there is any format specifier. If a directive is not found it will print the character and keep track of chars_printed. As soon as one is found it will check the type (c, s, p, d ...). A specific funtcion will be called in regards of it's find.

This procces will keep going until the end of the string is reached and the chars_printed will be returned.




INSTRUCTIONS

To compile test this project you should compile using *make* and creating a main.c to test it.



RESOURCES

The list of resources used to help me complete this project are listed below: 

	- https://elgibbor.hashnode.dev/building-your-own-printf-in-c-a-step-by-step-guide

	- https://zhxnlai.github.io/printf/#/

	- https://cplusplus.com/reference/cstdio/printf/

	- https://www.geeksforgeeks.org/c/c-program-for-decimal-to-hexadecimal-conversion/

	- https://stackoverflow.com/questions/1735236/how-to-write-my-own-printf-in-c

	- https://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_printf_en.html

	- https://www.gnu.org/software/libc/manual/html_node/Formatted-Output.html

AI was used to resolve my doubts I had about certains topics but it never wrote a single line of code
