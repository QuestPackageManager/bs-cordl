#pragma once
// IWYU pragma private; include "UnityEngine/AudioExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioExtensions_def.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::AudioExtensions.ChannelCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::AudioSpeakerMode)>(&::UnityEngine::AudioExtensions::ChannelCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e9ae38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioExtensions*>(), { "ChannelCount", {}, { ::i2c::type_of<::UnityEngine::AudioSpeakerMode>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::AudioExtensions::ChannelCount(::UnityEngine::AudioSpeakerMode speakerMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioExtensions*>(), { "ChannelCount", {}, { ::i2c::type_of<::UnityEngine::AudioSpeakerMode>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, speakerMode);
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioExtensions::AudioExtensions() {}
