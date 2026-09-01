#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\LowLevel\JoystickState.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__JoystickState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__JoystickState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::JoystickState_Button::JoystickState_Button(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::JoystickState_Button::JoystickState_Button() {}
constexpr ::UnityEngine::InputSystem::LowLevel::JoystickState_Button UnityEngine::InputSystem::LowLevel::JoystickState_Button::HatSwitchUp{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::LowLevel::JoystickState_Button UnityEngine::InputSystem::LowLevel::JoystickState_Button::HatSwitchDown{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::LowLevel::JoystickState_Button UnityEngine::InputSystem::LowLevel::JoystickState_Button::HatSwitchLeft{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::LowLevel::JoystickState_Button UnityEngine::InputSystem::LowLevel::JoystickState_Button::HatSwitchRight{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::InputSystem::LowLevel::JoystickState_Button UnityEngine::InputSystem::LowLevel::JoystickState_Button::Trigger{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::JoystickState.get_kFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::LowLevel::JoystickState::get_kFormat)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65ae1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::JoystickState>(), { "get_kFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::JoystickState.get_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::JoystickState::*)()>(
    &::UnityEngine::InputSystem::LowLevel::JoystickState::get_format)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65ae1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::JoystickState>(), { "get_format", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::JoystickState::get_kFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::JoystickState>(), { "get_kFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::JoystickState::get_format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::JoystickState>(), { "get_format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::JoystickState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* UnityEngine::InputSystem::LowLevel::JoystickState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "buttons", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stick", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::JoystickState::JoystickState(int32_t buttons, ::UnityEngine::Vector2 stick) noexcept {
  this->buttons = buttons;
  this->stick = stick;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::JoystickState::JoystickState() {}
