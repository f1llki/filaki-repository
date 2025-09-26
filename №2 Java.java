import java.util.*;

public class Main {
    public static void main(String[] args) {
        char[] original = {'a', '1', 'b', '2', 'c', '3'}; //Массив
        ArrayList<Character> letters = new ArrayList<>(); //Создание списка
        ArrayList<Character> numbers = new ArrayList<>(); //Создание списка

        for (char c : original) { //Чтение символов
            if (c >= 'a' && c <= 'z') { //Проверка на букву
                letters.add(c); //Добавление буквы с список
            } else if (c >= '0' && c <= '9') { //Проверка на цифру
                numbers.add(c); //Добавление цифры в список
            }
        }

        // Вывод букв
        for (char c : letters) {
            System.out.print(c);
        }
        System.out.println();

        // Вывод цифр
        for (char c : numbers) {
            System.out.print(c);
        }
    }
}