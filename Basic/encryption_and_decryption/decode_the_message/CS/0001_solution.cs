using System.IO;
using System; 
using System.Text; 

class Program
{
    static void Main()
    {
        int t=Convert.ToInt32(Console.ReadLine());
        while(t-- != 0)
        {   
            int n=Convert.ToInt32(Console.ReadLine());
            string inputString = Console.ReadLine();
            StringBuilder sb = new StringBuilder();
            for (int i=0; i<n; i++){
                for(int j=0; j<5; j+=2){
                    sb.Append(Convert.ToChar(Convert.ToInt32(inputString.Substring(i+(i*6)+j, 2), 16)));
                }  
            }
            Console.WriteLine(sb);
        }

    }
}