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
// int tow(int n, char s, char t, char d)
// {
//     if (n == 1)
//     {
//         printf("move disk 1 from %c to % c\n", s, d);
//         return 0;
//     }
//     tow(n - 1, s, d, t);
//     printf("move disk % d from % c to % c\n", n, s, d);
//     tow(n - 1, t, s, d);
// }
// void main()
// {
//     int ch;
//     do
//     {
//         printf("1: evaluation of postfix expression   2: Tower of Hanoi\n");
//         printf("enter your choice\n");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//         case 1:
//             eval();
//             break;
//         case 2:
//             printf("enter the number of disk\n");
//             scanf("%d", &n);
//             tow(n, 's', 't', 'd');
//             break;
//         default:
//             printf("Invalid choice\n");
//         }
//     } while (ch <= 2);
// }

// Single Linked LIST Program

// #include <stdio.h>

// struct node
// {
//     int data;
//     struct node *next;
// } *start = NULL, *q, *t;

// int main()
// {
//     int ch;
//     void insert_beg();
//     void insert_end();
//     int insert_pos();
//     void display();
//     void delete_beg();
//     void delete_end();
//     int delete_pos();

//     while (1)
//     {
//         printf("\n\n---- Singly Linked List(SLL) Menu ----");
//         printf("\n1.Insert\n2.Display\n3.Delete\n4.Exit\n\n");
//         printf("Enter your choice(1-4):");
//         scanf("%d", &ch);

//         switch (ch)
//         {
//         case 1:
//             printf("\n---- Insert Menu ----");
//             printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert at specified position\n4.Exit");
//             printf("\n\nEnter your choice(1-4):");
//             scanf("%d", &ch);

//             switch (ch)
//             {
//             case 1:
//                 insert_beg();
//                 break;
//             case 2:
//                 insert_end();
//                 break;
//             case 3:
//                 insert_pos();
//                 break;
//             case 4:
//                 exit(0);
//             default:
//                 printf("Wrong Choice!!");
//             }
//             break;

//         case 2:
//             display();
//             break;

//         case 3:
//             printf("\n---- Delete Menu ----");
//             printf("\n1.Delete from beginning\n2.Delete from end\n3.Delete from specified position\n4.Exit");
//             printf("\n\nEnter your choice(1-4):");
//             scanf("%d", &ch);

//             switch (ch)
//             {
//             case 1:
//                 delete_beg();
//                 break;
//             case 2:
//                 delete_end();
//                 break;
//             case 3:
//                 delete_pos();
//                 break;
//             case 4:
//                 exit(0);
//             default:
//                 printf("Wrong Choice!!");
//             }
//             break;
//         case 4:
//             exit(0);
//         default:
//             printf("Wrong Choice!!");
//         }
//     }
//     return 0;
// }

// void insert_beg()
// {
//     int num;
//     t = (struct node *)malloc(sizeof(struct node));
//     printf("Enter data:");
//     scanf("%d", &num);
//     t->data = num;

//     if (start == NULL) //If list is empty
//     {
//         t->next = NULL;
//         start = t;
//     }
//     else
//     {
//         t->next = start;
//         start = t;
//     }
// }

// void insert_end()
// {
//     int num;
//     t = (struct node *)malloc(sizeof(struct node));
//     printf("Enter data:");
//     scanf("%d", &num);
//     t->data = num;
//     t->next = NULL;

//     if (start == NULL) //If list is empty
//     {
//         start = t;
//     }
//     else
//     {
//         q = start;
//         while (q->next != NULL)
//             q = q->next;
//         q->next = t;
//     }
// }

// int insert_pos()
// {
//     int pos, i, num;
//     if (start == NULL)
//     {
//         printf("List is empty!!");
//         return 0;
//     }

//     t = (struct node *)malloc(sizeof(struct node));
//     printf("Enter data:");
//     scanf("%d", &num);
//     printf("Enter position to insert:");
//     scanf("%d", &pos);
//     t->data = num;

//     q = start;
//     for (i = 1; i < pos - 1; i++)
//     {
//         if (q->next == NULL)
//         {
//             printf("There are less elements!!");
//             return 0;
//         }

//         q = q->next;
//     }

//     t->next = q->next;
//     q->next = t;
//     return 0;
// }

// void display()
// {
//     if (start == NULL)
//     {
//         printf("List is empty!!");
//     }
//     else
//     {
//         q = start;
//         printf("The linked list is:\n");
//         while (q != NULL)
//         {
//             printf("%d->", q->data);
//             q = q->next;
//         }
//     }
// }

// void delete_beg()
// {
//     if (start == NULL)
//     {
//         printf("The list is empty!!");
//     }
//     else
//     {
//         q = start;
//         start = start->next;
//         printf("Deleted element is %d", q->data);
//         free(q);
//     }
// }

// void delete_end()
// {
//     if (start == NULL)
//     {
//         printf("The list is empty!!");
//     }
//     else
//     {
//         q = start;
//         while (q->next->next != NULL)
//             q = q->next;

//         t = q->next;
//         q->next = NULL;
//         printf("Deleted element is %d", t->data);
//         free(t);
//     }
// }

// int delete_pos()
// {
//     int pos, i;

//     if (start == NULL)
//     {
//         printf("List is empty!!");
//         return 0;
//     }

//     printf("Enter position to delete:");
//     scanf("%d", &pos);

//     q = start;
//     for (i = 1; i < pos - 1; i++)
//     {
//         if (q->next == NULL)
//         {
//             printf("There are less elements!!");
//             return 0;
//         }
//         q = q->next;
//     }

//     t = q->next;
//     q->next = t->next;
//     printf("Deleted element is %d", t->data);
//     free(t);

//     return 0;
// }

// Lab Program 6

// #include <stdio.h>
// #define MAX 5
// int cq[MAX], f = 0, r = -1, i, j, c = 0, n, ele;
// void insert()
// {
//     if (c == MAX)
//     {
//         printf("CIRCULAR QUEUE OVERFLOW\n");
//         return;
//     }
//     printf("enter the value\n");
//     scanf("%d", &ele);
//     r = (r + 1) % MAX;
//     cq[r] = ele;
//     c++;
// }
// void delete_ele()
// {
//     if (c == 0)
//     {
//         printf("CIRCULAR QUEUE UNDERFLOW\n");
//         return;
//     }
//     printf("element deleted is %d\n", cq[f]);
//     f = (f + 1) % MAX;
//     c--;
// }
// void display()
// {
//     j = f;
//     if (c == 0)
//     {
//         printf("CIRCULAR QUEUE UNDERFLOW\n");
//         return;
//     }
//     printf("contents of CQ are\n");
//     for (i = 1; i <= c; i++)
//     {
//         printf("%d\t", cq[j]);
//         j = (j + 1) % MAX;
//     }
// }
// void main()
// {
//     int ch;
//     do
//     {
//         printf("\n1:insert 2:delete 3:display \n");
//         printf("enter your choice\n");
//         scanf("%d",&ch);
//         switch(ch)
//         {
//         case 1:
//             insert();
//             break;
//         case 2:
//             delete_ele();
//             break;
//         case 3:
//             display();
//             break;
//         default: printf("invalid choice\n");
//         }
//     }
// while (ch <= 3);
// }

// Lab Program 7
// #include <stdio.h>
// #include <malloc.h>

// typedef struct node
// {
//     char usn[11];
//     char name[20];
//     char sem[10];
//     char branch[10];
//     char phno[10];
//     struct node *link;
// } NODE;

// NODE *first = NULL;
// void create()
// {
//     int i, n;

//     NODE *nn;
//     printf("\nenter  value of  n \n"); // number of nodes in a linked list
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         nn = (NODE *)malloc(sizeof(NODE));
//         printf("Enter Details\n");
//         printf("enter usn:     name:	   branch:	 	   sem:	   phno\n");
//         scanf("%s%s%s%s%s", nn->usn, nn->name, nn->branch, nn->sem, nn->phno);
//         nn->link = first;
//         first = nn;
//     }
// }

// void insert_front()
// {
//     NODE *nn;
//     nn = (NODE *)malloc(sizeof(NODE));

//     printf("\nEnter Details\n");

//     printf("enter  usn:       name: 	 branch:	  	sem:	    phno:\n");
//     scanf("%s%s%s%s%s", nn->usn, nn->name, nn->branch, nn->sem, nn->phno);

//     nn->link = first;
//     first = nn;
// }

// void insert_end()
// {
//     NODE *nn, *PTR;
//     nn = (NODE *)malloc(sizeof(NODE));

//     printf("\nEnter Details\n");

//     printf("enter usn:       name:	     branch:	 	sem:	  phno:   \n ");
//     scanf("%s%s%s%s%s", nn->usn, nn->name, nn->branch, nn->sem, nn->phno);
//     PTR = first;
//     while (PTR->link != NULL)
//         PTR = PTR->link;
//     PTR->link = nn;
//     nn->link = NULL;
// }

// void delete_front()
// {
//     NODE *temp;

//     if (first == NULL)
//     {
//         printf("\nlist is empty");
//         return;
//     }

//     temp = first;
//     first = first->link;
//     free(temp);
// }

// void delete_end()
// {
//     NODE *temp;

//     if (first == NULL)
//     {
//         printf("\nlist is empty");
//         return;
//     }
//     temp = first;
//     while (temp->link != NULL)
//         temp = temp->link;
//     free(temp);
// }

// void display()
// {
//     int c = 0;
//     NODE *temp;

//     if (first == NULL)
//     {
//         printf("\n list is empty");
//         return;
//     }

//     temp = first;

//     printf("\ncontents are: \n");
//     while (temp != NULL)
//     {
//         printf("%s\t%s\t%s\t%s\t%s\t\n", temp->usn, temp->name, temp->branch, temp->sem, temp->phno);
//         temp = temp->link;
//         c++;
//     }

//     printf(" no. of nodes=%d", c);
// }

// void stack()
// {
//     int ch;

//     do
//     {
//         printf("\n1.push 2.pop 3.display");
//         printf("\nEnter your choice:");
//         scanf("%d", &ch);

//         switch (ch)
//         {
//         case 1:
//             insert_front();
//             break;
//         case 2:
//             delete_front();
//             break;
//         case 3:
//             display();
//             break;
//         default:
//             printf("\n Invalid choice:");
//         }
//     } while (ch <= 3);
// }
// void main()
// {
//     int ch;
//     do
//     {
//         printf("\n1.create    2.display   3.stack   4: insert_front    5: delete_front       6: insert_end    7: delete_end\n");
//         printf("enter your choice\n");
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
//             stack();
//             break;
//         case 4:
//             insert_front();
//             break;
//         case 5:
//             insert_end();
//             break;
//         case 6:
//             delete_front();
//             break;
//         case 7:
//             delete_end();
//             break;
//         default:
//             printf("\ninvalid choice\n");
//         }
//     } while (ch <= 7);
// }

// DS lab program 8

// #include <stdio.h>
// #include <malloc.h>
// typedef struct node

// {
//     char ssn[10];

//     char name[20];
//     char dept[10];

//     char desg[10];
//     char sal[10];
//     char phno[11];
//     struct node *llink;
//     struct node *rlink;
// } NODE;

// NODE *first = NULL;
// void create()
// {
//     NODE *temp, *nn;
//     int i, n;

//     printf("enter the number of nodes\n");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         nn = (NODE *)malloc(sizeof(NODE));

//         printf("enter the ssn,name,dept,designation,salary,phno\n");
//         scanf("%s%s%s%s%s%s", nn->ssn, nn->name, nn->dept, nn->desg, nn->sal, nn->phno);

//         if (first == NULL)
//         {
//             nn->rlink = NULL;
//             nn->llink = NULL;
//             first = nn;
//         }

//         else
//         {
//             temp = first;

//             while (temp->rlink != NULL)
//                 temp = temp->rlink;

//             temp->rlink = nn;
//             nn->llink = temp;
//             nn->rlink = NULL;
//         }
//     }
// }

// void insert_end()
// {
//     NODE *temp, *nn;
//     nn = (NODE *)malloc(sizeof(NODE));

//     printf("enter the ssn,name,dept,designation,salary,phno\n");
//     scanf("%s%s%s%s%s%s", nn->ssn, nn->name, nn->dept, nn->desg, nn->sal, nn->phno);

//     if (first == NULL)
//     {
//         nn->rlink = NULL;
//         nn->llink = NULL;
//         first = nn;
//         return;
//     }

//     temp = first;
//     while (temp->rlink != NULL)
//         temp = temp->rlink;

//     temp->rlink = nn;
//     nn->llink = temp;
//     nn->rlink = NULL;
// }

// void insert_front()
// {
//     NODE *nn;
//     nn = (NODE *)malloc(sizeof(NODE));

//     printf("enter ssn,name,dept,designation,salary,phno\n");
//     scanf("	%s%s%s%s%s%s", nn->ssn, nn->name, nn->dept, nn->desg, nn->sal, nn->phno);

//     nn->rlink = first;
//     first->llink = NULL;
//     first = nn;
// }

// void delete_front()
// {
//     NODE *temp;

//     if (first == NULL)
//     {
//         printf("list is empty\n");
//         return;
//     }

//     temp = first;

//     if (first->rlink == NULL)
//     {
//         first = NULL;
//         free(temp);
//         return;
//     }

//     first = first->rlink;
//     first->llink = NULL;

//     free(temp);
// }

// void delete_end()
// {
//     NODE *temp, *prev;

//     if (first == NULL)
//     {
//         printf("list is empty\n");
//         return;
//     }
//     prev = NULL;
//     temp = first;

//     if (first->rlink == NULL)
//     {
//         first = NULL;
//         free(temp);
//         return;
//     }

//     while (temp->rlink != NULL)
//     {
//         prev = temp;
//         temp = temp->rlink;
//     }
//     prev->rlink = NULL;
//     free(temp);
// }

// void display()
// {
//     NODE *temp;
//     temp = first;

//     if (first == NULL)
//     {
//         printf("list is empty\n");
//         return;
//     }
//     printf("contents are \n");
//     while (temp != NULL)
//     {
//         printf("%s\t%s\t%s\t%s\t%s%s\n", temp->ssn, temp->name, temp->desg, temp->dept, temp->sal, temp->phno);
//         temp = temp->rlink;
//     }
// }

// void dequeue()
// {
//     int ch;

//     do
//     {
//         printf("1:insert-front 2:insert-rear 3:delete front 4:delete rear,5display\n");
//         printf("enter your choice\n");
//         scanf("%d", &ch);

//         switch (ch)
//         {
//         case 1:
//             insert_front();
//             break;
//         case 2:
//             insert_end();
//             break;
//         case 3:
//             delete_front();
//             break;
//         case 4:
//             delete_end();
//             break;
//         case 5:
//             display();
//             break;
//         default:
//             printf("invalid choice");
//         }
//     } while (ch <= 5);
// }

// void main()
// {
//     int ch;

//     do
//     {
//         printf("1.create  2.display 3.dequeue\n");
//         printf("enter your choice\n");
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
//             dequeue();
//             break;
//         default:
//             printf("invalid choice");
//         }
//     } while (ch <= 3);
// }

// DS LAB PROGRAM 9

#include <stdio.h>
#include <math.h>
typedef struct node
{
    int cf;
    int xex, yex, zex;
    struct node *link;
} NODE;
NODE *p3 = NULL, *p3head = NULL;
NODE *insert(NODE *head, NODE *last, int n)
{
    int i;
    NODE *nn;
    if (head == NULL)
    {
        nn = (NODE *)malloc(sizeof(NODE));
        head = nn;
        last = nn;
        head->link = head;
    }
    for (i = 1; i <= n; i++)
    {
        nn = (NODE *)malloc(sizeof(NODE));
        printf("Enter the coefficient \n");
        scanf("%d", &nn->cf);
        printf("Enter the exponent values for the x, y and z\n");
        scanf("%d%d%d", &nn->xex, &nn->yex, &nn->zex);
        if (head->link == head)
        {
            nn->link = head;
            head->link = nn;
            last = nn;
        }
        else if (nn->xex > head->link->xex)
        {
            nn->link = head->link;
            head->link = nn;
        }
        else
        {
            nn->link = head;
            last->link = nn;
            last = nn;
        }
    }
    return last;
}
void display(NODE *last)
{
    NODE *temp = last->link->link;
    if (temp == NULL)
    {
        printf("LIST is empty\n");
        return;
    }
    while (temp != last)
    {
        printf("(%dx^%dy^%dz^%d)+", temp->cf, temp->xex, temp->yex, temp->zex);
        temp = temp->link;
    }
    printf("(%dx^%dy^%dz^%d)", last->cf, last->xex, last->yex, last->zex);
}
void add(NODE *p1, NODE *p2, int n1, int n2)
{
    NODE *nn = NULL, *a, *b;
    int i = 0, j = 0, comp;
    a = p1->link->link;
    b = p2->link->link;
    nn = (NODE *)malloc(sizeof(NODE));
    p3head = nn;
    p3 = nn;
    p3head->link = p3head;
    while (i < n1 && j < n2)
    {
        nn = (NODE *)malloc(sizeof(NODE));
        nn->link = p3head;
        p3->link = nn;
        p3 = nn;
        if (a->xex == b->xex)
        {
            nn->cf = a->cf + b->cf;
            nn->xex = a->xex;
            nn->yex = a->yex;
            nn->zex = a->zex;
            a = a->link;
            b = b->link;
            i++;
            j++;
        }
        else if (a->xex > b->xex)
        {
            nn->cf = a->cf;
            nn->xex = a->xex;
            nn->yex = a->yex;
            nn->zex = a->zex;
            a = a->link;
            i++;
        }
        else
        {
            nn->cf = b->cf;
            nn->xex = b->xex;
            nn->yex = b->yex;
            nn->zex = b->zex;
            b = b->link;
            j++;
        }
    }
    while (i < n1)
    {
        nn = (NODE *)malloc(sizeof(NODE));
        nn->link = p3head;
        p3->link = nn;
        p3 = nn;
        nn->cf = a->cf;
        nn->xex = a->xex;
        nn->yex = a->yex;
        nn->zex = a->zex;
        a = a->link;
        i++;
    }
    while (j < n2)
    {
        nn = (NODE *)malloc(sizeof(NODE));
        nn->link = p3head;
        p3->link = nn;
        p3 = nn;
        nn->cf = b->cf;
        nn->xex = b->xex;
        nn->yex = b->yex;
        nn->zex = b->zex;
        j++;
        b = b->link;
    }
}
void eval(NODE *p)
{
    int x, y, z, res = 0, xval, yval, zval;
    NODE *temp;
    temp = p->link->link;
    printf("\nEnter the value of x,y and z\n");
    scanf("%d%d%d", &x, &y, &z);
    while (temp != p)
    {
        xval = pow(x, temp->xex);
        yval = pow(y, temp->yex);
        zval = pow(z, temp->zex);
        res = res + temp->cf * xval * yval * zval;
        temp = temp->link;
    }
    xval = pow(x, temp->xex);
    yval = pow(y, temp->yex);
    zval = pow(z, temp->zex);
    res = res + temp->cf * xval * yval * zval;
    printf("\nThe result of the polynomial is :-  %d", res);
}
void main()
{
    int n1, n2;
    NODE *head1 = NULL, *head2 = NULL, *p1 = NULL, *p2 = NULL;
    printf("\nEnter the number of terms of first polynomial\n");
    scanf("%d", &n1);
    p1 = insert(head1, p1, n1);
    eval(p1);
    printf("\nEnter the number of terms of second polynomial\n");
    scanf("%d", &n2);
    p2 = insert(head2, p2, n2);
    eval(p2);
    add(p1, p2, n1, n2);
    printf("\nThe first polynomial is :- \n");
    display(p1);
    printf("\nThe second polynomial is :- \n");
    display(p2);
    printf("\nThe resultant polynomial is :- \n");
    display(p3);
}