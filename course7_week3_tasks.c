/*TASK 1

You are selling plants and are working on creating invoices for customer orders. You are testing a program that should receive, as arguments passed in from the command line, a number of plants to be purchased (an integer) and the price per plant (a decimal number). Your job is to create an invoice for the customer (see examples) that prints out the total price of the order (which can be found by multiplying the price per plant by the number of plants purchased). 

If your program is called with an incorrect number of arguments the user should receive the message "Invalid input" */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (int argc, char * argv[]){
int plants =0;
double price=0.0;
if (argc == 3){
plants = atoi(argv[1]);
price = atof(argv[2]);
printf("%d plants for %.2lf dollars each cost %.2lf dollars.", plants, price, plants*price);
}else {
printf("Invalid input");}
return 0;}

/*TASK 2
You are teaching a class on C-programming! You would like to find out whether your teaching has been effective, and so you need to compute 
the average grade your students have received on the most recent assignment. These grades (integers) are stored in the file studentGrades.txt.

The first entry in the file (an integer) is the number of student grades that are stored in the file.
Your job is to calculate and print out the average of the grades stored in the file. 
Please print the average grade with two decimal places.
*/

#include <stdio.h>

int main (void){
int N, i;
double avarage=0;
double grade;
FILE *file;

file = fopen("studentGrades.txt", "r");
fscanf(file, "%d", &N);
for (i=0; i<N; i++){
fscanf(file, "%lf", &grade);
avarage += grade;}
avarage = avarage/N;
printf("%.2lf", avarage);

return 0;}

/*TASK 3
You are still teaching a class on C-programming! You would like to find out whether the students in your class did better on the most 
recent assignment than the students in your colleagues' classes. The average grades of all these classes are stored in a file called "gradeComparison.txt". The first number stored in the file represents the average grade of the students in your class. All of the subsequent numbers represent the average grades of students from other sections. 
Your job is to find out whether the students in your class did better than the students in the other classes and if so, print out the word "Yes". 
If on the other hand students in another class did better than your students then you should print out "No", followed by one space, 
followed by the number of the first class in the file that had a better grade average.
*/

#include <stdio.h>

int main (void){
FILE *file;
file = fopen("gradeComparison.txt", "r");
int i=0;
double myGrade, max, otherGrade;
fscanf(file, "%lf", &myGrade);
max = myGrade;
while (fscanf(file,"%lf", &otherGrade)!= EOF){
i++;
//printf (" %d is grade %.2lf \n", i, otherGrade);
	if(otherGrade > max){
	max=otherGrade;
	break;}	 
}
if (max==myGrade){
printf("Yes");}else{
printf("No %d", i+1);}
return 0;}
 
