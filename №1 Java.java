public class Main {
    public static void main(String[] args) {
        String str = "AaBbCcDd"; //Строчка
        
        // Четные позиции
        System.out.print("str[::2] ");
        for (int i = 0; i < str.length(); i += 2) { //Цикл с шагом 2, начиная с 0
            System.out.print(str.charAt(i)); //Вывод
        }
        System.out.println(); //Переход
        
        // Нечетные позиции
        System.out.print("str[1::2] ");
        for (int i = 1; i < str.length(); i += 2) { //Цикл с шагом 2, начиная с 1
            System.out.print(str.charAt(i)); //Вывод
        }
    }
}