#include<stdio.h>
int search(BST*t,int val)
{
    NODE*a=t->rt;
    int flg=0;
    while(1)
    {
        if(s->data==val)
        t->curr=a;
        flg=1;
        break;
    }
    if(val<a->left==NULL)
    {
    break;
    t->prnt=a;
    a=a->left;
    }
    else 
    {
        if(a->right==NULL)
        break;
        t->prnt=a;
        a=a->right;
    }

    return flg;
}
