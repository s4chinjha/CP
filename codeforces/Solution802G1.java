import java.util.Scanner;

public class Solution802G1 {
    
   public static void main(String[] args) {
    
    Scanner sc = new Scanner(System.in);

    String input = sc.nextLine();

    String match = "heidi";int i = 0;
    int j = 0;
    while(i < input.length() && j < match.length()){

        if(input.charAt(i) != match.charAt(j)){
            i++;
        }
        else{
            j++;
        }
    }

    if(j >= match.length()){
        System.out.println("YES");
    }
    else{
        System.out.println("NO");
    }
   }
}

