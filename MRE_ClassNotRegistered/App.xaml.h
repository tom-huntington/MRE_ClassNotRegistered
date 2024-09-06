#pragma once

#include "App.xaml.g.h"
#include "MyAudioEffect.h"

namespace winrt::MRE_ClassNotRegistered::implementation
{
    struct App : AppT<App>
    {
        App();

        void OnLaunched(Microsoft::UI::Xaml::LaunchActivatedEventArgs const&);

    private:
        winrt::Microsoft::UI::Xaml::Window window{ nullptr };
    };
}
