using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.OleDb;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.oleDbDataAdapter1.Fill(this.dataSet11);
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void oleDbDataAdapter1_RowUpdated(object sender, System.Data.OleDb.OleDbRowUpdatedEventArgs e)
        {

        }

        private void oleDbConnection1_InfoMessage(object sender, System.Data.OleDb.OleDbInfoMessageEventArgs e)
        {

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            // 构造插入到表Customer中记录的命令
            String strCustomerInsert = "INSERT INTO Customer (CustomerID,LastName,FirstName,AccountNumber) VALUES(?,?,?,?)";
            OleDbCommand cmdCustomerInsert = new OleDbCommand(strCustomerInsert);
            cmdCustomerInsert.Connection = this.oleDbConnection1;

            // 使用输入的值填充命令参数，并不是必须使用命令参数。
            // 可以使用输入的内容构造命令（参见另一个方法btnDelete_Click（））
            cmdCustomerInsert.Parameters.Add("@p1", OleDbType.Integer, 5).Value
                    = Int32.Parse(this.tbxCustomerID.Text);
            cmdCustomerInsert.Parameters.Add("@p2", OleDbType.VarChar, 50).Value
                    = this.textBox3.Text;
            cmdCustomerInsert.Parameters.Add("@p3", OleDbType.VarChar, 50).Value
                    = this.textBox2.Text;
            cmdCustomerInsert.Parameters.Add("@p4", OleDbType.VarChar, 10).Value
                    = this.textBox1.Text;


            // 连接到数据库
            this.oleDbConnection1.Open();

            // 执行插入命令
            cmdCustomerInsert.ExecuteNonQuery();

            // 关闭数据库连接
            this.oleDbConnection1.Close();

            // 刷新显示内容
            this.dataSet11.Clear();
            this.oleDbDataAdapter1.Fill(this.dataSet11);

        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            // 从显示表格中获取客户编号
        }
    }
}
