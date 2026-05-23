void addLast(Node *&_, int databaru) {
    Node *nodeBaru = _ Node;
    _->_ = databaru;
    _->next = nullptr;
     if (head == nullptr){
        head = nodeBaru;
        return;
        }
    Node *temp = _;
    while (temp->next != nullptr) {
            temp = temp->next;
    }