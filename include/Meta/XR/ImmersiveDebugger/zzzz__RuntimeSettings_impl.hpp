#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/RuntimeSettings.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "GlobalNamespace/zzzz__OVRRuntimeAssetsBase_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__RuntimeSettings_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugData_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedData_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__RuntimeSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption::RuntimeSettings_DistanceOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption::RuntimeSettings_DistanceOption() {}
constexpr ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption::Close{ static_cast<int32_t>(0x0) };
constexpr ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption::Default{ static_cast<int32_t>(0x1) };
constexpr ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption::Far{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::Init)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5892b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> (*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_Instance)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5892b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.add_OnImmersiveDebuggerEnabledChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::add_OnImmersiveDebuggerEnabledChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5892c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "add_OnImmersiveDebuggerEnabledChanged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.remove_OnImmersiveDebuggerEnabledChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::remove_OnImmersiveDebuggerEnabledChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5892d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "remove_OnImmersiveDebuggerEnabledChanged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ImmersiveDebuggerEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ImmersiveDebuggerEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_ImmersiveDebuggerEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ImmersiveDebuggerEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ImmersiveDebuggerEnabled)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5892e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ImmersiveDebuggerEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ImmersiveDebuggerDisplayAtStartup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ImmersiveDebuggerDisplayAtStartup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                 "get_ImmersiveDebuggerDisplayAtStartup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ImmersiveDebuggerDisplayAtStartup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ImmersiveDebuggerDisplayAtStartup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ImmersiveDebuggerDisplayAtStartup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ShowInspectors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowInspectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_ShowInspectors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ShowInspectors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowInspectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ShowInspectors",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ShowConsole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowConsole)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_ShowConsole", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ShowConsole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowConsole)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ShowConsole",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_FollowOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_FollowOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_FollowOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_FollowOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_FollowOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_FollowOverride",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_RotateOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_RotateOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_RotateOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_RotateOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_RotateOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_RotateOverride",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ShowInfoLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowInfoLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_ShowInfoLog", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ShowInfoLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowInfoLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ShowInfoLog",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ShowWarningLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowWarningLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_ShowWarningLog", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ShowWarningLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowWarningLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ShowWarningLog",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ShowErrorLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowErrorLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_ShowErrorLog", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ShowErrorLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowErrorLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ShowErrorLog",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_CollapsedIdenticalLogEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_CollapsedIdenticalLogEntries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "get_CollapsedIdenticalLogEntries",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_CollapsedIdenticalLogEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_CollapsedIdenticalLogEntries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_CollapsedIdenticalLogEntries",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_MaximumNumberOfLogEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_MaximumNumberOfLogEntries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_MaximumNumberOfLogEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_MaximumNumberOfLogEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(int32_t)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_MaximumNumberOfLogEntries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_MaximumNumberOfLogEntries",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_PanelDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_PanelDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_PanelDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_PanelDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(
    ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_PanelDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_PanelDistance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_CreateEventSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_CreateEventSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_CreateEventSystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_CreateEventSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_CreateEventSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_CreateEventSystem",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_AutomaticLayerCullingUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_AutomaticLayerCullingUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "get_AutomaticLayerCullingUpdate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_AutomaticLayerCullingUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_AutomaticLayerCullingUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_AutomaticLayerCullingUpdate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_PanelLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_PanelLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_PanelLayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_PanelLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(int32_t)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_PanelLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_PanelLayer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_MeshRendererLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_MeshRendererLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_MeshRendererLayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_MeshRendererLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(int32_t)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_MeshRendererLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_MeshRendererLayer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_OverlayDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_OverlayDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_OverlayDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_OverlayDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(int32_t)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_OverlayDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_OverlayDepth",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_InspectedDataEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<bool>* (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_InspectedDataEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_InspectedDataEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_InspectedDataEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(::System::Collections::Generic::List_1<bool>*)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_InspectedDataEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_InspectedDataEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_InspectedDataAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>* (
    ::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_InspectedDataAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_InspectedDataAssets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_InspectedDataAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(
    ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>*)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_InspectedDataAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_InspectedDataAssets", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_UseCustomIntegrationConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_UseCustomIntegrationConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_UseCustomIntegrationConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_UseCustomIntegrationConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_UseCustomIntegrationConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_UseCustomIntegrationConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_CustomIntegrationConfigClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_CustomIntegrationConfigClassName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "get_CustomIntegrationConfigClassName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_CustomIntegrationConfigClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(::StringW)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_CustomIntegrationConfigClassName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_CustomIntegrationConfigClassName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_HierarchyViewShowsPrivateMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_HierarchyViewShowsPrivateMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "get_HierarchyViewShowsPrivateMembers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_HierarchyViewShowsPrivateMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_HierarchyViewShowsPrivateMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_HierarchyViewShowsPrivateMembers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ClickButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_Button (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ClickButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_ClickButton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ClickButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(::GlobalNamespace::OVRInput_Button)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ClickButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ClickButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ToggleFollowTranslationButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_Button (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ToggleFollowTranslationButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "get_ToggleFollowTranslationButton",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ToggleFollowTranslationButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(::GlobalNamespace::OVRInput_Button)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ToggleFollowTranslationButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ToggleFollowTranslationButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ToggleFollowRotationButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_Button (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ToggleFollowRotationButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "get_ToggleFollowRotationButton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ToggleFollowRotationButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(::GlobalNamespace::OVRInput_Button)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ToggleFollowRotationButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ToggleFollowRotationButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ImmersiveDebuggerToggleDisplayButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_Button (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ImmersiveDebuggerToggleDisplayButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                 "get_ImmersiveDebuggerToggleDisplayButton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ImmersiveDebuggerToggleDisplayButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(::GlobalNamespace::OVRInput_Button)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ImmersiveDebuggerToggleDisplayButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ImmersiveDebuggerToggleDisplayButton",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x58930a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5893260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x58934a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                               "OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugData*>*& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_debugTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugTypes;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugData*>* const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_debugTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugTypes;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_debugTypes(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___debugTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*&
Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_debugTypesDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugTypesDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* const&
Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_debugTypesDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugTypesDict;
}
constexpr void
Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_debugTypesDict(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___debugTypesDict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_immersiveDebuggerEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immersiveDebuggerEnabled;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_immersiveDebuggerEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immersiveDebuggerEnabled;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_immersiveDebuggerEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immersiveDebuggerEnabled = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_immersiveDebuggerDisplayAtStartup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immersiveDebuggerDisplayAtStartup;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_immersiveDebuggerDisplayAtStartup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immersiveDebuggerDisplayAtStartup;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_immersiveDebuggerDisplayAtStartup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immersiveDebuggerDisplayAtStartup = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_showInspectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showInspectors;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_showInspectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showInspectors;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_showInspectors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showInspectors = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_showConsole() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showConsole;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_showConsole() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showConsole;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_showConsole(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showConsole = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_followOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followOverride;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_followOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followOverride;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_followOverride(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___followOverride = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_rotateOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotateOverride;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_rotateOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotateOverride;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_rotateOverride(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotateOverride = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_showInfoLog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showInfoLog;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_showInfoLog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showInfoLog;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_showInfoLog(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showInfoLog = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_showWarningLog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showWarningLog;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_showWarningLog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showWarningLog;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_showWarningLog(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showWarningLog = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_showErrorLog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showErrorLog;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_showErrorLog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showErrorLog;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_showErrorLog(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showErrorLog = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_collapsedIdenticalLogEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collapsedIdenticalLogEntries;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_collapsedIdenticalLogEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collapsedIdenticalLogEntries;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_collapsedIdenticalLogEntries(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___collapsedIdenticalLogEntries = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_maximumNumberOfLogEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maximumNumberOfLogEntries;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_maximumNumberOfLogEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maximumNumberOfLogEntries;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_maximumNumberOfLogEntries(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maximumNumberOfLogEntries = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_panelDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panelDistance;
}
constexpr ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_panelDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panelDistance;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_panelDistance(::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panelDistance = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_createEventSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createEventSystem;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_createEventSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createEventSystem;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_createEventSystem(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___createEventSystem = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_automaticLayerCullingUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___automaticLayerCullingUpdate;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_automaticLayerCullingUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___automaticLayerCullingUpdate;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_automaticLayerCullingUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___automaticLayerCullingUpdate = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_panelLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panelLayer;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_panelLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panelLayer;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_panelLayer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panelLayer = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_meshRendererLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___meshRendererLayer;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_meshRendererLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___meshRendererLayer;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_meshRendererLayer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___meshRendererLayer = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_overlayDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overlayDepth;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_overlayDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overlayDepth;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_overlayDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overlayDepth = value;
}
constexpr ::System::Collections::Generic::List_1<bool>*& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_inspectedDataEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inspectedDataEnabled;
}
constexpr ::System::Collections::Generic::List_1<bool>* const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_inspectedDataEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inspectedDataEnabled;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_inspectedDataEnabled(::System::Collections::Generic::List_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inspectedDataEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>*& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_inspectedDataAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inspectedDataAssets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>* const&
Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_inspectedDataAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inspectedDataAssets;
}
constexpr void
Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_inspectedDataAssets(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inspectedDataAssets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_useCustomIntegrationConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCustomIntegrationConfig;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_useCustomIntegrationConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCustomIntegrationConfig;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_useCustomIntegrationConfig(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useCustomIntegrationConfig = value;
}
constexpr ::StringW& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_customIntegrationConfigClassName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customIntegrationConfigClassName;
}
constexpr ::StringW const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_customIntegrationConfigClassName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customIntegrationConfigClassName;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_customIntegrationConfigClassName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customIntegrationConfigClassName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_hierarchyViewShowsPrivateMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hierarchyViewShowsPrivateMembers;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_hierarchyViewShowsPrivateMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hierarchyViewShowsPrivateMembers;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_hierarchyViewShowsPrivateMembers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hierarchyViewShowsPrivateMembers = value;
}
constexpr ::GlobalNamespace::OVRInput_Button& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_clickButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clickButton;
}
constexpr ::GlobalNamespace::OVRInput_Button const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_clickButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clickButton;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_clickButton(::GlobalNamespace::OVRInput_Button value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clickButton = value;
}
constexpr ::GlobalNamespace::OVRInput_Button& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_toggleFollowTranslationButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toggleFollowTranslationButton;
}
constexpr ::GlobalNamespace::OVRInput_Button const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_toggleFollowTranslationButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toggleFollowTranslationButton;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_toggleFollowTranslationButton(::GlobalNamespace::OVRInput_Button value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toggleFollowTranslationButton = value;
}
constexpr ::GlobalNamespace::OVRInput_Button& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_toggleFollowRotationButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toggleFollowRotationButton;
}
constexpr ::GlobalNamespace::OVRInput_Button const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_toggleFollowRotationButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toggleFollowRotationButton;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_toggleFollowRotationButton(::GlobalNamespace::OVRInput_Button value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toggleFollowRotationButton = value;
}
constexpr ::GlobalNamespace::OVRInput_Button& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_immersiveDebuggerToggleDisplayButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immersiveDebuggerToggleDisplayButton;
}
constexpr ::GlobalNamespace::OVRInput_Button const& Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_get_immersiveDebuggerToggleDisplayButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immersiveDebuggerToggleDisplayButton;
}
constexpr void Meta::XR::ImmersiveDebugger::RuntimeSettings::__cordl_internal_set_immersiveDebuggerToggleDisplayButton(::GlobalNamespace::OVRInput_Button value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immersiveDebuggerToggleDisplayButton = value;
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::setStaticF_InstanceAssetName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "InstanceAssetName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Meta::XR::ImmersiveDebugger::RuntimeSettings::getStaticF_InstanceAssetName() {
  return ::cordl_internals::getStaticField<::StringW, "InstanceAssetName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::setStaticF__instance(::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings>, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get>(
      std::forward<::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings>>(value));
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> Meta::XR::ImmersiveDebugger::RuntimeSettings::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings>, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::setStaticF_OnImmersiveDebuggerEnabledChanged(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "OnImmersiveDebuggerEnabledChanged",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Meta::XR::ImmersiveDebugger::RuntimeSettings::getStaticF_OnImmersiveDebuggerEnabledChanged() {
  return ::cordl_internals::getStaticField<::System::Action*, "OnImmersiveDebuggerEnabledChanged",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> Meta::XR::ImmersiveDebugger::RuntimeSettings::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings>, false>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::add_OnImmersiveDebuggerEnabledChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "add_OnImmersiveDebuggerEnabledChanged",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::remove_OnImmersiveDebuggerEnabledChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "remove_OnImmersiveDebuggerEnabledChanged",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ImmersiveDebuggerEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_ImmersiveDebuggerEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ImmersiveDebuggerEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ImmersiveDebuggerEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ImmersiveDebuggerDisplayAtStartup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "get_ImmersiveDebuggerDisplayAtStartup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ImmersiveDebuggerDisplayAtStartup(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ImmersiveDebuggerDisplayAtStartup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowInspectors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_ShowInspectors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowInspectors(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ShowInspectors",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowConsole() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_ShowConsole", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowConsole(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ShowConsole",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_FollowOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_FollowOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_FollowOverride(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_FollowOverride",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_RotateOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_RotateOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_RotateOverride(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_RotateOverride",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowInfoLog() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_ShowInfoLog", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowInfoLog(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ShowInfoLog",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowWarningLog() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_ShowWarningLog", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowWarningLog(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ShowWarningLog",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowErrorLog() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_ShowErrorLog", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowErrorLog(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ShowErrorLog",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_CollapsedIdenticalLogEntries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_CollapsedIdenticalLogEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_CollapsedIdenticalLogEntries(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_CollapsedIdenticalLogEntries",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Meta::XR::ImmersiveDebugger::RuntimeSettings::get_MaximumNumberOfLogEntries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_MaximumNumberOfLogEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_MaximumNumberOfLogEntries(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_MaximumNumberOfLogEntries",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption Meta::XR::ImmersiveDebugger::RuntimeSettings::get_PanelDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_PanelDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_PanelDistance(::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_PanelDistance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_CreateEventSystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_CreateEventSystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_CreateEventSystem(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_CreateEventSystem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_AutomaticLayerCullingUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_AutomaticLayerCullingUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_AutomaticLayerCullingUpdate(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_AutomaticLayerCullingUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Meta::XR::ImmersiveDebugger::RuntimeSettings::get_PanelLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_PanelLayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_PanelLayer(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_PanelLayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Meta::XR::ImmersiveDebugger::RuntimeSettings::get_MeshRendererLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_MeshRendererLayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_MeshRendererLayer(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_MeshRendererLayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Meta::XR::ImmersiveDebugger::RuntimeSettings::get_OverlayDepth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_OverlayDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_OverlayDepth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_OverlayDepth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<bool>* Meta::XR::ImmersiveDebugger::RuntimeSettings::get_InspectedDataEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_InspectedDataEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<bool>*, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_InspectedDataEnabled(::System::Collections::Generic::List_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_InspectedDataEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>* Meta::XR::ImmersiveDebugger::RuntimeSettings::get_InspectedDataAssets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_InspectedDataAssets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>*, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_InspectedDataAssets(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_InspectedDataAssets", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_UseCustomIntegrationConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_UseCustomIntegrationConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_UseCustomIntegrationConfig(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_UseCustomIntegrationConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Meta::XR::ImmersiveDebugger::RuntimeSettings::get_CustomIntegrationConfigClassName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "get_CustomIntegrationConfigClassName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_CustomIntegrationConfigClassName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_CustomIntegrationConfigClassName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_HierarchyViewShowsPrivateMembers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "get_HierarchyViewShowsPrivateMembers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_HierarchyViewShowsPrivateMembers(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_HierarchyViewShowsPrivateMembers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRInput_Button Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ClickButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_ClickButton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Button, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ClickButton(::GlobalNamespace::OVRInput_Button value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ClickButton", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRInput_Button Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ToggleFollowTranslationButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "get_ToggleFollowTranslationButton",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Button, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ToggleFollowTranslationButton(::GlobalNamespace::OVRInput_Button value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ToggleFollowTranslationButton", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRInput_Button Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ToggleFollowRotationButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "get_ToggleFollowRotationButton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Button, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ToggleFollowRotationButton(::GlobalNamespace::OVRInput_Button value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ToggleFollowRotationButton", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRInput_Button Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ImmersiveDebuggerToggleDisplayButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                               "get_ImmersiveDebuggerToggleDisplayButton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Button, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ImmersiveDebuggerToggleDisplayButton(::GlobalNamespace::OVRInput_Button value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), "set_ImmersiveDebuggerToggleDisplayButton",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>::get(),
                                                                             "OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::RuntimeSettings* Meta::XR::ImmersiveDebugger::RuntimeSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr Meta::XR::ImmersiveDebugger::RuntimeSettings::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* Meta::XR::ImmersiveDebugger::RuntimeSettings::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::RuntimeSettings::RuntimeSettings() {}
