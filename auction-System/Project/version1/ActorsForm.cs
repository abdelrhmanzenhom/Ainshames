using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using Oracle.DataAccess.Client;
using Oracle.DataAccess.Types;

namespace version1
{
    public partial class ActorsForm : Form
    {
        string ordb = "data source=orcl; user id=scott; password=tiger;";
        OracleConnection conn;
        public ActorsForm()
        {
            InitializeComponent();
        }

        private void ActorsForm_Load(object sender, EventArgs e)
        {
            conn = new OracleConnection(ordb);
            conn.Open();

            OracleCommand cmd = new OracleCommand();
            cmd.Connection = conn;
          
            cmd.CommandText = "select UserID from USERS";

            cmd.CommandType = CommandType.Text;
         
            OracleDataReader dr = cmd.ExecuteReader();
            while (dr.Read())
            {
                cmb_ID.Items.Add(dr[0]);
              //  txt_Name.Text = dr[0].ToString();
                //txt_Gender.Text = dr[1].ToString();
            }
            dr.Close();

            cmd.CommandText = "select UserMode  from USERS";

            cmd.CommandType = CommandType.Text;
            bool flag1=false ,flag2 = false, flag3 = false;
            OracleDataReader dar = cmd.ExecuteReader();
            while (dar.Read())
            {
                
                if (flag1 == false && dar[0].ToString() == "Admin")
                {
                    comboBox2.Items.Add(dar[0]); flag1 = true;
                }

                else if (flag2 == false && dar[0].ToString() == "Bidder") { comboBox2.Items.Add(dar[0]); flag2 = true; }
                else if (flag3 == false && dar[0].ToString() == "Auctioneer") { comboBox2.Items.Add(dar[0]); flag3 = true; }



                if (flag1 == true && flag2 == true&&flag3==true) break;
            }
            dar.Close();

            cmd.CommandText = "select AuctionStatus from Auctions";

            cmd.CommandType = CommandType.Text;

            OracleDataReader daar = cmd.ExecuteReader();
            bool f1 = false;
            bool f2 = false;
            while (daar.Read())
            { if (f1 == false&&daar[0].ToString()=="Finished")
                {
                    comboBox5.Items.Add(daar[0]); f1 = true;
                }

                else if (f2 == false&& daar[0].ToString() == "present") { comboBox5.Items.Add(daar[0]); f2 = true; }

                if (f1 == true && f2 == true) break;
                
            
                //  txt_Name.Text = dr[0].ToString();
                //txt_Gender.Text = dr[1].ToString();
            }
            daar.Close();




        }

        private void cmb_ID_SelectedIndexChanged(object sender, EventArgs e)
        {
            
            
            OracleCommand cmd = new OracleCommand();
            cmd.Connection = conn;

            cmd.CommandText = "select UserName,userpassword,UserMode,UserAccount,usergender from Users where UserID =:id";
             cmd.Parameters.Add("id", cmb_ID.SelectedItem.ToString());
            OracleDataReader dr = cmd.ExecuteReader();
            while (dr.Read())
            {
                
                  txt_Name.Text = dr[0].ToString();
                txt_Gender.Text = dr[1].ToString();
                textBox4.Text = dr[2].ToString();
                textBox3.Text = dr[3].ToString();
                textBox2.Text = dr[4].ToString();
            }
            dr.Close();

        }

        private void btn_Insert_Click(object sender, EventArgs e)
        {
            OracleCommand cmD = new OracleCommand();
            cmD.Connection = conn;
            cmD.CommandText = "insert into Users  values (:UserID,:UserName ,:userpassword  ,:UserMode ,:UserAccount,:usergender )";
            cmD.Parameters.Add("UserID", cmb_ID.Text.ToString());
            cmD.Parameters.Add("UserName", txt_Name.Text);
            cmD.Parameters.Add("userpassword", txt_Gender.Text.ToString());
            cmD.Parameters.Add("UserMode", textBox4.Text);
            cmD.Parameters.Add("UserAccount", textBox3.Text);
            cmD.Parameters.Add("usergender", textBox2.Text);
            int r = cmD.ExecuteNonQuery();
            if(r!= -1)
            {
                cmb_ID.Items.Add(cmb_ID.Text);
                MessageBox.Show("Inserted Row Correctly");
            }

        }


        private void button1_Click(object sender, EventArgs e)
        {
            OracleCommand Cmd = new OracleCommand();
            Cmd.Connection = conn;
            Cmd.CommandText = "GetAuctionsrows";
            Cmd.CommandType = CommandType.StoredProcedure;
            Cmd.Parameters.Add("AucStatus", comboBox5.SelectedItem);
           

            Cmd.Parameters.Add("AutionName", OracleDbType.RefCursor, ParameterDirection.Output);
            //Cmd.Parameters.Add("Price",OracleDbType.RefCursor, ParameterDirection.Output);
            comboBox6.Items.Clear();
            comboBox7.Items.Clear();
            OracleDataReader dr = Cmd.ExecuteReader();
            while (dr.Read())
            {

                comboBox6.Items.Add(dr[0].ToString());
                comboBox7.Items.Add(dr[1].ToString());

            }
            dr.Close();

        }

        private void ActorsForm_FormClosing(object sender, FormClosingEventArgs e)
        {
            conn.Dispose();
            e.Cancel = true;
            this.Hide();
        }

        private void btn_GETUSERSID_Click(object sender, EventArgs e)
        {
            OracleCommand Cmm = new OracleCommand();
            Cmm.Connection = conn;
            Cmm.CommandText = "GetAuctionsmaxprice";
            Cmm.CommandType = CommandType.StoredProcedure;
           Cmm.Parameters.Add("namee", textBox1.Text);
            Cmm.Parameters.Add("id", OracleDbType.Int32, ParameterDirection.Output);
            int r = Cmm.ExecuteNonQuery();
            int var;
            try {
                var = Convert.ToInt32(Cmm.Parameters["id"].Value.ToString());
                textBox5.Text = var.ToString();
            }
            catch
            {
                string x = "not found";
                textBox5.Text = x;
            }
           

        }

        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void comboBox2_SelectedIndexChanged_1(object sender, EventArgs e)
        {

            OracleCommand cmd = new OracleCommand();
            cmd.Connection = conn;

            cmd.CommandText = "select UserName,UserAccount  from Users where UserMode  =:id";
            cmd.Parameters.Add("id", comboBox2.SelectedItem.ToString());
            comboBox3.Items.Clear();
            comboBox4.Items.Clear();
            OracleDataReader dr = cmd.ExecuteReader();
            comboBox3.Text = "";
            comboBox4.Text = "";
            while (dr.Read())
            {

                comboBox3.Items.Add(dr[0].ToString());
                comboBox4.Items.Add(dr[1].ToString());

            }
            dr.Close();


        }
       

        private void label9_Click(object sender, EventArgs e)
        {

        }

        private void comboBox3_SelectedIndexChanged(object sender, EventArgs e)
        {


        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void comboBox7_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void comboBox5_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void textBox3_TextChanged_1(object sender, EventArgs e)
        {

        }

        private void label12_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
