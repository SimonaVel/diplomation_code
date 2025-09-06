import java.io.*;
import java.net.*;

public class SimpleServer {
    public static void main(String[] args) throws IOException {
        try (ServerSocket server = new ServerSocket(5000)) {
            System.out.println("Java Server started on port 5000...");

            while (true) {
                Socket client = server.accept();
                OutputStream out = client.getOutputStream();
                out.write("Hello from Java server!\n".getBytes());
                client.close();
            }
        }
    }
}
