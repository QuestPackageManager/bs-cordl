#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/XInputController.hpp"
#include "UnityEngine/InputSystem/zzzz__Gamepad_impl.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceType::XInputController_DeviceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceType::XInputController_DeviceType() {}
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceType UnityEngine::InputSystem::XInput::XInputController_DeviceType::Gamepad{ static_cast<int32_t>(0x0) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType::XInputController_DeviceSubType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType::XInputController_DeviceSubType() {}
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType UnityEngine::InputSystem::XInput::XInputController_DeviceSubType::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType UnityEngine::InputSystem::XInput::XInputController_DeviceSubType::Gamepad{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType UnityEngine::InputSystem::XInput::XInputController_DeviceSubType::Wheel{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType UnityEngine::InputSystem::XInput::XInputController_DeviceSubType::ArcadeStick{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType UnityEngine::InputSystem::XInput::XInputController_DeviceSubType::FlightStick{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType UnityEngine::InputSystem::XInput::XInputController_DeviceSubType::DancePad{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType UnityEngine::InputSystem::XInput::XInputController_DeviceSubType::Guitar{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType UnityEngine::InputSystem::XInput::XInputController_DeviceSubType::GuitarAlternate{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType UnityEngine::InputSystem::XInput::XInputController_DeviceSubType::DrumKit{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType UnityEngine::InputSystem::XInput::XInputController_DeviceSubType::GuitarBass{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType UnityEngine::InputSystem::XInput::XInputController_DeviceSubType::ArcadePad{ static_cast<int32_t>(0x13) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags::XInputController_DeviceFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags::XInputController_DeviceFlags() {}
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags UnityEngine::InputSystem::XInput::XInputController_DeviceFlags::ForceFeedbackSupported{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags UnityEngine::InputSystem::XInput::XInputController_DeviceFlags::Wireless{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags UnityEngine::InputSystem::XInput::XInputController_DeviceFlags::VoiceSupported{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags UnityEngine::InputSystem::XInput::XInputController_DeviceFlags::PluginModulesSupported{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags UnityEngine::InputSystem::XInput::XInputController_DeviceFlags::NoNavigation{ static_cast<int32_t>(0x10) };
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputSystem::XInput::XInputController_DeviceType", modifiers: "", def_value: Some("{}") }, CppParam { name: "subType", ty:
// "::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty:
// "::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XInput::XInputController_Capabilities::XInputController_Capabilities(::UnityEngine::InputSystem::XInput::XInputController_DeviceType type,
                                                                                                           ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType subType,
                                                                                                           ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags flags) noexcept {
  this->type = type;
  this->subType = subType;
  this->flags = flags;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XInput::XInputController_Capabilities::XInputController_Capabilities() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_menu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::XInput::XInputController::*)()>(
    &::UnityEngine::InputSystem::XInput::XInputController::get_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x45ea9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                               "get_menu", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.set_menu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::XInput::XInputController::set_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x45eaa00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(), "set_menu", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_view
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::XInput::XInputController::*)()>(
    &::UnityEngine::InputSystem::XInput::XInputController::get_view)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x45eaa08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                               "get_view", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.set_view
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::XInput::XInputController::set_view)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x45eaa10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(), "set_view", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_subType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType (
    ::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::get_subType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x45eaa18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                               "get_subType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags (
    ::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::get_flags)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x45eaaac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                               "get_flags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.FinishSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)()>(
    &::UnityEngine::InputSystem::XInput::XInputController::FinishSetup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x45eaad0;

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
  constexpr static std::size_t addrs = 0x45eaa3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                               "ParseCapabilities", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)()>(
    &::UnityEngine::InputSystem::XInput::XInputController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x45eaaf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get__menu_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menu_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get__menu_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menu_k__BackingField;
}
constexpr void UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menu_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get__view_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____view_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get__view_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____view_k__BackingField;
}
constexpr void UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_set__view_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____view_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get_m_HaveParsedCapabilities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HaveParsedCapabilities;
}
constexpr bool const& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get_m_HaveParsedCapabilities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HaveParsedCapabilities;
}
constexpr void UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_set_m_HaveParsedCapabilities(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HaveParsedCapabilities = value;
}
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get_m_SubType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubType;
}
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType const& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get_m_SubType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubType;
}
constexpr void UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_set_m_SubType(::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SubType = value;
}
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get_m_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags const& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get_m_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_set_m_Flags(::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Flags = value;
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::XInput::XInputController::get_menu() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                             "get_menu", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XInput::XInputController::set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(), "set_menu", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::XInput::XInputController::get_view() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                             "get_view", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XInput::XInputController::set_view(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(), "set_view", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType UnityEngine::InputSystem::XInput::XInputController::get_subType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                             "get_subType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags UnityEngine::InputSystem::XInput::XInputController::get_flags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                             "get_flags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XInput::XInputController::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XInput::XInputController::ParseCapabilities() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                             "ParseCapabilities", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XInput::XInputController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XInput::XInputController* UnityEngine::InputSystem::XInput::XInputController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::XInput::XInputController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XInput::XInputController::XInputController() {}
