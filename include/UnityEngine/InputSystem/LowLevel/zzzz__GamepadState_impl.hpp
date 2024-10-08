#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/GamepadState.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__GamepadState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__GamepadButton_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::GamepadState.get_Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(
    &::UnityEngine::InputSystem::LowLevel::GamepadState::get_Format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4591650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::GamepadState>::get(),
                                                                               "get_Format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::GamepadState.get_format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::GamepadState::*)()>(
    &::UnityEngine::InputSystem::LowLevel::GamepadState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4591680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::GamepadState>::get(),
                                                                               "get_format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::GamepadState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::GamepadState::*)(
    ::ArrayW<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::Array<::UnityEngine::InputSystem::LowLevel::GamepadButton>*>)>(&::UnityEngine::InputSystem::LowLevel::GamepadState::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x45916b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::GamepadState>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                       ::ArrayW<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::Array<::UnityEngine::InputSystem::LowLevel::GamepadButton>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::GamepadState.WithButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::GamepadState (::UnityEngine::InputSystem::LowLevel::GamepadState::*)(
    ::UnityEngine::InputSystem::LowLevel::GamepadButton, bool)>(&::UnityEngine::InputSystem::LowLevel::GamepadState::WithButton)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4591760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::GamepadState>::get(), "WithButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::GamepadButton>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::GamepadState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* UnityEngine::InputSystem::LowLevel::GamepadState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
constexpr uint32_t& UnityEngine::InputSystem::LowLevel::GamepadState::__cordl_internal_get_buttons() {
  return this->___buttons;
}
constexpr uint32_t const& UnityEngine::InputSystem::LowLevel::GamepadState::__cordl_internal_get_buttons() const {
  return this->___buttons;
}
constexpr void UnityEngine::InputSystem::LowLevel::GamepadState::__cordl_internal_set_buttons(uint32_t value) {
  this->___buttons = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::LowLevel::GamepadState::__cordl_internal_get_leftStick() {
  return this->___leftStick;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::LowLevel::GamepadState::__cordl_internal_get_leftStick() const {
  return this->___leftStick;
}
constexpr void UnityEngine::InputSystem::LowLevel::GamepadState::__cordl_internal_set_leftStick(::UnityEngine::Vector2 value) {
  this->___leftStick = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::LowLevel::GamepadState::__cordl_internal_get_rightStick() {
  return this->___rightStick;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::LowLevel::GamepadState::__cordl_internal_get_rightStick() const {
  return this->___rightStick;
}
constexpr void UnityEngine::InputSystem::LowLevel::GamepadState::__cordl_internal_set_rightStick(::UnityEngine::Vector2 value) {
  this->___rightStick = value;
}
constexpr float_t& UnityEngine::InputSystem::LowLevel::GamepadState::__cordl_internal_get_leftTrigger() {
  return this->___leftTrigger;
}
constexpr float_t const& UnityEngine::InputSystem::LowLevel::GamepadState::__cordl_internal_get_leftTrigger() const {
  return this->___leftTrigger;
}
constexpr void UnityEngine::InputSystem::LowLevel::GamepadState::__cordl_internal_set_leftTrigger(float_t value) {
  this->___leftTrigger = value;
}
constexpr float_t& UnityEngine::InputSystem::LowLevel::GamepadState::__cordl_internal_get_rightTrigger() {
  return this->___rightTrigger;
}
constexpr float_t const& UnityEngine::InputSystem::LowLevel::GamepadState::__cordl_internal_get_rightTrigger() const {
  return this->___rightTrigger;
}
constexpr void UnityEngine::InputSystem::LowLevel::GamepadState::__cordl_internal_set_rightTrigger(float_t value) {
  this->___rightTrigger = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::GamepadState::get_Format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::GamepadState>::get(),
                                                                             "get_Format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::GamepadState::get_format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::GamepadState>::get(),
                                                                             "get_format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline void
UnityEngine::InputSystem::LowLevel::GamepadState::_ctor(::ArrayW<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::Array<::UnityEngine::InputSystem::LowLevel::GamepadButton>*> buttons) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::GamepadState>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::ArrayW<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::Array<::UnityEngine::InputSystem::LowLevel::GamepadButton>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buttons);
}
/// @param value: bool (default: true)
inline ::UnityEngine::InputSystem::LowLevel::GamepadState UnityEngine::InputSystem::LowLevel::GamepadState::WithButton(::UnityEngine::InputSystem::LowLevel::GamepadButton button, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::GamepadState>::get(), "WithButton", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::GamepadButton>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::GamepadState, false>(this, ___internal_method, button, value);
}
// Ctor Parameters [CppParam { name: "buttons", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftStick", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "rightStick", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftTrigger", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "rightTrigger", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadState::GamepadState(uint32_t buttons, ::UnityEngine::Vector2 leftStick, ::UnityEngine::Vector2 rightStick, float_t leftTrigger,
                                                                           float_t rightTrigger) noexcept {
  this->buttons = buttons;
  this->leftStick = leftStick;
  this->rightStick = rightStick;
  this->leftTrigger = leftTrigger;
  this->rightTrigger = rightTrigger;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadState::GamepadState() {}
