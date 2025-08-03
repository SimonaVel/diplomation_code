package javaVersion;

public class Main {
    public static void main(String[] args) {
        Thread t = new Thread(() -> {
            System.out.println("Hello from thread!");
        });

        t.start();
        try {
            t.join();  // Wait for thread to finish
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        System.out.println("Hello from main!");
    }
}
