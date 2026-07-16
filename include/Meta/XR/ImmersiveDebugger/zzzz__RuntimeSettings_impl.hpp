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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::Init)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a4006c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> (*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_Instance)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5a400c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_Instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.add_OnImmersiveDebuggerEnabledChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::add_OnImmersiveDebuggerEnabledChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a401d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(),
                                                                                           { "add_OnImmersiveDebuggerEnabledChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.remove_OnImmersiveDebuggerEnabledChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::remove_OnImmersiveDebuggerEnabledChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a402c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(),
                                                                                           { "remove_OnImmersiveDebuggerEnabledChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ImmersiveDebuggerEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ImmersiveDebuggerEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a403b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ImmersiveDebuggerEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ImmersiveDebuggerEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ImmersiveDebuggerEnabled)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a403c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ImmersiveDebuggerEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ImmersiveDebuggerDisplayAtStartup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ImmersiveDebuggerDisplayAtStartup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4045c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ImmersiveDebuggerDisplayAtStartup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ImmersiveDebuggerDisplayAtStartup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ImmersiveDebuggerDisplayAtStartup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a40464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ImmersiveDebuggerDisplayAtStartup", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ShowInspectors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowInspectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4046c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ShowInspectors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ShowInspectors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowInspectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a40474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ShowInspectors", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ShowConsole
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowConsole)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4047c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ShowConsole", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ShowConsole
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowConsole)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a40484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ShowConsole", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_FollowOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_FollowOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4048c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_FollowOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_FollowOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_FollowOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a40494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_FollowOverride", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_RotateOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_RotateOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4049c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_RotateOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_RotateOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_RotateOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a404a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_RotateOverride", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ShowInfoLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowInfoLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a404ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ShowInfoLog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ShowInfoLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowInfoLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a404b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ShowInfoLog", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ShowWarningLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowWarningLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a404bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ShowWarningLog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ShowWarningLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowWarningLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a404c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ShowWarningLog", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ShowErrorLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowErrorLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a404cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ShowErrorLog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ShowErrorLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowErrorLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a404d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ShowErrorLog", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_CollapsedIdenticalLogEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_CollapsedIdenticalLogEntries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a404dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_CollapsedIdenticalLogEntries", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_CollapsedIdenticalLogEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_CollapsedIdenticalLogEntries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a404e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_CollapsedIdenticalLogEntries", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_MaximumNumberOfLogEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_MaximumNumberOfLogEntries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a404ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_MaximumNumberOfLogEntries", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_MaximumNumberOfLogEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(int32_t)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_MaximumNumberOfLogEntries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a404f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_MaximumNumberOfLogEntries", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_PanelDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_PanelDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a404fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_PanelDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_PanelDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_PanelDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a40504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(),
                                                             { "set_PanelDistance", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_CreateEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_CreateEventSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4050c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_CreateEventSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_CreateEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_CreateEventSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a40514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_CreateEventSystem", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_AutomaticLayerCullingUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_AutomaticLayerCullingUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4051c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_AutomaticLayerCullingUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_AutomaticLayerCullingUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_AutomaticLayerCullingUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a40524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_AutomaticLayerCullingUpdate", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_PanelLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_PanelLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4052c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_PanelLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_PanelLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(int32_t)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_PanelLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a40534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_PanelLayer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_MeshRendererLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_MeshRendererLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4053c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_MeshRendererLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_MeshRendererLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(int32_t)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_MeshRendererLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a40544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_MeshRendererLayer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_OverlayDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_OverlayDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4054c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_OverlayDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_OverlayDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(int32_t)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_OverlayDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a40554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_OverlayDepth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_InspectedDataEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<bool>* (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_InspectedDataEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4055c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_InspectedDataEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_InspectedDataEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(::System::Collections::Generic::List_1<bool>*)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_InspectedDataEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a40564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(),
                                                                                           { "set_InspectedDataEnabled", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_InspectedDataAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>* (
    ::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_InspectedDataAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4056c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_InspectedDataAssets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_InspectedDataAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(
    ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>*)>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_InspectedDataAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a40574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(),
                                         { "set_InspectedDataAssets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_UseCustomIntegrationConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_UseCustomIntegrationConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4057c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_UseCustomIntegrationConfig", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_UseCustomIntegrationConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_UseCustomIntegrationConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a40584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_UseCustomIntegrationConfig", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_CustomIntegrationConfigClassName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_CustomIntegrationConfigClassName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4058c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_CustomIntegrationConfigClassName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_CustomIntegrationConfigClassName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(::StringW)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_CustomIntegrationConfigClassName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a40594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_CustomIntegrationConfigClassName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_HierarchyViewShowsPrivateMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_HierarchyViewShowsPrivateMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4059c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_HierarchyViewShowsPrivateMembers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_HierarchyViewShowsPrivateMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_HierarchyViewShowsPrivateMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a405a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_HierarchyViewShowsPrivateMembers", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ClickButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_Button (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ClickButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a405ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ClickButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ClickButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(::GlobalNamespace::OVRInput_Button)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ClickButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a405b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ClickButton", {}, { ::i2c::type_of<::GlobalNamespace::OVRInput_Button>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ToggleFollowTranslationButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_Button (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ToggleFollowTranslationButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a405bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ToggleFollowTranslationButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ToggleFollowTranslationButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(::GlobalNamespace::OVRInput_Button)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ToggleFollowTranslationButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a405c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(),
                                                                                           { "set_ToggleFollowTranslationButton", {}, { ::i2c::type_of<::GlobalNamespace::OVRInput_Button>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ToggleFollowRotationButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_Button (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ToggleFollowRotationButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a405cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ToggleFollowRotationButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ToggleFollowRotationButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(::GlobalNamespace::OVRInput_Button)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ToggleFollowRotationButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a405d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(),
                                                                                           { "set_ToggleFollowRotationButton", {}, { ::i2c::type_of<::GlobalNamespace::OVRInput_Button>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.get_ImmersiveDebuggerToggleDisplayButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_Button (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ImmersiveDebuggerToggleDisplayButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a405dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ImmersiveDebuggerToggleDisplayButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.set_ImmersiveDebuggerToggleDisplayButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)(::GlobalNamespace::OVRInput_Button)>(
    &::Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ImmersiveDebuggerToggleDisplayButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a405e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(),
                                                             { "set_ImmersiveDebuggerToggleDisplayButton", {}, { ::i2c::type_of<::GlobalNamespace::OVRInput_Button>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5a405ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5a407ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::RuntimeSettings.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::RuntimeSettings::*)()>(&::Meta::XR::ImmersiveDebugger::RuntimeSettings::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5a409ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "OnAfterDeserialize", {}, {} })));
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
  this->___debugTypes = value;
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
  this->___debugTypesDict = value;
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
  this->___inspectedDataEnabled = value;
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
  this->___inspectedDataAssets = value;
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
  this->___customIntegrationConfigClassName = value;
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
  ::cordl_internals::setStaticField<::StringW, "InstanceAssetName", ::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(std::forward<::StringW>(value));
}
inline ::StringW Meta::XR::ImmersiveDebugger::RuntimeSettings::getStaticF_InstanceAssetName() {
  return ::cordl_internals::getStaticField<::StringW, "InstanceAssetName", ::Meta::XR::ImmersiveDebugger::RuntimeSettings*>();
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::setStaticF__instance(::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings>, "_instance", ::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(
      std::forward<::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings>>(value));
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> Meta::XR::ImmersiveDebugger::RuntimeSettings::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings>, "_instance", ::Meta::XR::ImmersiveDebugger::RuntimeSettings*>();
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::setStaticF_OnImmersiveDebuggerEnabledChanged(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "OnImmersiveDebuggerEnabledChanged", ::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Meta::XR::ImmersiveDebugger::RuntimeSettings::getStaticF_OnImmersiveDebuggerEnabledChanged() {
  return ::cordl_internals::getStaticField<::System::Action*, "OnImmersiveDebuggerEnabledChanged", ::Meta::XR::ImmersiveDebugger::RuntimeSettings*>();
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> Meta::XR::ImmersiveDebugger::RuntimeSettings::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings>>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::add_OnImmersiveDebuggerEnabledChanged(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "add_OnImmersiveDebuggerEnabledChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::remove_OnImmersiveDebuggerEnabledChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(),
                                                                                         { "remove_OnImmersiveDebuggerEnabledChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ImmersiveDebuggerEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ImmersiveDebuggerEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ImmersiveDebuggerEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ImmersiveDebuggerEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ImmersiveDebuggerDisplayAtStartup() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ImmersiveDebuggerDisplayAtStartup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ImmersiveDebuggerDisplayAtStartup(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ImmersiveDebuggerDisplayAtStartup", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowInspectors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ShowInspectors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowInspectors(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ShowInspectors", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowConsole() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ShowConsole", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowConsole(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ShowConsole", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_FollowOverride() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_FollowOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_FollowOverride(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_FollowOverride", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_RotateOverride() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_RotateOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_RotateOverride(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_RotateOverride", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowInfoLog() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ShowInfoLog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowInfoLog(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ShowInfoLog", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowWarningLog() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ShowWarningLog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowWarningLog(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ShowWarningLog", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ShowErrorLog() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ShowErrorLog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ShowErrorLog(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ShowErrorLog", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_CollapsedIdenticalLogEntries() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_CollapsedIdenticalLogEntries", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_CollapsedIdenticalLogEntries(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_CollapsedIdenticalLogEntries", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::XR::ImmersiveDebugger::RuntimeSettings::get_MaximumNumberOfLogEntries() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_MaximumNumberOfLogEntries", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_MaximumNumberOfLogEntries(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_MaximumNumberOfLogEntries", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption Meta::XR::ImmersiveDebugger::RuntimeSettings::get_PanelDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_PanelDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_PanelDistance(::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(),
                                                           { "set_PanelDistance", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_CreateEventSystem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_CreateEventSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_CreateEventSystem(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_CreateEventSystem", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_AutomaticLayerCullingUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_AutomaticLayerCullingUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_AutomaticLayerCullingUpdate(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_AutomaticLayerCullingUpdate", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::XR::ImmersiveDebugger::RuntimeSettings::get_PanelLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_PanelLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_PanelLayer(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_PanelLayer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::XR::ImmersiveDebugger::RuntimeSettings::get_MeshRendererLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_MeshRendererLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_MeshRendererLayer(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_MeshRendererLayer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::XR::ImmersiveDebugger::RuntimeSettings::get_OverlayDepth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_OverlayDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_OverlayDepth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_OverlayDepth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<bool>* Meta::XR::ImmersiveDebugger::RuntimeSettings::get_InspectedDataEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_InspectedDataEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<bool>*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_InspectedDataEnabled(::System::Collections::Generic::List_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(),
                                                                                         { "set_InspectedDataEnabled", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>* Meta::XR::ImmersiveDebugger::RuntimeSettings::get_InspectedDataAssets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_InspectedDataAssets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_InspectedDataAssets(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(),
                                       { "set_InspectedDataAssets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_UseCustomIntegrationConfig() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_UseCustomIntegrationConfig", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_UseCustomIntegrationConfig(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_UseCustomIntegrationConfig", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::XR::ImmersiveDebugger::RuntimeSettings::get_CustomIntegrationConfigClassName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_CustomIntegrationConfigClassName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_CustomIntegrationConfigClassName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_CustomIntegrationConfigClassName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::RuntimeSettings::get_HierarchyViewShowsPrivateMembers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_HierarchyViewShowsPrivateMembers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_HierarchyViewShowsPrivateMembers(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_HierarchyViewShowsPrivateMembers", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRInput_Button Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ClickButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ClickButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Button>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ClickButton(::GlobalNamespace::OVRInput_Button value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "set_ClickButton", {}, { ::i2c::type_of<::GlobalNamespace::OVRInput_Button>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRInput_Button Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ToggleFollowTranslationButton() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ToggleFollowTranslationButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Button>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ToggleFollowTranslationButton(::GlobalNamespace::OVRInput_Button value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(),
                                                                                         { "set_ToggleFollowTranslationButton", {}, { ::i2c::type_of<::GlobalNamespace::OVRInput_Button>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRInput_Button Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ToggleFollowRotationButton() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ToggleFollowRotationButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Button>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ToggleFollowRotationButton(::GlobalNamespace::OVRInput_Button value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(),
                                                                                         { "set_ToggleFollowRotationButton", {}, { ::i2c::type_of<::GlobalNamespace::OVRInput_Button>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRInput_Button Meta::XR::ImmersiveDebugger::RuntimeSettings::get_ImmersiveDebuggerToggleDisplayButton() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "get_ImmersiveDebuggerToggleDisplayButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Button>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::set_ImmersiveDebuggerToggleDisplayButton(::GlobalNamespace::OVRInput_Button value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(),
                                                           { "set_ImmersiveDebuggerToggleDisplayButton", {}, { ::i2c::type_of<::GlobalNamespace::OVRInput_Button>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::RuntimeSettings::OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>(), { "OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::RuntimeSettings* Meta::XR::ImmersiveDebugger::RuntimeSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::RuntimeSettings*>());
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
