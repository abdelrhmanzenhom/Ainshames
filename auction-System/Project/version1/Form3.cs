using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace version1
{
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
        }
        
        Form2 form2 = new Form2();
        ActorsForm  ac=new ActorsForm();
        Form1 form1 = new Form1();
        Form4 form4 = new Form4();
        CrystalReport1 cr1 = new CrystalReport1();
        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            if (dataGridView1.CurrentCell.ColumnIndex.Equals(2) && e.RowIndex == 0)
            {
                if (dataGridView1.CurrentCell != null && dataGridView1.CurrentCell.Value != null) {
                    
                    form1.Show();
                }

                  
                
            }
            else if (dataGridView1.CurrentCell.ColumnIndex.Equals(2) && e.RowIndex == 1)
            {
                if (dataGridView1.CurrentCell != null && dataGridView1.CurrentCell.Value != null)
                    form4.Show();
            }
            else if (dataGridView1.CurrentCell.ColumnIndex.Equals(2) && e.RowIndex == 2)
            {
                if (dataGridView1.CurrentCell != null && dataGridView1.CurrentCell.Value != null)
                { form2.Show(); }
            }
            else if (dataGridView1.CurrentCell.ColumnIndex.Equals(2) && e.RowIndex == 3)
            {
                if (dataGridView1.CurrentCell != null && dataGridView1.CurrentCell.Value != null)
                    ac.Show();
            }
            else if (dataGridView1.CurrentCell.ColumnIndex.Equals(2) && e.RowIndex == 4)
            {
                if (dataGridView1.CurrentCell != null && dataGridView1.CurrentCell.Value != null)
                    MessageBox.Show("first");
            }
            else if (dataGridView1.CurrentCell.ColumnIndex.Equals(2) && e.RowIndex == 5)
            {
                if (dataGridView1.CurrentCell != null && dataGridView1.CurrentCell.Value != null)
                    MessageBox.Show("first");
            }

        }
        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            e.Cancel = true;
            this.Hide();  // optional: hide the form instead of closing it
        }

        private void Form3_Load(object sender, EventArgs e)
        {

        }

        private void Form3_Load_1(object sender, EventArgs e)
        {

        }
    }
}
