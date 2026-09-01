#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRMRAudioFilter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMRAudioFilter_def.hpp"
#include "GlobalNamespace/zzzz__OVRExternalComposition_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMRAudioFilter.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMRAudioFilter::*)()>(&::GlobalNamespace::OVRMRAudioFilter::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5df7490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMRAudioFilter*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMRAudioFilter.OnAudioFilterRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMRAudioFilter::*)(::ArrayW<float_t>, int32_t)>(&::GlobalNamespace::OVRMRAudioFilter::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5df749c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMRAudioFilter*>(), { "OnAudioFilterRead", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMRAudioFilter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMRAudioFilter::*)()>(&::GlobalNamespace::OVRMRAudioFilter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5df74b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMRAudioFilter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRMRAudioFilter::__cordl_internal_get_running() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___running;
}
constexpr bool const& GlobalNamespace::OVRMRAudioFilter::__cordl_internal_get_running() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___running;
}
constexpr void GlobalNamespace::OVRMRAudioFilter::__cordl_internal_set_running(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___running = value;
}
constexpr ::GlobalNamespace::OVRExternalComposition*& GlobalNamespace::OVRMRAudioFilter::__cordl_internal_get_composition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___composition;
}
constexpr ::GlobalNamespace::OVRExternalComposition* const& GlobalNamespace::OVRMRAudioFilter::__cordl_internal_get_composition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___composition;
}
constexpr void GlobalNamespace::OVRMRAudioFilter::__cordl_internal_set_composition(::GlobalNamespace::OVRExternalComposition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___composition = value;
}
inline void GlobalNamespace::OVRMRAudioFilter::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMRAudioFilter*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMRAudioFilter::OnAudioFilterRead(::ArrayW<float_t> data, int32_t channels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMRAudioFilter*>(), { "OnAudioFilterRead", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::OVRMRAudioFilter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMRAudioFilter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMRAudioFilter* GlobalNamespace::OVRMRAudioFilter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRMRAudioFilter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMRAudioFilter::OVRMRAudioFilter() {}
