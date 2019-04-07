# Algorithms-Illuminated-My-Solutions

I am following along a book series by Tim Roughgarden, based on online courses that are currently running on the Coursera and Stanford Lagunita platforms. This documentation highlights my take on the algorithms written in the first series of a four-part series, for Algorithms Illuminated Part 1: The basics

## Table of contents
* [Description](#Description)
* [Setup](#Setup)
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
where algorithms is the name I give to the created directory. 

Move to the directory and open a session of your favorite text editor for Linux command line. (I use Vim editor)
```
$ cd algorithms
$ vim example.cpp
```
This will open a blank text editor. (example) is the name of the file. You can name this whatever you would like.
(.cpp) is the extension type of a C++ file. 
Copy and paste the code into the text editor you would like to run and compile. Write and quit the session (:wq). 
This will save your work and quit the current seesion. (Make sure you are in NORMAL mode) You will then be redirected back to the Linux terminal. 

To compile and run the file, type
```
$ g++ example.cpp -o example.out 
```

#### 2. Or clone a repository
Alternatively, to create a local copy on your computer and synchronize between the two locations, you can "git clone" this repository to any directory.

Under the repository name, click **Clone or download.**  Copy the clone URL for the repository.  
Type `git clone`, and then past the URL you copied  
```
$ git clone https://github.com/YOUR-USERNAME/YOUR-REPOSITORY
```
once you have created a local copy of the repository, you can compile and run the file on the Linux command line.
```
$ g++ example.cpp -o example.out 
```

## Usage
