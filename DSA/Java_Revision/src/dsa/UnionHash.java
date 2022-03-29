//package dsa;
//import java.util.*;
//
//
//public class UnionHash {
//
//	public static void main(String[] args) {
//		// TODO Auto-generated method stub
//		Scanner sc = new Scanner(System.in);
//		int a = sc.nextInt();
//		int b = sc.nextInt();
//		
//		int array1[] = new int[a];
//		int array2[] = new int[b];
//		
//		for(int i = 0; i<a;i++) {
//			array1[i] = sc.nextInt();
//		}
//		for(int i = 0; i<b;i++) {
//			array2[i] = sc.nextInt();
//		
//		
//		System.out.println("Array 1 : " + Arrays.toString(array1));
//
//		System.out.println("Array 2 : " + Arrays.toString(array2));
//
//		// creating a new Set
//		Set<Integer> unionOfArrays = new HashSet<>();
//
//		// adding the first array to set
//		//unionOfArrays.addAll(Arrays.asList(array1));
//
//		// adding the second array to set
//		//unionOfArrays.addAll(Arrays.asList(array2));
//
//		// converting set to array.
//		Integer[] unionArray = {};
//		unionArray = unionOfArrays.toArray(unionArray);
//
//		// printing the union of two arrays.
//		System.out.println("Union of two arrays: " + Arrays.toString(unionArray));
//	}
//
//}
