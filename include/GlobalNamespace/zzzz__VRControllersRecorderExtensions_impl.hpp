#pragma once
// IWYU pragma private; include "GlobalNamespace\VRControllersRecorderExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VRControllersRecorderExtensions_def.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptions_def.hpp"
#include "GlobalNamespace/zzzz__VRControllersRecorder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorderExtensions.ToVRControllersRecorderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VRControllersRecorder_Mode (*)(::GlobalNamespace::PlaymodeOptions)>(
    &::GlobalNamespace::VRControllersRecorderExtensions::ToVRControllersRecorderMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58e12f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRControllersRecorderExtensions*>(),
                                                                                           { "ToVRControllersRecorderMode", {}, { ::i2c::type_of<::GlobalNamespace::PlaymodeOptions>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::VRControllersRecorder_Mode GlobalNamespace::VRControllersRecorderExtensions::ToVRControllersRecorderMode(::GlobalNamespace::PlaymodeOptions playmodeOptions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRControllersRecorderExtensions*>(),
                                                                                         { "ToVRControllersRecorderMode", {}, { ::i2c::type_of<::GlobalNamespace::PlaymodeOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRControllersRecorder_Mode>(nullptr, ___internal_method, playmodeOptions);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRControllersRecorderExtensions::VRControllersRecorderExtensions() {}
