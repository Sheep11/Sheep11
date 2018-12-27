namespace Exper2
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
            this.oleDbSelectCommand1 = new System.Data.OleDb.OleDbCommand();
            this.oleDbConnection1 = new System.Data.OleDb.OleDbConnection();
            this.oleDbInsertCommand1 = new System.Data.OleDb.OleDbCommand();
            this.oleDbUpdateCommand1 = new System.Data.OleDb.OleDbCommand();
            this.oleDbDeleteCommand1 = new System.Data.OleDb.OleDbCommand();
            this.adptrHeader = new System.Data.OleDb.OleDbDataAdapter();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.salesOrderIDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.revisionNumberDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.orderDateDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dueDateDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.shipDateDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.statusDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.onlineOrderFlagDataGridViewCheckBoxColumn = new System.Windows.Forms.DataGridViewCheckBoxColumn();
            this.salesOrderNumberDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.purchaseOrderNumberDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.accountNumberDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.customerIDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.salesPersonIDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.territoryIDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.billToAddressIDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.shipToAddressIDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.shipMethodIDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.creditCardIDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.creditCardApprovalCodeDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.currencyRateIDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.subTotalDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.taxAmtDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.freightDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.totalDueDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.commentDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.rowguidDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.modifiedDateDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataSet1 = new Exper2.DataSet1();
            this.oleDbSelectCommand2 = new System.Data.OleDb.OleDbCommand();
            this.oleDbInsertCommand2 = new System.Data.OleDb.OleDbCommand();
            this.oleDbUpdateCommand2 = new System.Data.OleDb.OleDbCommand();
            this.oleDbDeleteCommand2 = new System.Data.OleDb.OleDbCommand();
            this.adptrDetail = new System.Data.OleDb.OleDbDataAdapter();
            this.btnSave = new System.Windows.Forms.Button();
            this.btnClose = new System.Windows.Forms.Button();
            this.btnDelete = new System.Windows.Forms.Button();
            this.dataGridView2 = new System.Windows.Forms.DataGridView();
            this.salesOrderIDDataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.salesOrderDetailIDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.carrierTrackingNumberDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.orderQtyDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.productIDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.specialOfferIDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.unitPriceDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.unitPriceDiscountDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.lineTotalDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.rowguidDataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.modifiedDateDataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataSet21 = new Exper2.DataSet2();
            this.backgroundWorker1 = new System.ComponentModel.BackgroundWorker();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataSet1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataSet21)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 39);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 12);
            this.label1.TabIndex = 2;
            this.label1.Text = "订单";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(10, 259);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(53, 12);
            this.label2.TabIndex = 3;
            this.label2.Text = "订单明细";
            // 
            // oleDbSelectCommand1
            // 
            this.oleDbSelectCommand1.CommandText = resources.GetString("oleDbSelectCommand1.CommandText");
            this.oleDbSelectCommand1.Connection = this.oleDbConnection1;
            // 
            // oleDbConnection1
            // 
            this.oleDbConnection1.ConnectionString = "Provider=SQLNCLI11;Data Source=LAPTOP-GPJ24UPK;Persist Security Info=True;Passwor" +
    "d=sheep11;User ID=sa;Initial Catalog=AdventureWorks2012";
            // 
            // oleDbInsertCommand1
            // 
            this.oleDbInsertCommand1.CommandText = resources.GetString("oleDbInsertCommand1.CommandText");
            this.oleDbInsertCommand1.Connection = this.oleDbConnection1;
            this.oleDbInsertCommand1.Parameters.AddRange(new System.Data.OleDb.OleDbParameter[] {
            new System.Data.OleDb.OleDbParameter("RevisionNumber", System.Data.OleDb.OleDbType.UnsignedTinyInt, 0, "RevisionNumber"),
            new System.Data.OleDb.OleDbParameter("OrderDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, "OrderDate"),
            new System.Data.OleDb.OleDbParameter("DueDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, "DueDate"),
            new System.Data.OleDb.OleDbParameter("ShipDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, "ShipDate"),
            new System.Data.OleDb.OleDbParameter("Status", System.Data.OleDb.OleDbType.UnsignedTinyInt, 0, "Status"),
            new System.Data.OleDb.OleDbParameter("OnlineOrderFlag", System.Data.OleDb.OleDbType.Boolean, 0, "OnlineOrderFlag"),
            new System.Data.OleDb.OleDbParameter("PurchaseOrderNumber", System.Data.OleDb.OleDbType.VarWChar, 0, "PurchaseOrderNumber"),
            new System.Data.OleDb.OleDbParameter("AccountNumber", System.Data.OleDb.OleDbType.VarWChar, 0, "AccountNumber"),
            new System.Data.OleDb.OleDbParameter("CustomerID", System.Data.OleDb.OleDbType.Integer, 0, "CustomerID"),
            new System.Data.OleDb.OleDbParameter("SalesPersonID", System.Data.OleDb.OleDbType.Integer, 0, "SalesPersonID"),
            new System.Data.OleDb.OleDbParameter("TerritoryID", System.Data.OleDb.OleDbType.Integer, 0, "TerritoryID"),
            new System.Data.OleDb.OleDbParameter("BillToAddressID", System.Data.OleDb.OleDbType.Integer, 0, "BillToAddressID"),
            new System.Data.OleDb.OleDbParameter("ShipToAddressID", System.Data.OleDb.OleDbType.Integer, 0, "ShipToAddressID"),
            new System.Data.OleDb.OleDbParameter("ShipMethodID", System.Data.OleDb.OleDbType.Integer, 0, "ShipMethodID"),
            new System.Data.OleDb.OleDbParameter("CreditCardID", System.Data.OleDb.OleDbType.Integer, 0, "CreditCardID"),
            new System.Data.OleDb.OleDbParameter("CreditCardApprovalCode", System.Data.OleDb.OleDbType.VarChar, 0, "CreditCardApprovalCode"),
            new System.Data.OleDb.OleDbParameter("CurrencyRateID", System.Data.OleDb.OleDbType.Integer, 0, "CurrencyRateID"),
            new System.Data.OleDb.OleDbParameter("SubTotal", System.Data.OleDb.OleDbType.Currency, 0, "SubTotal"),
            new System.Data.OleDb.OleDbParameter("TaxAmt", System.Data.OleDb.OleDbType.Currency, 0, "TaxAmt"),
            new System.Data.OleDb.OleDbParameter("Freight", System.Data.OleDb.OleDbType.Currency, 0, "Freight"),
            new System.Data.OleDb.OleDbParameter("Comment", System.Data.OleDb.OleDbType.VarWChar, 0, "Comment"),
            new System.Data.OleDb.OleDbParameter("rowguid", System.Data.OleDb.OleDbType.Guid, 0, "rowguid"),
            new System.Data.OleDb.OleDbParameter("ModifiedDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, "ModifiedDate")});
            // 
            // oleDbUpdateCommand1
            // 
            this.oleDbUpdateCommand1.CommandText = resources.GetString("oleDbUpdateCommand1.CommandText");
            this.oleDbUpdateCommand1.Connection = this.oleDbConnection1;
            this.oleDbUpdateCommand1.Parameters.AddRange(new System.Data.OleDb.OleDbParameter[] {
            new System.Data.OleDb.OleDbParameter("RevisionNumber", System.Data.OleDb.OleDbType.UnsignedTinyInt, 0, "RevisionNumber"),
            new System.Data.OleDb.OleDbParameter("OrderDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, "OrderDate"),
            new System.Data.OleDb.OleDbParameter("DueDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, "DueDate"),
            new System.Data.OleDb.OleDbParameter("ShipDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, "ShipDate"),
            new System.Data.OleDb.OleDbParameter("Status", System.Data.OleDb.OleDbType.UnsignedTinyInt, 0, "Status"),
            new System.Data.OleDb.OleDbParameter("OnlineOrderFlag", System.Data.OleDb.OleDbType.Boolean, 0, "OnlineOrderFlag"),
            new System.Data.OleDb.OleDbParameter("PurchaseOrderNumber", System.Data.OleDb.OleDbType.VarWChar, 0, "PurchaseOrderNumber"),
            new System.Data.OleDb.OleDbParameter("AccountNumber", System.Data.OleDb.OleDbType.VarWChar, 0, "AccountNumber"),
            new System.Data.OleDb.OleDbParameter("CustomerID", System.Data.OleDb.OleDbType.Integer, 0, "CustomerID"),
            new System.Data.OleDb.OleDbParameter("SalesPersonID", System.Data.OleDb.OleDbType.Integer, 0, "SalesPersonID"),
            new System.Data.OleDb.OleDbParameter("TerritoryID", System.Data.OleDb.OleDbType.Integer, 0, "TerritoryID"),
            new System.Data.OleDb.OleDbParameter("BillToAddressID", System.Data.OleDb.OleDbType.Integer, 0, "BillToAddressID"),
            new System.Data.OleDb.OleDbParameter("ShipToAddressID", System.Data.OleDb.OleDbType.Integer, 0, "ShipToAddressID"),
            new System.Data.OleDb.OleDbParameter("ShipMethodID", System.Data.OleDb.OleDbType.Integer, 0, "ShipMethodID"),
            new System.Data.OleDb.OleDbParameter("CreditCardID", System.Data.OleDb.OleDbType.Integer, 0, "CreditCardID"),
            new System.Data.OleDb.OleDbParameter("CreditCardApprovalCode", System.Data.OleDb.OleDbType.VarChar, 0, "CreditCardApprovalCode"),
            new System.Data.OleDb.OleDbParameter("CurrencyRateID", System.Data.OleDb.OleDbType.Integer, 0, "CurrencyRateID"),
            new System.Data.OleDb.OleDbParameter("SubTotal", System.Data.OleDb.OleDbType.Currency, 0, "SubTotal"),
            new System.Data.OleDb.OleDbParameter("TaxAmt", System.Data.OleDb.OleDbType.Currency, 0, "TaxAmt"),
            new System.Data.OleDb.OleDbParameter("Freight", System.Data.OleDb.OleDbType.Currency, 0, "Freight"),
            new System.Data.OleDb.OleDbParameter("Comment", System.Data.OleDb.OleDbType.VarWChar, 0, "Comment"),
            new System.Data.OleDb.OleDbParameter("rowguid", System.Data.OleDb.OleDbType.Guid, 0, "rowguid"),
            new System.Data.OleDb.OleDbParameter("ModifiedDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, "ModifiedDate"),
            new System.Data.OleDb.OleDbParameter("Original_SalesOrderID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "SalesOrderID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_RevisionNumber", System.Data.OleDb.OleDbType.UnsignedTinyInt, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "RevisionNumber", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_OrderDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "OrderDate", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_DueDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "DueDate", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_ShipDate", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "ShipDate", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_ShipDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "ShipDate", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_Status", System.Data.OleDb.OleDbType.UnsignedTinyInt, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "Status", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_OnlineOrderFlag", System.Data.OleDb.OleDbType.Boolean, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "OnlineOrderFlag", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_SalesOrderNumber", System.Data.OleDb.OleDbType.VarWChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "SalesOrderNumber", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_PurchaseOrderNumber", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "PurchaseOrderNumber", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_PurchaseOrderNumber", System.Data.OleDb.OleDbType.VarWChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "PurchaseOrderNumber", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_AccountNumber", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "AccountNumber", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_AccountNumber", System.Data.OleDb.OleDbType.VarWChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "AccountNumber", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_CustomerID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "CustomerID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_SalesPersonID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "SalesPersonID", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_SalesPersonID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "SalesPersonID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_TerritoryID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "TerritoryID", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_TerritoryID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "TerritoryID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_BillToAddressID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "BillToAddressID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_ShipToAddressID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "ShipToAddressID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_ShipMethodID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "ShipMethodID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_CreditCardID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "CreditCardID", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_CreditCardID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "CreditCardID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_CreditCardApprovalCode", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "CreditCardApprovalCode", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_CreditCardApprovalCode", System.Data.OleDb.OleDbType.VarChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "CreditCardApprovalCode", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_CurrencyRateID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "CurrencyRateID", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_CurrencyRateID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "CurrencyRateID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_SubTotal", System.Data.OleDb.OleDbType.Currency, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "SubTotal", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_TaxAmt", System.Data.OleDb.OleDbType.Currency, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "TaxAmt", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_Freight", System.Data.OleDb.OleDbType.Currency, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "Freight", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_TotalDue", System.Data.OleDb.OleDbType.Currency, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "TotalDue", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_Comment", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "Comment", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_Comment", System.Data.OleDb.OleDbType.VarWChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "Comment", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_rowguid", System.Data.OleDb.OleDbType.Guid, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "rowguid", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_ModifiedDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "ModifiedDate", System.Data.DataRowVersion.Original, null)});
            // 
            // oleDbDeleteCommand1
            // 
            this.oleDbDeleteCommand1.CommandText = resources.GetString("oleDbDeleteCommand1.CommandText");
            this.oleDbDeleteCommand1.Connection = this.oleDbConnection1;
            this.oleDbDeleteCommand1.Parameters.AddRange(new System.Data.OleDb.OleDbParameter[] {
            new System.Data.OleDb.OleDbParameter("Original_SalesOrderID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "SalesOrderID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_RevisionNumber", System.Data.OleDb.OleDbType.UnsignedTinyInt, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "RevisionNumber", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_OrderDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "OrderDate", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_DueDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "DueDate", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_ShipDate", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "ShipDate", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_ShipDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "ShipDate", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_Status", System.Data.OleDb.OleDbType.UnsignedTinyInt, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "Status", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_OnlineOrderFlag", System.Data.OleDb.OleDbType.Boolean, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "OnlineOrderFlag", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_SalesOrderNumber", System.Data.OleDb.OleDbType.VarWChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "SalesOrderNumber", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_PurchaseOrderNumber", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "PurchaseOrderNumber", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_PurchaseOrderNumber", System.Data.OleDb.OleDbType.VarWChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "PurchaseOrderNumber", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_AccountNumber", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "AccountNumber", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_AccountNumber", System.Data.OleDb.OleDbType.VarWChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "AccountNumber", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_CustomerID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "CustomerID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_SalesPersonID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "SalesPersonID", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_SalesPersonID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "SalesPersonID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_TerritoryID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "TerritoryID", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_TerritoryID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "TerritoryID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_BillToAddressID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "BillToAddressID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_ShipToAddressID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "ShipToAddressID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_ShipMethodID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "ShipMethodID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_CreditCardID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "CreditCardID", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_CreditCardID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "CreditCardID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_CreditCardApprovalCode", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "CreditCardApprovalCode", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_CreditCardApprovalCode", System.Data.OleDb.OleDbType.VarChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "CreditCardApprovalCode", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_CurrencyRateID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "CurrencyRateID", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_CurrencyRateID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "CurrencyRateID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_SubTotal", System.Data.OleDb.OleDbType.Currency, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "SubTotal", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_TaxAmt", System.Data.OleDb.OleDbType.Currency, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "TaxAmt", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_Freight", System.Data.OleDb.OleDbType.Currency, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "Freight", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_TotalDue", System.Data.OleDb.OleDbType.Currency, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "TotalDue", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_Comment", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "Comment", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_Comment", System.Data.OleDb.OleDbType.VarWChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "Comment", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_rowguid", System.Data.OleDb.OleDbType.Guid, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "rowguid", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_ModifiedDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "ModifiedDate", System.Data.DataRowVersion.Original, null)});
            // 
            // adptrHeader
            // 
            this.adptrHeader.DeleteCommand = this.oleDbDeleteCommand1;
            this.adptrHeader.InsertCommand = this.oleDbInsertCommand1;
            this.adptrHeader.SelectCommand = this.oleDbSelectCommand1;
            this.adptrHeader.TableMappings.AddRange(new System.Data.Common.DataTableMapping[] {
            new System.Data.Common.DataTableMapping("Table", "SalesOrderHeader", new System.Data.Common.DataColumnMapping[] {
                        new System.Data.Common.DataColumnMapping("SalesOrderID", "SalesOrderID"),
                        new System.Data.Common.DataColumnMapping("RevisionNumber", "RevisionNumber"),
                        new System.Data.Common.DataColumnMapping("OrderDate", "OrderDate"),
                        new System.Data.Common.DataColumnMapping("DueDate", "DueDate"),
                        new System.Data.Common.DataColumnMapping("ShipDate", "ShipDate"),
                        new System.Data.Common.DataColumnMapping("Status", "Status"),
                        new System.Data.Common.DataColumnMapping("OnlineOrderFlag", "OnlineOrderFlag"),
                        new System.Data.Common.DataColumnMapping("SalesOrderNumber", "SalesOrderNumber"),
                        new System.Data.Common.DataColumnMapping("PurchaseOrderNumber", "PurchaseOrderNumber"),
                        new System.Data.Common.DataColumnMapping("AccountNumber", "AccountNumber"),
                        new System.Data.Common.DataColumnMapping("CustomerID", "CustomerID"),
                        new System.Data.Common.DataColumnMapping("SalesPersonID", "SalesPersonID"),
                        new System.Data.Common.DataColumnMapping("TerritoryID", "TerritoryID"),
                        new System.Data.Common.DataColumnMapping("BillToAddressID", "BillToAddressID"),
                        new System.Data.Common.DataColumnMapping("ShipToAddressID", "ShipToAddressID"),
                        new System.Data.Common.DataColumnMapping("ShipMethodID", "ShipMethodID"),
                        new System.Data.Common.DataColumnMapping("CreditCardID", "CreditCardID"),
                        new System.Data.Common.DataColumnMapping("CreditCardApprovalCode", "CreditCardApprovalCode"),
                        new System.Data.Common.DataColumnMapping("CurrencyRateID", "CurrencyRateID"),
                        new System.Data.Common.DataColumnMapping("SubTotal", "SubTotal"),
                        new System.Data.Common.DataColumnMapping("TaxAmt", "TaxAmt"),
                        new System.Data.Common.DataColumnMapping("Freight", "Freight"),
                        new System.Data.Common.DataColumnMapping("TotalDue", "TotalDue"),
                        new System.Data.Common.DataColumnMapping("Comment", "Comment"),
                        new System.Data.Common.DataColumnMapping("rowguid", "rowguid"),
                        new System.Data.Common.DataColumnMapping("ModifiedDate", "ModifiedDate")})});
            this.adptrHeader.UpdateCommand = this.oleDbUpdateCommand1;
            // 
            // dataGridView1
            // 
            this.dataGridView1.AutoGenerateColumns = false;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.salesOrderIDDataGridViewTextBoxColumn,
            this.revisionNumberDataGridViewTextBoxColumn,
            this.orderDateDataGridViewTextBoxColumn,
            this.dueDateDataGridViewTextBoxColumn,
            this.shipDateDataGridViewTextBoxColumn,
            this.statusDataGridViewTextBoxColumn,
            this.onlineOrderFlagDataGridViewCheckBoxColumn,
            this.salesOrderNumberDataGridViewTextBoxColumn,
            this.purchaseOrderNumberDataGridViewTextBoxColumn,
            this.accountNumberDataGridViewTextBoxColumn,
            this.customerIDDataGridViewTextBoxColumn,
            this.salesPersonIDDataGridViewTextBoxColumn,
            this.territoryIDDataGridViewTextBoxColumn,
            this.billToAddressIDDataGridViewTextBoxColumn,
            this.shipToAddressIDDataGridViewTextBoxColumn,
            this.shipMethodIDDataGridViewTextBoxColumn,
            this.creditCardIDDataGridViewTextBoxColumn,
            this.creditCardApprovalCodeDataGridViewTextBoxColumn,
            this.currencyRateIDDataGridViewTextBoxColumn,
            this.subTotalDataGridViewTextBoxColumn,
            this.taxAmtDataGridViewTextBoxColumn,
            this.freightDataGridViewTextBoxColumn,
            this.totalDueDataGridViewTextBoxColumn,
            this.commentDataGridViewTextBoxColumn,
            this.rowguidDataGridViewTextBoxColumn,
            this.modifiedDateDataGridViewTextBoxColumn});
            this.dataGridView1.DataMember = "SalesOrderHeader";
            this.dataGridView1.DataSource = this.dataSet1;
            this.dataGridView1.Location = new System.Drawing.Point(12, 54);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.RowTemplate.Height = 23;
            this.dataGridView1.Size = new System.Drawing.Size(569, 184);
            this.dataGridView1.TabIndex = 4;
            this.dataGridView1.RowHeaderMouseClick += new System.Windows.Forms.DataGridViewCellMouseEventHandler(this.dataGridView1_RowHeaderMouseClick);
            // 
            // salesOrderIDDataGridViewTextBoxColumn
            // 
            this.salesOrderIDDataGridViewTextBoxColumn.DataPropertyName = "SalesOrderID";
            this.salesOrderIDDataGridViewTextBoxColumn.HeaderText = "SalesOrderID";
            this.salesOrderIDDataGridViewTextBoxColumn.Name = "salesOrderIDDataGridViewTextBoxColumn";
            this.salesOrderIDDataGridViewTextBoxColumn.ReadOnly = true;
            // 
            // revisionNumberDataGridViewTextBoxColumn
            // 
            this.revisionNumberDataGridViewTextBoxColumn.DataPropertyName = "RevisionNumber";
            this.revisionNumberDataGridViewTextBoxColumn.HeaderText = "RevisionNumber";
            this.revisionNumberDataGridViewTextBoxColumn.Name = "revisionNumberDataGridViewTextBoxColumn";
            // 
            // orderDateDataGridViewTextBoxColumn
            // 
            this.orderDateDataGridViewTextBoxColumn.DataPropertyName = "OrderDate";
            this.orderDateDataGridViewTextBoxColumn.HeaderText = "OrderDate";
            this.orderDateDataGridViewTextBoxColumn.Name = "orderDateDataGridViewTextBoxColumn";
            // 
            // dueDateDataGridViewTextBoxColumn
            // 
            this.dueDateDataGridViewTextBoxColumn.DataPropertyName = "DueDate";
            this.dueDateDataGridViewTextBoxColumn.HeaderText = "DueDate";
            this.dueDateDataGridViewTextBoxColumn.Name = "dueDateDataGridViewTextBoxColumn";
            // 
            // shipDateDataGridViewTextBoxColumn
            // 
            this.shipDateDataGridViewTextBoxColumn.DataPropertyName = "ShipDate";
            this.shipDateDataGridViewTextBoxColumn.HeaderText = "ShipDate";
            this.shipDateDataGridViewTextBoxColumn.Name = "shipDateDataGridViewTextBoxColumn";
            // 
            // statusDataGridViewTextBoxColumn
            // 
            this.statusDataGridViewTextBoxColumn.DataPropertyName = "Status";
            this.statusDataGridViewTextBoxColumn.HeaderText = "Status";
            this.statusDataGridViewTextBoxColumn.Name = "statusDataGridViewTextBoxColumn";
            // 
            // onlineOrderFlagDataGridViewCheckBoxColumn
            // 
            this.onlineOrderFlagDataGridViewCheckBoxColumn.DataPropertyName = "OnlineOrderFlag";
            this.onlineOrderFlagDataGridViewCheckBoxColumn.HeaderText = "OnlineOrderFlag";
            this.onlineOrderFlagDataGridViewCheckBoxColumn.Name = "onlineOrderFlagDataGridViewCheckBoxColumn";
            // 
            // salesOrderNumberDataGridViewTextBoxColumn
            // 
            this.salesOrderNumberDataGridViewTextBoxColumn.DataPropertyName = "SalesOrderNumber";
            this.salesOrderNumberDataGridViewTextBoxColumn.HeaderText = "SalesOrderNumber";
            this.salesOrderNumberDataGridViewTextBoxColumn.Name = "salesOrderNumberDataGridViewTextBoxColumn";
            this.salesOrderNumberDataGridViewTextBoxColumn.ReadOnly = true;
            // 
            // purchaseOrderNumberDataGridViewTextBoxColumn
            // 
            this.purchaseOrderNumberDataGridViewTextBoxColumn.DataPropertyName = "PurchaseOrderNumber";
            this.purchaseOrderNumberDataGridViewTextBoxColumn.HeaderText = "PurchaseOrderNumber";
            this.purchaseOrderNumberDataGridViewTextBoxColumn.Name = "purchaseOrderNumberDataGridViewTextBoxColumn";
            // 
            // accountNumberDataGridViewTextBoxColumn
            // 
            this.accountNumberDataGridViewTextBoxColumn.DataPropertyName = "AccountNumber";
            this.accountNumberDataGridViewTextBoxColumn.HeaderText = "AccountNumber";
            this.accountNumberDataGridViewTextBoxColumn.Name = "accountNumberDataGridViewTextBoxColumn";
            // 
            // customerIDDataGridViewTextBoxColumn
            // 
            this.customerIDDataGridViewTextBoxColumn.DataPropertyName = "CustomerID";
            this.customerIDDataGridViewTextBoxColumn.HeaderText = "CustomerID";
            this.customerIDDataGridViewTextBoxColumn.Name = "customerIDDataGridViewTextBoxColumn";
            // 
            // salesPersonIDDataGridViewTextBoxColumn
            // 
            this.salesPersonIDDataGridViewTextBoxColumn.DataPropertyName = "SalesPersonID";
            this.salesPersonIDDataGridViewTextBoxColumn.HeaderText = "SalesPersonID";
            this.salesPersonIDDataGridViewTextBoxColumn.Name = "salesPersonIDDataGridViewTextBoxColumn";
            // 
            // territoryIDDataGridViewTextBoxColumn
            // 
            this.territoryIDDataGridViewTextBoxColumn.DataPropertyName = "TerritoryID";
            this.territoryIDDataGridViewTextBoxColumn.HeaderText = "TerritoryID";
            this.territoryIDDataGridViewTextBoxColumn.Name = "territoryIDDataGridViewTextBoxColumn";
            // 
            // billToAddressIDDataGridViewTextBoxColumn
            // 
            this.billToAddressIDDataGridViewTextBoxColumn.DataPropertyName = "BillToAddressID";
            this.billToAddressIDDataGridViewTextBoxColumn.HeaderText = "BillToAddressID";
            this.billToAddressIDDataGridViewTextBoxColumn.Name = "billToAddressIDDataGridViewTextBoxColumn";
            // 
            // shipToAddressIDDataGridViewTextBoxColumn
            // 
            this.shipToAddressIDDataGridViewTextBoxColumn.DataPropertyName = "ShipToAddressID";
            this.shipToAddressIDDataGridViewTextBoxColumn.HeaderText = "ShipToAddressID";
            this.shipToAddressIDDataGridViewTextBoxColumn.Name = "shipToAddressIDDataGridViewTextBoxColumn";
            // 
            // shipMethodIDDataGridViewTextBoxColumn
            // 
            this.shipMethodIDDataGridViewTextBoxColumn.DataPropertyName = "ShipMethodID";
            this.shipMethodIDDataGridViewTextBoxColumn.HeaderText = "ShipMethodID";
            this.shipMethodIDDataGridViewTextBoxColumn.Name = "shipMethodIDDataGridViewTextBoxColumn";
            // 
            // creditCardIDDataGridViewTextBoxColumn
            // 
            this.creditCardIDDataGridViewTextBoxColumn.DataPropertyName = "CreditCardID";
            this.creditCardIDDataGridViewTextBoxColumn.HeaderText = "CreditCardID";
            this.creditCardIDDataGridViewTextBoxColumn.Name = "creditCardIDDataGridViewTextBoxColumn";
            // 
            // creditCardApprovalCodeDataGridViewTextBoxColumn
            // 
            this.creditCardApprovalCodeDataGridViewTextBoxColumn.DataPropertyName = "CreditCardApprovalCode";
            this.creditCardApprovalCodeDataGridViewTextBoxColumn.HeaderText = "CreditCardApprovalCode";
            this.creditCardApprovalCodeDataGridViewTextBoxColumn.Name = "creditCardApprovalCodeDataGridViewTextBoxColumn";
            // 
            // currencyRateIDDataGridViewTextBoxColumn
            // 
            this.currencyRateIDDataGridViewTextBoxColumn.DataPropertyName = "CurrencyRateID";
            this.currencyRateIDDataGridViewTextBoxColumn.HeaderText = "CurrencyRateID";
            this.currencyRateIDDataGridViewTextBoxColumn.Name = "currencyRateIDDataGridViewTextBoxColumn";
            // 
            // subTotalDataGridViewTextBoxColumn
            // 
            this.subTotalDataGridViewTextBoxColumn.DataPropertyName = "SubTotal";
            this.subTotalDataGridViewTextBoxColumn.HeaderText = "SubTotal";
            this.subTotalDataGridViewTextBoxColumn.Name = "subTotalDataGridViewTextBoxColumn";
            // 
            // taxAmtDataGridViewTextBoxColumn
            // 
            this.taxAmtDataGridViewTextBoxColumn.DataPropertyName = "TaxAmt";
            this.taxAmtDataGridViewTextBoxColumn.HeaderText = "TaxAmt";
            this.taxAmtDataGridViewTextBoxColumn.Name = "taxAmtDataGridViewTextBoxColumn";
            // 
            // freightDataGridViewTextBoxColumn
            // 
            this.freightDataGridViewTextBoxColumn.DataPropertyName = "Freight";
            this.freightDataGridViewTextBoxColumn.HeaderText = "Freight";
            this.freightDataGridViewTextBoxColumn.Name = "freightDataGridViewTextBoxColumn";
            // 
            // totalDueDataGridViewTextBoxColumn
            // 
            this.totalDueDataGridViewTextBoxColumn.DataPropertyName = "TotalDue";
            this.totalDueDataGridViewTextBoxColumn.HeaderText = "TotalDue";
            this.totalDueDataGridViewTextBoxColumn.Name = "totalDueDataGridViewTextBoxColumn";
            this.totalDueDataGridViewTextBoxColumn.ReadOnly = true;
            // 
            // commentDataGridViewTextBoxColumn
            // 
            this.commentDataGridViewTextBoxColumn.DataPropertyName = "Comment";
            this.commentDataGridViewTextBoxColumn.HeaderText = "Comment";
            this.commentDataGridViewTextBoxColumn.Name = "commentDataGridViewTextBoxColumn";
            // 
            // rowguidDataGridViewTextBoxColumn
            // 
            this.rowguidDataGridViewTextBoxColumn.DataPropertyName = "rowguid";
            this.rowguidDataGridViewTextBoxColumn.HeaderText = "rowguid";
            this.rowguidDataGridViewTextBoxColumn.Name = "rowguidDataGridViewTextBoxColumn";
            // 
            // modifiedDateDataGridViewTextBoxColumn
            // 
            this.modifiedDateDataGridViewTextBoxColumn.DataPropertyName = "ModifiedDate";
            this.modifiedDateDataGridViewTextBoxColumn.HeaderText = "ModifiedDate";
            this.modifiedDateDataGridViewTextBoxColumn.Name = "modifiedDateDataGridViewTextBoxColumn";
            // 
            // dataSet1
            // 
            this.dataSet1.DataSetName = "DataSet1";
            this.dataSet1.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // oleDbSelectCommand2
            // 
            this.oleDbSelectCommand2.CommandText = resources.GetString("oleDbSelectCommand2.CommandText");
            this.oleDbSelectCommand2.Connection = this.oleDbConnection1;
            // 
            // oleDbInsertCommand2
            // 
            this.oleDbInsertCommand2.CommandText = resources.GetString("oleDbInsertCommand2.CommandText");
            this.oleDbInsertCommand2.Connection = this.oleDbConnection1;
            this.oleDbInsertCommand2.Parameters.AddRange(new System.Data.OleDb.OleDbParameter[] {
            new System.Data.OleDb.OleDbParameter("SalesOrderID", System.Data.OleDb.OleDbType.Integer, 0, "SalesOrderID"),
            new System.Data.OleDb.OleDbParameter("CarrierTrackingNumber", System.Data.OleDb.OleDbType.VarWChar, 0, "CarrierTrackingNumber"),
            new System.Data.OleDb.OleDbParameter("OrderQty", System.Data.OleDb.OleDbType.SmallInt, 0, "OrderQty"),
            new System.Data.OleDb.OleDbParameter("ProductID", System.Data.OleDb.OleDbType.Integer, 0, "ProductID"),
            new System.Data.OleDb.OleDbParameter("SpecialOfferID", System.Data.OleDb.OleDbType.Integer, 0, "SpecialOfferID"),
            new System.Data.OleDb.OleDbParameter("UnitPrice", System.Data.OleDb.OleDbType.Currency, 0, "UnitPrice"),
            new System.Data.OleDb.OleDbParameter("UnitPriceDiscount", System.Data.OleDb.OleDbType.Currency, 0, "UnitPriceDiscount"),
            new System.Data.OleDb.OleDbParameter("rowguid", System.Data.OleDb.OleDbType.Guid, 0, "rowguid"),
            new System.Data.OleDb.OleDbParameter("ModifiedDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, "ModifiedDate")});
            // 
            // oleDbUpdateCommand2
            // 
            this.oleDbUpdateCommand2.CommandText = resources.GetString("oleDbUpdateCommand2.CommandText");
            this.oleDbUpdateCommand2.Connection = this.oleDbConnection1;
            this.oleDbUpdateCommand2.Parameters.AddRange(new System.Data.OleDb.OleDbParameter[] {
            new System.Data.OleDb.OleDbParameter("SalesOrderID", System.Data.OleDb.OleDbType.Integer, 0, "SalesOrderID"),
            new System.Data.OleDb.OleDbParameter("CarrierTrackingNumber", System.Data.OleDb.OleDbType.VarWChar, 0, "CarrierTrackingNumber"),
            new System.Data.OleDb.OleDbParameter("OrderQty", System.Data.OleDb.OleDbType.SmallInt, 0, "OrderQty"),
            new System.Data.OleDb.OleDbParameter("ProductID", System.Data.OleDb.OleDbType.Integer, 0, "ProductID"),
            new System.Data.OleDb.OleDbParameter("SpecialOfferID", System.Data.OleDb.OleDbType.Integer, 0, "SpecialOfferID"),
            new System.Data.OleDb.OleDbParameter("UnitPrice", System.Data.OleDb.OleDbType.Currency, 0, "UnitPrice"),
            new System.Data.OleDb.OleDbParameter("UnitPriceDiscount", System.Data.OleDb.OleDbType.Currency, 0, "UnitPriceDiscount"),
            new System.Data.OleDb.OleDbParameter("rowguid", System.Data.OleDb.OleDbType.Guid, 0, "rowguid"),
            new System.Data.OleDb.OleDbParameter("ModifiedDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, "ModifiedDate"),
            new System.Data.OleDb.OleDbParameter("Original_SalesOrderID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "SalesOrderID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_SalesOrderDetailID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "SalesOrderDetailID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_CarrierTrackingNumber", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "CarrierTrackingNumber", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_CarrierTrackingNumber", System.Data.OleDb.OleDbType.VarWChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "CarrierTrackingNumber", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_OrderQty", System.Data.OleDb.OleDbType.SmallInt, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "OrderQty", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_ProductID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "ProductID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_SpecialOfferID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "SpecialOfferID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_UnitPrice", System.Data.OleDb.OleDbType.Currency, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "UnitPrice", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_UnitPriceDiscount", System.Data.OleDb.OleDbType.Currency, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "UnitPriceDiscount", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_LineTotal", System.Data.OleDb.OleDbType.Numeric, 0, System.Data.ParameterDirection.Input, false, ((byte)(38)), ((byte)(6)), "LineTotal", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_rowguid", System.Data.OleDb.OleDbType.Guid, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "rowguid", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_ModifiedDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "ModifiedDate", System.Data.DataRowVersion.Original, null)});
            // 
            // oleDbDeleteCommand2
            // 
            this.oleDbDeleteCommand2.CommandText = resources.GetString("oleDbDeleteCommand2.CommandText");
            this.oleDbDeleteCommand2.Connection = this.oleDbConnection1;
            this.oleDbDeleteCommand2.Parameters.AddRange(new System.Data.OleDb.OleDbParameter[] {
            new System.Data.OleDb.OleDbParameter("Original_SalesOrderID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "SalesOrderID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_SalesOrderDetailID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "SalesOrderDetailID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("IsNull_CarrierTrackingNumber", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, ((byte)(0)), ((byte)(0)), "CarrierTrackingNumber", System.Data.DataRowVersion.Original, true, null),
            new System.Data.OleDb.OleDbParameter("Original_CarrierTrackingNumber", System.Data.OleDb.OleDbType.VarWChar, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "CarrierTrackingNumber", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_OrderQty", System.Data.OleDb.OleDbType.SmallInt, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "OrderQty", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_ProductID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "ProductID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_SpecialOfferID", System.Data.OleDb.OleDbType.Integer, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "SpecialOfferID", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_UnitPrice", System.Data.OleDb.OleDbType.Currency, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "UnitPrice", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_UnitPriceDiscount", System.Data.OleDb.OleDbType.Currency, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "UnitPriceDiscount", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_LineTotal", System.Data.OleDb.OleDbType.Numeric, 0, System.Data.ParameterDirection.Input, false, ((byte)(38)), ((byte)(6)), "LineTotal", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_rowguid", System.Data.OleDb.OleDbType.Guid, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "rowguid", System.Data.DataRowVersion.Original, null),
            new System.Data.OleDb.OleDbParameter("Original_ModifiedDate", System.Data.OleDb.OleDbType.DBTimeStamp, 0, System.Data.ParameterDirection.Input, false, ((byte)(0)), ((byte)(0)), "ModifiedDate", System.Data.DataRowVersion.Original, null)});
            // 
            // adptrDetail
            // 
            this.adptrDetail.DeleteCommand = this.oleDbDeleteCommand2;
            this.adptrDetail.InsertCommand = this.oleDbInsertCommand2;
            this.adptrDetail.SelectCommand = this.oleDbSelectCommand2;
            this.adptrDetail.TableMappings.AddRange(new System.Data.Common.DataTableMapping[] {
            new System.Data.Common.DataTableMapping("Table", "SalesOrderDetail", new System.Data.Common.DataColumnMapping[] {
                        new System.Data.Common.DataColumnMapping("SalesOrderID", "SalesOrderID"),
                        new System.Data.Common.DataColumnMapping("SalesOrderDetailID", "SalesOrderDetailID"),
                        new System.Data.Common.DataColumnMapping("CarrierTrackingNumber", "CarrierTrackingNumber"),
                        new System.Data.Common.DataColumnMapping("OrderQty", "OrderQty"),
                        new System.Data.Common.DataColumnMapping("ProductID", "ProductID"),
                        new System.Data.Common.DataColumnMapping("SpecialOfferID", "SpecialOfferID"),
                        new System.Data.Common.DataColumnMapping("UnitPrice", "UnitPrice"),
                        new System.Data.Common.DataColumnMapping("UnitPriceDiscount", "UnitPriceDiscount"),
                        new System.Data.Common.DataColumnMapping("LineTotal", "LineTotal"),
                        new System.Data.Common.DataColumnMapping("rowguid", "rowguid"),
                        new System.Data.Common.DataColumnMapping("ModifiedDate", "ModifiedDate")})});
            this.adptrDetail.UpdateCommand = this.oleDbUpdateCommand2;
            // 
            // btnSave
            // 
            this.btnSave.Location = new System.Drawing.Point(708, 297);
            this.btnSave.Name = "btnSave";
            this.btnSave.Size = new System.Drawing.Size(75, 23);
            this.btnSave.TabIndex = 6;
            this.btnSave.Text = "保存";
            this.btnSave.UseVisualStyleBackColor = true;
            this.btnSave.Click += new System.EventHandler(this.btnSave_Click);
            // 
            // btnClose
            // 
            this.btnClose.Location = new System.Drawing.Point(708, 357);
            this.btnClose.Name = "btnClose";
            this.btnClose.Size = new System.Drawing.Size(75, 23);
            this.btnClose.TabIndex = 7;
            this.btnClose.Text = "关闭";
            this.btnClose.UseVisualStyleBackColor = true;
            this.btnClose.Click += new System.EventHandler(this.btnClose_Click);
            // 
            // btnDelete
            // 
            this.btnDelete.Location = new System.Drawing.Point(627, 297);
            this.btnDelete.Name = "btnDelete";
            this.btnDelete.Size = new System.Drawing.Size(75, 23);
            this.btnDelete.TabIndex = 8;
            this.btnDelete.Text = "删除";
            this.btnDelete.UseVisualStyleBackColor = true;
            this.btnDelete.Click += new System.EventHandler(this.btnDelete_Click);
            // 
            // dataGridView2
            // 
            this.dataGridView2.AutoGenerateColumns = false;
            this.dataGridView2.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView2.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.salesOrderIDDataGridViewTextBoxColumn1,
            this.salesOrderDetailIDDataGridViewTextBoxColumn,
            this.carrierTrackingNumberDataGridViewTextBoxColumn,
            this.orderQtyDataGridViewTextBoxColumn,
            this.productIDDataGridViewTextBoxColumn,
            this.specialOfferIDDataGridViewTextBoxColumn,
            this.unitPriceDataGridViewTextBoxColumn,
            this.unitPriceDiscountDataGridViewTextBoxColumn,
            this.lineTotalDataGridViewTextBoxColumn,
            this.rowguidDataGridViewTextBoxColumn1,
            this.modifiedDateDataGridViewTextBoxColumn1});
            this.dataGridView2.DataMember = "SalesOrderDetail";
            this.dataGridView2.DataSource = this.dataSet21;
            this.dataGridView2.Location = new System.Drawing.Point(12, 274);
            this.dataGridView2.Name = "dataGridView2";
            this.dataGridView2.RowTemplate.Height = 23;
            this.dataGridView2.Size = new System.Drawing.Size(569, 150);
            this.dataGridView2.TabIndex = 5;
            // 
            // salesOrderIDDataGridViewTextBoxColumn1
            // 
            this.salesOrderIDDataGridViewTextBoxColumn1.DataPropertyName = "SalesOrderID";
            this.salesOrderIDDataGridViewTextBoxColumn1.HeaderText = "SalesOrderID";
            this.salesOrderIDDataGridViewTextBoxColumn1.Name = "salesOrderIDDataGridViewTextBoxColumn1";
            // 
            // salesOrderDetailIDDataGridViewTextBoxColumn
            // 
            this.salesOrderDetailIDDataGridViewTextBoxColumn.DataPropertyName = "SalesOrderDetailID";
            this.salesOrderDetailIDDataGridViewTextBoxColumn.HeaderText = "SalesOrderDetailID";
            this.salesOrderDetailIDDataGridViewTextBoxColumn.Name = "salesOrderDetailIDDataGridViewTextBoxColumn";
            this.salesOrderDetailIDDataGridViewTextBoxColumn.ReadOnly = true;
            // 
            // carrierTrackingNumberDataGridViewTextBoxColumn
            // 
            this.carrierTrackingNumberDataGridViewTextBoxColumn.DataPropertyName = "CarrierTrackingNumber";
            this.carrierTrackingNumberDataGridViewTextBoxColumn.HeaderText = "CarrierTrackingNumber";
            this.carrierTrackingNumberDataGridViewTextBoxColumn.Name = "carrierTrackingNumberDataGridViewTextBoxColumn";
            // 
            // orderQtyDataGridViewTextBoxColumn
            // 
            this.orderQtyDataGridViewTextBoxColumn.DataPropertyName = "OrderQty";
            this.orderQtyDataGridViewTextBoxColumn.HeaderText = "OrderQty";
            this.orderQtyDataGridViewTextBoxColumn.Name = "orderQtyDataGridViewTextBoxColumn";
            // 
            // productIDDataGridViewTextBoxColumn
            // 
            this.productIDDataGridViewTextBoxColumn.DataPropertyName = "ProductID";
            this.productIDDataGridViewTextBoxColumn.HeaderText = "ProductID";
            this.productIDDataGridViewTextBoxColumn.Name = "productIDDataGridViewTextBoxColumn";
            // 
            // specialOfferIDDataGridViewTextBoxColumn
            // 
            this.specialOfferIDDataGridViewTextBoxColumn.DataPropertyName = "SpecialOfferID";
            this.specialOfferIDDataGridViewTextBoxColumn.HeaderText = "SpecialOfferID";
            this.specialOfferIDDataGridViewTextBoxColumn.Name = "specialOfferIDDataGridViewTextBoxColumn";
            // 
            // unitPriceDataGridViewTextBoxColumn
            // 
            this.unitPriceDataGridViewTextBoxColumn.DataPropertyName = "UnitPrice";
            this.unitPriceDataGridViewTextBoxColumn.HeaderText = "UnitPrice";
            this.unitPriceDataGridViewTextBoxColumn.Name = "unitPriceDataGridViewTextBoxColumn";
            // 
            // unitPriceDiscountDataGridViewTextBoxColumn
            // 
            this.unitPriceDiscountDataGridViewTextBoxColumn.DataPropertyName = "UnitPriceDiscount";
            this.unitPriceDiscountDataGridViewTextBoxColumn.HeaderText = "UnitPriceDiscount";
            this.unitPriceDiscountDataGridViewTextBoxColumn.Name = "unitPriceDiscountDataGridViewTextBoxColumn";
            // 
            // lineTotalDataGridViewTextBoxColumn
            // 
            this.lineTotalDataGridViewTextBoxColumn.DataPropertyName = "LineTotal";
            this.lineTotalDataGridViewTextBoxColumn.HeaderText = "LineTotal";
            this.lineTotalDataGridViewTextBoxColumn.Name = "lineTotalDataGridViewTextBoxColumn";
            this.lineTotalDataGridViewTextBoxColumn.ReadOnly = true;
            // 
            // rowguidDataGridViewTextBoxColumn1
            // 
            this.rowguidDataGridViewTextBoxColumn1.DataPropertyName = "rowguid";
            this.rowguidDataGridViewTextBoxColumn1.HeaderText = "rowguid";
            this.rowguidDataGridViewTextBoxColumn1.Name = "rowguidDataGridViewTextBoxColumn1";
            // 
            // modifiedDateDataGridViewTextBoxColumn1
            // 
            this.modifiedDateDataGridViewTextBoxColumn1.DataPropertyName = "ModifiedDate";
            this.modifiedDateDataGridViewTextBoxColumn1.HeaderText = "ModifiedDate";
            this.modifiedDateDataGridViewTextBoxColumn1.Name = "modifiedDateDataGridViewTextBoxColumn1";
            // 
            // dataSet21
            // 
            this.dataSet21.DataSetName = "DataSet2";
            this.dataSet21.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(860, 448);
            this.Controls.Add(this.btnDelete);
            this.Controls.Add(this.btnClose);
            this.Controls.Add(this.btnSave);
            this.Controls.Add(this.dataGridView2);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataSet1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataSet21)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        private void DataGridView1_CellMouseUp(object sender, System.Windows.Forms.DataGridViewCellMouseEventArgs e)
        {
            throw new System.NotImplementedException();
        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Data.OleDb.OleDbCommand oleDbSelectCommand1;
        private System.Data.OleDb.OleDbConnection oleDbConnection1;
        private System.Data.OleDb.OleDbCommand oleDbInsertCommand1;
        private System.Data.OleDb.OleDbCommand oleDbUpdateCommand1;
        private System.Data.OleDb.OleDbCommand oleDbDeleteCommand1;
        private System.Data.OleDb.OleDbDataAdapter adptrHeader;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.DataGridViewTextBoxColumn salesOrderIDDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn revisionNumberDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn orderDateDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn dueDateDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn shipDateDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn statusDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewCheckBoxColumn onlineOrderFlagDataGridViewCheckBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn salesOrderNumberDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn purchaseOrderNumberDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn accountNumberDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn customerIDDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn salesPersonIDDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn territoryIDDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn billToAddressIDDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn shipToAddressIDDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn shipMethodIDDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn creditCardIDDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn creditCardApprovalCodeDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn currencyRateIDDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn subTotalDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn taxAmtDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn freightDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn totalDueDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn commentDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn rowguidDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn modifiedDateDataGridViewTextBoxColumn;
        private DataSet1 dataSet1;
        private System.Data.OleDb.OleDbCommand oleDbSelectCommand2;
        private System.Data.OleDb.OleDbCommand oleDbInsertCommand2;
        private System.Data.OleDb.OleDbCommand oleDbUpdateCommand2;
        private System.Data.OleDb.OleDbCommand oleDbDeleteCommand2;
        private System.Data.OleDb.OleDbDataAdapter adptrDetail;
        private System.Windows.Forms.DataGridView dataGridView2;
        private System.Windows.Forms.DataGridViewTextBoxColumn salesOrderIDDataGridViewTextBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn salesOrderDetailIDDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn carrierTrackingNumberDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn orderQtyDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn productIDDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn specialOfferIDDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn unitPriceDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn unitPriceDiscountDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn lineTotalDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn rowguidDataGridViewTextBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn modifiedDateDataGridViewTextBoxColumn1;
        private DataSet2 dataSet21;
        private System.Windows.Forms.Button btnSave;
        private System.Windows.Forms.Button btnClose;
        private System.Windows.Forms.Button btnDelete;
        private System.ComponentModel.BackgroundWorker backgroundWorker1;
    }
}

