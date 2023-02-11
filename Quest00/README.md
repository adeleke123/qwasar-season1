## Quest00

Remember to git add && git commit && git push each exercise!

We will execute your function with our test(s), please DO NOT PROVIDE ANY TEST(S) in your file

For each exercise, you will have to create a folder and in this folder, you will have additional files that contain your work. Folder names are provided at the beginning of each exercise under `submit directory` and specific file names for each exercise are also provided at the beginning of each exercise under `submit file(s)`

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

## Introduction

Welcome to the `Shell environment` quest.

We will dive into the environment of the famous command box. It's the Command center of the computer, very powerful but might be confusing at first.

In this quest, you will learn how to create directories and files with the correct permissions, read the listing directory command, and git push all your exercises.
You will also use the archive command `tar` and you will finish by writing your first script.

If we compare this with learning how to play a sport, you must be able to stand up, walk and run before being able to play a sport. With this quest, you will learn how to stand up! :-)

| Quest00	| My First File |
| ------- | ------------- |
| Submit directory	| ex00 |
| `Submit file` | `my_first_file` |

## Description
For this very first assignment, you will be asked to create a file called `my_first_file` in your directory.

Which directory?
It's specified above this sentence (Submit directory: ex00 ;-))

Each assignment follows the same structure, you have to create a directory, go to the directory (cd), and work on your assignment.

Proceed by creating a file with the command: `touch` as you've seen in the video.

To verify if everything is in order: ls

You should see the file my_first_file.

Tip
To test if your exercise(s) is/are correct(s), you can execute the command gandalf in your terminal.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
Quest00	My First File With Content
Submit directory	ex01
Submit file	my_first_file_with_content
Description
Create a file called my_first_file_with_content in your directory. Update its size.

Size needs to be: 40.
How can a file have a size of 40?
Each character (or letter) is 1, so you simply need to add 40 characters inside the file. ;-)

In order to print this information, use the command ls -l (command is ls and -l is one option).

Example00

$>ls -l
xxxxxxxxx  x xxxxx  xxxxx  40 May  25 14:30 my_first_file_with_content
$>
We've replaced some values with x, which means they are not important at the moment. You can disregard them :)

Tips

$> is a very common way to represent a prompt.

How to read the above Example00:

You are in a shell (the $>) and you've executed the command ls -l.
It has printed: xxxxxxxxx  x xxxxx  xxxxx  40 May  25 14:30 my_first_file_with_content
And the last line is reprinting the prompt ($>).
Tips
The terminal is the little box where you execute command at the bottom part of Docode.
To test if your exercise(s) is/are correct(s), you can execute the command gandalf in your terminal.

Quest00	My First File With Content And Perms
Submit directory	ex02
Submit file	my_first_file_with_content_and_perms
Description
Part 00
Create a file called my_first_file_with_content_and_perms in your directory. Update its size THEN its permissions. (It must be done in this order because you will be asked to remove the permission to WRITE to a file which will be problematic if you want to add content inside it. ;-))

Size needs to be: 40 (be creative, here, how a file can have a size of 40...? :))
Permissions need to be: r--r-xr-x (Google chmod? :-))
In order to print this information, use the command ls -l (command is ls and -l is one option).

Example00

$>ls -l
-r--r-xr-x  1 login  group  40 May  25 14:30 my_first_file_with_content_and_perms
$>
Tips

$> is a very common way to represent a prompt.

How to read the above Example00:

You are in a shell (the $>) and you've executed the command ls -l.
It has printed: -r--r-xr-x  1 login  group  40 May  25 14:30 my_first_file_with_content_and_perms
And the last line is reprinting the prompt ($>).
Tip

The terminal is the little box where you execute command at the bottom part of Docode.

Part 01
Once you’ve finished the previous steps, execute the following
command to create the file that will be submitted:

tar -cf my_first_file_with_content_and_perms.tar my_first_file_with_content_and_perms
Tip
To test if your exercise(s) is/are correct(s), you can execute the command gandalf in your terminal.

Quest00	My Gitaddcommitpush
Submit directory	ex03
Submit file	file
Description
Time to Git!

Git is a distributed version-control system for tracking changes in source code during software development. It is designed for coordinating work among programmers, but it can be used to track changes in any set of files. Its goals include speed, data integrity, and support for distributed, non-linear workflows. @Wikipedia

Create a file with the word "content" as the actual content of the file (disturbing?!)
$>echo "content" > file
Add that file to the commit (feel free to Google what a commit is!)
$>git add file
Prepare the commit with a message (please find below an example of a commit message; you should provide an accurate message for each commit you will do during your software engineer's life)
$>git commit -m "I swear I will ALWAYS add a great message for my commits"
Push the commit
$>git push
Now we know you know how to use git. No excuses and ALWAYS PUSH YOUR WORK. :-)
(5. If you have any problem with gandalf, make sure the cursor is at a new line)

Extra:
0. git log

git status
git clone
Quest00	My Z
Submit directory	ex04
Submit file	my_z
Description
Create a file called my_z that returns "Z", followed by a new line, whenever the command cat is used on it.

$>cat my_z
Z
$>
"Z" Stands For Zorro. :-)
