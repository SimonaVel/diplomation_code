using System;
using System.Threading;
// this is a simple example of using threads in C#, not for a real applications
class Program
{
    static void SayHello()
    {
        Console.WriteLine("Hello from thread!");
    }

    static void Main()
    {
        Thread t = new Thread(SayHello);
        t.Start();
        t.Join();  // Wait for the thread to complete
        Console.WriteLine("Hello from main!");
    }
}