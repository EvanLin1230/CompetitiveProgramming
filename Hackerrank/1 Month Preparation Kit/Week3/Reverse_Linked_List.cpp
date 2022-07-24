// print the node values
void printAllNode(SinglyLinkedListNode* llist){
    while(llist!=nullptr){
        cout << llist->data << " ";
        llist = llist -> next;
    }
    cout << endl;
}

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    
    SinglyLinkedListNode* Result;
    SinglyLinkedListNode* back = llist->next; // let the node seperated one by one and add into Result
    SinglyLinkedListNode* temp = llist; // get the nodes without 
    
    // Result: initial, After this only let the temp get
    Result = llist;
    Result -> next = nullptr;
    
    if(llist->next == nullptr){
        return Result;
    }
    
    while(temp != nullptr){
        temp = back -> next;
        back -> next = Result;
        Result = back;
        back = temp;
    }
    
    return Result;
}
