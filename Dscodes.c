// Arrays Program 1
// Arrays and structures
// #include<stdio.h>
// #define MAX_SIZE 100
// float sum(float[],int);
// float input[MAX_SIZE],answer;
// void main()
// {
//     int i;
//     for (i=0;i<MAX_SIZE;i++)
//         input[i] = i;
//     answer = sum(input,MAX_SIZE);
//     printf("The sum is: %f\n",answer);
// }
// float sum(float list[],int n)
// {
//     int i;
//     float tempsum=0;
//     for(i=0;i<n;i++)
//         tempsum += list[i];
//     return tempsum;
// }

//Arrays program 2
// #include<stdio.h>
// int main()
// {
// void print1(int *ptr, int rows){
//     int i;
//     printf("Address     Contents\n");
//     for (i=0;i<rows;i++)
//         printf("%8u%5d\n",ptr + i,*(ptr + i));
//     printf("\n");
// }
// int one[] = {0,1,2,3,4};
// print1(&one[0],5);
// }

// // LAB PROGRAM 1
// #include <stdio.h>
// int a[20], n, ele, i, pos;
// void create() //creating an array
// {
//     printf("\nEnter the size of the array elements:\t");
//     scanf("%d", &n);
//     printf("\nEnter the elements for the array:\n");
//     for (i = 0; i < n; i++)
//         scanf("%d", &a[i]);
// }
// void display() //display array elements
// {
//     printf("\nThe array elements are: \n");
//     for (i = 0; i < n; i++)
//         printf("%d \t", a[i]);
// }
// void insert_ele() //inserting an element at specified position
// {
//     printf("\nEnter the position for the new element:\t");
//     scanf("%d", &pos);
//     printf("\nEnter the element to be inserted :\t");
//     scanf("%d", &ele);
//     if (pos > (n + 1) || pos <= 0)
//     {
//         printf("invalid position\n");
//         return;
//     }
//     for (i = n - 1; i >= pos - 1; i--)
//         a[i + 1] = a[i];
//         a[pos - 1] = ele;
//         n++;
// }
// void delete_ele() //deleting an array element
// {
//     printf("\nEnter the position of the element to be deleted:\t");
//     scanf("%d", &pos);
//     if (pos >= n + 1 || pos <= 0)
//     {
//         printf("invalid position\n");
//         return;
//     }
//     printf("element deleted is %d", a[pos - 1]);
//     for (i = pos - 1; i < n - 1; i++)
//         a[i] = a[i + 1];
//     n--;
// }
// void main()
// {
//     int ch;
//     do
//     {
//         printf(" \n -------- MENU ----------- \n");
//         printf("1:CREATE 2:DISPLAY 3:INSERT 4:DELETE\n");
//         printf("-----------------------");
//         printf("\nENTER YOUR CHOICE:\t");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//         case 1:
//             create();
//             break;
//         case 2:
//             display();
//             break;
//         case 3:
//             insert_ele();
//             break;
//         case 4:
//             delete_ele();
//             break;
//         default:
//             printf("invalid choice\n");
//         }
//     } while (ch <= 4);
// }

//  LAB PROGRAM 2

// #include<stdio.h>
// #define MAX 30
// void str(char s[],char p[],char r[],char f[])
// {
// int i,j,k,m,t,found;
// i=j=k=m=t=0,found=0;
// while(s[i]!='\0')
// {
//     if(s[m++]==p[j++])
// {
//     if(p[j]=='\0')
// {
//     for(k=0;r[k]!='\0';k++,t++)
//         f[t]=r[k];
//     j=0;
//     i=m;
//     found=1;
// }
// }
// else
// {
// f[t++]=s[i++];
// m=i;
// j=0;
// }
// }
// f[t]='\0';
// if(found==1)
// {
// printf("resultant string is ");
// puts(f);
// }
// else
// printf("pattern not found in main string\n");
// }
// void main()
// {
// char s[MAX], p[MAX],r[MAX],f[MAX];
// printf("enter the main string\n");
// gets(s);
// printf("enter the pattern string\n");
// gets(p);
// printf("enter the replace string\n");
// gets(r);
// str(s,p,r,f);
// }

// LAB Program 3

// #include <stdio.h>
// #define MAX 5
// int s[MAX],top = -1, ele, i;
// void pal()
// {
//     top = -1;
//     int i = 1, len = 0, rev = 0, digit, temp, n;
//     printf("Enter a Number\n");
//     scanf("%d", &n);
//     temp = n;
//     while (n != 0)
//     {
//         digit = n % 10;
//         n = n / 10;
//         push(digit);
//         len++;
//     }
//     while (len != 0)
//     {
//         digit = pop();
//         rev = rev + (digit * i);
//         len--;
//         i = i * 10;
//     }
//     if (temp == rev)
//         printf("Number is a palindrome");
//     else
//         printf("Number is not a palindrome");
// }
// void push(int ele)
// {
//     if (top == MAX - 1)
//     {
//         printf("Stack Over flow");
//         return;
//     }
//     top++;
//     s[top] = ele;
// }
// int pop()
// {
//     int ele;
//     if (top == -1)
//     {
//         printf("Stack underflow");
//         return;
//     }
//     ele = s[top];
//     top--;
//     return ele;
// }
// void display()
// {
//     if (top == -1)
//     {
//         printf("Stack underflow");
//         return;
//     }
//     printf("Stack Contents are\n");
//     for (i = top; i >= 0; i--)
//         printf("%d\n", s[i]);
// }
// void main()
// {
//     int ch;
//     do
//     {
//         printf("1:push  2:pop  3:display  4:palindrome\n");
//         printf("Enter your choice\n");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//         case 1:
//             printf("Enter the element to be pushed \n");
//             scanf("%d", &ele);
//             push(ele);
//             break;
//         case 2:
//             ele = pop();
//             printf("Element deleted is %d\n", ele);
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             pal();
//             break;
//         default:
//             printf("invalid choice\n");
//         }
//     } while (ch <= 4);
// }

// LAB Program 4

// #include <stdio.h>
// #include<ctype.h>
// #include <termios.h>
// #include <unistd.h>
// char infix[25], postfix[25];
// int s[10], top = -1;
// int pri(char c)
// {
//     switch (c)
//     {
//     case '+':
//     case '-':
//     case '%': return 1;
//     case '*':
//     case '/': return 2;
//     case '^': return 3;
//     case '(':
//     case '#': return 0;
//     }
// }
// void push(char c)
// {
//     top++;
//     s[top] = c;
// }
// char pop()
// {
//     char e;
//     e = s[top];
//     top--;
//     return e;
// }
// void main()
// {
//     int i, j = 0;
//     char ch, ele;
//     printf("enter the infix expression\n");
//     scanf("%s", infix);
//     push('#');
//     for (i = 0; infix[i] != '\0'; i++)
//     {
//         ch = infix[i];
//         if (isalnum(ch))
//             postfix[j++] = ch;
//         else if (ch == '(')
//             push(ch);
//         else if (ch == ')')
//         {
//             while (s[top] != '(')
//                 postfix[j++] = pop();
//             ele = pop(); // to remove the left paranthesis
//         }
//         else // to check for the operators
//         {
//             while (pri(s[top]) >= pri(ch))
//                 postfix[j++] = pop();
//             push(ch);
//         }
//     } // end of for loop
//     while (s[top] != '#')
//         postfix[j++] = pop();
//     postfix[j] = '\0';
//     printf("postfix expression is %s\n", postfix);
//     getchar();
// }

// LAB Program 5

// #include <stdio.h>
// #include <math.h>
// int op1, op2, res, i, top = -1, s[10], ele, n;
// void push(int ele)
// {
//     top++;
//     s[top] = ele;
// }
// int pop()
// {
//     int ele;
//     ele = s[top];
//     top--;
//     return (ele);
// }
// int eval()
// {
//     int e;
//     char postfix[20], ch;
//     printf("enter the postfix exp\n");
//     scanf("%s", postfix);
//     for (i = 0; postfix[i] != '\0'; i++)
//     {
//         ch = postfix[i];
//         if (isdigit(ch))
//             push(ch - '0');
//         else
//         {
//             op2 = pop();
//             op1 = pop();
//             switch (ch)
//             {
//             case '+':
//                 res = op1 + op2;
//                 break;
//             case '-':
//                 res = op1 - op2;
//                 break;
//             case '*':
//                 res = op1 * op2;
//                 break;
//             case '/':
//                 res = op1 / op2;
//                 break;
//             case '^':
//                 res = pow(op1, op2);
//                 break;
//             }
//             push(res);
//         }
//     }
//     printf("result of postfix exp %d\n", res);
// }
// // int tow(int n, char s, char t, char d)
// // {
// //     if (n == 1)
// //     {
// //         printf("move disk 1 from %c to % c", s, d);
// //         return 0;
// //     }
// //     tow(n - 1, s, d, t);
// //     printf("move disk % d from % c to % c", n, s, d);
// //     tow(n - 1, t, s, d);
// // }
// int main()
// {
//     // int ch;
//     // do
//     // {
//     //     printf("1: evaluation of postfix expression   2: Tower of Hanoi");
//     //     printf("enter your choice\n");
//     //     scanf("% d", &ch);
//     //     switch (ch)
//     //     {
//     //     case 1:
//     //         eval();
//     //         break;
//     //     case 2:
//     //         tow();
//     //         break;
//     //     }
//     // } while (ch <= 2);
//     eval();
//     return 0;
// }

#include <stdio.h>

struct node
{
    int data;
    struct node *next;
} *start = NULL, *q, *t;

int main()
{
    int ch;
    void insert_beg();
    void insert_end();
    int insert_pos();
    void display();
    void delete_beg();
    void delete_end();
    int delete_pos();

    while (1)
    {
        printf("\n\n---- Singly Linked List(SLL) Menu ----");
        printf("\n1.Insert\n2.Display\n3.Delete\n4.Exit\n\n");
        printf("Enter your choice(1-4):");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n---- Insert Menu ----");
            printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert at specified position\n4.Exit");
            printf("\n\nEnter your choice(1-4):");
            scanf("%d", &ch);

            switch (ch)
            {
            case 1:
                insert_beg();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                insert_pos();
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice!!");
            }
            break;

        case 2:
            display();
            break;

        case 3:
            printf("\n---- Delete Menu ----");
            printf("\n1.Delete from beginning\n2.Delete from end\n3.Delete from specified position\n4.Exit");
            printf("\n\nEnter your choice(1-4):");
            scanf("%d", &ch);

            switch (ch)
            {
            case 1:
                delete_beg();
                break;
            case 2:
                delete_end();
                break;
            case 3:
                delete_pos();
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice!!");
            }
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong Choice!!");
        }
    }
    return 0;
}

void insert_beg()
{
    int num;
    t = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &num);
    t->data = num;

    if (start == NULL) //If list is empty
    {
        t->next = NULL;
        start = t;
    }
    else
    {
        t->next = start;
        start = t;
    }
}

void insert_end()
{
    int num;
    t = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &num);
    t->data = num;
    t->next = NULL;

    if (start == NULL) //If list is empty
    {
        start = t;
    }
    else
    {
        q = start;
        while (q->next != NULL)
            q = q->next;
        q->next = t;
    }
}

int insert_pos()
{
    int pos, i, num;
    if (start == NULL)
    {
        printf("List is empty!!");
        return 0;
    }

    t = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &num);
    printf("Enter position to insert:");
    scanf("%d", &pos);
    t->data = num;

    q = start;
    for (i = 1; i < pos - 1; i++)
    {
        if (q->next == NULL)
        {
            printf("There are less elements!!");
            return 0;
        }

        q = q->next;
    }

    t->next = q->next;
    q->next = t;
    return 0;
}

void display()
{
    if (start == NULL)
    {
        printf("List is empty!!");
    }
    else
    {
        q = start;
        printf("The linked list is:\n");
        while (q != NULL)
        {
            printf("%d->", q->data);
            q = q->next;
        }
    }
}

void delete_beg()
{
    if (start == NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q = start;
        start = start->next;
        printf("Deleted element is %d", q->data);
        free(q);
    }
}

void delete_end()
{
    if (start == NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q = start;
        while (q->next->next != NULL)
            q = q->next;

        t = q->next;
        q->next = NULL;
        printf("Deleted element is %d", t->data);
        free(t);
    }
}

int delete_pos()
{
    int pos, i;

    if (start == NULL)
    {
        printf("List is empty!!");
        return 0;
    }

    printf("Enter position to delete:");
    scanf("%d", &pos);

    q = start;
    for (i = 1; i < pos - 1; i++)
    {
        if (q->next == NULL)
        {
            printf("There are less elements!!");
            return 0;
        }
        q = q->next;
    }

    t = q->next;
    q->next = t->next;
    printf("Deleted element is %d", t->data);
    free(t);

    return 0;
}