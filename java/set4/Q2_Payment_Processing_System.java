interface Payment {
    void makePayment(double amount);

    void generateReceipt();
}

class CreditCardPayment implements Payment {
    double paid;

    public void makePayment(double a) {
        paid = a;
        System.out.println("Credit card charged: " + a);
    }

    public void generateReceipt() {
        System.out.println("Credit Card Receipt: " + paid);
    }
}

class UPIPayment implements Payment {
    double paid;

    public void makePayment(double a) {
        paid = a;
        System.out.println("UPI payment successful: " + a);
    }

    public void generateReceipt() {
        System.out.println("UPI Receipt: " + paid);
    }
}

class CashPayment implements Payment {
    double paid;

    public void makePayment(double a) {
        paid = a;
        System.out.println("Cash received: " + a);
    }

    public void generateReceipt() {
        System.out.println("Cash Receipt: " + paid);
    }
}

public class Q2_Payment_Processing_System {
    public static void main(String[] x) {
        Payment p = new CreditCardPayment();
        p.makePayment(1500);
        p.generateReceipt();

        p = new UPIPayment();
        p.makePayment(750);
        p.generateReceipt();

        p = new CashPayment();
        p.makePayment(500);
        p.generateReceipt();
    }
}