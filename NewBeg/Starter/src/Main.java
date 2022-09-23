
public class Main {
    /**
     * @param args
     */
    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list.insertFirst(3);
        list.insertFirst(2);
        list.insertFirst(8);
        list.insertFirst(21);
        list.insertLast(88);
        list.insert(5, 3);

        System.out.println(list.deleteFirst());

        list.display();
        System.out.println();
        System.out.println(list.deleteLast());
        list.display();
        System.out.println();
        list.delete(2);
        list.display();
        list.find(2);
        
    }
}
