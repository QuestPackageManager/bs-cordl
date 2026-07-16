#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerDeviceState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDeviceState_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDeviceState_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::PointerDeviceState_LocationFlag::PointerDeviceState_LocationFlag(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerDeviceState_LocationFlag::PointerDeviceState_LocationFlag() {}
constexpr ::UnityEngine::UIElements::PointerDeviceState_LocationFlag UnityEngine::UIElements::PointerDeviceState_LocationFlag::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::PointerDeviceState_LocationFlag UnityEngine::UIElements::PointerDeviceState_LocationFlag::OutsidePanel{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)()>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d9ff50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "get_Position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d9ff58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "set_Position", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.get_Panel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IPanel* (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)()>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d9ff60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "get_Panel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.set_Panel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d9ff68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(),
                                                                                           { "set_Panel", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.get_Flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PointerDeviceState_LocationFlag (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)()>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d9ff70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "get_Flags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.set_Flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)(::UnityEngine::UIElements::PointerDeviceState_LocationFlag)>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d9ff78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(),
                                                                                           { "set_Flags", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.SetLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)(::UnityEngine::Vector2, ::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::SetLocation)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6d9f6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(),
                                                             { "SetLocation", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Position() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "get_Position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Position(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "set_Position", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Panel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "get_Panel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Panel(::UnityEngine::UIElements::IPanel* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(),
                                                                                         { "set_Panel", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::PointerDeviceState_LocationFlag UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Flags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "get_Flags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Flags(::UnityEngine::UIElements::PointerDeviceState_LocationFlag value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(),
                                                                                         { "set_Flags", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::PointerDeviceState_PointerLocation::SetLocation(::UnityEngine::Vector2 position, ::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(),
                                                           { "SetLocation", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, panel);
}
// Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Panel_k__BackingField", ty:
// "::UnityEngine::UIElements::IPanel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Flags_k__BackingField", ty: "::UnityEngine::UIElements::PointerDeviceState_LocationFlag", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::PointerDeviceState_PointerLocation::PointerDeviceState_PointerLocation(
    ::UnityEngine::Vector2 _Position_k__BackingField, ::UnityEngine::UIElements::IPanel* _Panel_k__BackingField,
    ::UnityEngine::UIElements::PointerDeviceState_LocationFlag _Flags_k__BackingField) noexcept {
  this->_Position_k__BackingField = _Position_k__BackingField;
  this->_Panel_k__BackingField = _Panel_k__BackingField;
  this->_Flags_k__BackingField = _Flags_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerDeviceState_PointerLocation::PointerDeviceState_PointerLocation() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.RemovePanelData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::PointerDeviceState::RemovePanelData)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6d9f4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "RemovePanelData", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.SavePointerPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Vector2, ::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::ContextType)>(
    &::UnityEngine::UIElements::PointerDeviceState::SavePointerPosition)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6d9f7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                             { "SavePointerPosition",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.PressButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::PressButton)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6d9f88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "PressButton", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.ReleaseButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::ReleaseButton)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6d9f9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "ReleaseButton", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.ReleaseAllButtons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::ReleaseAllButtons)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d9d5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "ReleaseAllButtons", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetPointerPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(int32_t, ::UnityEngine::UIElements::ContextType)>(
    &::UnityEngine::UIElements::PointerDeviceState::GetPointerPosition)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6d9467c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                             { "GetPointerPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IPanel* (*)(int32_t, ::UnityEngine::UIElements::ContextType)>(
    &::UnityEngine::UIElements::PointerDeviceState::GetPanel)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6d9fac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                             { "GetPanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.HasFlagFast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::PointerDeviceState_LocationFlag, ::UnityEngine::UIElements::PointerDeviceState_LocationFlag)>(
    &::UnityEngine::UIElements::PointerDeviceState::HasFlagFast)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d9fb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
            { "HasFlagFast", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>(), ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.HasLocationFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::UnityEngine::UIElements::ContextType, ::UnityEngine::UIElements::PointerDeviceState_LocationFlag)>(
    &::UnityEngine::UIElements::PointerDeviceState::HasLocationFlag)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6d9fb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "HasLocationFlag",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>(),
                                                                                                                ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetPressedButtons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::GetPressedButtons)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d9fbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetPressedButtons", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.HasAdditionalPressedButtons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::HasAdditionalPressedButtons)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6d9fc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                                                           { "HasAdditionalPressedButtons", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.SetPlayerPanelWithSoftPointerCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::PointerDeviceState::SetPlayerPanelWithSoftPointerCapture)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6d9fd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                             { "SetPlayerPanelWithSoftPointerCapture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetPlayerPanelWithSoftPointerCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IPanel* (*)(int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::GetPlayerPanelWithSoftPointerCapture)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d9fdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetPlayerPanelWithSoftPointerCapture", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PointerDeviceState::setStaticF_s_PlayerPointerLocations(::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>, "s_PlayerPointerLocations", ::UnityEngine::UIElements::PointerDeviceState*>(
      std::forward<::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>>(value));
}
inline ::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation> UnityEngine::UIElements::PointerDeviceState::getStaticF_s_PlayerPointerLocations() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>, "s_PlayerPointerLocations", ::UnityEngine::UIElements::PointerDeviceState*>();
}
inline void UnityEngine::UIElements::PointerDeviceState::setStaticF_s_PressedButtons(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_PressedButtons", ::UnityEngine::UIElements::PointerDeviceState*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::UIElements::PointerDeviceState::getStaticF_s_PressedButtons() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_PressedButtons", ::UnityEngine::UIElements::PointerDeviceState*>();
}
inline void UnityEngine::UIElements::PointerDeviceState::setStaticF_s_PlayerPanelWithSoftPointerCapture(::ArrayW<::UnityEngine::UIElements::IPanel*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::UIElements::IPanel*>, "s_PlayerPanelWithSoftPointerCapture", ::UnityEngine::UIElements::PointerDeviceState*>(
      std::forward<::ArrayW<::UnityEngine::UIElements::IPanel*>>(value));
}
inline ::ArrayW<::UnityEngine::UIElements::IPanel*> UnityEngine::UIElements::PointerDeviceState::getStaticF_s_PlayerPanelWithSoftPointerCapture() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::UIElements::IPanel*>, "s_PlayerPanelWithSoftPointerCapture", ::UnityEngine::UIElements::PointerDeviceState*>();
}
inline void UnityEngine::UIElements::PointerDeviceState::RemovePanelData(::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "RemovePanelData", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, panel);
}
inline void UnityEngine::UIElements::PointerDeviceState::SavePointerPosition(int32_t pointerId, ::UnityEngine::Vector2 position, ::UnityEngine::UIElements::IPanel* panel,
                                                                             ::UnityEngine::UIElements::ContextType contextType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                           { "SavePointerPosition",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointerId, position, panel, contextType);
}
inline void UnityEngine::UIElements::PointerDeviceState::PressButton(int32_t pointerId, int32_t buttonId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "PressButton", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointerId, buttonId);
}
inline void UnityEngine::UIElements::PointerDeviceState::ReleaseButton(int32_t pointerId, int32_t buttonId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "ReleaseButton", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointerId, buttonId);
}
inline void UnityEngine::UIElements::PointerDeviceState::ReleaseAllButtons(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "ReleaseAllButtons", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointerId);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::PointerDeviceState::GetPointerPosition(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                           { "GetPointerPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, pointerId, contextType);
}
inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PointerDeviceState::GetPanel(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                                                         { "GetPanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*>(nullptr, ___internal_method, pointerId, contextType);
}
inline bool UnityEngine::UIElements::PointerDeviceState::HasFlagFast(::UnityEngine::UIElements::PointerDeviceState_LocationFlag flagSet,
                                                                     ::UnityEngine::UIElements::PointerDeviceState_LocationFlag flag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
          { "HasFlagFast", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>(), ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flagSet, flag);
}
inline bool UnityEngine::UIElements::PointerDeviceState::HasLocationFlag(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType,
                                                                         ::UnityEngine::UIElements::PointerDeviceState_LocationFlag flag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                          { "HasLocationFlag",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>(), ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pointerId, contextType, flag);
}
inline int32_t UnityEngine::UIElements::PointerDeviceState::GetPressedButtons(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetPressedButtons", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pointerId);
}
inline bool UnityEngine::UIElements::PointerDeviceState::HasAdditionalPressedButtons(int32_t pointerId, int32_t exceptButtonId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                                                         { "HasAdditionalPressedButtons", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pointerId, exceptButtonId);
}
inline void UnityEngine::UIElements::PointerDeviceState::SetPlayerPanelWithSoftPointerCapture(int32_t pointerId, ::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                           { "SetPlayerPanelWithSoftPointerCapture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointerId, panel);
}
inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PointerDeviceState::GetPlayerPanelWithSoftPointerCapture(int32_t pointerId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetPlayerPanelWithSoftPointerCapture", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*>(nullptr, ___internal_method, pointerId);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerDeviceState::PointerDeviceState() {}
