#pragma once
// IWYU pragma private; include "UnityEngine/Audio/DSPConfiguration.hpp"
#include "UnityEngine/Audio/zzzz__DSPConfiguration_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::DSPConfiguration.get_bufferSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Audio::DSPConfiguration::*)()>(&::UnityEngine::Audio::DSPConfiguration::get_bufferSize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6eab4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::DSPConfiguration>(), { "get_bufferSize", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Audio::DSPConfiguration::get_bufferSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::DSPConfiguration>(), { "get_bufferSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::DSPConfiguration::DSPConfiguration() {}
