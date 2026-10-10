using iot_auto_app.Models;
using iot_auto_app.PageModels;

namespace iot_auto_app.Pages
{
    public partial class MainPage : ContentPage
    {
        public MainPage(MainPageModel model)
        {
            InitializeComponent();
            BindingContext = model;
        }
    }
}