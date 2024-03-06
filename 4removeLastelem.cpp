// Remove the last k elements of a queue.
#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>&q){
    while(q.size()>0){
        cout<<q.front()<<"";
        q.pop();
    }
    cout<<endl;
}
void deletee(queue<int>&q,int k){
    int n=q.size();
    int st=q.size()-k;
    while(n>0){
        while(st>0){
            q.push(q.front());
            q.pop();
            st--;
            n--;
        }
        q.pop();
        n--;
        

    }
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    
    cout << endl;
    deletee(q,3);
    display(q);
    
}

