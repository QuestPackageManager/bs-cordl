#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/PenState.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__PenState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/zzzz__PenButton_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::PenState.get_Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::LowLevel::PenState::get_Format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x317bc14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::PenState>::get(),
                                                                               "get_Format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::PenState.WithButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::PenState (::UnityEngine::InputSystem::LowLevel::PenState::*)(
    ::UnityEngine::InputSystem::PenButton, bool)>(&::UnityEngine::InputSystem::LowLevel::PenState::WithButton)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x317bc44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::PenState>::get(), "WithButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::PenButton>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::PenState.get_format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::PenState::*)()>(
    &::UnityEngine::InputSystem::LowLevel::PenState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x317bc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::PenState>::get(),
                                                                               "get_format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::PenState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* UnityEngine::InputSystem::LowLevel::PenState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_get_position() {
  return this->___position;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_get_position() const {
  return this->___position;
}
constexpr void UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_set_position(::UnityEngine::Vector2 value) {
  this->___position = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_get_delta() {
  return this->___delta;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_get_delta() const {
  return this->___delta;
}
constexpr void UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_set_delta(::UnityEngine::Vector2 value) {
  this->___delta = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_get_tilt() {
  return this->___tilt;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_get_tilt() const {
  return this->___tilt;
}
constexpr void UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_set_tilt(::UnityEngine::Vector2 value) {
  this->___tilt = value;
}
constexpr float_t& UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_get_pressure() {
  return this->___pressure;
}
constexpr float_t const& UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_get_pressure() const {
  return this->___pressure;
}
constexpr void UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_set_pressure(float_t value) {
  this->___pressure = value;
}
constexpr float_t& UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_get_twist() {
  return this->___twist;
}
constexpr float_t const& UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_get_twist() const {
  return this->___twist;
}
constexpr void UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_set_twist(float_t value) {
  this->___twist = value;
}
constexpr uint16_t& UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_get_buttons() {
  return this->___buttons;
}
constexpr uint16_t const& UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_get_buttons() const {
  return this->___buttons;
}
constexpr void UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_set_buttons(uint16_t value) {
  this->___buttons = value;
}
constexpr uint16_t& UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_get_displayIndex() {
  return this->___displayIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_get_displayIndex() const {
  return this->___displayIndex;
}
constexpr void UnityEngine::InputSystem::LowLevel::PenState::__cordl_internal_set_displayIndex(uint16_t value) {
  this->___displayIndex = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::PenState::get_Format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::PenState>::get(),
                                                                             "get_Format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
/// @param state: bool (default: true)
inline ::UnityEngine::InputSystem::LowLevel::PenState UnityEngine::InputSystem::LowLevel::PenState::WithButton(::UnityEngine::InputSystem::PenButton button, bool state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::PenState>::get(), "WithButton", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::PenButton>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::PenState, false>(this, ___internal_method, button, state);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::PenState::get_format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::PenState>::get(),
                                                                             "get_format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "delta", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "tilt", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "twist", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "buttons", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "displayIndex",
// ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::PenState::PenState(::UnityEngine::Vector2 position, ::UnityEngine::Vector2 delta, ::UnityEngine::Vector2 tilt, float_t pressure, float_t twist,
                                                                   uint16_t buttons, uint16_t displayIndex) noexcept {
  this->position = position;
  this->delta = delta;
  this->tilt = tilt;
  this->pressure = pressure;
  this->twist = twist;
  this->buttons = buttons;
  this->displayIndex = displayIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::PenState::PenState() {}
