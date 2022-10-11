
public class Main {
    /**
     * @param args
     */
    public static void main(String[] args) {
        // NewLl list = new NewLl();
        // list.insertFirst(23);
        // list.insertFirst(21);
        // list.insertFirst(55);
        // list.display();
        DoublyLl list = new DoublyLl();
        list.insertFirst(23);
        list.insertFirst(21);
        list.insertFirst(55);
        list.insertLast(99);

        //list.display();
        list.displayRev();
    }
}
