public class NewLl {
    private Node head;
    private Node tail;

    private int size;
    public NewLl(){
        this.size  = 0;
    }


    //display
    public void display(){
        Node temp = head;
        while(temp != null){
            System.out.print(temp.value + " -> ");
            temp = temp.next;
        }
    }


    //Insert First
    public void insertFirst(int val){
        Node node = new Node(val);
        node.next = head;
        
        head = node;

        if(tail == head){
            tail = head;

        }
        size += 1;
    }

    private class Node{
        public NewLl.Node next;
        public int value;

        public Node(int value){
            this.value = value;
        }

        public Node(int value, Node next){
            this.value = value;
            this.next = next;
        }
    }
}
