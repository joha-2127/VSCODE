class s {
    int x, y;

}

class s1 extends s {
    void disp() {
        System.out.println("Enter the number:");
        x = 1;
        y = 3;
    }

}

class s2 extends s1 {
    void input() {

        System.out.println(x + " " + y);
    }
}

class test {
    public static void main(String[] args) {
        s2 r = new s2();

        r.disp();
        r.input();
    }
}