using System;
using System.Data;
using Npgsql;

namespace Labo_9
{
    public static class ConnectionDB
    {
        private static string host = "ec2-54-165-36-134.compute-1.amazonaws.com",
            database = "d436esq6uq4ad0",
            userId = "xetrvskwrvawvr",
            password = "8715cb4d706a17c7ace77c02a7f2d87ba4dc3739892a90b39218c078a3b42ecc";

        private static string sConnection =
            string.Format("Server= {0};Port=5432; User Id={1};Password={2};Database={3};", host, userId, password,
                database);
        // $"sslmode=Require; Trust Server Certificate=true";

        public static DataTable ExecuteQuery(string query)
        {
            NpgsqlConnection connection = new NpgsqlConnection(sConnection);
            DataSet ds = new DataSet();
            connection.Open();
            
            NpgsqlDataAdapter da = new NpgsqlDataAdapter(query, connection);
            da.Fill(ds);
            
            connection.Close();

            return ds.Tables[0];
        }

        public static void ExecuteNonQuery(string act)
        {
            Console.WriteLine(sConnection);
            NpgsqlConnection connection = new NpgsqlConnection(sConnection);
            
            connection.Open();
            NpgsqlCommand command = new NpgsqlCommand(act, connection);
            command.ExecuteNonQuery();
            connection.Close();
        }
}
}