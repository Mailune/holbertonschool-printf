<p align="center">
	
[![Ilogo Holberton school](https://scontent-cdg4-2.xx.fbcdn.net/v/t39.30808-6/429641439_792522079563968_5846022648137048441_n.png?_nc_cat=101&ccb=1-7&_nc_sid=5f2048&_nc_ohc=EkZDCy8rKvEAX8FQ0uT&_nc_ht=scontent-cdg4-2.xx&oh=00_AfB_8gEVX42wzp8wycI2eb_Bhf1s-jPr6tKz5N2WLWF9VQ&oe=6606DFF3)](https://www.holbertonschool.fr/?gad_source=1&gclid=CjwKCAjw5ImwBhBtEiwAFHDZx8w-2kb6Q-Y4vZzI_0w4KdM2VufyxsP_jayFjFiDKusUsQVTXi2tQBoCEcEQAvD_BwE)
</p>

# <p align="center">C - printf</p>
>Master the art of precision in C programming with printf - your gateway to versatile output formatting!

## <p align="center">Description</p>

The printf function is a standard library function in the C language used for formatting and displaying data to the standard output (typically the terminal). It supports various format specifiers that control how data is displayed, such as strings, integers, floating-point numbers, etc. printf is a versatile and widely used function for producing formatted outputs in C programs.

**Through this repository, we will create our own replica of the printf function.**

## ‼️ Requirements ‼️:

- A README.md file, at the root of the folder of the project is mandatory
- The code should use Betty style
- We are not allowed to use global variables 
- No more than 5 functions per file
- We should include the prototypes of all the functions in our header file called main.h
- All the header files should be include guarded 🔐

## ✅ Authorized functions and macros  ✅ :

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

## P⃣rototype:
 >int _printf(const char *format, ...);



## 📋 Activity UML diagram

<p align="center">
<img width="1148" alt="Capture d’écran 2024-03-31 à 19 42 37" src="https://github.com/Mailune/holbertonschool-printf/assets/156970898/4265914f-6508-40e7-9436-e15f8f84488b">
</p>

### Conversion specifiers


| Specifiers| Description| Function name|
| -------- | -------- | -------- |
| c   |  print a character    | _printcharacter    |
| s    | print a string   | _printstring    |
| %    | print a %  | _printpercent   |
| i | print an integer | _printnumbers |
| d | print a deciman | _printnumbers |

##  *Examples* :

        Print a string
        
    _printf("Hello, %s!\n", "world");
        Result : "*Hello, world!*"
    
        Print a character
        
    _printf("The first letter of the alphabet is %c.\n", 'A');
        Result : "*The first letter of the alphabet is A.*"

        Print an integer
        
    _printf("The answer to everything is %d.\n", 42);
        Result : "*The answer to everything is 42.*"

        Print a percent
        
    _printf("10%% discount on all items!\n");
        Result : "*10% discount on all items!*"

## ⏩ Compilation command ⏩:
```c
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## 📁 Man page 📁 :
```
Go check our man page printf 

[man_3_printf](https://github.com/Mailune/holbertonschool-printf/blob/main/man_3_printf)

```

##  Crédits:

#### 👤 Louis Saint-Machin
- Mail:  louis.saintmachin@gmail.com
- Github: [@LouisXV16](https://github.com/LouisXV16)

#### 👤 Maïlys Rosereau
- Mail: mailysrosereau@yahoo.fr
- Github: [@Mailune](https://github.com/Mailune)
 

Copyright (c) 2024 **Louis Saint Machin & Maïlys Rosereau**