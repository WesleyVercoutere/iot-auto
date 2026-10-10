using CommunityToolkit.Mvvm.Input;
using iot_auto_app.Models;

namespace iot_auto_app.PageModels
{
    public interface IProjectTaskPageModel
    {
        IAsyncRelayCommand<ProjectTask> NavigateToTaskCommand { get; }
        bool IsBusy { get; }
    }
}