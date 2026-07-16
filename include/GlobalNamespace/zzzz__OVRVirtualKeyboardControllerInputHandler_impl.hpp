#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboardControllerInputHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboardControllerInputHandler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardControllerInputHandler.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardControllerInputHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboardControllerInputHandler::Awake)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5eeb0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardControllerInputHandler*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardControllerInputHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardControllerInputHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboardControllerInputHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5eeb104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardControllerInputHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRVirtualKeyboardControllerInputHandler::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardControllerInputHandler*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardControllerInputHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardControllerInputHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRVirtualKeyboardControllerInputHandler* GlobalNamespace::OVRVirtualKeyboardControllerInputHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRVirtualKeyboardControllerInputHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboardControllerInputHandler::OVRVirtualKeyboardControllerInputHandler() {}
