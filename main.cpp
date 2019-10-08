#include <iostream>
using namespace std;
struct pq
{
    int value;
    int priority;
    pq *frontaddress;
    pq *backaddress;
};
pq *front=NULL , *rear=NULL ;
//for enqueuing
int enqueue(int value , int priorities )
{
    cout<<"------------enqueing-----------"<<"\n";
    pq *temp=new pq;

    temp->value=value;
    temp->priority=priorities;
    temp->frontaddress=NULL;
    temp->backaddress=NULL;
    if(front==NULL)
    {
        front=temp;
        rear=temp;
        cout<<temp->value<<"-->"<<temp->priority<<"\n";
    }
    else
    {
        cout<<temp->value<<"-->"<<temp->priority<<"\n";
        rear->frontaddress=temp;
        temp->backaddress=rear;
        rear=rear->frontaddress;
    }

}
//for display
int display()
{ cout<<"------------displaying-----------"<<"\n";
    pq *temp=front;


    while(temp->frontaddress!=NULL)
    {
        cout<<temp->value<<"-->"<<temp->priority<<"\n";
        temp=temp->frontaddress;

    }
    cout<<temp->value<<"-->"<<temp->priority<<"\n";

}
//for dequeuing
int dequeue(){
    cout<<"------------dequeing-----------"<<"\n";
 int maxi=0;

    pq *temp=front;
    while(temp->frontaddress!=NULL){

        if(temp->priority > maxi)
        {
            maxi=temp->priority;

        }
        temp=temp->frontaddress;
    }
    if(temp->priority > maxi)
    {
        maxi=temp->priority;

    }

    temp=front;

    while(temp->priority!=maxi){
     temp=temp->frontaddress;
     }

if(temp==front)
{

    front=front->frontaddress;
    cout<<temp->value<<"-->"<<temp->priority<<"\n";
}
    else if(temp==rear)
{
    rear=rear->backaddress;
    cout<<temp->value<<"-->"<<temp->priority<<"\n";
    rear->frontaddress=NULL;
    temp->frontaddress=NULL;

}
    else
{

    cout<<temp->value<<"-->"<<temp->priority<<"\n";
    pq *temp2;
    temp2=temp->backaddress;
    temp2->frontaddress=temp->frontaddress;
    temp2=temp->frontaddress;
    temp2->backaddress=temp->backaddress;


}

    return 0;


}


int main()
{
enqueue(3,16);
enqueue(4,19);
enqueue(5,11);
enqueue(6,8);
enqueue(7,5);
display();
dequeue();
dequeue();
display();
dequeue();
dequeue();
display();

}

