#pragma once
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Gamepad_impl.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_def.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceType::__XInputController__DeviceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceType::__XInputController__DeviceType() {}
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceType UnityEngine::InputSystem::XInput::__XInputController__DeviceType::Gamepad{ static_cast<int32_t>(0x0) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType::__XInputController__DeviceSubType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType::__XInputController__DeviceSubType() {}
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType::Gamepad{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType::Wheel{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType::ArcadeStick{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType::FlightStick{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType::DancePad{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType::Guitar{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType::GuitarAlternate{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType::DrumKit{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType::GuitarBass{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType::ArcadePad{ static_cast<int32_t>(0x13) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags::__XInputController__DeviceFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags::__XInputController__DeviceFlags() {}
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags::ForceFeedbackSupported{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags::Wireless{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags::VoiceSupported{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags::PluginModulesSupported{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags::NoNavigation{ static_cast<int32_t>(0x10) };
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputSystem::XInput::__XInputController__DeviceType", modifiers: "", def_value: Some("{}") }, CppParam { name: "subType", ty:
// "::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty:
// "::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__Capabilities::__XInputController__Capabilities(::UnityEngine::InputSystem::XInput::__XInputController__DeviceType type,
                                                                                                                 ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType subType,
                                                                                                                 ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags flags) noexcept {
  this->type = type;
  this->subType = subType;
  this->flags = flags;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__Capabilities::__XInputController__Capabilities() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_menu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::XInput::XInputController::*)()>(
    &::UnityEngine::InputSystem::XInput::XInputController::get_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac9a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                               "get_menu", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.set_menu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::XInput::XInputController::set_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac9a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(), "set_menu", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_view
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::XInput::XInputController::*)()>(
    &::UnityEngine::InputSystem::XInput::XInputController::get_view)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac9a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                               "get_view", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.set_view
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::XInput::XInputController::set_view)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac9a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(), "set_view", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_subType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType (
    ::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::get_subType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ac9a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                               "get_subType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags (
    ::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::get_flags)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ac9ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                               "get_flags", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.FinishSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)()>(
    &::UnityEngine::InputSystem::XInput::XInputController::FinishSetup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2ac9ad8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.ParseCapabilities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)()>(
    &::UnityEngine::InputSystem::XInput::XInputController::ParseCapabilities)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ac9a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                               "ParseCapabilities", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)()>(
    &::UnityEngine::InputSystem::XInput::XInputController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac9af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::XInput::XInputController::__get__menu_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menu_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& UnityEngine::InputSystem::XInput::XInputController::__get__menu_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menu_k__BackingField;
}
constexpr void UnityEngine::InputSystem::XInput::XInputController::__set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menu_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::XInput::XInputController::__get__view_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____view_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& UnityEngine::InputSystem::XInput::XInputController::__get__view_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____view_k__BackingField;
}
constexpr void UnityEngine::InputSystem::XInput::XInputController::__set__view_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____view_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::InputSystem::XInput::XInputController::__get_m_HaveParsedCapabilities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HaveParsedCapabilities;
}
constexpr bool const& UnityEngine::InputSystem::XInput::XInputController::__get_m_HaveParsedCapabilities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HaveParsedCapabilities;
}
constexpr void UnityEngine::InputSystem::XInput::XInputController::__set_m_HaveParsedCapabilities(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HaveParsedCapabilities = value;
}
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType& UnityEngine::InputSystem::XInput::XInputController::__get_m_SubType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubType;
}
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType const& UnityEngine::InputSystem::XInput::XInputController::__get_m_SubType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubType;
}
constexpr void UnityEngine::InputSystem::XInput::XInputController::__set_m_SubType(::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SubType = value;
}
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags& UnityEngine::InputSystem::XInput::XInputController::__get_m_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags const& UnityEngine::InputSystem::XInput::XInputController::__get_m_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::XInput::XInputController::__set_m_Flags(::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Flags = value;
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::XInput::XInputController::get_menu() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                             "get_menu", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XInput::XInputController::set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(), "set_menu", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::XInput::XInputController::get_view() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                             "get_view", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XInput::XInputController::set_view(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(), "set_view", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType UnityEngine::InputSystem::XInput::XInputController::get_subType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                             "get_subType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags UnityEngine::InputSystem::XInput::XInputController::get_flags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                             "get_flags", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XInput::XInputController::FinishSetup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                             "FinishSetup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XInput::XInputController::ParseCapabilities() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                             "ParseCapabilities", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XInput::XInputController* UnityEngine::InputSystem::XInput::XInputController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::XInput::XInputController*>());
}
inline void UnityEngine::InputSystem::XInput::XInputController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XInput::XInputController::XInputController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
