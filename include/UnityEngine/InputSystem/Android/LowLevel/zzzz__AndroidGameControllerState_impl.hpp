#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Android\LowLevel\AndroidGameControllerState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidGameControllerState_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidAxis_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidGameControllerState_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidKeyCode_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants::*)()>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65aca54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants* UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants::AndroidGameControllerState_Variants() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__axis_e__FixedBuffer::AndroidGameControllerState__axis_e__FixedBuffer(float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__axis_e__FixedBuffer::AndroidGameControllerState__axis_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__buttons_e__FixedBuffer::AndroidGameControllerState__buttons_e__FixedBuffer(uint32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__buttons_e__FixedBuffer::AndroidGameControllerState__buttons_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState.get_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::*)()>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::get_format)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65ac944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>(), { "get_format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState.WithButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState (
    ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::*)(::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode, bool)>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::WithButton)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x65ac9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>(),
                                                             { "WithButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState.WithAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState (
    ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::*)(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, float_t)>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::WithAxis)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65ac9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>(),
                                                             { "WithAxis", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::setStaticF_kFormat(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "kFormat", ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::getStaticF_kFormat() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "kFormat", ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>();
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::get_format() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>(), { "get_format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState
UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::WithButton(::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode code, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>(),
                                                           { "WithButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>(*this, ___internal_method, code, value);
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState
UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::WithAxis(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis axis, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>(),
                                                           { "WithAxis", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>(*this, ___internal_method, axis, value);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*
UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "buttons", ty: "::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__buttons_e__FixedBuffer", modifiers: "", def_value: Some("{}") },
// CppParam { name: "axis", ty: "::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__axis_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::AndroidGameControllerState(
    ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__buttons_e__FixedBuffer buttons,
    ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__axis_e__FixedBuffer axis) noexcept {
  this->buttons = buttons;
  this->axis = axis;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::AndroidGameControllerState() {}
