#pragma once
// IWYU pragma private; include "GlobalNamespace/MainAudioEffects.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MainAudioEffects_def.hpp"
#include "UnityEngine/zzzz__AudioLowPassFilter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainAudioEffects.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainAudioEffects::*)()>(&::GlobalNamespace::MainAudioEffects::Start)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58b9f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainAudioEffects*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainAudioEffects.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainAudioEffects::*)()>(&::GlobalNamespace::MainAudioEffects::LateUpdate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x58b9f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainAudioEffects*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainAudioEffects.ResumeNormalSound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainAudioEffects::*)()>(&::GlobalNamespace::MainAudioEffects::ResumeNormalSound)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58ba064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainAudioEffects*>(), { "ResumeNormalSound", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainAudioEffects.TriggerLowPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainAudioEffects::*)()>(&::GlobalNamespace::MainAudioEffects::TriggerLowPass)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58ba08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainAudioEffects*>(), { "TriggerLowPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainAudioEffects._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainAudioEffects::*)()>(&::GlobalNamespace::MainAudioEffects::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58ba0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainAudioEffects*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioLowPassFilter>& GlobalNamespace::MainAudioEffects::__cordl_internal_get__audioLowPassFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioLowPassFilter;
}
constexpr ::UnityW<::UnityEngine::AudioLowPassFilter> const& GlobalNamespace::MainAudioEffects::__cordl_internal_get__audioLowPassFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioLowPassFilter;
}
constexpr void GlobalNamespace::MainAudioEffects::__cordl_internal_set__audioLowPassFilter(::UnityW<::UnityEngine::AudioLowPassFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioLowPassFilter = value;
}
constexpr float_t& GlobalNamespace::MainAudioEffects::__cordl_internal_get__smooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
constexpr float_t const& GlobalNamespace::MainAudioEffects::__cordl_internal_get__smooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
constexpr void GlobalNamespace::MainAudioEffects::__cordl_internal_set__smooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smooth = value;
}
constexpr float_t& GlobalNamespace::MainAudioEffects::__cordl_internal_get__targetFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetFrequency;
}
constexpr float_t const& GlobalNamespace::MainAudioEffects::__cordl_internal_get__targetFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetFrequency;
}
constexpr void GlobalNamespace::MainAudioEffects::__cordl_internal_set__targetFrequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetFrequency = value;
}
inline void GlobalNamespace::MainAudioEffects::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainAudioEffects*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainAudioEffects::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainAudioEffects*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainAudioEffects::ResumeNormalSound() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainAudioEffects*>(), { "ResumeNormalSound", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainAudioEffects::TriggerLowPass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainAudioEffects*>(), { "TriggerLowPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainAudioEffects::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainAudioEffects*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainAudioEffects* GlobalNamespace::MainAudioEffects::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainAudioEffects*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainAudioEffects::MainAudioEffects() {}
