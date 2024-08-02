#include<iostream>
#include<queue>
using namespace std;
int main(){
                                                    // PRIORITY QUEUE
    // In this Queue --> Maximum value -->Highest priority
    priority_queue<int>pq;
    pq.push(10);
    pq.push(200);
    pq.push(300);
    pq.push(40);
    cout<<"The Size of Priority queue is : "<<pq.size()<<endl;
    pq.pop(); // priority --> Maximum value
    cout<<"Top of element is : "<<pq.top()<<endl;  //Top Element --> Maximum value element --> maximum priority
    cout<<"The Size of priority queue is : "<<pq.size()<<endl;
    /*
    .empty()
    .size()
    .top()
    .push()
    .pop()
    .swap()
    */
                                                    // STACK
                                        // It follows LIFO properties
    /*
    All these are the memeber functions of the STACK
    .empty()
    .size()
    .top()
    .push()
    .pop()
    .swap()
    */
                                                    // QUEUE
                                        // It follows FIFO properties
    // queue<int>q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // cout<<q.front()<<endl;
    // cout<<q.back()<<'\n';
    // cout<<"Size of Queue is : "<<q.size()<<endl;
    // q.pop();
    // cout<<"Size of Queue after deletion from queue is : "<<q.size();
    // if(q.empty()){
    //     cout<<"Your queue is Empty"<<endl;
    // }
    // else{
    //     cout<<"Your queue is not Empty"<<endl;
    // }

                    //swaping one queue from the other
    // queue<int>q1;
    // q1.push(23);
    // q1.push(34);
    // q1.push(45);

    // queue<int>q2;
    // q2.push(12);
    // q2.push(2);
    // q2.push(56);

    // q1.swap(q2);
    // cout<<q1.front()<<" "<<q1.back()<<endl;
    // cout<<q2.front()<<" "<<q2.back()<<endl;
    return 0;
}