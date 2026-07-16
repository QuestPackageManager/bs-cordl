#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioTypeHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioTypeHelper_def.hpp"
#include "UnityEngine/zzzz__AudioType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioTypeHelper.GetAudioTypeFromPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioType (*)(::StringW)>(&::GlobalNamespace::AudioTypeHelper::GetAudioTypeFromPath)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x331fd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioTypeHelper*>(), { "GetAudioTypeFromPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::AudioType GlobalNamespace::AudioTypeHelper::GetAudioTypeFromPath(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioTypeHelper*>(), { "GetAudioTypeFromPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioType>(nullptr, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioTypeHelper::AudioTypeHelper() {}
