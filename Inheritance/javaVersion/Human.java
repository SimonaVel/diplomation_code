package Inheritance.javaVersion;

public class Human extends Mammal {
    public Human(String name) {
        super(name);
    }
    
    public String getName() {
        return super.getName();
    }

    @Override
    public void makeSound() {
        System.out.println("Let me do my own thing.");
    }
}