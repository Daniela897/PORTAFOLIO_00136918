using System;
using System.Data;
using Npgsql;

namespace Labo_9
{
    public static class ConnectionDB
    {
        private static string host = "127.0.0.1",
            database = "Laboratorio09",
            userId = "postgres",
            password = "1109";

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