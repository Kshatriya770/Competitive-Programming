import java.util.*;
public class New {
    public static void main(String[] args) {
        java.util.LinkedList<String> list = new java.util.LinkedList<String>();
        list.addFirst("a");
        list.addFirst("is");
        System.out.println(list);
        list.addFirst("this");
        list.addLast("list");
        list.add("check");  //add by default add the element to the last
        System.out.println(list);

        System.out.println(list.size());

        for(int i = 0; i<list.size(); i++){
            System.out.print(list.get(i) + " -> ");
        }
        System.out.println("NULL");

        list.removeFirst();
        System.out.println(list);
        list.removeLast();
        System.out.println(list);
        list.remove();// delete the first element
        System.out.println(list); 
        list.remove(1); // removing from the index
        System.out.println(list);
    }
}
