#pragma once
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventStream_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputMetrics_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__DynamicBitfield_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceFindControlLayoutDelegate_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputRuntime_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommandDelegate_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceExecuteCommandDelegate_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputMetrics_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBlock_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__MemoryHelpers_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__DynamicBitfield_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlLayoutChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope::__InputManager__DeviceDisableScope(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope::__InputManager__DeviceDisableScope() {}
constexpr ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope UnityEngine::InputSystem::__InputManager__DeviceDisableScope::Everywhere{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope UnityEngine::InputSystem::__InputManager__DeviceDisableScope::InFrontendOnly{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope UnityEngine::InputSystem::__InputManager__DeviceDisableScope::TemporaryWhilePlayerIsInBackground{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceId", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isNative", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isRemoved", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputManager__AvailableDevice::__InputManager__AvailableDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description, int32_t deviceId,
                                                                                                       bool isNative, bool isRemoved) noexcept {
  this->description = description;
  this->deviceId = deviceId;
  this->isNative = isNative;
  this->isRemoved = isRemoved;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputManager__AvailableDevice::__InputManager__AvailableDevice() {}
// Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "time", ty: "double_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "monitor", ty: "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "monitorIndex", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout::__InputManager__StateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl* control, double_t time,
                                                                                                                           ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor,
                                                                                                                           int64_t monitorIndex, int32_t timerIndex) noexcept {
  this->control = control;
  this->time = time;
  this->monitor = monitor;
  this->monitorIndex = monitorIndex;
  this->timerIndex = timerIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout::__InputManager__StateChangeMonitorTimeout() {}
// Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "monitor", ty:
// "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "monitorIndex", ty: "int64_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "groupIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener::__InputManager__StateChangeMonitorListener(::UnityEngine::InputSystem::InputControl* control,
                                                                                                                             ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor,
                                                                                                                             int64_t monitorIndex, uint32_t groupIndex) noexcept {
  this->control = control;
  this->monitor = monitor;
  this->monitorIndex = monitorIndex;
  this->groupIndex = groupIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener::__InputManager__StateChangeMonitorListener() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice.get_count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::*)()>(
    &::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::get_count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe4624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>::get(), "get_count",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t, uint32_t)>(
    &::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::Add)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2fe462c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::*)(
    ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t, bool)>(&::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::Remove)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2fe47b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::*)()>(
    &::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::Clear)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2fe49ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice.CompactArrays
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::*)()>(
    &::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::CompactArrays)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2fe4a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>::get(),
                                                 "CompactArrays", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice.RemoveAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::RemoveAt)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2fe4900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>::get(), "RemoveAt",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice.SortMonitorsByIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::*)()>(
    &::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::SortMonitorsByIndex)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2fe4a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>::get(),
                                                 "SortMonitorsByIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::get_count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>::get(), "get_count",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::Add(::UnityEngine::InputSystem::InputControl* control,
                                                                                        ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex,
                                                                                        uint32_t groupIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control, monitor, monitorIndex, groupIndex);
}
inline void UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::Remove(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex,
                                                                                           bool deferRemoval) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, monitor, monitorIndex, deferRemoval);
}
inline void UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::CompactArrays() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>::get(), "CompactArrays",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::RemoveAt(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>::get(), "RemoveAt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::SortMonitorsByIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>::get(),
                                               "SortMonitorsByIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "memoryRegions", ty:
// "::ArrayW<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion,::Array<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion>*>", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "listeners", ty:
// "::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "signalled", ty: "::UnityEngine::InputSystem::DynamicBitfield", modifiers: "", def_value: Some("{}") }, CppParam { name: "needToUpdateOrderingOfMonitors", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "needToCompactArrays", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::__InputManager__StateChangeMonitorsForDevice(
    ::ArrayW<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion, ::Array<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion>*> memoryRegions,
    ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener, ::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener>*> listeners,
    ::UnityEngine::InputSystem::DynamicBitfield signalled, bool needToUpdateOrderingOfMonitors, bool needToCompactArrays) noexcept {
  this->memoryRegions = memoryRegions;
  this->listeners = listeners;
  this->signalled = signalled;
  this->needToUpdateOrderingOfMonitors = needToUpdateOrderingOfMonitors;
  this->needToCompactArrays = needToCompactArrays;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice::__InputManager__StateChangeMonitorsForDevice() {}
template <typename TDevice> inline void UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>::setStaticF___9(::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>*>::get>(
      std::forward<::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>*>(value));
}
template <typename TDevice> inline ::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>* UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>*>::get>();
}
template <typename TDevice> inline void UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>::setStaticF___9__60_0(::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*, "<>9__60_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>*>::get>(
      std::forward<::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*>(value));
}
template <typename TDevice> inline ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>::getStaticF___9__60_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*, "<>9__60_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>*>::get>();
}
template <typename TDevice> inline ::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>* UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>*>());
}
template <typename TDevice> inline void UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TDevice> inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>::_RegisterPrecompiledLayout_b__60_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>*>::get(),
                                               "<RegisterPrecompiledLayout>b__60_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TDevice> constexpr ::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>::__InputManager____c__60_1() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2fe4bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::*)()>(
    &::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2fe4be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::*)()>(
    &::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::MoveNext)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x2fe4c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::*)()>(
    &::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2fe52d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), "<>m__Finally1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75.__m__Finally2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::*)()>(
    &::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__m__Finally2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2fe5320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), "<>m__Finally2",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75.__m__Finally3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::*)()>(
    &::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__m__Finally3)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2fe5370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), "<>m__Finally3",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75.__m__Finally4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::*)()>(
    &::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__m__Finally4)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2fe53c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), "<>m__Finally4",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75.__m__Finally5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::*)()>(
    &::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__m__Finally5)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2fe5410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), "<>m__Finally5",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75.__m__Finally6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::*)()>(
    &::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__m__Finally6)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2fe5460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), "<>m__Finally6",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75.System_Collections_Generic_IEnumerator_System_String__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::*)()>(
    &::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::System_Collections_Generic_IEnumerator_System_String__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe54b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.String>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::*)()>(
    &::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2fe54b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::*)()>(
    &::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe54f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75.System_Collections_Generic_IEnumerable_System_String__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>* (::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::*)()>(
        &::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::System_Collections_Generic_IEnumerable_System_String__GetEnumerator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2fe5500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(),
                                    "System.Collections.Generic.IEnumerable<System.String>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::*)()>(
    &::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2fe55ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*
UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>*
UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::StringW& UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_set___2__current(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::StringW& UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get_basedOn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basedOn;
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get_basedOn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basedOn;
}
constexpr void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_set_basedOn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___basedOn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___3__basedOn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__basedOn;
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___3__basedOn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__basedOn;
}
constexpr void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_set___3__basedOn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__basedOn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::InputManager*& UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputManager*> const&
UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_set___4__this(::UnityEngine::InputSystem::InputManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get__internedBasedOn_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internedBasedOn_5__2;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get__internedBasedOn_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internedBasedOn_5__2;
}
constexpr void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_set__internedBasedOn_5__2(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____internedBasedOn_5__2 = value;
}
constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>&
UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*> const&
UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_set___7__wrap2(
    ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap2 = value;
}
constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>&
UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___7__wrap3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap3;
}
constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW> const&
UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___7__wrap3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap3;
}
constexpr void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_set___7__wrap3(
    ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap3 = value;
}
constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,
                                                                     ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>&
UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___7__wrap4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap4;
}
constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,
                                                                     ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*> const&
UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_get___7__wrap4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap4;
}
constexpr void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__cordl_internal_set___7__wrap4(
    ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap4 = value;
}
inline ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75* UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>(__1__state));
}
inline void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), "<>m__Finally2",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__m__Finally3() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), "<>m__Finally3",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__m__Finally4() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), "<>m__Finally4",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__m__Finally5() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), "<>m__Finally5",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__m__Finally6() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(), "<>m__Finally6",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::System_Collections_Generic_IEnumerator_System_String__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.String>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::StringW>*
UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::System_Collections_Generic_IEnumerable_System_String__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(),
                                  "System.Collections.Generic.IEnumerable<System.String>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75::__InputManager___ListControlLayouts_d__75() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputManager____c::*)()>(
    &::UnityEngine::InputSystem::__InputManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe5614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputManager____c._MakeDeviceNameUnique_b__144_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::__InputManager____c::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::__InputManager____c::_MakeDeviceNameUnique_b__144_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2fe561c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager____c*>::get(), "<MakeDeviceNameUnique>b__144_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::__InputManager____c::setStaticF___9(::UnityEngine::InputSystem::__InputManager____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::__InputManager____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager____c*>::get>(
      std::forward<::UnityEngine::InputSystem::__InputManager____c*>(value));
}
inline ::UnityEngine::InputSystem::__InputManager____c* UnityEngine::InputSystem::__InputManager____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::__InputManager____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager____c*>::get>();
}
inline void UnityEngine::InputSystem::__InputManager____c::setStaticF___9__144_0(::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::StringW>*, "<>9__144_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::StringW>* UnityEngine::InputSystem::__InputManager____c::getStaticF___9__144_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::StringW>*, "<>9__144_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager____c*>::get>();
}
inline ::UnityEngine::InputSystem::__InputManager____c* UnityEngine::InputSystem::__InputManager____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::__InputManager____c*>());
}
inline void UnityEngine::InputSystem::__InputManager____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::__InputManager____c::_MakeDeviceNameUnique_b__144_0(::UnityEngine::InputSystem::InputDevice* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputManager____c*>::get(), "<MakeDeviceNameUnique>b__144_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputManager____c::__InputManager____c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_devices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> (
    ::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::get_devices)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2fd37ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "get_devices",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_processors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::TypeTable (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_processors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fd9664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "get_processors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_interactions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::TypeTable (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_interactions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fd966c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "get_interactions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_composites
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::TypeTable (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_composites)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fd9674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "get_composites", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_metrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputMetrics (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_metrics)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2fd967c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "get_metrics",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputSettings> (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fd9818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "get_settings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.set_settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputSettings*)>(
    &::UnityEngine::InputSystem::InputManager::set_settings)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2fd9820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "set_settings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_updateMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_updateMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fd9ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "get_updateMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.set_updateMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::InputManager::set_updateMask)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2fd9cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "set_updateMask", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_defaultUpdateType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_defaultUpdateType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2fd9e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "get_defaultUpdateType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_pollingFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_pollingFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fd9e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "get_pollingFrequency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.set_pollingFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(float_t)>(
    &::UnityEngine::InputSystem::InputManager::set_pollingFrequency)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2fd9e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "set_pollingFrequency",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onDeviceChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*)>(&::UnityEngine::InputSystem::InputManager::add_onDeviceChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fd20cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onDeviceChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onDeviceChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*)>(&::UnityEngine::InputSystem::InputManager::remove_onDeviceChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fd234c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onDeviceChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onDeviceStateChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&::UnityEngine::InputSystem::InputManager::add_onDeviceStateChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fd9fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onDeviceStateChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onDeviceStateChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&::UnityEngine::InputSystem::InputManager::remove_onDeviceStateChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fda010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onDeviceStateChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onDeviceCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*)>(&::UnityEngine::InputSystem::InputManager::add_onDeviceCommand)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fda068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onDeviceCommand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onDeviceCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*)>(&::UnityEngine::InputSystem::InputManager::remove_onDeviceCommand)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fda0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onDeviceCommand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onFindControlLayoutForDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*)>(&::UnityEngine::InputSystem::InputManager::add_onFindControlLayoutForDevice)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2fda118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onFindControlLayoutForDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onFindControlLayoutForDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*)>(&::UnityEngine::InputSystem::InputManager::remove_onFindControlLayoutForDevice)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fda420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onFindControlLayoutForDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onLayoutChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*)>(&::UnityEngine::InputSystem::InputManager::add_onLayoutChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fd2124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onLayoutChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onLayoutChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*)>(&::UnityEngine::InputSystem::InputManager::remove_onLayoutChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fd23a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onLayoutChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*)>(&::UnityEngine::InputSystem::InputManager::add_onEvent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fd2074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*)>(&::UnityEngine::InputSystem::InputManager::remove_onEvent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fd22f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onBeforeUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action*)>(
    &::UnityEngine::InputSystem::InputManager::add_onBeforeUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2fda478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onBeforeUpdate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onBeforeUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action*)>(
    &::UnityEngine::InputSystem::InputManager::remove_onBeforeUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fda5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onBeforeUpdate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onAfterUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action*)>(
    &::UnityEngine::InputSystem::InputManager::add_onAfterUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fda63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onAfterUpdate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onAfterUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action*)>(
    &::UnityEngine::InputSystem::InputManager::remove_onAfterUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fda694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onAfterUpdate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onSettingsChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action*)>(
    &::UnityEngine::InputSystem::InputManager::add_onSettingsChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fda6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onSettingsChange",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onSettingsChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action*)>(
    &::UnityEngine::InputSystem::InputManager::remove_onSettingsChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fda744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onSettingsChange",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_isProcessingEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_isProcessingEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fda79c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "get_isProcessingEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_gameIsPlaying
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::get_gameIsPlaying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fda7a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "get_gameIsPlaying", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_gameHasFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::get_gameHasFocus)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2fda7ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "get_gameHasFocus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_gameShouldGetInputRegardlessOfFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_gameShouldGetInputRegardlessOfFocus)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2fda7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "get_gameShouldGetInputRegardlessOfFocus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RegisterControlLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::StringW, ::System::Type*)>(
    &::UnityEngine::InputSystem::InputManager::RegisterControlLayout)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x2fda804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RegisterControlLayout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RegisterControlLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::StringW, ::StringW, bool)>(
    &::UnityEngine::InputSystem::InputManager::RegisterControlLayout)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x2fd4988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RegisterControlLayout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RegisterControlLayoutBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*, ::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputManager::RegisterControlLayoutBuilder)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2fdb394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RegisterControlLayoutBuilder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.PerformLayoutPostRegistration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>, bool, bool, bool)>(
    &::UnityEngine::InputSystem::InputManager::PerformLayoutPostRegistration)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x2fdae1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "PerformLayoutPostRegistration", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RecreateDevicesUsingLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Utilities::InternedString, bool)>(
    &::UnityEngine::InputSystem::InputManager::RecreateDevicesUsingLayout)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2fdb528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RecreateDevicesUsingLayout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.IsControlOrChildUsingLayoutRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::IsControlOrChildUsingLayoutRecursive)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2fdb86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "IsControlOrChildUsingLayoutRecursive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.IsControlUsingLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::IsControlUsingLayout)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2fdb79c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "IsControlUsingLayout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RegisterControlLayoutMatcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::StringW, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&::UnityEngine::InputSystem::InputManager::RegisterControlLayoutMatcher)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2fdb274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RegisterControlLayoutMatcher", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RegisterControlLayoutMatcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Type*, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&::UnityEngine::InputSystem::InputManager::RegisterControlLayoutMatcher)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2fdc02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RegisterControlLayoutMatcher", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RecreateDevicesUsingLayoutWithInferiorMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(
    &::UnityEngine::InputSystem::InputManager::RecreateDevicesUsingLayoutWithInferiorMatch)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2fdbab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RecreateDevicesUsingLayoutWithInferiorMatch",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RecreateDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::RecreateDevice)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2fdb95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RecreateDevice", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddAvailableDevicesMatchingDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, ::UnityEngine::InputSystem::Utilities::InternedString)>(
        &::UnityEngine::InputSystem::InputManager::AddAvailableDevicesMatchingDescription)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x2fdbca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddAvailableDevicesMatchingDescription", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RemoveControlLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputManager::RemoveControlLayout)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2fdcd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RemoveControlLayout",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.TryLoadControlLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (
    ::UnityEngine::InputSystem::InputManager::*)(::System::Type*)>(&::UnityEngine::InputSystem::InputManager::TryLoadControlLayout)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2fdcf34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "TryLoadControlLayout",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.TryLoadControlLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (
    ::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::TryLoadControlLayout)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fd4978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "TryLoadControlLayout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.TryFindMatchingControlLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::InputManager::*)(
    ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>, int32_t)>(&::UnityEngine::InputSystem::InputManager::TryFindMatchingControlLayout)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x2fdc230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "TryFindMatchingControlLayout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.FindOrRegisterDeviceLayoutForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::InputManager::*)(::System::Type*)>(
    &::UnityEngine::InputSystem::InputManager::FindOrRegisterDeviceLayoutForType)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2fdd164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "FindOrRegisterDeviceLayoutForType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.IsDeviceLayoutMarkedAsSupportedInSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::InputManager::IsDeviceLayoutMarkedAsSupportedInSettings)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2fdd204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "IsDeviceLayoutMarkedAsSupportedInSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ListControlLayouts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::UnityEngine::InputSystem::InputManager::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputManager::ListControlLayouts)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2fdd310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ListControlLayouts",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.SetDeviceUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::SetDeviceUsage)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2fdd384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "SetDeviceUsage", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDeviceUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::AddDeviceUsage)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2fd4f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDeviceUsage", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RemoveDeviceUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::RemoveDeviceUsage)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2fd5150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RemoveDeviceUsage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.NotifyUsageChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::NotifyUsageChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2fdd4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "NotifyUsageChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputManager::*)(::System::Type*, ::StringW)>(
    &::UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2fdd584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (
    ::UnityEngine::InputSystem::InputManager::*)(::StringW, ::StringW, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2fd4e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (
    ::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Utilities::InternedString, int32_t, ::StringW, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription,
                                                 ::UnityEngine::InputSystem::__InputDevice__DeviceFlags, ::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2fdcb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputDevice__DeviceFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x2fdc660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDevice", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (
    ::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&::UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2fde00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDevice", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (
    ::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, bool, ::StringW, int32_t, ::UnityEngine::InputSystem::__InputDevice__DeviceFlags)>(
    &::UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2fde050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputDevice__DeviceFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (
    ::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, ::UnityEngine::InputSystem::Utilities::InternedString, ::StringW, int32_t,
                                                 ::UnityEngine::InputSystem::__InputDevice__DeviceFlags)>(&::UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2fde228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputDevice__DeviceFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RemoveDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*, bool)>(
    &::UnityEngine::InputSystem::InputManager::RemoveDevice)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x2fd44bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RemoveDevice", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.FlushDisconnectedDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::FlushDisconnectedDevices)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2fde428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "FlushDisconnectedDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ResetDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, bool, ::System::Nullable_1<bool>)>(&::UnityEngine::InputSystem::InputManager::ResetDevice)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x2fde47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ResetDevice", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.TryGetDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputManager::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputManager::TryGetDevice)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2fdebc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "TryGetDevice", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.GetDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputManager::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputManager::GetDevice)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2fdece8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "GetDevice", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.TryGetDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputManager::*)(::System::Type*)>(
    &::UnityEngine::InputSystem::InputManager::TryGetDevice)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2fded8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "TryGetDevice", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.TryGetDeviceById
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputManager::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputManager::TryGetDeviceById)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2fd4340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "TryGetDeviceById",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.GetUnsupportedDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*)>(&::UnityEngine::InputSystem::InputManager::GetUnsupportedDevices)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2fdede4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "GetUnsupportedDevices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.EnableOrDisableDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, bool, ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope)>(&::UnityEngine::InputSystem::InputManager::EnableOrDisableDevice)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x2fddbe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "EnableOrDisableDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputManager__DeviceDisableScope>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.QueueEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>)>(&::UnityEngine::InputSystem::InputManager::QueueEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2fdefd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "QueueEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.QueueEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::InputManager::QueueEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2fd514c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "QueueEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::Update)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2fdf09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::InputManager::Update)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2fdf0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::LowLevel::IInputRuntime*, ::UnityEngine::InputSystem::InputSettings*)>(&::UnityEngine::InputSystem::InputManager::Initialize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2fdf174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::Destroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2fe0f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "Destroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.InitializeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::InitializeData)> {
  constexpr static std::size_t size = 0x146c;
  constexpr static std::size_t addrs = 0x2fdf1b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "InitializeData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.InstallRuntime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::IInputRuntime*)>(
    &::UnityEngine::InputSystem::InputManager::InstallRuntime)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x2fe061c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "InstallRuntime", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.InstallGlobals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::InstallGlobals)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2fe0cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "InstallGlobals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.UninstallGlobals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::UninstallGlobals)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2fe1018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "UninstallGlobals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.MakeDeviceNameUnique
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::MakeDeviceNameUnique)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2fdd66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "MakeDeviceNameUnique", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ResetControlPathsRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputManager::ResetControlPathsRecursive)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2fe13a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ResetControlPathsRecursive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AssignUniqueDeviceId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::AssignUniqueDeviceId)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2fdd7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AssignUniqueDeviceId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ReallocateStateBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::ReallocateStateBuffers)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2fd9cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "ReallocateStateBuffers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.InitializeDefaultState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::InitializeDefaultState)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2fe1448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "InitializeDefaultState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.InitializeDeviceState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::InitializeDeviceState)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2fdd97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "InitializeDeviceState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.OnNativeDeviceDiscovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(int32_t, ::StringW)>(
    &::UnityEngine::InputSystem::InputManager::OnNativeDeviceDiscovered)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x2fe15a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "OnNativeDeviceDiscovered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.TryMatchDisconnectedDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputManager::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputManager::TryMatchDisconnectedDevice)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2fe198c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "TryMatchDisconnectedDevice",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.InstallBeforeUpdateHookIfNecessary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::InstallBeforeUpdateHookIfNecessary)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2fda4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "InstallBeforeUpdateHookIfNecessary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RestoreDevicesAfterDomainReloadIfNecessary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::RestoreDevicesAfterDomainReloadIfNecessary)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2fe1988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RestoreDevicesAfterDomainReloadIfNecessary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.WarnAboutDevicesFailingToRecreateAfterDomainReload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::WarnAboutDevicesFailingToRecreateAfterDomainReload)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2fe1b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                 "WarnAboutDevicesFailingToRecreateAfterDomainReload", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.OnBeforeUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::InputManager::OnBeforeUpdate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2fe1b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "OnBeforeUpdate", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ApplySettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::ApplySettings)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2fd991c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "ApplySettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddAvailableDevicesThatAreNowRecognized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::AddAvailableDevicesThatAreNowRecognized)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2fda178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddAvailableDevicesThatAreNowRecognized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ShouldRunDeviceInBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::ShouldRunDeviceInBackground)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2fddba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ShouldRunDeviceInBackground", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.OnFocusChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(bool)>(
    &::UnityEngine::InputSystem::InputManager::OnFocusChanged)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2fe1d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "OnFocusChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ShouldRunUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::InputManager::ShouldRunUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2fe1f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ShouldRunUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::LowLevel::InputUpdateType, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>)>(&::UnityEngine::InputSystem::InputManager::OnUpdate)> {
  constexpr static std::size_t size = 0x12e0;
  constexpr static std::size_t addrs = 0x2fe1f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "OnUpdate", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.InvokeAfterUpdateCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::InputManager::InvokeAfterUpdateCallback)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2fe3524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "InvokeAfterUpdateCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.UpdateState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>, ::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::InputManager::UpdateState)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2fe358c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "UpdateState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.UpdateState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputUpdateType, ::cordl_internals::Ptr<void>, uint32_t, uint32_t, double_t,
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::InputManager::UpdateState)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2fde9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "UpdateState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.WriteStateChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers, int32_t, ByRef<::UnityEngine::InputSystem::LowLevel::InputStateBlock>, uint32_t,
                         ::cordl_internals::Ptr<void>, uint32_t, bool)>(&::UnityEngine::InputSystem::InputManager::WriteStateChange)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2fe3a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "WriteStateChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::InputStateBlock>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.FlipBuffersForDeviceIfNecessary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::InputManager::FlipBuffersForDeviceIfNecessary)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2fe39bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "FlipBuffersForDeviceIfNecessary", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddStateChangeMonitor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t, uint32_t)>(&::UnityEngine::InputSystem::InputManager::AddStateChangeMonitor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2fe3f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddStateChangeMonitor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RemoveStateChangeMonitors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitors)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2fde2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RemoveStateChangeMonitors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RemoveStateChangeMonitor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t)>(&::UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2fe4068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RemoveStateChangeMonitor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddStateChangeMonitorTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, double_t, int64_t, int32_t)>(
    &::UnityEngine::InputSystem::InputManager::AddStateChangeMonitorTimeout)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2fe41c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddStateChangeMonitorTimeout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RemoveStateChangeMonitorTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t, int32_t)>(&::UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitorTimeout)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2fe4254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RemoveStateChangeMonitorTimeout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.SortStateChangeMonitorsIfNecessary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputManager::SortStateChangeMonitorsIfNecessary)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2fe36e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "SortStateChangeMonitorsIfNecessary",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.SignalStateChangeMonitor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*)>(&::UnityEngine::InputSystem::InputManager::SignalStateChangeMonitor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2fe4378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "SignalStateChangeMonitor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.FireStateChangeNotifications
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::FireStateChangeNotifications)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2fe4468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                               "FireStateChangeNotifications", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ProcessStateChangeMonitors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(
    int32_t, ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<void>, uint32_t, uint32_t)>(&::UnityEngine::InputSystem::InputManager::ProcessStateChangeMonitors)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2fe3734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ProcessStateChangeMonitors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.FireStateChangeNotifications
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    int32_t, double_t, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>)>(&::UnityEngine::InputSystem::InputManager::FireStateChangeNotifications)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x2fe3b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "FireStateChangeNotifications", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ProcessStateChangeMonitorTimeouts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::ProcessStateChangeMonitorTimeouts)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2fe3270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ProcessStateChangeMonitorTimeouts",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe45b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager._TryFindMatchingControlLayout_b__72_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::InputSystem::InputManager::*)(
    ByRef<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>)>(&::UnityEngine::InputSystem::InputManager::_TryFindMatchingControlLayout_b__72_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2fe45bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "<TryFindMatchingControlLayout>b__72_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_LayoutRegistrationVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutRegistrationVersion;
}
constexpr int32_t const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_LayoutRegistrationVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutRegistrationVersion;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_LayoutRegistrationVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LayoutRegistrationVersion = value;
}
constexpr float_t& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_PollingFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PollingFrequency;
}
constexpr float_t const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_PollingFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PollingFrequency;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_PollingFrequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PollingFrequency = value;
}
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Layouts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Layouts;
}
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Layouts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Layouts;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_Layouts(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Layouts = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::TypeTable& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Processors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Processors;
}
constexpr ::UnityEngine::InputSystem::Utilities::TypeTable const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Processors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Processors;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_Processors(::UnityEngine::InputSystem::Utilities::TypeTable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Processors = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::TypeTable& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Interactions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Interactions;
}
constexpr ::UnityEngine::InputSystem::Utilities::TypeTable const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Interactions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Interactions;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_Interactions(::UnityEngine::InputSystem::Utilities::TypeTable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Interactions = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::TypeTable& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Composites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Composites;
}
constexpr ::UnityEngine::InputSystem::Utilities::TypeTable const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Composites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Composites;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_Composites(::UnityEngine::InputSystem::Utilities::TypeTable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Composites = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DevicesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DevicesCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DevicesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DevicesCount;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_DevicesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DevicesCount = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Devices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Devices;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Devices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Devices;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_Devices(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Devices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::InputSystem::InputDevice*>*& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DevicesById() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DevicesById;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::InputSystem::InputDevice*>*> const&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DevicesById() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DevicesById;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_DevicesById(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::InputSystem::InputDevice*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DevicesById)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_AvailableDeviceCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AvailableDeviceCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_AvailableDeviceCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AvailableDeviceCount;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_AvailableDeviceCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AvailableDeviceCount = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__AvailableDevice, ::Array<::UnityEngine::InputSystem::__InputManager__AvailableDevice>*>&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_AvailableDevices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AvailableDevices;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__AvailableDevice, ::Array<::UnityEngine::InputSystem::__InputManager__AvailableDevice>*> const&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_AvailableDevices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AvailableDevices;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_AvailableDevices(
    ::ArrayW<::UnityEngine::InputSystem::__InputManager__AvailableDevice, ::Array<::UnityEngine::InputSystem::__InputManager__AvailableDevice>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AvailableDevices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DisconnectedDevicesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisconnectedDevicesCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DisconnectedDevicesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisconnectedDevicesCount;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_DisconnectedDevicesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisconnectedDevicesCount = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DisconnectedDevices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisconnectedDevices;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> const&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DisconnectedDevices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisconnectedDevices;
}
constexpr void
UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_DisconnectedDevices(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DisconnectedDevices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_UpdateMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateMask;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_UpdateMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateMask;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_UpdateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateMask = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_CurrentUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentUpdate;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_CurrentUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentUpdate;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_CurrentUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentUpdate = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_StateBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateBuffers;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_StateBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateBuffers;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_StateBuffers(::UnityEngine::InputSystem::LowLevel::InputStateBuffers value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StateBuffers = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DeviceChangeListeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceChangeListeners;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*> const&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DeviceChangeListeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceChangeListeners;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_DeviceChangeListeners(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceChangeListeners = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DeviceStateChangeListeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceStateChangeListeners;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DeviceStateChangeListeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceStateChangeListeners;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_DeviceStateChangeListeners(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceStateChangeListeners = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DeviceFindLayoutCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceFindLayoutCallbacks;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*> const&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DeviceFindLayoutCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceFindLayoutCallbacks;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_DeviceFindLayoutCallbacks(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceFindLayoutCallbacks = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DeviceCommandCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceCommandCallbacks;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*> const&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DeviceCommandCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceCommandCallbacks;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_DeviceCommandCallbacks(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceCommandCallbacks = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_LayoutChangeListeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutChangeListeners;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*> const&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_LayoutChangeListeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutChangeListeners;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_LayoutChangeListeners(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LayoutChangeListeners = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_EventListeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventListeners;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*> const&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_EventListeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventListeners;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_EventListeners(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventListeners = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_BeforeUpdateListeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BeforeUpdateListeners;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_BeforeUpdateListeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BeforeUpdateListeners;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_BeforeUpdateListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BeforeUpdateListeners = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_AfterUpdateListeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AfterUpdateListeners;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_AfterUpdateListeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AfterUpdateListeners;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_AfterUpdateListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AfterUpdateListeners = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_SettingsChangedListeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SettingsChangedListeners;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_SettingsChangedListeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SettingsChangedListeners;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_SettingsChangedListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SettingsChangedListeners = value;
}
constexpr bool& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_NativeBeforeUpdateHooked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeBeforeUpdateHooked;
}
constexpr bool const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_NativeBeforeUpdateHooked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeBeforeUpdateHooked;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_NativeBeforeUpdateHooked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NativeBeforeUpdateHooked = value;
}
constexpr bool& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_HaveDevicesWithStateCallbackReceivers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HaveDevicesWithStateCallbackReceivers;
}
constexpr bool const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_HaveDevicesWithStateCallbackReceivers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HaveDevicesWithStateCallbackReceivers;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_HaveDevicesWithStateCallbackReceivers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HaveDevicesWithStateCallbackReceivers = value;
}
constexpr bool& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_HasFocus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasFocus;
}
constexpr bool const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_HasFocus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasFocus;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_HasFocus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasFocus = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventStream& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_InputEventStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputEventStream;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventStream const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_InputEventStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputEventStream;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_InputEventStream(::UnityEngine::InputSystem::LowLevel::InputEventStream value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputEventStream = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DeviceFindExecuteCommandDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceFindExecuteCommandDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*> const&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DeviceFindExecuteCommandDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceFindExecuteCommandDelegate;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_DeviceFindExecuteCommandDelegate(::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DeviceFindExecuteCommandDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DeviceFindExecuteCommandDeviceId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceFindExecuteCommandDeviceId;
}
constexpr int32_t const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DeviceFindExecuteCommandDeviceId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceFindExecuteCommandDeviceId;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_DeviceFindExecuteCommandDeviceId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceFindExecuteCommandDeviceId = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::IInputRuntime*& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Runtime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Runtime;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::IInputRuntime*> const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Runtime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Runtime;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_Runtime(::UnityEngine::InputSystem::LowLevel::IInputRuntime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Runtime)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputMetrics& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Metrics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Metrics;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputMetrics const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Metrics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Metrics;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_Metrics(::UnityEngine::InputSystem::LowLevel::InputMetrics value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Metrics = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputSettings>& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputSettings> const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_Settings(::UnityW<::UnityEngine::InputSystem::InputSettings> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, ::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>*>&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_StateChangeMonitors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateChangeMonitors;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, ::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>*> const&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_StateChangeMonitors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateChangeMonitors;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_StateChangeMonitors(
    ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, ::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StateChangeMonitors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_StateChangeMonitorTimeouts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateChangeMonitorTimeouts;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout> const&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_StateChangeMonitorTimeouts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateChangeMonitorTimeouts;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_StateChangeMonitorTimeouts(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StateChangeMonitorTimeouts = value;
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::InputManager::get_devices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "get_devices",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputManager::get_processors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "get_processors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::TypeTable, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputManager::get_interactions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                             "get_interactions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::TypeTable, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputManager::get_composites() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "get_composites",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::TypeTable, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputMetrics UnityEngine::InputSystem::InputManager::get_metrics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "get_metrics",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputMetrics, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::InputSystem::InputSettings> UnityEngine::InputSystem::InputManager::get_settings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "get_settings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputSettings>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::set_settings(::UnityEngine::InputSystem::InputSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "set_settings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::InputManager::get_updateMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "get_updateMask",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateType, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "set_updateMask", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::InputManager::get_defaultUpdateType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                             "get_defaultUpdateType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateType, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::InputManager::get_pollingFrequency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                             "get_pollingFrequency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::set_pollingFrequency(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "set_pollingFrequency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onDeviceChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onDeviceChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onDeviceStateChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
UnityEngine::InputSystem::InputManager::remove_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onDeviceStateChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onDeviceCommand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onDeviceCommand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onFindControlLayoutForDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onFindControlLayoutForDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onLayoutChange(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onLayoutChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onLayoutChange(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onLayoutChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onBeforeUpdate(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onBeforeUpdate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onBeforeUpdate(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onBeforeUpdate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onAfterUpdate(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onAfterUpdate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onAfterUpdate(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onAfterUpdate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onSettingsChange(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "add_onSettingsChange",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onSettingsChange(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "remove_onSettingsChange",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputManager::get_isProcessingEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                             "get_isProcessingEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputManager::get_gameIsPlaying() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                             "get_gameIsPlaying", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputManager::get_gameHasFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                             "get_gameHasFocus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputManager::get_gameShouldGetInputRegardlessOfFocus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "get_gameShouldGetInputRegardlessOfFocus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::RegisterControlLayout(::StringW name, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RegisterControlLayout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, type);
}
/// @param name: ::StringW (default: nullptr)
/// @param isOverride: bool (default: false)
inline void UnityEngine::InputSystem::InputManager::RegisterControlLayout(::StringW json, ::StringW name, bool isOverride) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RegisterControlLayout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, json, name, isOverride);
}
/// @param baseLayout: ::StringW (default: nullptr)
inline void UnityEngine::InputSystem::InputManager::RegisterControlLayoutBuilder(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>* method, ::StringW name,
                                                                                 ::StringW baseLayout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RegisterControlLayoutBuilder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, name, baseLayout);
}
/// @param isKnownToBeDeviceLayout: bool (default: false)
/// @param isOverride: bool (default: false)
inline void
UnityEngine::InputSystem::InputManager::PerformLayoutPostRegistration(::UnityEngine::InputSystem::Utilities::InternedString layoutName,
                                                                      ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> baseLayouts,
                                                                      bool isReplacement, bool isKnownToBeDeviceLayout, bool isOverride) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "PerformLayoutPostRegistration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layoutName, baseLayouts, isReplacement, isKnownToBeDeviceLayout, isOverride);
}
template <typename TDevice> inline void UnityEngine::InputSystem::InputManager::RegisterPrecompiledLayout(::StringW metadata) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RegisterPrecompiledLayout",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, metadata);
}
/// @param isKnownToBeDeviceLayout: bool (default: false)
inline void UnityEngine::InputSystem::InputManager::RecreateDevicesUsingLayout(::UnityEngine::InputSystem::Utilities::InternedString layout, bool isKnownToBeDeviceLayout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RecreateDevicesUsingLayout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layout, isKnownToBeDeviceLayout);
}
inline bool UnityEngine::InputSystem::InputManager::IsControlOrChildUsingLayoutRecursive(::UnityEngine::InputSystem::InputControl* control,
                                                                                         ::UnityEngine::InputSystem::Utilities::InternedString layout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "IsControlOrChildUsingLayoutRecursive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, control, layout);
}
inline bool UnityEngine::InputSystem::InputManager::IsControlUsingLayout(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::Utilities::InternedString layout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "IsControlUsingLayout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, control, layout);
}
inline void UnityEngine::InputSystem::InputManager::RegisterControlLayoutMatcher(::StringW layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RegisterControlLayoutMatcher", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layoutName, matcher);
}
inline void UnityEngine::InputSystem::InputManager::RegisterControlLayoutMatcher(::System::Type* type, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RegisterControlLayoutMatcher", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, matcher);
}
inline void UnityEngine::InputSystem::InputManager::RecreateDevicesUsingLayoutWithInferiorMatch(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher deviceMatcher) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RecreateDevicesUsingLayoutWithInferiorMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deviceMatcher);
}
inline void UnityEngine::InputSystem::InputManager::RecreateDevice(::UnityEngine::InputSystem::InputDevice* oldDevice, ::UnityEngine::InputSystem::Utilities::InternedString newLayout) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RecreateDevice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldDevice, newLayout);
}
inline void UnityEngine::InputSystem::InputManager::AddAvailableDevicesMatchingDescription(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher,
                                                                                           ::UnityEngine::InputSystem::Utilities::InternedString layout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddAvailableDevicesMatchingDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, matcher, layout);
}
inline void UnityEngine::InputSystem::InputManager::RemoveControlLayout(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RemoveControlLayout",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::InputManager::TryLoadControlLayout(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "TryLoadControlLayout",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*, false>(this, ___internal_method, type);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::InputManager::TryLoadControlLayout(::UnityEngine::InputSystem::Utilities::InternedString name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "TryLoadControlLayout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*, false>(this, ___internal_method, name);
}
/// @param deviceId: int32_t (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::InputSystem::Utilities::InternedString
UnityEngine::InputSystem::InputManager::TryFindMatchingControlLayout(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> deviceDescription, int32_t deviceId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "TryFindMatchingControlLayout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method, deviceDescription, deviceId);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::InputManager::FindOrRegisterDeviceLayoutForType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "FindOrRegisterDeviceLayoutForType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method, type);
}
inline bool UnityEngine::InputSystem::InputManager::IsDeviceLayoutMarkedAsSupportedInSettings(::UnityEngine::InputSystem::Utilities::InternedString layoutName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "IsDeviceLayoutMarkedAsSupportedInSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, layoutName);
}
/// @param basedOn: ::StringW (default: nullptr)
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::InputSystem::InputManager::ListControlLayouts(::StringW basedOn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ListControlLayouts",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(this, ___internal_method, basedOn);
}
template <typename TControl> inline int32_t UnityEngine::InputSystem::InputManager::GetControls(::StringW path, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> controls) {
  static auto* ___internal_method_base = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "GetControls",
                                 std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() },
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, path, controls);
}
inline void UnityEngine::InputSystem::InputManager::SetDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "SetDeviceUsage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputManager::AddDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDeviceUsage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputManager::RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RemoveDeviceUsage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputManager::NotifyUsageChanged(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "NotifyUsageChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
/// @param name: ::StringW (default: nullptr)
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::AddDevice(::System::Type* type, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method, type, name);
}
/// @param name: ::StringW (default: nullptr)
/// @param variants: ::UnityEngine::InputSystem::Utilities::InternedString (default: {})
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::AddDevice(::StringW layout, ::StringW name, ::UnityEngine::InputSystem::Utilities::InternedString variants) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method, layout, name, variants);
}
/// @param deviceName: ::StringW (default: nullptr)
/// @param deviceDescription: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription (default: {})
/// @param deviceFlags: ::UnityEngine::InputSystem::__InputDevice__DeviceFlags (default: static_cast<int32_t>(0x0))
/// @param variants: ::UnityEngine::InputSystem::Utilities::InternedString (default: {})
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::AddDevice(::UnityEngine::InputSystem::Utilities::InternedString layout, int32_t deviceId, ::StringW deviceName,
                                                                                                  ::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription,
                                                                                                  ::UnityEngine::InputSystem::__InputDevice__DeviceFlags deviceFlags,
                                                                                                  ::UnityEngine::InputSystem::Utilities::InternedString variants) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputDevice__DeviceFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method, layout, deviceId, deviceName, deviceDescription, deviceFlags, variants);
}
inline void UnityEngine::InputSystem::InputManager::AddDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDevice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDevice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method, description);
}
/// @param deviceName: ::StringW (default: nullptr)
/// @param deviceId: int32_t (default: static_cast<int32_t>(0x0))
/// @param deviceFlags: ::UnityEngine::InputSystem::__InputDevice__DeviceFlags (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description, bool throwIfNoLayoutFound,
                                                                                                  ::StringW deviceName, int32_t deviceId,
                                                                                                  ::UnityEngine::InputSystem::__InputDevice__DeviceFlags deviceFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputDevice__DeviceFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method, description, throwIfNoLayoutFound, deviceName, deviceId, deviceFlags);
}
/// @param deviceName: ::StringW (default: nullptr)
/// @param deviceId: int32_t (default: static_cast<int32_t>(0x0))
/// @param deviceFlags: ::UnityEngine::InputSystem::__InputDevice__DeviceFlags (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description,
                                                                                                  ::UnityEngine::InputSystem::Utilities::InternedString layout, ::StringW deviceName, int32_t deviceId,
                                                                                                  ::UnityEngine::InputSystem::__InputDevice__DeviceFlags deviceFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputDevice__DeviceFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method, description, layout, deviceName, deviceId, deviceFlags);
}
/// @param keepOnListOfAvailableDevices: bool (default: false)
inline void UnityEngine::InputSystem::InputManager::RemoveDevice(::UnityEngine::InputSystem::InputDevice* device, bool keepOnListOfAvailableDevices) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RemoveDevice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, keepOnListOfAvailableDevices);
}
inline void UnityEngine::InputSystem::InputManager::FlushDisconnectedDevices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                             "FlushDisconnectedDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param alsoResetDontResetControls: bool (default: false)
/// @param issueResetCommand: ::System::Nullable_1<bool> (default: {})
inline void UnityEngine::InputSystem::InputManager::ResetDevice(::UnityEngine::InputSystem::InputDevice* device, bool alsoResetDontResetControls, ::System::Nullable_1<bool> issueResetCommand) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ResetDevice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, alsoResetDontResetControls, issueResetCommand);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::TryGetDevice(::StringW nameOrLayout) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "TryGetDevice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method, nameOrLayout);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::GetDevice(::StringW nameOrLayout) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "GetDevice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method, nameOrLayout);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::TryGetDevice(::System::Type* layoutType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "TryGetDevice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method, layoutType);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::TryGetDeviceById(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "TryGetDeviceById",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method, id);
}
inline int32_t UnityEngine::InputSystem::InputManager::GetUnsupportedDevices(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* descriptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "GetUnsupportedDevices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, descriptions);
}
/// @param scope: ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope (default: static_cast<int32_t>(0x0))
inline void UnityEngine::InputSystem::InputManager::EnableOrDisableDevice(::UnityEngine::InputSystem::InputDevice* device, bool enable,
                                                                          ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope scope) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "EnableOrDisableDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputManager__DeviceDisableScope>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, enable, scope);
}
inline void UnityEngine::InputSystem::InputManager::QueueEvent(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "QueueEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventPtr);
}
inline void UnityEngine::InputSystem::InputManager::QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "QueueEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr);
}
template <typename TEvent> inline void UnityEngine::InputSystem::InputManager::QueueEvent(ByRef<TEvent> inputEvent) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "QueueEvent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEvent>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TEvent>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEvent>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputEvent);
}
inline void UnityEngine::InputSystem::InputManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateType);
}
inline void UnityEngine::InputSystem::InputManager::Initialize(::UnityEngine::InputSystem::LowLevel::IInputRuntime* runtime, ::UnityEngine::InputSystem::InputSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runtime, settings);
}
inline void UnityEngine::InputSystem::InputManager::Destroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "Destroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::InitializeData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "InitializeData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::InstallRuntime(::UnityEngine::InputSystem::LowLevel::IInputRuntime* runtime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "InstallRuntime", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runtime);
}
inline void UnityEngine::InputSystem::InputManager::InstallGlobals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "InstallGlobals",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::UninstallGlobals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                             "UninstallGlobals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::MakeDeviceNameUnique(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "MakeDeviceNameUnique", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputManager::ResetControlPathsRecursive(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ResetControlPathsRecursive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control);
}
inline void UnityEngine::InputSystem::InputManager::AssignUniqueDeviceId(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AssignUniqueDeviceId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputManager::ReallocateStateBuffers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                             "ReallocateStateBuffers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::InitializeDefaultState(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "InitializeDefaultState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputManager::InitializeDeviceState(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "InitializeDeviceState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputManager::OnNativeDeviceDiscovered(int32_t deviceId, ::StringW deviceDescriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "OnNativeDeviceDiscovered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deviceId, deviceDescriptor);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::TryMatchDisconnectedDevice(::StringW deviceDescriptor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "TryMatchDisconnectedDevice",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method, deviceDescriptor);
}
inline void UnityEngine::InputSystem::InputManager::InstallBeforeUpdateHookIfNecessary() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "InstallBeforeUpdateHookIfNecessary",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::RestoreDevicesAfterDomainReloadIfNecessary() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RestoreDevicesAfterDomainReloadIfNecessary",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::WarnAboutDevicesFailingToRecreateAfterDomainReload() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                               "WarnAboutDevicesFailingToRecreateAfterDomainReload", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "OnBeforeUpdate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateType);
}
inline void UnityEngine::InputSystem::InputManager::ApplySettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ApplySettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TCommand> inline int64_t UnityEngine::InputSystem::InputManager::ExecuteGlobalCommand(ByRef<TCommand> command) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ExecuteGlobalCommand",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCommand>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TCommand>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCommand>::get() }));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, command);
}
inline void UnityEngine::InputSystem::InputManager::AddAvailableDevicesThatAreNowRecognized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddAvailableDevicesThatAreNowRecognized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputManager::ShouldRunDeviceInBackground(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ShouldRunDeviceInBackground", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputManager::OnFocusChanged(bool focus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "OnFocusChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, focus);
}
inline bool UnityEngine::InputSystem::InputManager::ShouldRunUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ShouldRunUpdate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, updateType);
}
inline void UnityEngine::InputSystem::InputManager::OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType,
                                                             ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "OnUpdate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateType, eventBuffer);
}
inline void UnityEngine::InputSystem::InputManager::InvokeAfterUpdateCallback(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "InvokeAfterUpdateCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateType);
}
inline bool UnityEngine::InputSystem::InputManager::UpdateState(::UnityEngine::InputSystem::InputDevice* device, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr,
                                                                ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "UpdateState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, device, eventPtr, updateType);
}
/// @param eventPtr: ::UnityEngine::InputSystem::LowLevel::InputEventPtr (default: {})
inline bool UnityEngine::InputSystem::InputManager::UpdateState(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType,
                                                                ::cordl_internals::Ptr<void> statePtr, uint32_t stateOffsetInDevice, uint32_t stateSize, double_t internalTime,
                                                                ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "UpdateState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, device, updateType, statePtr, stateOffsetInDevice, stateSize, internalTime, eventPtr);
}
inline void UnityEngine::InputSystem::InputManager::WriteStateChange(::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers buffers, int32_t deviceIndex,
                                                                     ByRef<::UnityEngine::InputSystem::LowLevel::InputStateBlock> deviceStateBlock, uint32_t stateOffsetInDevice,
                                                                     ::cordl_internals::Ptr<void> statePtr, uint32_t stateSizeInBytes, bool flippedBuffers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "WriteStateChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::InputStateBlock>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffers, deviceIndex, deviceStateBlock, stateOffsetInDevice, statePtr, stateSizeInBytes, flippedBuffers);
}
inline bool UnityEngine::InputSystem::InputManager::FlipBuffersForDeviceIfNecessary(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "FlipBuffersForDeviceIfNecessary", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, device, updateType);
}
inline void UnityEngine::InputSystem::InputManager::AddStateChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor,
                                                                          int64_t monitorIndex, uint32_t groupIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddStateChangeMonitor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control, monitor, monitorIndex, groupIndex);
}
inline void UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitors(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RemoveStateChangeMonitors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor,
                                                                             int64_t monitorIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RemoveStateChangeMonitor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control, monitor, monitorIndex);
}
inline void UnityEngine::InputSystem::InputManager::AddStateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl* control,
                                                                                 ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, double_t time, int64_t monitorIndex,
                                                                                 int32_t timerIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "AddStateChangeMonitorTimeout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control, monitor, time, monitorIndex, timerIndex);
}
inline void UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex, int32_t timerIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "RemoveStateChangeMonitorTimeout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, monitor, monitorIndex, timerIndex);
}
inline void UnityEngine::InputSystem::InputManager::SortStateChangeMonitorsIfNecessary(int32_t deviceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "SortStateChangeMonitorsIfNecessary",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deviceIndex);
}
inline void UnityEngine::InputSystem::InputManager::SignalStateChangeMonitor(::UnityEngine::InputSystem::InputControl* control,
                                                                             ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "SignalStateChangeMonitor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control, monitor);
}
inline void UnityEngine::InputSystem::InputManager::FireStateChangeNotifications() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                             "FireStateChangeNotifications", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputManager::ProcessStateChangeMonitors(int32_t deviceIndex, ::cordl_internals::Ptr<void> newStateFromEvent, ::cordl_internals::Ptr<void> oldStateOfDevice,
                                                                               uint32_t newStateSizeInBytes, uint32_t newStateOffsetInBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ProcessStateChangeMonitors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, deviceIndex, newStateFromEvent, oldStateOfDevice, newStateSizeInBytes, newStateOffsetInBytes);
}
inline void UnityEngine::InputSystem::InputManager::FireStateChangeNotifications(int32_t deviceIndex, double_t internalTime,
                                                                                 ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "FireStateChangeNotifications", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deviceIndex, internalTime, eventPtr);
}
inline void UnityEngine::InputSystem::InputManager::ProcessStateChangeMonitorTimeouts() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "ProcessStateChangeMonitorTimeouts",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputManager* UnityEngine::InputSystem::InputManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::InputManager*>());
}
inline void UnityEngine::InputSystem::InputManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int64_t UnityEngine::InputSystem::InputManager::_TryFindMatchingControlLayout_b__72_0(ByRef<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandRef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputManager*>::get(), "<TryFindMatchingControlLayout>b__72_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, commandRef);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputManager::InputManager() {}
