package Inheritance.javaVersion;
/**
 * Mammal.java
 * This class represents a Mammal with a name and a method to make a sound.
 */
public class Mammal implements Feedable {
    private String name;

    public Mammal(String name) {
        this.name = name;
    }

    @Override
    public void eat() {
        System.out.println(name + " is eating.");
    }

    @Override
    public void drink() {
        System.out.println(name + " is drinking.");
    }

    public String getName() {
        return name;
    }

    public void makeSound() {
        System.out.println(name + " makes a sound.");
    }
}