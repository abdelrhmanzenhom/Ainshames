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
    
    public partial class Form4 : Form
    {
        CrystalReport2 CR;
        public Form4()
        {
            InitializeComponent();
        }

        private void crystalReportViewer2_Load(object sender, EventArgs e)
        {

        }

        private void Form4_FormClosing(object sender, FormClosingEventArgs e)
        {
            e.Cancel=true;
            this.Hide();
        }

        private void button1_Click(object sender, EventArgs e)
        {
           
            crystalReportViewer2.ReportSource = CR;
        }

        private void Form4_Load(object sender, EventArgs e)
        {
            CR = new CrystalReport2();
        }
    }
}
