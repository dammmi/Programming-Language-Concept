import java.util.Scanner;
import java.io.*;
/**
 * A -> I = E
 * E -> P O P | P
 * O -> + | - | * | / | **
 * P -> I | L | UI | UL | (E)
 * U -> + | - | !
 * I -> C | CI
 * C -> a | b | ... | y | z
 * L -> D | DL
 * D -> 0 | 1 | ... | 8 | 9
 * */
public class Main {

    

    public static void main(String[] args) {
        s = "a=a";

        try {
            readWriteFile();
        }catch (IOException e){
            System.out.println("Error");
        }

    }

    public static void readWriteFile() throws IOException{
        File dir = new File(".");

        String source = dir.getCanonicalPath() + File.separator + "input.txt";
        String dest = dir.getCanonicalPath() + File.separator + "output.txt";
        // Delete the previous file if it exists
        new File(dest).delete();
        System.out.println("File should be placed in: "+source);
        File fin = new File(source);
        FileInputStream fis = new FileInputStream(fin);
        BufferedReader in = new BufferedReader(new InputStreamReader(fis));

        FileWriter fstream = new FileWriter(dest, true);
        BufferedWriter out = new BufferedWriter(fstream);

        String aLine = null;

        while ((aLine = in.readLine()) != null) {
            s = aLine.trim();
            i=0;
            if (A() && i == s.length()) {

                out.write("The string \"" + s + "\" is in the language.");
            }
            else {
                out.write("The string \"" + s + "\" is not in the language.");
            }
            out.newLine();
        }
        in.close();
        out.close();
    }

    private static boolean A() {

        if (I()) {
            if (EQ()) {
                if (E()) {
                    return true;
                }
                else {
                    return false;
                }
            }
        }

        return false;
    }

    private static boolean I() {

        if (C()) {
            return true;
        }

        return false;
    }
    private static boolean EQ(){
        if (i < s.length() && s.charAt(i) == '=') {
            ++i;
            return true;
        }

        return false;
    }
    private static boolean E() {

        if (P()) {
            if (O()){
                if (P()){
                    return true;
                }else{
                    return false;
                }
            }
            return true;
        }
        return false;
    }

    private static boolean C() {

        if (i < s.length() && s.charAt(i) >= 'a' && s.charAt(i) <= 'z') {
            ++i;
            if (C())
                return true;
            return true;
        }

        return false;
    }

    private static boolean P() {

        if (I()){
            return true;
        }

        else if (L()){
            return true;
        }
        else if(U()){
            if(I()){
                return true;
            }else if (L()){
                return true;
            }else{
                return false;
            }
        }
        else if (i < s.length() && s.charAt(i) == '(') {
            ++i;
            if (E()) {
                if (i < s.length() && s.charAt(i) == ')') {
                    ++i;
                    return true;
                }
            }
        }
        return false;
    }


    private static boolean L(){
        if (D()) {
            return true;
        }

        return false;
    }
    private static boolean D() {

        if (i < s.length() && (s.charAt(i) >= '0' && s.charAt(i) <= '9')) {
            ++i;
            if (D()){
                return true;
            }
            return true;
        }

        return false;
    }

    private static boolean U() {

        if (i < s.length() && (s.charAt(i) == '+' || s.charAt(i) == '-' || s.charAt(i) == '!')) {
            ++i;
            return true;
        }

        return false;
    }

    private static boolean O() {

        int a = i;
        if ((a+1) < s.length()&& (s.charAt(a) == '*' && s.charAt(a+1) == '*')){
            i+=2;
            return true;
        }
        if (i < s.length() && (s.charAt(i) == '*' || s.charAt(i) == '/' ||
                s.charAt(i) == '+' || s.charAt(i) == '-' )) {
            ++i;
            return true;
        }


        return false;
    }

    private static String s;
    private static int i;
    private static boolean ii;
    private static boolean ll;
}
