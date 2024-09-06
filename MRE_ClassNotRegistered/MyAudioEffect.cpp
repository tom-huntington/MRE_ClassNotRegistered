#include "pch.h"
#include "MyAudioEffect.h"
#if __has_include("MyAudioEffect.g.cpp")
#include "MyAudioEffect.g.cpp"
#endif

namespace winrt::MRE_ClassNotRegistered::implementation
{
    void MyAudioEffect::SetProperties(winrt::Windows::Foundation::Collections::IPropertySet const& configuration)
    {
        throw hresult_not_implemented();
    }
    bool MyAudioEffect::UseInputFrameForOutput()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::MediaProperties::AudioEncodingProperties> MyAudioEffect::SupportedEncodingProperties()
    {
        throw hresult_not_implemented();
    }
    void MyAudioEffect::SetEncodingProperties(winrt::Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties)
    {
        throw hresult_not_implemented();
    }
    void MyAudioEffect::ProcessFrame(winrt::Windows::Media::Effects::ProcessAudioFrameContext const& context)
    {
        throw hresult_not_implemented();
    }
    void MyAudioEffect::Close(winrt::Windows::Media::Effects::MediaEffectClosedReason const& reason)
    {
        throw hresult_not_implemented();
    }
    void MyAudioEffect::DiscardQueuedFrames()
    {
        throw hresult_not_implemented();
    }
}
