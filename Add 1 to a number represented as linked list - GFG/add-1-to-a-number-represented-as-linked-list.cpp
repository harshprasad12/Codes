// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

Node * reverse(Node *root)
{
    Node *p=root;
    Node *q=NULL;
    Node *r=NULL;
  while(p)
{
    r=q;
    q=p;
    p=p->next;
    q->next=r;

    
}
root=q;
    
    
    return root;
    
}

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
     head=  reverse(head);
      int carry=1;
      Node *p=head;
     
      int sum=0;
      while(p)
      {
          sum=carry+p->data;
          if(sum==10)
          {
              p->data=0;
              carry==1;
          }
          else
          {
              p->data=sum;
              carry=0;
              
              
          }
          p=p->next;
          
          
      }
      
      Node *q= reverse(head);
      if(carry==1)
      {
          Node *t=new Node(1);
          t->next=q;
          q=t;
      }
      return q;
    }
};
// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends