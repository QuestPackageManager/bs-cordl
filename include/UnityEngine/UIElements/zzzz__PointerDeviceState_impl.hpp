#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerDeviceState.hpp"
#include "System/zzzz__Object_impl.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)()>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a31600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>::get(), "get_Position",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.set_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a31608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>::get(), "set_Position", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.get_Panel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IPanel* (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)()>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a31610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>::get(), "get_Panel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.set_Panel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a31618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>::get(), "set_Panel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.get_Flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::PointerDeviceState_LocationFlag (
    ::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)()>(&::UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a31620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>::get(), "get_Flags",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.set_Flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)(
    ::UnityEngine::UIElements::PointerDeviceState_LocationFlag)>(&::UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a31628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>::get(), "set_Flags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.SetLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)(
    ::UnityEngine::Vector2, ::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::PointerDeviceState_PointerLocation::SetLocation)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x4a30ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>::get(), "SetLocation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Position() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>::get(), "get_Position",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Position(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>::get(), "set_Position", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Panel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>::get(), "get_Panel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Panel(::UnityEngine::UIElements::IPanel* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>::get(), "set_Panel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::PointerDeviceState_LocationFlag UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Flags() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>::get(), "get_Flags",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PointerDeviceState_LocationFlag, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Flags(::UnityEngine::UIElements::PointerDeviceState_LocationFlag value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>::get(), "set_Flags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::PointerDeviceState_PointerLocation::SetLocation(::UnityEngine::Vector2 position, ::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>::get(), "SetLocation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, panel);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::PointerDeviceState::RemovePanelData)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x4a30e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "RemovePanelData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.SavePointerPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    int32_t, ::UnityEngine::Vector2, ::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::ContextType)>(&::UnityEngine::UIElements::PointerDeviceState::SavePointerPosition)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4a310f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "SavePointerPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.PressButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::PressButton)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x4a2cd64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "PressButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.ReleaseButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::ReleaseButton)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x4a2d2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "ReleaseButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.ReleaseAllButtons
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::ReleaseAllButtons)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4a2e948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "ReleaseAllButtons",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetPointerPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(int32_t, ::UnityEngine::UIElements::ContextType)>(
    &::UnityEngine::UIElements::PointerDeviceState::GetPointerPosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4a26c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "GetPointerPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IPanel* (*)(int32_t, ::UnityEngine::UIElements::ContextType)>(
    &::UnityEngine::UIElements::PointerDeviceState::GetPanel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4a311a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "GetPanel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.HasFlagFast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::UnityEngine::UIElements::PointerDeviceState_LocationFlag, ::UnityEngine::UIElements::PointerDeviceState_LocationFlag)>(&::UnityEngine::UIElements::PointerDeviceState::HasFlagFast)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4a31220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "HasFlagFast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.HasLocationFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    int32_t, ::UnityEngine::UIElements::ContextType, ::UnityEngine::UIElements::PointerDeviceState_LocationFlag)>(&::UnityEngine::UIElements::PointerDeviceState::HasLocationFlag)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4a3122c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "HasLocationFlag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetPressedButtons
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::GetPressedButtons)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4a312c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "GetPressedButtons",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.HasAdditionalPressedButtons
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::HasAdditionalPressedButtons)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4a3133c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "HasAdditionalPressedButtons", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.SetPlayerPanelWithSoftPointerCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::PointerDeviceState::SetPlayerPanelWithSoftPointerCapture)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x4a313d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "SetPlayerPanelWithSoftPointerCapture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetPlayerPanelWithSoftPointerCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IPanel* (*)(int32_t)>(
    &::UnityEngine::UIElements::PointerDeviceState::GetPlayerPanelWithSoftPointerCapture)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4a31480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "GetPlayerPanelWithSoftPointerCapture",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PointerDeviceState::setStaticF_s_PlayerPointerLocations(
    ::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation, ::Array<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation, ::Array<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>*>,
                                    "s_PlayerPointerLocations", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get>(
      std::forward<::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation, ::Array<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>*>>(value));
}
inline ::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation, ::Array<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>*>
UnityEngine::UIElements::PointerDeviceState::getStaticF_s_PlayerPointerLocations() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation, ::Array<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>*>,
                                           "s_PlayerPointerLocations", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get>();
}
inline void UnityEngine::UIElements::PointerDeviceState::setStaticF_s_PressedButtons(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_PressedButtons",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::UIElements::PointerDeviceState::getStaticF_s_PressedButtons() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_PressedButtons",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get>();
}
inline void
UnityEngine::UIElements::PointerDeviceState::setStaticF_s_PlayerPanelWithSoftPointerCapture(::ArrayW<::UnityEngine::UIElements::IPanel*, ::Array<::UnityEngine::UIElements::IPanel*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::UIElements::IPanel*, ::Array<::UnityEngine::UIElements::IPanel*>*>, "s_PlayerPanelWithSoftPointerCapture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get>(
      std::forward<::ArrayW<::UnityEngine::UIElements::IPanel*, ::Array<::UnityEngine::UIElements::IPanel*>*>>(value));
}
inline ::ArrayW<::UnityEngine::UIElements::IPanel*, ::Array<::UnityEngine::UIElements::IPanel*>*> UnityEngine::UIElements::PointerDeviceState::getStaticF_s_PlayerPanelWithSoftPointerCapture() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::UIElements::IPanel*, ::Array<::UnityEngine::UIElements::IPanel*>*>, "s_PlayerPanelWithSoftPointerCapture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get>();
}
inline void UnityEngine::UIElements::PointerDeviceState::RemovePanelData(::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "RemovePanelData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, panel);
}
inline void UnityEngine::UIElements::PointerDeviceState::SavePointerPosition(int32_t pointerId, ::UnityEngine::Vector2 position, ::UnityEngine::UIElements::IPanel* panel,
                                                                             ::UnityEngine::UIElements::ContextType contextType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "SavePointerPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pointerId, position, panel, contextType);
}
inline void UnityEngine::UIElements::PointerDeviceState::PressButton(int32_t pointerId, int32_t buttonId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "PressButton", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pointerId, buttonId);
}
inline void UnityEngine::UIElements::PointerDeviceState::ReleaseButton(int32_t pointerId, int32_t buttonId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "ReleaseButton", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pointerId, buttonId);
}
inline void UnityEngine::UIElements::PointerDeviceState::ReleaseAllButtons(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "ReleaseAllButtons",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pointerId);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::PointerDeviceState::GetPointerPosition(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "GetPointerPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, pointerId, contextType);
}
inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PointerDeviceState::GetPanel(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "GetPanel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*, false>(nullptr, ___internal_method, pointerId, contextType);
}
inline bool UnityEngine::UIElements::PointerDeviceState::HasFlagFast(::UnityEngine::UIElements::PointerDeviceState_LocationFlag flagSet,
                                                                     ::UnityEngine::UIElements::PointerDeviceState_LocationFlag flag) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "HasFlagFast", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, flagSet, flag);
}
inline bool UnityEngine::UIElements::PointerDeviceState::HasLocationFlag(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType,
                                                                         ::UnityEngine::UIElements::PointerDeviceState_LocationFlag flag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "HasLocationFlag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pointerId, contextType, flag);
}
inline int32_t UnityEngine::UIElements::PointerDeviceState::GetPressedButtons(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "GetPressedButtons",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pointerId);
}
inline bool UnityEngine::UIElements::PointerDeviceState::HasAdditionalPressedButtons(int32_t pointerId, int32_t exceptButtonId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "HasAdditionalPressedButtons", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pointerId, exceptButtonId);
}
inline void UnityEngine::UIElements::PointerDeviceState::SetPlayerPanelWithSoftPointerCapture(int32_t pointerId, ::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "SetPlayerPanelWithSoftPointerCapture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pointerId, panel);
}
inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PointerDeviceState::GetPlayerPanelWithSoftPointerCapture(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerDeviceState*>::get(), "GetPlayerPanelWithSoftPointerCapture",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*, false>(nullptr, ___internal_method, pointerId);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerDeviceState::PointerDeviceState() {}
