#pragma once
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__JoystickState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__JoystickState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button::__JoystickState__Button(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button::__JoystickState__Button() {}
constexpr ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button UnityEngine::InputSystem::LowLevel::__JoystickState__Button::HatSwitchUp{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button UnityEngine::InputSystem::LowLevel::__JoystickState__Button::HatSwitchDown{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button UnityEngine::InputSystem::LowLevel::__JoystickState__Button::HatSwitchLeft{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button UnityEngine::InputSystem::LowLevel::__JoystickState__Button::HatSwitchRight{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button UnityEngine::InputSystem::LowLevel::__JoystickState__Button::Trigger{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::JoystickState.get_kFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(
    &::UnityEngine::InputSystem::LowLevel::JoystickState::get_kFormat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2bcf490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::JoystickState>::get(),
                                                                               "get_kFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::JoystickState.get_format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::JoystickState::*)()>(
    &::UnityEngine::InputSystem::LowLevel::JoystickState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2bcf4c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::JoystickState>::get(),
                                                                               "get_format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::JoystickState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* UnityEngine::InputSystem::LowLevel::JoystickState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::JoystickState::get_kFormat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::JoystickState>::get(),
                                                                             "get_kFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::JoystickState::get_format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::JoystickState>::get(),
                                                                             "get_format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "buttons", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stick", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::JoystickState::JoystickState(int32_t buttons, ::UnityEngine::Vector2 stick) noexcept {
  this->buttons = buttons;
  this->stick = stick;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::JoystickState::JoystickState() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
