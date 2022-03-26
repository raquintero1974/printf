#The printf function

José Petro, Raúl Quintero and Karol Díaz

Printf is a function designed to print format strings. This function can include different arguments that are evaluated in an orderly manner by the machine, so that any desired group of characters can be printed.

Characters in the C programming language can have two different meanings: a special meaning and an alternate meaning. The first consists of producing a specific effect on other characters and the second is the use that is normally given to them in the construction of expressions (sentences, words, ideas) for which they are printed in the form assigned to them, that is, in the regular writing.

The special meaning of a character prevents it from being printed in the conventional way (by typing), so escape characters are used to deactivate its special operation, making them printable within the printf function.

For example:

Double quotes make other characters with which expressions are formed printable and isolate the character strings contained within them so that the print efe function can print them; however, the double quotes are not printed, but their content. To make them printable, just write them preceded by a “\”. In this way, you can include quoted expressions inside an argument to the printf function. Example:

printf("The "quotes" in the middle of this sentence are not printed");
print : The “quotes” in the middle of this sentence are not printed

printf("The \"quotes" are printed because their special meaning was turned off");
Prints: The quotes are printed because their special meaning has been deactivated


Likewise, characters like “n” are printable by default, but you can activate a special functionality in this that allows you to include a line break inside an argument by adding “\” before the n. In turn, the special or escape character "\" becomes printable when it is preceded by another "\": let's see

Typing "n" in the first argument to printf prints n.
Typing "\n" does not print n, but adds a newline.
Typing “\” in the first argument of printf does not print but makes the special character that follows printable
Typing “\\” prints the second \.

When it comes to variables, format specifiers are applied which consist of one or more characters that typify their content and add some characteristics that will be taken into account for their printing in printf,

The format specifier is activated with the character "%" followed by one or two letters that indicate the type of data that the variable contains, which can be: an integer, a real number, a number with a floating point or a decimal. , a character, a string, among others)

The format identifiers used within this code are defined below:

 #: Alternative format. For reals, zeros are left at the end and the comma is always printed. For numbers that are not in base 10, a prefix denoting the base is added.
 
+: print plus on positive numbers

0:  It is filled with zeros to the left up to the value given by the previous flag. For example “%04d” prints a justified number with zeros up to four digits.

3.2 Percent:
percentage is absolutely necessary for cr3.2 Percent a format, no matter what kind of format is , all of them start with a percentage symbol.  


3.3 The Width Option :
The width is one of the special options printf has .
to  guarantee the width space just needed to use the format with the percentage , number indicating the size of the width ,for example(%5d.) and it was very useful for creating tables. 


3.4 Filling the Extra Space:
Print f also features blank fill option, when the width of the variable is a smaller number, the other reserved fields will be filled with special characters (*#) or filled with zeros, for example if we have a number like 34 with this format (%4d), blanks will be **34, 0034, ==34 .
These are called check protection characters and prevent possible alteration of the values.

3.5 The Justify Option:
You can justify the printed data by aligning it to the right or to the left, being the alignment to the right the conventional way.
For example %5d prints a 10 base number and it has a 5 size weight, the number aligned to the right and the spaces in the front.
To justify to the left , you need to add the minus symbol (-) to the format specifier .

3.6 The Zero-Fill Option:
to make a fancy code , some format like date are justified at the right , fill the format with zero, for example 05/05/2003.when a number is filled with zero , these zeros always go to the front and in this case minus zero don't have any effect.
for example :
printf produces
("%05d",0) 00000
("%05d",-7) -0007
("%05d",1560133635) 1560133635
("%05d",-2035065302) -2035065302


3.7 Fun With Plus Signs:
negative numbers are preceded by a minus sign, while positive numbers and zero do not have a sign after it, but we can request that they be printed in the format .
for example: printf produces
("%+5d",0) +0
("%+5d",-7) -7
("%+5d",1560133635) +1560133635
("%+5d",-2035065302) -2035065302

3.8 The Invisible Plus Sign:
In this special case, the minus or plus signs are not printed, only a blank space is left where these two would be located, it is very useful to print with left justification, reserving said space for when you really want to print the sign.
In this special case, the minus or plus signs are not printed, only a blank space is left where these two would be located, it is very useful to print with left justification, reserving said space for when you really want to print the sign.
We can combine several types of options at the same time.
For example: printf produces
("%+-5d",0) +0
("%+-5d",-7) -7
("%+-5d",1560133635) +1560133635
("%+-5d",-2035065302) -2035065302

3.9 Plus, Space, and Zero:
this is another sample where you can combine different options in the .
when we combine a plus with a blank, the plus will always take precedence over the blank.


4 Printing Strings:


%space
%p: Memory direction (pointer)
%s: print a string
%x: Print an hexadecimal number
%X
%b 
%d: Print a decimal number
%i: Print an integer number (in base 10)
%c:  Print a single character
%% print a percent sign (\% also works)
