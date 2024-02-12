#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidGameControllerState_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidGameControllerState_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidAxis_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidGameControllerState_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidKeyCode_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants::*)()>(
    &::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae82c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants* UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants*>());
}
inline void UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants::__AndroidGameControllerState__Variants() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___buttons_e__FixedBuffer::__AndroidGameControllerState___buttons_e__FixedBuffer(
    uint32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___buttons_e__FixedBuffer::__AndroidGameControllerState___buttons_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___axis_e__FixedBuffer::__AndroidGameControllerState___axis_e__FixedBuffer(float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___axis_e__FixedBuffer::__AndroidGameControllerState___axis_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState.get_format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (
    ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::*)()>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::get_format)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ae81a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get(), "get_format",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState.WithButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState (
    ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::*)(::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode, bool)>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::WithButton)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ae81fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get(), "WithButton",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState.WithAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState (
    ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::*)(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, float_t)>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::WithAxis)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ae8240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get(), "WithAxis", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*
UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::setStaticF_kFormat(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "kFormat",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::getStaticF_kFormat() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "kFormat",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get>();
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::get_format() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get(), "get_format",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
/// @param value: bool (default: true)
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState
UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::WithButton(::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode code, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get(), "WithButton", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState, false>(this, ___internal_method, code, value);
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState
UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::WithAxis(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis axis, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get(), "WithAxis", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState, false>(this, ___internal_method, axis, value);
}
// Ctor Parameters [CppParam { name: "buttons", ty: "::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___buttons_e__FixedBuffer", modifiers: "", def_value: Some("{}") },
// CppParam { name: "axis", ty: "::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___axis_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::AndroidGameControllerState(
    ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___buttons_e__FixedBuffer buttons,
    ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___axis_e__FixedBuffer axis) noexcept {
  this->buttons = buttons;
  this->axis = axis;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::AndroidGameControllerState() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
