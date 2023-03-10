My Square
Remember to git add && git commit && git push each exercise!

We will execute your function with our test(s), please DO NOT PROVIDE ANY TEST(S) in your file

For each exercise, you will have to create a folder and in this folder, you will have additional files that contain your work. Folder names are provided at the beginning of each exercise under submit directory and specific file names for each exercise are also provided at the beginning of each exercise under submit file(s).

My Square	
Submit directory	ex00
Submit file	my_square.c
Description
Create a program which displays a beautiful square.

my_square(5,3) should display:

$>./a.out 5 3
o---o
|   |
o---o
$>
my_square(5, 1) should display:

$>./a.out 5 1
o---o
$>
my_square(1, 1) should display:

$>./a.out 1 1
o
$>
my_square(1, 5) should display:

$>./a.out 1 5
o
|
|
|
o
$>
my_square(4, 4) should display:

$>./a.out 4 4
o--o
|  |
|  |
o--o
$>
Tips:

0.
$>gcc my_file.c
$>./a.out

1.
int main(int ac, char **av);

2.
int x = atoi(av[1]);
int y = atoi(av[2]);

3.
Be careful segfault. :-)
From docode you can download the qwasar_my_square by executing this command to compare your output with ours:

curl -s https://storage.googleapis.com/qwasar-public/qwasar_my_square.tgz | tar zxvf - -C ./
It works exactly like yours should be working:

$>./qwasar_my_square 4 4
o--o
|  |
|  |
o--o
$>
