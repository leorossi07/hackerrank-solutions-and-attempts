#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class QueueWithTwoStacks{
    
private:
    vector<int> stack1;
    vector<int> stack2;
    
public:

    void enqueue(int number){
        stack1.push_back(number);
    }
    
    int dequeue(){

        if(stack2.empty()){
            while(!stack1.empty()){
                stack2.push_back(stack1.back());
                stack1.pop_back();
            }
        }
        if(!stack2.empty()){
            int temp = stack2.back();
            stack2.pop_back();
            return temp;
        }
        else
            return -1;
        
    }

    int printHeadOfStack(){
        if(stack2.empty()){
            while(!stack1.empty()){
                stack2.push_back(stack1.back());
                stack1.pop_back();
            }
        }
        if(!stack2.empty()){
            return stack2.back();
        }
        else
            return -1;
    }
};


int main() {
    int queries;
    cin >> queries;

    QueueWithTwoStacks queue;
    for (int i = 0; i < queries; ++i) {
        int query_type;
        cin >> query_type;

        if (query_type == 1) {
            int element;
            cin >> element;
            queue.enqueue(element);
        } else if (query_type == 2) {
            queue.dequeue();
        } else if (query_type == 3) {
            cout << queue.printHeadOfStack() << endl;
        }
    }

    return 0;
}