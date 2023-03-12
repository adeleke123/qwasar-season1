## My Ngram
Remember to git add && git commit && git push each exercise!

We will execute your function with our test(s), please DO NOT PROVIDE ANY TEST(S) in your file

For each exercise, you will have to create a folder and in this folder, you will have additional files that contain your work. Folder names are provided at the beginning of each exercise under `submit directory` and specific file names for each exercise are also provided at the beginning of each exercise under `submit file(s)`.


-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

| My Ngram |	|
| -------- | -- |
| Submit directory |	. |
| `Submit files` | `Makefile - *.c - *.h` |
| Languages	  | It needs to be completed in the language you are working on right now. If you are doing 
		  Bootcamp Javascript, then javascript (file extension will be .js). If you are doing Bootcamp 
		  Ruby, then Ruby (file extension will be .rb). It goes the same for Python, Java, C++, Rust, ... 
Description
SPECIFICATIONS
Write a program my_ngram; It will count the number of occurrences per character.

NAME
my_ngram

SYNOPSIS
my_ngram text [text2, text3]

DESCRIPTION
In computational linguistics and probability, an n-gram is a contiguous sequence of n items from a given sample of text or speech. The items can be phonemes, syllables, letters, words or base pairs according to the application. The n-grams typically are collected from a text or speech corpus. When the items are words, n-grams may also be called shingles.

Google Inc. has used this technique to improve the completion of its Search Engine. The program was developed by Jon Orwant and Will Brockman and released in mid-December 2010.

My Ngram will take 1 or multiple strings as arguments.

It will display, one per line, each character and the numbers of times it appears.

Order will be alphanumerical.

Example 00
```
$>./my_ngram "abcdef"
a:1
b:1
c:1
d:1
e:1
f:1
$>
```
Example 01
```
$>./my_ngram "        "
 :8
$>
8 spaces :-)
```
Example 02
```
$>./my_ngram "aaabb" "abc"
a:4
b:3
c:1
$>
```
Technical information:
(If you are doing this as project) you must create a Makefile, and the output is the command itself
You can use:
printf(3)
write(2)
You can NOT use:
Any functions/syscalls which does not appear in the previous list
Yes, it includes exit
Multiline macros are forbidden
Include another .c is forbidden
Macros with logic (while/if/variables/...) are forbidden
Requirements
Your code must be compiled with the flags -Wall -Wextra -Werror.
Your makefile must have a clean & fclean rules.
Example of some rules for Makefiles:
```
all : $(TARGET)

$(TARGET) : $(OBJ)
	gcc $(CFLAGS) -o $(TARGET) $(OBJ) 

$(OBJ) : $(SRC)
	gcc $(CFLAGS) -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all
```
Warnings
It's a bad practice to submit "object/binary files". Gandalf will reject your project if you submit your binary. (with the following message: "pushed file wrong format")

Ganfalf issue
Gandalf is sending an extra '"', please add a if != from '"' in order to pass the project.
