using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Oracle.DataAccess.Client;
using Oracle.DataAccess.Types;

namespace version1
{
    public partial class Form2 : Form
    {
                    string ordb = "Data Source=orcl; User Id=scott; password=tiger;";

        OracleDataAdapter adapter;
        OracleCommandBuilder builder;
       // DataSet ds = new DataSet();
        DataSet dt;
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            string cmdstr = "select * from Auctions order by Price DESC";
// string cmdstr = "select AuctionName,AuctionStatus, Price , ProductID, AuctionDate from Auctions GROUP BY  AuctionName, Price,AuctionStatus, ProductID, AuctionDate order by Price DESC";
            adapter = new OracleDataAdapter(cmdstr, ordb);

            // Create a DataTable and fill it with data from the OracleDataAdapter
            dt= new DataSet();
            adapter.Fill(dt);

            // Define a primary key for the DataTable

            // Set the DataTable as the DataSource for the DataGridView
            dataGridView1.DataSource = dt.Tables[0];

            // Set the DataTable as the source of data for the OracleDataAdapter
           // adapter.SelectCommand = new OracleCommand(cmdstr, new OracleConnection(ordb));
            //adapter.Fill(dt.Tables[0]);
           

        }


        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            builder = new OracleCommandBuilder(adapter);
            adapter.Update(dt.Tables[0]);
            MessageBox.Show("saved");
        }

        private void Form2_FormClosing(object sender, FormClosingEventArgs e)
        {
            e.Cancel = true;
            this.Hide();
        }
    }
    }

