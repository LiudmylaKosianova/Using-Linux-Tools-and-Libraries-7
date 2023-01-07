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
