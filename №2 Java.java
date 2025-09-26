import java.util.*;

public class Main {
    public static void main(String[] args) {
        char[] original = {'a', '1', 'b', '2', 'c', '3'}; //������
        ArrayList<Character> letters = new ArrayList<>(); //�������� ������
        ArrayList<Character> numbers = new ArrayList<>(); //�������� ������

        for (char c : original) { //������ ��������
            if (c >= 'a' && c <= 'z') { //�������� �� �����
                letters.add(c); //���������� ����� � ������
            } else if (c >= '0' && c <= '9') { //�������� �� �����
                numbers.add(c); //���������� ����� � ������
            }
        }

        // ����� ����
        for (char c : letters) {
            System.out.print(c);
        }
        System.out.println();

        // ����� ����
        for (char c : numbers) {
            System.out.print(c);
        }
    }
}