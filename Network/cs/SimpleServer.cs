using System;
using System.Net;
using System.Net.Sockets;
using System.Text;

class SimpleServer
{
    static void Main()
    {
        TcpListener server = new TcpListener(IPAddress.Any, 5000);
        server.Start();
        Console.WriteLine("C# Server started on port 5000...");

        while (true)
        {
            TcpClient client = server.AcceptTcpClient();
            NetworkStream stream = client.GetStream();

            byte[] buffer = Encoding.UTF8.GetBytes("Hello from C# server!\n");
            stream.Write(buffer, 0, buffer.Length);

            client.Close();
        }
    }
}
