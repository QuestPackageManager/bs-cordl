#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRKeyboard.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVRKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
// Ctor Parameters [CppParam { name: "isPositionValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isPositionTracked", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "isOrientationValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isOrientationTracked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") },
// CppParam { name: "timeInSeconds", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardState::OVRKeyboard_TrackedKeyboardState(bool isPositionValid, bool isPositionTracked, bool isOrientationValid, bool isOrientationTracked,
                                                                                                ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, double_t timeInSeconds) noexcept {
  this->isPositionValid = isPositionValid;
  this->isPositionTracked = isPositionTracked;
  this->isOrientationValid = isOrientationValid;
  this->isOrientationTracked = isOrientationTracked;
  this->position = position;
  this->rotation = rotation;
  this->timeInSeconds = timeInSeconds;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardState::OVRKeyboard_TrackedKeyboardState() {}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Identifier", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Dimensions", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "KeyboardFlags", ty: "::GlobalNamespace::OVRPlugin_TrackedKeyboardFlags", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "SupportedPresentationStyles", ty: "::GlobalNamespace::OVRPlugin_TrackedKeyboardPresentationStyles", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo::OVRKeyboard_TrackedKeyboardInfo(::StringW Name, uint64_t Identifier, ::UnityEngine::Vector3 Dimensions,
                                                                                              ::GlobalNamespace::OVRPlugin_TrackedKeyboardFlags KeyboardFlags,
                                                                                              ::GlobalNamespace::OVRPlugin_TrackedKeyboardPresentationStyles SupportedPresentationStyles) noexcept {
  this->Name = Name;
  this->Identifier = Identifier;
  this->Dimensions = Dimensions;
  this->KeyboardFlags = KeyboardFlags;
  this->SupportedPresentationStyles = SupportedPresentationStyles;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo::OVRKeyboard_TrackedKeyboardInfo() {}
//  Writing Method size for method: ::GlobalNamespace::OVRKeyboard.GetKeyboardState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRKeyboard_TrackedKeyboardState (*)()>(&::GlobalNamespace::OVRKeyboard::GetKeyboardState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5edf948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRKeyboard*>(), { "GetKeyboardState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRKeyboard.GetSystemKeyboardInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags, ::by_ref<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo>)>(
    &::GlobalNamespace::OVRKeyboard::GetSystemKeyboardInfo)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5edfa18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRKeyboard*>(), { "GetSystemKeyboardInfo",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags>(),
                                                                                                        ::i2c::type_of<::by_ref<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRKeyboard.StopKeyboardTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo)>(&::GlobalNamespace::OVRKeyboard::StopKeyboardTracking)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5edfb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRKeyboard*>(),
                                                                                           { "StopKeyboardTracking", {}, { ::i2c::type_of<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRKeyboard_TrackedKeyboardState GlobalNamespace::OVRKeyboard::GetKeyboardState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRKeyboard*>(), { "GetKeyboardState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRKeyboard_TrackedKeyboardState>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRKeyboard::GetSystemKeyboardInfo(::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags keyboardQueryFlags,
                                                                ::by_ref<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo> keyboardInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRKeyboard*>(), { "GetSystemKeyboardInfo",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags>(),
                                                                                                      ::i2c::type_of<::by_ref<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, keyboardQueryFlags, keyboardInfo);
}
inline bool GlobalNamespace::OVRKeyboard::StopKeyboardTracking(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo keyboardInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRKeyboard*>(), { "StopKeyboardTracking", {}, { ::i2c::type_of<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, keyboardInfo);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRKeyboard::OVRKeyboard() {}
