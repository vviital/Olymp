using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Шифр
{
    public partial class Form1 : Form
    {
        public Dictionary<char, char> Dictionary = new Dictionary<char, char>();
 
        public Form1()
        {
            InitializeComponent();
            Dictionary.Add('й', 'я');
            Dictionary.Add('я', 'й');
            Dictionary.Add('ц', 'ч');
            Dictionary.Add('ч', 'ц');
            Dictionary.Add('у', 'с');
            Dictionary.Add('с', 'у');
            Dictionary.Add('к', 'м');
            Dictionary.Add('м', 'к');
            Dictionary.Add('е', 'и');
            Dictionary.Add('и', 'е');
            Dictionary.Add('н', 'т');
            Dictionary.Add('т', 'н');
            Dictionary.Add('г', 'ь');
            Dictionary.Add('ь', 'г');
            Dictionary.Add('ш', 'б');
            Dictionary.Add('б', 'ш');
            Dictionary.Add('щ', 'ю');
            Dictionary.Add('ю', 'щ');
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string text = this.richTextBox1.Text.ToLower();
            this.richTextBox2.Clear();
            for (int i = 0; i < text.Length; ++i)
            {
                if (Dictionary.ContainsKey(text[i]))
                    richTextBox2.Text += Dictionary[text[i]];
                else
                {
                    richTextBox2.Text += text[i];
                }
            }
        }
    }
}
