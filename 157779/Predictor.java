public class Predictor{
    public static int predict(int year){
        switch (year % 4){
            case 0: year += 2;break;
            case 1: year += 1;break;
            case 2: year = year;break;
            case 3: year += 3;break;
        }
        return year;
    }
    public static void main(String[] args){
        System.out.print(predict(2026));
    }
}