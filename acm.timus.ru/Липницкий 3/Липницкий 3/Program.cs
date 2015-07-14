using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace Липницкий_3
{
    class Table
    {
        public char[] arr = new char[] {'а', 'б', 'в', 'г', 'д', 'е', 'ё', 'ж', 'з', 'и', 'й', 'к', 'л', 'м', 'н', 'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ъ', 'ы', 'ь', 'э', 'ю', 'я'};
        public int[] revarr = new int[1 << 16];
        public int[] revarr1 = new int[1 << 16];

        public void build()
        {
            for (int i = 0; i < arr.Length; ++i) revarr[arr[i]] = i;
        }

        public void rebuild(string filename)
        {
            StreamReader reader = new StreamReader(filename);
            string s = reader.ReadLine();
            string[] ss = s.Split(' ');
            for (int i = 0; i < arr.Length; ++i)
            {
                arr[i] = ss[i][0];
                revarr[arr[i]] = i;
            }
            reader.Close();
        }

        public void rebuild2()
        {
            for (int i = 0; i < revarr1.Length; ++i) revarr1[i] = -1;
            int[] b1 = { 'б', 'в', 'г', 'д', 'ж', 'з', 'к', 'л', 'м', 'н'};
            int[] b2 = { 'щ', 'ш', 'ч', 'ц', 'х', 'ф', 'т', 'с', 'р', 'п'};
            for (int i = 0; i < b1.Length; ++i)
            {
                revarr1[b1[i]] = revarr[b2[i]];
                revarr1[b2[i]] = revarr[b1[i]];
            }
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Encoding encoding = Encoding.UTF8; //Encoding.GetEncoding(1251);
            StreamReader reader = new StreamReader("D:/Программирование/Олимпы/acm.timus.ru/Липницкий 3/Липницкий 3/input.txt", encoding, false);
            StreamWriter writer = new StreamWriter("D:/Программирование/Олимпы/acm.timus.ru/Липницкий 3/Липницкий 3/output.txt", false, encoding);
            string s = reader.ReadLine();
            Solver solve = new Solver4();
            string answer = solve.solve(s);
            writer.WriteLine(answer);
            writer.Close();
        }
    }

    abstract class Solver
    {
        public abstract string solve(String s);
    }

    class Solver1 : Solver
    {
        public override string solve(string s)
        {
            StringBuilder builder = new StringBuilder();
            Table table = new Table();
            table.build();
            int mod = 33;
            for (int iter = 0; iter < mod; ++iter)
            {
                builder.Append((iter - mod) + " ");
                for (int i = 0; i < s.Length; ++i)
                {
                    if (s[i] == ' ')
                    {
                        builder.Append(" ");
                        continue;
                    }
                    int index = table.revarr[s[i]];
                    index = (index + iter) % mod;
                    char ch = table.arr[index];
                    builder.Append(ch);
                }
                builder.Append("\n");
            }
            return builder.ToString();
        }
    }

    class Solver2 : Solver
    {
        public override string solve(string s)
        {
            StringBuilder builder = new StringBuilder();
            Table table = new Table();
            table.build(); table.rebuild2();
            for (int i = 0; i < s.Length; ++i)
            {
                if (s[i] == ' ' || s[i] == ',')
                {
                    builder.Append(s[i]);
                    continue;
                }
                int index = table.revarr1[s[i]];
                if (index == -1) index = table.revarr[s[i]];
                builder.Append(table.arr[index]);
            }
            return builder.ToString();
        }
    }

    class Solver3 : Solver
    {
        public override string solve(string s)
        {
            string[] ss = s.Split(' ');
            StringBuilder builder = new StringBuilder();
            char[,] arr = new char[ss[0].Length,ss.Length];
            for(int i=0; i<ss.Length; ++i)
                //if (i % 2 == 0)
                    for (int j = 0; j < ss[i].Length; ++j)
                    {
                        arr[j, i] = ss[i][j];
                    }
                //else
                //{
                //    for (int j = 0; j < ss[i].Length; ++j)
                //    {
                //        arr[j, i] = ss[i][ss[i].Length - j - 1];
                //    }
                //}
            for (int i = 0; i < ss[0].Length; ++i)
            {
                for (int j = 0; j < ss.Length; ++j) builder.Append(arr[i, j] + "");
                //builder.Append(' ');
            }
            return builder.ToString();
            for (int i = 0; i < ss[0].Length; ++i)
            {
                if (i % 2 == 0)
                    for (int j = 0; j < ss.Length; ++j) builder.Append(arr[i, j]);
                else
                    for (int j = ss.Length - 1; j >= 0; --j) builder.Append(arr[i, j]);
            }
            return builder.ToString();
        }
    }

    class Solver4 : Solver
    {
        public override string solve(string s)
        {
            StringBuilder builder = new StringBuilder();
            Table table = new Table();
            table.build();
            string key = "япомнючудноемгновенье";
            for (int i = 0; i < 5; ++i) key += key;
            int mod = 33;
            int cnt = 0;
            for (int i = 0; i < s.Length; ++i)
            {
                if (s[i] == ' ')
                {
                    builder.Append(' ');
                    continue;
                }
                int k = table.revarr[key[cnt++]];
                int v = table.revarr[s[i]];
                int val = (v - k + 5 * mod) % mod;
                builder.Append(table.arr[val]);
            }
            return builder.ToString();
        }
    }
}
