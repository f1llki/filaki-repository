public class Main {
    public static void main(String[] args) {
        String str = "AaBbCcDd"; //�������
        
        // ������ �������
        System.out.print("str[::2] ");
        for (int i = 0; i < str.length(); i += 2) { //���� � ����� 2, ������� � 0
            System.out.print(str.charAt(i)); //�����
        }
        System.out.println(); //�������
        
        // �������� �������
        System.out.print("str[1::2] ");
        for (int i = 1; i < str.length(); i += 2) { //���� � ����� 2, ������� � 1
            System.out.print(str.charAt(i)); //�����
        }
    }
}