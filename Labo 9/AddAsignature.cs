using System;
using System.Windows.Forms;

namespace Labo_9
{
    public partial class AddAsignature : UserControl
    {
        public AddAsignature()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (textBox1.Text.Equals(""))
               
            {
                MessageBox.Show("No se pueden dejar campos vacios");
            }

            {
                try
                {
                    ConnectionDB.ExecuteNonQuery("INSERT INTO MATERIA(nombre) VALUES ({textBox1.Text})");

                    MessageBox.Show("Se ha registrado la materia");
                }
                catch (Exception ex)
                {
                    MessageBox.Show("Ha ocurrido un error");
                }
            }
        }
    }
}