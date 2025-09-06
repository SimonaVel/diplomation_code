using System;
using System.Net.Sockets;
using System.Text;

class SimpleClient
{
    static void Main()
    {
        TcpClient client = new TcpClient("127.0.0.1", 5000);
        NetworkStream stream = client.GetStream();

        byte[] buffer = new byte[1024];
        int bytes = stream.Read(buffer, 0, buffer.Length);
        Console.WriteLine("Received: " + Encoding.UTF8.GetString(buffer, 0, bytes));

        client.Close();
    }
}