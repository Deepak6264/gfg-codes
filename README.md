class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        Node* a= node1;
        Node* b = node2;
        priority_queue<int> maxh;
        while(a!= NULL){
            maxh.push(a->data);
            a = a->next;
        }
        while(b!= NULL){
            maxh.push(b->data);
            b = b->next;
        }
        Node* result = nullptr; 
        Node* current = nullptr;

       
        while (!maxh.empty())
        {
            Node* newNode = new Node{maxh.top(), nullptr}; 
            maxh.pop();

            
            if (result == nullptr)
            {
                result = newNode;
                current = newNode;
            }
            else
            {
                current->next = newNode;
                current = newNode;
            }
        }

        return result;
    }
};
