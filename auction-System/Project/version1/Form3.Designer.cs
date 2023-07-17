using System.Windows.Forms;
using version1.Properties;

namespace version1
{
    partial class Form3
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.pic = new System.Windows.Forms.DataGridViewImageColumn();
            this.TextG = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.ButG = new System.Windows.Forms.DataGridViewButtonColumn();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.label1 = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // dataGridView1
            // 
            this.dataGridView1.AllowUserToAddRows = false;
            this.dataGridView1.AllowUserToDeleteRows = false;
            this.dataGridView1.AllowUserToResizeRows = false;
            this.dataGridView1.BackgroundColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.ColumnHeadersVisible = false;
            this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.pic,
            this.TextG,
            this.ButG});
            this.dataGridView1.Location = new System.Drawing.Point(-5, 164);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.ReadOnly = true;
            this.dataGridView1.RowHeadersVisible = false;
            this.dataGridView1.RowHeadersWidth = 51;
            this.dataGridView1.RowTemplate.Height = 100;
            this.dataGridView1.Size = new System.Drawing.Size(677, 550);
            this.dataGridView1.TabIndex = 0;
            this.dataGridView1.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView1_CellContentClick);
            this.dataGridView1.Rows.Add(Resource1.auction, "text", "Crystal Report");
            this.dataGridView1.Rows.Add(Resource1.auction, "text", "Crystal report 2");
            this.dataGridView1.Rows.Add(Resource1.auction, "text", "disconnected mode");
            this.dataGridView1.Rows.Add(Resource1.auction, "text", "Actor Form");
            // 
            // pic
            // 
            this.pic.HeaderText = "pic";
            this.pic.MinimumWidth = 6;
            this.pic.Name = "pic";
            this.pic.ReadOnly = true;
            this.pic.Resizable = System.Windows.Forms.DataGridViewTriState.False;
            this.pic.Width = 186;
            // 
            // TextG
            // 
            this.TextG.HeaderText = "TextG";
            this.TextG.MinimumWidth = 6;
            this.TextG.Name = "TextG";
            this.TextG.ReadOnly = true;
            this.TextG.Resizable = System.Windows.Forms.DataGridViewTriState.False;
            this.TextG.Width = 186;
            // 
            // ButG
            // 
            this.ButG.HeaderText = "ButG";
            this.ButG.MinimumWidth = 6;
            this.ButG.Name = "ButG";
            this.ButG.ReadOnly = true;
            this.ButG.Resizable = System.Windows.Forms.DataGridViewTriState.False;
            this.ButG.Width = 186;
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = global::version1.Resource1.auction;
            this.pictureBox1.Location = new System.Drawing.Point(304, -1);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(62, 71);
            this.pictureBox1.TabIndex = 1;
            this.pictureBox1.TabStop = false;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Mistral", 24F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(169, 73);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(378, 48);
            this.label1.TabIndex = 2;
            this.label1.Text = "Welcome To Auction House";
            // 
            // Form3
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.ClientSize = new System.Drawing.Size(668, 722);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.dataGridView1);
            this.Name = "Form3";
            this.Text = "Auction House";
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.DataGridViewImageColumn pic;
        private System.Windows.Forms.DataGridViewTextBoxColumn TextG;
        private System.Windows.Forms.DataGridViewButtonColumn ButG;
        private PictureBox pictureBox1;
        private Label label1;
    }
}