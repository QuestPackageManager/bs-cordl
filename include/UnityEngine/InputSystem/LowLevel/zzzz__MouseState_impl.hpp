#pragma once
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__MouseState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__MouseButton_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::MouseState.get_Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::LowLevel::MouseState::get_Format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ae89fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::MouseState>::get(),
                                                                               "get_Format", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::MouseState.WithButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::MouseState (::UnityEngine::InputSystem::LowLevel::MouseState::*)(
    ::UnityEngine::InputSystem::LowLevel::MouseButton, bool)>(&::UnityEngine::InputSystem::LowLevel::MouseState::WithButton)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ae8a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::MouseState>::get(), "WithButton", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::MouseButton>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::MouseState.get_format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::MouseState::*)()>(
    &::UnityEngine::InputSystem::LowLevel::MouseState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ae8a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::MouseState>::get(),
                                                                               "get_format", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::MouseState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::LowLevel::MouseState::__get_position() {
  return this->___position;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::LowLevel::MouseState::__get_position() const {
  return this->___position;
}
constexpr void UnityEngine::InputSystem::LowLevel::MouseState::__set_position(::UnityEngine::Vector2 value) {
  this->___position = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::LowLevel::MouseState::__get_delta() {
  return this->___delta;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::LowLevel::MouseState::__get_delta() const {
  return this->___delta;
}
constexpr void UnityEngine::InputSystem::LowLevel::MouseState::__set_delta(::UnityEngine::Vector2 value) {
  this->___delta = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::LowLevel::MouseState::__get_scroll() {
  return this->___scroll;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::LowLevel::MouseState::__get_scroll() const {
  return this->___scroll;
}
constexpr void UnityEngine::InputSystem::LowLevel::MouseState::__set_scroll(::UnityEngine::Vector2 value) {
  this->___scroll = value;
}
constexpr uint16_t& UnityEngine::InputSystem::LowLevel::MouseState::__get_buttons() {
  return this->___buttons;
}
constexpr uint16_t const& UnityEngine::InputSystem::LowLevel::MouseState::__get_buttons() const {
  return this->___buttons;
}
constexpr void UnityEngine::InputSystem::LowLevel::MouseState::__set_buttons(uint16_t value) {
  this->___buttons = value;
}
constexpr uint16_t& UnityEngine::InputSystem::LowLevel::MouseState::__get_displayIndex() {
  return this->___displayIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::LowLevel::MouseState::__get_displayIndex() const {
  return this->___displayIndex;
}
constexpr void UnityEngine::InputSystem::LowLevel::MouseState::__set_displayIndex(uint16_t value) {
  this->___displayIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::LowLevel::MouseState::__get_clickCount() {
  return this->___clickCount;
}
constexpr uint16_t const& UnityEngine::InputSystem::LowLevel::MouseState::__get_clickCount() const {
  return this->___clickCount;
}
constexpr void UnityEngine::InputSystem::LowLevel::MouseState::__set_clickCount(uint16_t value) {
  this->___clickCount = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::MouseState::get_Format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::MouseState>::get(),
                                                                             "get_Format", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
/// @param state: bool (default: true)
inline ::UnityEngine::InputSystem::LowLevel::MouseState UnityEngine::InputSystem::LowLevel::MouseState::WithButton(::UnityEngine::InputSystem::LowLevel::MouseButton button, bool state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::MouseState>::get(), "WithButton", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::MouseButton>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::MouseState, false>(this, ___internal_method, button, state);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::MouseState::get_format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::MouseState>::get(),
                                                                             "get_format", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "delta", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "scroll", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "buttons", ty: "uint16_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "displayIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "clickCount", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::MouseState::MouseState(::UnityEngine::Vector2 position, ::UnityEngine::Vector2 delta, ::UnityEngine::Vector2 scroll, uint16_t buttons,
                                                                       uint16_t displayIndex, uint16_t clickCount) noexcept {
  this->position = position;
  this->delta = delta;
  this->scroll = scroll;
  this->buttons = buttons;
  this->displayIndex = displayIndex;
  this->clickCount = clickCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::MouseState::MouseState() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
