#pragma once
// IWYU pragma private; include "UnityEngine/AudioConfiguration.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_impl.hpp"
#include "UnityEngine/zzzz__AudioConfiguration_def.hpp"
// Ctor Parameters [CppParam { name: "speakerMode", ty: "::UnityEngine::AudioSpeakerMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "dspBufferSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sampleRate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "numRealVoices", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "numVirtualVoices", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AudioConfiguration::AudioConfiguration(::UnityEngine::AudioSpeakerMode  speakerMode, int32_t  dspBufferSize, int32_t  sampleRate, int32_t  numRealVoices, int32_t  numVirtualVoices) noexcept  {
this->speakerMode = speakerMode;
this->dspBufferSize = dspBufferSize;
this->sampleRate = sampleRate;
this->numRealVoices = numRealVoices;
this->numVirtualVoices = numVirtualVoices;
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioConfiguration::AudioConfiguration()   {
}
