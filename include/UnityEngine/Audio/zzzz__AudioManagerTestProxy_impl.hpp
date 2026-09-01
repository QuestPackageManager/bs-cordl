#pragma once
// IWYU pragma private; include "UnityEngine\Audio\AudioManagerTestProxy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioManagerTestProxy_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioManagerTestProxy.ComputeAudibilityConsistency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Audio::AudioManagerTestProxy::ComputeAudibilityConsistency)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a558cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioManagerTestProxy*>(), { "ComputeAudibilityConsistency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioManagerTestProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioManagerTestProxy::*)()>(&::UnityEngine::Audio::AudioManagerTestProxy::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a558f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioManagerTestProxy*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Audio::AudioManagerTestProxy::ComputeAudibilityConsistency() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioManagerTestProxy*>(), { "ComputeAudibilityConsistency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Audio::AudioManagerTestProxy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioManagerTestProxy*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Audio::AudioManagerTestProxy* UnityEngine::Audio::AudioManagerTestProxy::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Audio::AudioManagerTestProxy*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioManagerTestProxy::AudioManagerTestProxy() {}
