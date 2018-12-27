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

namespace Exper2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.adptrHeader.Fill(dataSet1);
            this.adptrDetail.Fill(dataSet21);
        }

        private void btnSave_Click(object sender, EventArgs e)
        {
            try
            {
                // 检查数据表各行，设置新行的rowguid列
                foreach (DataRow dataRow in this.dataSet21.SalesOrderDetail.Rows)
                {
                    // 如果是新行
                    if (dataRow.RowState == DataRowState.Added)
                    {
                        // 如果rowguid列的值是空值
                        if (dataRow["rowguid"].Equals(System.DBNull.Value))
                        {
                            dataRow["rowguid"] = Guid.NewGuid();
                        }
                    }
                }
                this.adptrDetail.Update(this.dataSet21.SalesOrderDetail);
                MessageBox.Show("保存成功!");
            }
            catch (Exception ex)
            {
                MessageBox.Show("保存失败!\n" + ex.Message);
            }

        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            // 根据数据网格控件当前行从数据表中删除选择的行
            int index = -1;
            foreach (DataRow dataRow in dataSet21.SalesOrderDetail.Rows)
            {
                DataRowState rowState = dataRow.RowState;
                // 如果数据表中的数据行已经被删除（之前点击删除按钮时执行的操作）
                if (rowState == DataRowState.Deleted)
                    continue;

                // 如果数据行没有删除则增加行索引
                index++;

                // 如果数据网格控件当前行索引与未删除行的索引相等，则删除数据行。
                if (this.dataGridView2.CurrentRow.Index == index)
                {
                    dataRow.Delete();
                    break;
                }
            }

        }

        private void dataGridView1_RowHeaderMouseClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            //构建新的SELECT命令
            OleDbCommand sqlGetDetail = new OleDbCommand("SELECT * FROM Sales.SalesOrderDetail WHERE SalesOrderID=?", oleDbConnection1);
            sqlGetDetail.Parameters.Add("@p1", OleDbType.Integer).Value = this.dataGridView1.CurrentRow.Cells[0].Value.ToString();//命令参数处理

            //设置命令并重新Fill数据集
            adptrDetail.SelectCommand = sqlGetDetail;
            dataSet21.Clear();
            adptrDetail.Fill(dataSet21);
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            if (dataSet21.HasChanges())
            {
                var result = MessageBox.Show("是否在关闭前保存修改？", "确认关闭", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
                if (result == DialogResult.Yes)
                {
                    this.adptrDetail.Update(dataSet21.SalesOrderDetail);
                    Application.Exit();
                }
            }
            else
                Application.Exit();
        }
    }
} 