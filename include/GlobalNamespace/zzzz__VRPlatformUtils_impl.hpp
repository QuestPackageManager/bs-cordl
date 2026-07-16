#pragma once
// IWYU pragma private; include "GlobalNamespace/VRPlatformUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VRPlatformUtils_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRPlatformUtils.GetMenuButtonDefaultImplementation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::VRPlatformUtils::GetMenuButtonDefaultImplementation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x585d408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(), { "GetMenuButtonDefaultImplementation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRPlatformUtils.GetMenuButtonDownDefaultImplementation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::VRPlatformUtils::GetMenuButtonDownDefaultImplementation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x585d484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(), { "GetMenuButtonDownDefaultImplementation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRPlatformUtils.GetAnyJoystickMaxAxisDefaultImplementation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::IVRPlatformHelper*)>(
    &::GlobalNamespace::VRPlatformUtils::GetAnyJoystickMaxAxisDefaultImplementation)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x585fb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(),
                                                             { "GetAnyJoystickMaxAxisDefaultImplementation", {}, { ::i2c::type_of<::GlobalNamespace::IVRPlatformHelper*>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::VRPlatformUtils::GetMenuButtonDefaultImplementation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(), { "GetMenuButtonDefaultImplementation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::VRPlatformUtils::GetMenuButtonDownDefaultImplementation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(), { "GetMenuButtonDownDefaultImplementation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::VRPlatformUtils::GetAnyJoystickMaxAxisDefaultImplementation(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRPlatformUtils*>(), { "GetAnyJoystickMaxAxisDefaultImplementation", {}, { ::i2c::type_of<::GlobalNamespace::IVRPlatformHelper*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, vrPlatformHelper);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRPlatformUtils::VRPlatformUtils() {}
