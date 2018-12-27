using System;
using System.Data.OleDb;
using System.Windows.Forms;

namespace Exper3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.adptrShoppingCart.Fill(dataSet11.ShoppingCartItem);
            this.adptrProduct.Fill(dataSet11.ProductInventory);
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            string productionid, locationid, cartid;
            //获取数据表格信息
            productionid = dgvProduct.CurrentRow.Cells[0].Value.ToString();
            locationid = dgvProduct.CurrentRow.Cells[1].Value.ToString();
            cartid = textCartID.Text;
            
            //构建SQL命令
            string sql_add = "EXEC dbo.AddShoppingCart " + productionid + "," + locationid + "," + cartid;
            OleDbCommand cmd = new OleDbCommand(sql_add);
            cmd.Connection = this.oleDbConnection1;

            //执行存储过程修改数据库
            this.oleDbConnection1.Open();
            cmd.ExecuteNonQuery();
            this.oleDbConnection1.Close();

            //重新从数据库中获取信息，刷新前端表格
            dataSet11.ProductInventory.Clear();
            dataSet11.ShoppingCartItem.Clear();
            this.adptrProduct.Fill(dataSet11.ProductInventory);
            this.adptrShoppingCart.Fill(dataSet11.ShoppingCartItem);
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            //获取数据表格信息
            string productionid, locationid, cartid;
            productionid = dgvShoppingCart.CurrentRow.Cells[3].Value.ToString();
            locationid = dgvShoppingCart.CurrentRow.Cells[6].Value.ToString();
            cartid = dgvShoppingCart.CurrentRow.Cells[1].Value.ToString();

            //构建SQL命令
            string sql = "EXEC dbo.DeleteShoppingCart " + productionid + "," + locationid + "," + cartid;
            OleDbCommand cmd = new OleDbCommand(sql);
            cmd.Connection = oleDbConnection1;

            //执行存储过程修改数据库
            this.oleDbConnection1.Open();
            cmd.ExecuteNonQuery();
            this.oleDbConnection1.Close();

            //重新填充数据集
            dataSet11.ProductInventory.Clear();
            dataSet11.ShoppingCartItem.Clear();
            this.adptrProduct.Fill(dataSet11.ProductInventory);
            this.adptrShoppingCart.Fill(dataSet11.ShoppingCartItem);
        }
    }
}
