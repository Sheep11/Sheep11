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

namespace Exper1
{
    public partial class Form1 : Form
    {
        OleDbCommand OrignContractSelect;
        OleDbCommand OrignPaymentSelect;

        public Form1()
        {
            InitializeComponent();
        }

        private void btnSearchContract_Click(object sender, EventArgs e)
        {
            //若搜索框中没有输入，则将全部信息检索出来
            if (textContractID.Text == "")
            {
                //将查询语句恢复为适配器生成的默认语句
                oleDbDataAdapter1.SelectCommand = this.OrignContractSelect;
                oleDbDataAdapter2.SelectCommand = this.OrignPaymentSelect;

                //清理数据集并重新填充
                dataSet11.CONTRACT.Clear();
                oleDbDataAdapter1.Fill(dataSet11.CONTRACT);
                dataSet21.CONTRACT.Clear();
                oleDbDataAdapter2.Fill(dataSet21.CONTRACT);
            }
            else
            {
                //构建指定合同编号的查询
                string sql = "SELECT   CONTRACT.CONTRACT_ID AS 编号, CONTRACT.NAME AS 合同名称, CONTRACT.BUSINESS_DATE AS 签订日期, EMPLOYEE.NAME AS 销售, CONTRACT.AMOUNT AS 合同额 " +
                    "FROM CONTRACT INNER JOIN " +
                        "EMPLOYEE ON CONTRACT.SALE_ID = EMPLOYEE.EMPLOYEE_ID " +
                    "WHERE CONTRACT.CONTRACT_ID=?";

                //重新设置CONTRACT适配器的SELECT语句，以查询指定合同编号的程序
                OleDbCommand cmd = new OleDbCommand(sql);
                cmd.Parameters.Add("@p1", OleDbType.Integer).Value = textContractID.Text;
                cmd.Connection = this.oleDbConnection1;
                oleDbDataAdapter1.SelectCommand = cmd;

                dataSet11.CONTRACT.Clear();
                oleDbDataAdapter1.Fill(dataSet11.CONTRACT);

                //同样设置PAYMENT适配器
                string sql2 = "EXEC dbo.getPayment " + textContractID.Text;
                OleDbCommand cmd2 = new OleDbCommand(sql2);
                cmd2.Connection = this.oleDbConnection1;
                oleDbDataAdapter2.SelectCommand = cmd2;

                dataSet21.CONTRACT.Clear();
                oleDbDataAdapter2.Fill(dataSet21.CONTRACT);
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.OrignContractSelect = oleDbDataAdapter1.SelectCommand;
            this.OrignPaymentSelect = oleDbDataAdapter2.SelectCommand;

            oleDbDataAdapter1.Fill(dataSet11.CONTRACT);
            oleDbDataAdapter2.Fill(dataSet21.CONTRACT);
            oleDbDataAdapter3.Fill(dataSet31.EMPLOYEE);
        }

        private void dataGridView3_RowEnter(object sender, DataGridViewCellEventArgs e)
        {
            oleDbDataAdapter3.Update(dataSet31.EMPLOYEE);
        }
    }
}
