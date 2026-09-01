#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRVirtualKeyboardHandInputHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboardHandInputHandler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardHandInputHandler.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardHandInputHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboardHandInputHandler::Awake)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5eed330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardHandInputHandler*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardHandInputHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardHandInputHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboardHandInputHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5eed38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardHandInputHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRVirtualKeyboardHandInputHandler::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardHandInputHandler*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardHandInputHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardHandInputHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRVirtualKeyboardHandInputHandler* GlobalNamespace::OVRVirtualKeyboardHandInputHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRVirtualKeyboardHandInputHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboardHandInputHandler::OVRVirtualKeyboardHandInputHandler() {}
