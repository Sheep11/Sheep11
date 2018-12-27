namespace Exper1
{
    partial class Form1
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要修改
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.textContractID = new System.Windows.Forms.TextBox();
            this.btnSearchContract = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.编号DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.合同名称DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.签订日期DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.销售DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.合同额DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataSet11 = new Exper1.DataSet1();
            this.dataGridView2 = new System.Windows.Forms.DataGridView();
            this.销售DataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.合同编号DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.合同名称DataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.应付款DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.应付日期DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataSet21 = new Exper1.DataSet2();
            this.dataGridView3 = new System.Windows.Forms.DataGridView();
            this.eMPLOYEEIDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.mANAGERIDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.nAMEDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.pHONEDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.mOBILDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataSet31 = new Exper1.DataSet3();
            this.oleDbSelectCommand1 = new System.Data.OleDb.OleDbCommand();
            this.oleDbConnection1 = new System.Data.OleDb.OleDbConnection();
            this.oleDbDataAdapter1 = new System.Data.OleDb.OleDbDataAdapter();
            this.oleDbSelectCommand2 = new System.Data.OleDb.OleDbCommand();
            this.oleDbDataAdapter2 = new System.Data.OleDb.OleDbDataAdapter();
            this.oleDbSelectCommand3 = new System.Data.OleDb.OleDbCommand();
            this.oleDbInsertCommand1 = new System.Data.OleDb.OleDbCommand();
            this.oleDbUpdateCommand1 = new System.Data.OleDb.OleDbCommand();
            this.oleDbDeleteCommand1 = new System.Data.OleDb.OleDbCommand();
            this.oleDbDataAdapter3 = new System.Data.OleDb.OleDbDataAdapter();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataSet11)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataSet21)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView3)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataSet31)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 19);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(53, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "合同一览";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(12, 158);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(53, 12);
            this.label2.TabIndex = 1;
            this.label2.Text = "应付款项";
            // 
            // textContractID
            // 
            this.textContractID.Location = new System.Drawing.Point(215, 14);
            this.textContractID.Name = "textContractID";
            this.textContractID.Size = new System.Drawing.Size(100, 21);
            this.textContractID.TabIndex = 2;
            // 
            // btnSearchContract
            // 
            this.btnSearchContract.Location = new System.Drawing.Point(321, 14);
            this.btnSearchContract.Name = "btnSearchContract";
            this.btnSearchContract.Size = new System.Drawing.Size(75, 23);
            this.btnSearchContract.TabIndex = 3;
            this.btnSearchContract.Text = "搜索";
            this.btnSearchContract.UseVisualStyleBackColor = true;
            this.btnSearchContract.Click += new System.EventHandler(this.btnSearchContract_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(12, 298);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(53, 12);
            this.label3.TabIndex = 4;
            this.label3.Text = "员工信息";
            // 
            // dataGridView1
            // 
            this.dataGridView1.AutoGenerateColumns = false;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.编号DataGridViewTextBoxColumn,
            this.合同名称DataGridViewTextBoxColumn,
            this.签订日期DataGridViewTextBoxColumn,
            this.销售DataGridViewTextBoxColumn,
            this.合同额DataGridViewTextBoxColumn});
            this.dataGridView1.DataMember = "CONTRACT";
            this.dataGridView1.DataSource = this.dataSet11;
            this.dataGridView1.Location = new System.Drawing.Point(12, 41);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.RowTemplate.Height = 23;
            this.dataGridView1.Size = new System.Drawing.Size(627, 95);
            this.dataGridView1.TabIndex = 5;
            // 
            // 编号DataGridViewTextBoxColumn
            // 
            this.编号DataGridViewTextBoxColumn.DataPropertyName = "编号";
            this.编号DataGridViewTextBoxColumn.HeaderText = "编号";
            this.编号DataGridViewTextBoxColumn.Name = "编号DataGridViewTextBoxColumn";
            // 
            // 合同名称DataGridViewTextBoxColumn
            // 
            this.合同名称DataGridViewTextBoxColumn.DataPropertyName = "合同名称";
            this.合同名称DataGridViewTextBoxColumn.HeaderText = "合同名称";
            this.合同名称DataGridViewTextBoxColumn.Name = "合同名称DataGridViewTextBoxColumn";
            // 
            // 签订日期DataGridViewTextBoxColumn
            // 
            this.签订日期DataGridViewTextBoxColumn.DataPropertyName = "签订日期";
            this.签订日期DataGridViewTextBoxColumn.HeaderText = "签订日期";
            this.签订日期DataGridViewTextBoxColumn.Name = "签订日期DataGridViewTextBoxColumn";
            // 
            // 销售DataGridViewTextBoxColumn
            // 
            this.销售DataGridViewTextBoxColumn.DataPropertyName = "销售";
            this.销售DataGridViewTextBoxColumn.HeaderText = "销售";
            this.销售DataGridViewTextBoxColumn.Name = "销售DataGridViewTextBoxColumn";
            // 
            // 合同额DataGridViewTextBoxColumn
            // 
            this.合同额DataGridViewTextBoxColumn.DataPropertyName = "合同额";
            this.合同额DataGridViewTextBoxColumn.HeaderText = "合同额";
            this.合同额DataGridViewTextBoxColumn.Name = "合同额DataGridViewTextBoxColumn";
            // 
            // dataSet11
            // 
            this.dataSet11.DataSetName = "DataSet1";
            this.dataSet11.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // dataGridView2
            // 
            this.dataGridView2.AutoGenerateColumns = false;
            this.dataGridView2.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView2.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.销售DataGridViewTextBoxColumn1,
            this.合同编号DataGridViewTextBoxColumn,
            this.合同名称DataGridViewTextBoxColumn1,
            this.应付款DataGridViewTextBoxColumn,
            this.应付日期DataGridViewTextBoxColumn});
            this.dataGridView2.DataMember = "CONTRACT";
            this.dataGridView2.DataSource = this.dataSet21;
            this.dataGridView2.Location = new System.Drawing.Point(12, 173);
            this.dataGridView2.Name = "dataGridView2";
            this.dataGridView2.RowTemplate.Height = 23;
            this.dataGridView2.Size = new System.Drawing.Size(627, 110);
            this.dataGridView2.TabIndex = 6;
            // 
            // 销售DataGridViewTextBoxColumn1
            // 
            this.销售DataGridViewTextBoxColumn1.DataPropertyName = "销售";
            this.销售DataGridViewTextBoxColumn1.HeaderText = "销售";
            this.销售DataGridViewTextBoxColumn1.Name = "销售DataGridViewTextBoxColumn1";
            // 
            // 合同编号DataGridViewTextBoxColumn
            // 
            this.合同编号DataGridViewTextBoxColumn.DataPropertyName = "合同编号";
            this.合同编号DataGridViewTextBoxColumn.HeaderText = "合同编号";
            this.合同编号DataGridViewTextBoxColumn.Name = "合同编号DataGridViewTextBoxColumn";
            // 
            // 合同名称DataGridViewTextBoxColumn1
            // 
            this.合同名称DataGridViewTextBoxColumn1.DataPropertyName = "合同名称";
            this.合同名称DataGridViewTextBoxColumn1.HeaderText = "合同名称";
            this.合同名称DataGridViewTextBoxColumn1.Name = "合同名称DataGridViewTextBoxColumn1";
            // 
            // 应付款DataGridViewTextBoxColumn
            // 
            this.应付款DataGridViewTextBoxColumn.DataPropertyName = "应付款";
            this.应付款DataGridViewTextBoxColumn.HeaderText = "应付款";
            this.应付款DataGridViewTextBoxColumn.Name = "应付款DataGridViewTextBoxColumn";
            // 
            // 应付日期DataGridViewTextBoxColumn
            // 
            this.应付日期DataGridViewTextBoxColumn.DataPropertyName = "应付日期";
            this.应付日期DataGridViewTextBoxColumn.HeaderText = "应付日期";
            this.应付日期DataGridViewTextBoxColumn.Name = "应付日期DataGridViewTextBoxColumn";
            // 
            // dataSet21
            // 
            this.dataSet21.DataSetName = "DataSet2";
            this.dataSet21.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // dataGridView3
            // 
            this.dataGridView3.AutoGenerateColumns = false;
            this.dataGridView3.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView3.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.eMPLOYEEIDDataGridViewTextBoxColumn,
            this.mANAGERIDDataGridViewTextBoxColumn,
            this.nAMEDataGridViewTextBoxColumn,
            this.pHONEDataGridViewTextBoxColumn,
            this.mOBILDataGridViewTextBoxColumn});
            this.dataGridView3.DataMember = "EMPLOYEE";
            this.dataGridView3.DataSource = this.dataSet31;
            this.dataGridView3.Location = new System.Drawing.Point(12, 322);
            this.dataGridView3.Name = "dataGridView3";
            this.dataGridView3.RowTemplate.Height = 23;
            this.dataGridView3.Size = new System.Drawing.Size(627, 150);
            this.dataGridView3.TabIndex = 7;
            this.dataGridView3.RowEnter += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView3_RowEnter);
            // 
            // eMPLOYEEIDDataGridViewTextBoxColumn
            // 
            this.eMPLOYEEIDDataGridViewTextBoxColumn.DataPropertyName = "EMPLOYEE_ID";
            this.eMPLOYEEIDDataGridViewTextBoxColumn.HeaderText = "EMPLOYEE_ID";
            this.eMPLOYEEIDDataGridViewTextBoxColumn.Name = "eMPLOYEEIDDataGridViewTextBoxColumn";
            // 
            // mANAGERIDDataGridViewTextBoxColumn
            // 
            this.mANAGERIDDataGridViewTextBoxColumn.DataPropertyName = "MANAGER_ID";
            this.mANAGERIDDataGridViewTextBoxColumn.HeaderText = "MANAGER_ID";
            this.mANAGERIDDataGridViewTextBoxColumn.Name = "mANAGERIDDataGridViewTextBoxColumn";
            // 
            // nAMEDataGridViewTextBoxColumn
            // 
            this.nAMEDataGridViewTextBoxColumn.DataPropertyName = "NAME";
            this.nAMEDataGridViewTextBoxColumn.HeaderText = "NAME";
            this.nAMEDataGridViewTextBoxColumn.Name = "nAMEDataGridViewTextBoxColumn";
            // 
            // pHONEDataGridViewTextBoxColumn
            // 
            this.pHONEDataGridViewTextBoxColumn.DataPropertyName = "PHONE";
            this.pHONEDataGridViewTextBoxColumn.HeaderText = "PHONE";
            this.pHONEDataGridViewTextBoxColumn.Name = "pHONEDataGridViewTextBoxColumn";
            // 
            // mOBILDataGridViewTextBoxColumn
            // 
            this.mOBILDataGridViewTextBoxColumn.DataPropertyName = "MOBIL";
            this.mOBILDataGridViewTextBoxColumn.HeaderText = "MOBIL";
            this.mOBILDataGridViewTextBoxColumn.Name = "mOBILDataGridViewTextBoxColumn";
            // 
            // dataSet31
            // 
            this.dataSet31.DataSetName = "DataSet3";
            this.dataSet31.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // oleDbSelectCommand1
            // 
            this.oleDbSelectCommand1.CommandText = resources.GetString("oleDbSelectCommand1.CommandText");
            this.oleDbSelectCommand1.Connection = this.oleDbConnection1;
            // 
            // oleDbConnection1
            // 
            this.oleDbConnection1.ConnectionString = "Provider=SQLNCLI11;Data Source=LAPTOP-GPJ24UPK;Integrated Security=SSPI;Initial C" +
    "atalog=Contract";
            // 
            // oleDbDataAdapter1
            // 
            this.oleDbDataAdapter1.SelectCommand = this.oleDbSelectCommand1;
            this.oleDbDataAdapter1.TableMappings.AddRange(new System.Data.Common.DataTableMapping[] {
            new System.Data.Common.DataTableMapping("Table", "CONTRACT", new System.Data.Common.DataColumnMapping[] {
                        new System.Data.Common.DataColumnMapping("编号", "编号"),
                        new System.Data.Common.DataColumnMapping("合同名称", "合同名称"),
                        new System.Data.Common.DataColumnMapping("签订日期", "签订日期"),
                        new System.Data.Common.DataColumnMapping("销售", "销售"),
                        new System.Data.Common.DataColumnMapping("合同额", "合同额")})});
            // 
            // oleDbSelectCommand2
            // 
            this.oleDbSelectCommand2.CommandText = resources.GetString("oleDbSelectCommand2.CommandText");
            this.oleDbSelectCommand2.Connection = this.oleDbConnection1;
            // 
            // oleDbDataAdapter2
            // 
            this.oleDbDataAdapter2.SelectCommand = this.oleDbSelectCommand2;
            this.oleDbDataAdapter2.TableMappings.AddRange(new System.Data.Common.DataTableMapping[] {
            new System.Data.Common.DataTableMapping("Table", "CONTRACT", new System.Data.Common.DataColumnMapping[] {
                        new System.Data.Common.DataColumnMapping("销售", "销售"),
                        new System.Data.Common.DataColumnMapping("合同编号", "合同编号"),
                        new System.Data.Common.DataColumnMapping("合同名称", "合同名称"),
                        new System.Data.Common.DataColumnMapping("应付款", "应付款"),
                        new System.Data.Common.DataColumnMapping("应付日期", "应付日期")})});
            // 
            // oleDbSelectCommand3
            // 
            this.oleDbSelectCommand3.CommandText = "SELECT   EMPLOYEE_ID, MANAGER_ID, NAME, PHONE, MOBIL\r\nFROM      EMPLOYEE";
            this.oleDbSelectCommand3.Connection = this.oleDbConnection1;
            // 
            // oleDbInsertCommand1
            // 
            this.oleDbInsertCommand1.CommandText = "INSERT INTO [Contract].[dbo].[EMPLOYEE] ([EMPLOYEE_ID], [MANAGER_ID], [NAME], [PH" +
    "ONE], [MOBIL]) VALUES (?, ?, ?, ?, ?)";
            this.oleDbInsertCommand1.Connection = this.oleDbConnection1;
            this.oleDbInsertCommand1.Parameters.AddRange(new System.Data.OleDb.OleDbParameter[] {
            new System.Data.OleDb.OleDbParameter("EMPLOYEE_ID", System.Data.OleDb.OleDbType.Integer, 0, "EMPLOYEE_ID"),
            new System.Data.OleDb.OleDbParameter("MANAGER_ID", System.Data.OleDb.OleDbType.Integer, 0, "MANAGER_ID"),
            new System.Data.OleDb.OleDbParameter("NAME", System.Data.OleDb.OleDbType.VarChar, 0, "NAME"),
            new System.Data.OleDb.OleDbParameter("PHONE", System.Data.OleDb.OleDbType.VarChar, 0, "PHONE"),
            new System.Data.OleDb.OleDbParameter("MOBIL", System.Data.OleDb.OleDbType.VarChar, 0, "MOBIL")});
            // 
            // oleDbUpdateCommand1
            // 
            this.oleDbUpdateCommand1.CommandText = resources.GetString("oleDbUpdateCommand1.CommandText");
            this.oleDbUpdateCommand1.Connection = this.oleDbConnection1;
            this.oleDbUpdateCommand1.Parameters.AddRange(new System.Data.OleDb.OleDbParameter[] {
            new System.Data.OleDb.OleDbParameter("EMPLOYEE_ID", System.Data.OleDb.OleDbType.Integer, 0, "EMPLOYEE_ID"),
            new System.Data.OleDb.OleDbParameter("MANAGER_ID", System.Data.OleDb.OleDbType.Integer, 0, "MANAGER_ID"),
            new System.Data.OleDb.OleDbParameter("NAME", System.Data.OleDb.OleDbType.VarChar, 0, "NAME"),
            new System.Data.OleDb.OleDbParameter("PHONE", System.Data.OleDb.OleDbType.VarChar, 0, "PHONE"),
            new System.Data.OleDb.OleDbParameter("MOBIL", System.Data.OleDb.OleDbType.VarChar, 0, "MOBIL"),
            new System.Data.OleDb.OleDbParameter("Original_EMPLOYEE_ID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "EMPLOYEE_ID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_MANAGER_ID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "MANAGER_ID", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_MANAGER_ID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "MANAGER_ID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_NAME", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "NAME", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_NAME", System.Data.OleDb.OleDbType.VarChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "NAME", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_PHONE", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "PHONE", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_PHONE", System.Data.OleDb.OleDbType.VarChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "PHONE", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_MOBIL", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "MOBIL", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_MOBIL", System.Data.OleDb.OleDbType.VarChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "MOBIL", System.Data.DataRowVersion.Original, null)});
            // 
            // oleDbDeleteCommand1
            // 
            this.oleDbDeleteCommand1.CommandText = resources.GetString("oleDbDeleteCommand1.CommandText");
            this.oleDbDeleteCommand1.Connection = this.oleDbConnection1;
            this.oleDbDeleteCommand1.Parameters.AddRange(new System.Data.OleDb.OleDbParameter[] {
            new System.Data.OleDb.OleDbParameter("Original_EMPLOYEE_ID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "EMPLOYEE_ID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_MANAGER_ID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "MANAGER_ID", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_MANAGER_ID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "MANAGER_ID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_NAME", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "NAME", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_NAME", System.Data.OleDb.OleDbType.VarChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "NAME", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_PHONE", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "PHONE", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_PHONE", System.Data.OleDb.OleDbType.VarChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "PHONE", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_MOBIL", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "MOBIL", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_MOBIL", System.Data.OleDb.OleDbType.VarChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "MOBIL", System.Data.DataRowVersion.Original, null)});
            // 
            // oleDbDataAdapter3
            // 
            this.oleDbDataAdapter3.DeleteCommand = this.oleDbDeleteCommand1;
            this.oleDbDataAdapter3.InsertCommand = this.oleDbInsertCommand1;
            this.oleDbDataAdapter3.SelectCommand = this.oleDbSelectCommand3;
            this.oleDbDataAdapter3.TableMappings.AddRange(new System.Data.Common.DataTableMapping[] {
            new System.Data.Common.DataTableMapping("Table", "EMPLOYEE", new System.Data.Common.DataColumnMapping[] {
                        new System.Data.Common.DataColumnMapping("EMPLOYEE_ID", "EMPLOYEE_ID"),
                        new System.Data.Common.DataColumnMapping("MANAGER_ID", "MANAGER_ID"),
                        new System.Data.Common.DataColumnMapping("NAME", "NAME"),
                        new System.Data.Common.DataColumnMapping("PHONE", "PHONE"),
                        new System.Data.Common.DataColumnMapping("MOBIL", "MOBIL")})});
            this.oleDbDataAdapter3.UpdateCommand = this.oleDbUpdateCommand1;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(855, 484);
            this.Controls.Add(this.dataGridView3);
            this.Controls.Add(this.dataGridView2);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.btnSearchContract);
            this.Controls.Add(this.textContractID);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataSet11)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataSet21)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView3)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataSet31)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textContractID;
        private System.Windows.Forms.Button btnSearchContract;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.DataGridView dataGridView2;
        private System.Windows.Forms.DataGridView dataGridView3;
        private System.Data.OleDb.OleDbCommand oleDbSelectCommand1;
        private System.Data.OleDb.OleDbConnection oleDbConnection1;
        private System.Data.OleDb.OleDbDataAdapter oleDbDataAdapter1;
        private DataSet1 dataSet11;
        private System.Data.OleDb.OleDbCommand oleDbSelectCommand2;
        private System.Data.OleDb.OleDbDataAdapter oleDbDataAdapter2;
        private DataSet2 dataSet21;
        private System.Data.OleDb.OleDbCommand oleDbSelectCommand3;
        private System.Data.OleDb.OleDbCommand oleDbInsertCommand1;
        private System.Data.OleDb.OleDbCommand oleDbUpdateCommand1;
        private System.Data.OleDb.OleDbCommand oleDbDeleteCommand1;
        private System.Data.OleDb.OleDbDataAdapter oleDbDataAdapter3;
        private DataSet3 dataSet31;
        private System.Windows.Forms.DataGridViewTextBoxColumn 编号DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 合同名称DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 签订日期DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 销售DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 合同额DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 销售DataGridViewTextBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn 合同编号DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 合同名称DataGridViewTextBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn 应付款DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 应付日期DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn eMPLOYEEIDDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn mANAGERIDDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn nAMEDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn pHONEDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn mOBILDataGridViewTextBoxColumn;
    }
}

