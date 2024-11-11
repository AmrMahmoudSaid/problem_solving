public class Main {
    public static void main(String[] args) {
        int x = 12321;
        String num = x +"";
        boolean check = true;
        if (x<0){
            System.out.println(false);
        }
        for (int i = 0; i<num.length()/2; i++){
            if (num.charAt(i)!=num.charAt((num.length()-1)-i)){
                check= false;
            }
        }
        System.out.println(check);
    }

}