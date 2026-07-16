#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMixedRealityCaptureConfigurationExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureConfigurationExtensions_def.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureConfiguration_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions.ApplyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRMixedRealityCaptureConfiguration*, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*)>(
    &::GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions::ApplyTo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f004a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions*>(),
                         { "ApplyTo", {}, { ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>(), ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions.ReadFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRMixedRealityCaptureConfiguration*, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*)>(
    &::GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions::ReadFrom)> {
  constexpr static std::size_t size = 0x142c;
  constexpr static std::size_t addrs = 0x5f004a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions*>(),
            { "ReadFrom", {}, { ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>(), ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions::ApplyTo(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* dest,
                                                                                    ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions*>(),
                       { "ApplyTo", {}, { ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>(), ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, source);
}
inline void GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions::ReadFrom(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* dest,
                                                                                     ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions*>(),
                       { "ReadFrom", {}, { ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>(), ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, source);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions::OVRMixedRealityCaptureConfigurationExtensions() {}
