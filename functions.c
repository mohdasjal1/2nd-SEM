#include <stdio.h>


void printHello();
void printBye();
int sum(int a, int b);
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float lenghth, float breadth);
int comparision(int x, int y);

int main()
{
    printHello();

    printBye();

    int a = 2;                                         //SUM OF 2 NUMS
    int b = 5;
    sum(a, b);
    // printf("Result is %d" , result);

    
    float side;                                        //AREA OF SQUARE
    printf("\nEnter the side of a square : ");
    scanf("%f", &side);    
    float resultofsqr = squareArea(side);
    printf("The area of a square is : %.2f\n", resultofsqr);

    float rad;                                         //AREA OF CIRCLE
    printf("\nEnter the radius of a circle : ");
    scanf("%f", &rad);
    float resultofcircle = circleArea(rad);
    printf("The radius of a circle is : %.2f\n", resultofcircle);


    float length, breadth;                             //AREA OF CIRCLE
    printf("\nEnter the length adn breadth of a rectangle respectively : \n");
    scanf("%f", &length);
    scanf("%f", &breadth);
    float resultofrect = rectangleArea(length, breadth);
    printf("The area of the rectangle is : %.2f\n", resultofrect);

    int x, y;
    printf("Enter two numbers : ");
    scanf("%d %d",&x, &y);
    comparision(x, y);
    
    
                                            

    return 0;
}

void printHello()
{
    printf("Hello World!\n");
}

void printBye()
{
    printf("GoodBye!");
}

int sum(int a , int b)
{
    int result =  a + b;
    printf("\nSum of a and b is : %d" , result);
    // return a + b;
}

float squareArea(float side)
{
    return side * side;
}

float circleArea(float rad)
{
    return 3.14 * rad * rad;
}

float rectangleArea(float length, float breadth)
{
    return length * breadth;
}

int comparision(int x, int y)
{
    if (x > y)
    {
        printf("Max num is %d and Min num is %d", x, y);
    }
    else
    {
        printf("Max num is %d and Min num is %d", y, x);
    }
    
    
}
