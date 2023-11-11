// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

#include <microsoft.ui.xaml.window.h>
namespace winrt::WinUI3Calculation::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
        auto windowNative{ this->try_as<::IWindowNative>() };
        HWND  hWnd{ 0 };
        windowNative->get_WindowHandle(&hWnd);
        SetWindowPos(hWnd, NULL, 300, 500, 250, 300, NULL);
        this->Title(L"Caculation");
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

}

void winrt::WinUI3Calculation::implementation::MainWindow::add_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double a, b, c;
    a = std::stod(va().Text().c_str());
    b = std::stod(vb().Text().c_str());
    c = a + b; vc().Text(std::to_wstring(c));
}


void winrt::WinUI3Calculation::implementation::MainWindow::subtract_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double a, b, c;
    a = std::stod(va().Text().c_str());
    b = std::stod(vb().Text().c_str());
    c = a - b; vc().Text(std::to_wstring(c));
}


void winrt::WinUI3Calculation::implementation::MainWindow::mutiply_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double a, b, c;
    a = std::stod(va().Text().c_str());
    b = std::stod(vb().Text().c_str());
    c = a * b; vc().Text(std::to_wstring(c));
}


void winrt::WinUI3Calculation::implementation::MainWindow::divide_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double a, b, c;
    a = std::stod(va().Text().c_str());
    b = std::stod(vb().Text().c_str());
    c = a / b; vc().Text(std::to_wstring(c));
}
