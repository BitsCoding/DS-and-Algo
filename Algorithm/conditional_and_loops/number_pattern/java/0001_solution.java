/**
 * solution of problem'number_pattern'.
 * @file 0001_solution.java
 * @author mohdishaq
 **/

import java.util.Scanner;

class Solution {

  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    
    int n = s.nextInt();
    int row = 1;
    while (row <= n) {
      int col = 1;
      int value = row;
      while (col <= row) {
        System.out.print(value + " ");
        value++;
        col++;
      }
      System.out.println();
      row++;
    }
  }
}

