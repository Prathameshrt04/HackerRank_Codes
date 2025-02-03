import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        
        int len=A.length();
        boolean flag=true;
        for(int i=0;i<((len/2)-1);i++){
            if(A.charAt(i) !=A.charAt(len-i-1)){
                flag=false;
            }
        }
        
        if(flag==true){
            System.out.println("Yes");
        }
        else System.out.println("No");
        
    }
}



