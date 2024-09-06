#pragma once

#include "MyAudioEffect.g.h"

namespace winrt::MRE_ClassNotRegistered::implementation
{
    struct MyAudioEffect : MyAudioEffectT<MyAudioEffect>
    {
        MyAudioEffect() = default;

        void SetProperties(winrt::Windows::Foundation::Collections::IPropertySet const& configuration);
        bool UseInputFrameForOutput();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::MediaProperties::AudioEncodingProperties> SupportedEncodingProperties();
        void SetEncodingProperties(winrt::Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties);
        void ProcessFrame(winrt::Windows::Media::Effects::ProcessAudioFrameContext const& context);
        void Close(winrt::Windows::Media::Effects::MediaEffectClosedReason const& reason);
        void DiscardQueuedFrames();
    };
}
namespace winrt::MRE_ClassNotRegistered::factory_implementation
{
    struct MyAudioEffect : MyAudioEffectT<MyAudioEffect, implementation::MyAudioEffect>
    {
    };
}

