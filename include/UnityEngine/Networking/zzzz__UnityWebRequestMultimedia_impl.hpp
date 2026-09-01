#pragma once
// IWYU pragma private; include "UnityEngine\Networking\UnityWebRequestMultimedia.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestMultimedia_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AudioType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestMultimedia.GetAudioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::StringW, ::UnityEngine::AudioType)>(
    &::UnityEngine::Networking::UnityWebRequestMultimedia::GetAudioClip)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e26fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequestMultimedia*>(),
                                                                                           { "GetAudioClip", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::AudioType>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequestMultimedia::GetAudioClip(::StringW uri, ::UnityEngine::AudioType audioType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequestMultimedia*>(),
                                                                                         { "GetAudioClip", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::AudioType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(nullptr, ___internal_method, uri, audioType);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UnityWebRequestMultimedia::UnityWebRequestMultimedia() {}
