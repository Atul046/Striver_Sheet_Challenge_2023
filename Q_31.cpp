// Intersection of Two Linked Lists

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/
int solve(Node* head){

        int len = 0;

        while(head!=NULL){

            head = head->next;

            len++;

        }

        return len;

    }

Node* findIntersection(Node *head1, Node *head2)

{

    //Write your code here

    int length1 = solve(head1);

    int length2 = solve(head2);

 

    if(length1 > length2) return  findIntersection(head2,head1);

    int x = abs(length1-length2);

 

    while(x > 0){

        head2=head2->next;

        x--;

    }

    while(head1!=NULL && head2 != NULL){

        if(head1 == head2) return head1;

 

        head1 = head1->next;

        head2 = head2->next;

    }

    return NULL;

}
