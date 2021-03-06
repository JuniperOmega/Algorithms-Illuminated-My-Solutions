# Algorithms-Illuminated-My-Solutions

I am following along a book series by Tim Roughgarden, based on online courses that are currently running on the Coursera and Stanford Lagunita platforms. This documentation highlights my take on the algorithms written in the first series of a four-part series, for Algorithms Illuminated Part 1: The basics

## Table of contents
* [Description](#Description)
* [Setup](#Setup)
* [Why Study Algorithms](#why-study-algorithms)
  * [Integer Multiplication](#integer-multiplication)
  * [Sorting Algorithms](#Sorting)
* [Asymptotic Notation](#asymptotic-notation)
  * [Big-O Notation](#big-O-notation)
  * [Examples](#Examples)
* [Divide-and-Conquer Algorithms](#divide-and-conquer) 
* [Usage](#Usage)

## Description

My programming solutions are written in C++ using Windows 10 Ubuntu Bash Shell. Each of the topics I cover will include various ways to code the algorithm. The algorithms/topics include: asymptotic analysis, big-O notation, divide-and-conquer algorithms, the master method, randomized algorithms, and several famous algorithms for sorting and selection.

## Setup
To run any of these files, download/clone it locally to your machine. Feel free to run and compile the programs on your favorite IDE or terminal or run via Linux terminal.

If you would like to install Ubuntu on Windows 10 please follow the link below:

```
https://www.howtogeek.com/249966/how-to-install-and-use-the-linux-bash-shell-on-windows-10/
```
Once your setup is complete and configured, you can download and save the file to a directory or clone a repository to create a local copy on your computer. 

#### 1. Download and save to a directory
If you would like to create your directory right from the bash shell then please follow the instructions below:

From the command prompt, move (cd) to the directory in which you would like to save and execute the file(s), and type
```
$ mkdir algorithms 
```
where algorithms is the name of the created directory. 

Move (cd) into the newly directory and open a session of your favorite text editor for Linux command line. (I use Vim always! WHY would anyone use anything else?! ;-). The commands in parenthesis will show some basic steps for someone to navigate in/out of Vim.)
```
$ cd algorithms
$ vim whateverNameYouWant.cpp
```
This will open a new file named "whateverNameYouWant" in the Vim editor. The extension ".cpp" is commonly used for C++ files, but not exclusively. NOTE: GNU GCC recognises all of the following as C++ files, and will use C++ compilation regardless of whether you invoke it through gcc or g++: `.cc`, `.CPP`, `.c++`, `.cp`, or `.cxx`.

Copy and paste the code into the text editor (Hopefully Vim!) you would like to run and compile. Write and quit the session (:wq). (VIM USERS! when typing commands using the ':' character, make sure you are in NORMAL mode).  You will then be redirected back to the Linux terminal. 

To compile and run the file, type
```
$ g++ whateverNameYouWant.cpp -o whateverName.out 
```

#### 2. Or clone a repository
Alternatively, to create a local copy on your computer and synchronize between the two locations, you can "git clone" this repository to any directory.

1. You are already on the main page directory! Under the repository name, click **Clone or download.**  Copy the clone URL for the repository. 

2. Open a Terminal
Type `git clone`, and then past the URL you copied  
```
$ git clone https://github.com/JuniperOmega/Algorithms-Illuminated-My-Solutions.git
```
3. Once you have created a local copy of the repository, you can compile and run the file on the Linux command line.
```
$ g++ example.cpp -o example.out 
```

## Usage
