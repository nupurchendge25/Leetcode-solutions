class Node{
    
    public:
    int data;
    Node* next;
        Node(int val){
            data=val;
            next=nullptr;
        }
};

class MyLinkedList {
public:
Node* head;
int size;
    MyLinkedList() {
        head=nullptr;
        size=0;
    }
    
    int get(int index) {
        if(index < 0 || index >= size) return -1;
        Node* temp = head;
        int count = 0;
        while (temp != nullptr) {
            if (count == index) return temp->data;
            temp = temp->next;
            count++;
        }
        return -1;
    }
        
   void addAtHead(int val) {
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
    size++;
}

    
    void addAtTail(int val) {
        Node* newnode=new Node(val);
        Node* temp=head;
        if(temp==nullptr){
            head=newnode;
            size++;
            return;
        }
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
        size++;
    }
    
    void addAtIndex(int index, int val) {
    if(index < 0 || index > size) return; // invalid

    if(index == 0) { addAtHead(val); return; }
    if(index == size) { addAtTail(val); return; }

    Node* temp = head;
    for(int i = 0; i < index - 1; i++) {
        temp = temp->next;
    }
    Node* newnode = new Node(val);
    newnode->next = temp->next;
    temp->next = newnode;
    size++;
}
    
    void deleteAtIndex(int index) {
    if(index < 0 || index >= size) return;
    
    if(index == 0) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
    } else {
        Node* temp = head;
        for(int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
    size--;
}

};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */