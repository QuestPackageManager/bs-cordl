#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputManager.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventStream_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputMetrics_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__MemoryHelpers_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__DynamicBitfield_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_impl.hpp"
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
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__MemoryHelpers_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlLayoutChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputManager_DeviceDisableScope::InputManager_DeviceDisableScope(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputManager_DeviceDisableScope::InputManager_DeviceDisableScope() {}
constexpr ::UnityEngine::InputSystem::InputManager_DeviceDisableScope UnityEngine::InputSystem::InputManager_DeviceDisableScope::Everywhere{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::InputManager_DeviceDisableScope UnityEngine::InputSystem::InputManager_DeviceDisableScope::InFrontendOnly{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::InputManager_DeviceDisableScope UnityEngine::InputSystem::InputManager_DeviceDisableScope::TemporaryWhilePlayerIsInBackground{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceId", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isNative", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isRemoved", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputManager_AvailableDevice::InputManager_AvailableDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description, int32_t deviceId,
                                                                                                 bool isNative, bool isRemoved) noexcept {
  this->description = description;
  this->deviceId = deviceId;
  this->isNative = isNative;
  this->isRemoved = isRemoved;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputManager_AvailableDevice::InputManager_AvailableDevice() {}
// Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: Some("{}") }, CppParam { name: "time", ty: "double_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "monitor", ty: "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "monitorIndex",
// ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout::InputManager_StateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl* control, double_t time,
                                                                                                                     ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor,
                                                                                                                     int64_t monitorIndex, int32_t timerIndex) noexcept {
  this->control = control;
  this->time = time;
  this->monitor = monitor;
  this->monitorIndex = monitorIndex;
  this->timerIndex = timerIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout::InputManager_StateChangeMonitorTimeout() {}
// Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: Some("{}") }, CppParam { name: "monitor", ty:
// "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "monitorIndex", ty: "int64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "groupIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener::InputManager_StateChangeMonitorListener(::UnityEngine::InputSystem::InputControl* control,
                                                                                                                       ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor,
                                                                                                                       int64_t monitorIndex, uint32_t groupIndex) noexcept {
  this->control = control;
  this->monitor = monitor;
  this->monitorIndex = monitorIndex;
  this->groupIndex = groupIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener::InputManager_StateChangeMonitorListener() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice.get_count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::*)()>(
    &::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::get_count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6570a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>(), { "get_count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t, uint32_t)>(
    &::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::Add)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6570a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>(),
                                                { "Add",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(),
                                                    ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::*)(
    ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t, bool)>(&::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::Remove)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6570c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>(),
                                         { "Remove", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::*)()>(
    &::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::Clear)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6570e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice.CompactArrays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::*)()>(
    &::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::CompactArrays)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6570e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>(), { "CompactArrays", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice.RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::RemoveAt)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6570d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice.SortMonitorsByIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::*)()>(
    &::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::SortMonitorsByIndex)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6570ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>(), { "SortMonitorsByIndex", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::get_count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>(), { "get_count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::Add(::UnityEngine::InputSystem::InputControl* control,
                                                                                     ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex,
                                                                                     uint32_t groupIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>(),
                                              { "Add",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(),
                                                  ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, control, monitor, monitorIndex, groupIndex);
}
inline void UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::Remove(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex,
                                                                                        bool deferRemoval) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>(),
                                       { "Remove", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, monitor, monitorIndex, deferRemoval);
}
inline void UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::CompactArrays() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>(), { "CompactArrays", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::RemoveAt(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
inline void UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::SortMonitorsByIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>(), { "SortMonitorsByIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "memoryRegions", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "listeners", ty: "::ArrayW<::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener>", modifiers: "", def_value: Some("{}") }, CppParam { name: "signalled", ty:
// "::UnityEngine::InputSystem::DynamicBitfield", modifiers: "", def_value: Some("{}") }, CppParam { name: "needToUpdateOrderingOfMonitors", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "needToCompactArrays", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::InputManager_StateChangeMonitorsForDevice(
    ::ArrayW<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion> memoryRegions, ::ArrayW<::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener> listeners,
    ::UnityEngine::InputSystem::DynamicBitfield signalled, bool needToUpdateOrderingOfMonitors, bool needToCompactArrays) noexcept {
  this->memoryRegions = memoryRegions;
  this->listeners = listeners;
  this->signalled = signalled;
  this->needToUpdateOrderingOfMonitors = needToUpdateOrderingOfMonitors;
  this->needToCompactArrays = needToCompactArrays;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice::InputManager_StateChangeMonitorsForDevice() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager___c::*)()>(&::UnityEngine::InputSystem::InputManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6571094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager___c._MakeDeviceNameUnique_b__184_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputManager___c::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager___c::_MakeDeviceNameUnique_b__184_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6571098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager___c*>(),
                                                                                           { "<MakeDeviceNameUnique>b__184_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputManager___c::setStaticF___9(::UnityEngine::InputSystem::InputManager___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputManager___c*, "<>9", ::UnityEngine::InputSystem::InputManager___c*>(
      std::forward<::UnityEngine::InputSystem::InputManager___c*>(value));
}
inline ::UnityEngine::InputSystem::InputManager___c* UnityEngine::InputSystem::InputManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputManager___c*, "<>9", ::UnityEngine::InputSystem::InputManager___c*>();
}
inline void UnityEngine::InputSystem::InputManager___c::setStaticF___9__184_0(::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::StringW>*, "<>9__184_0", ::UnityEngine::InputSystem::InputManager___c*>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::StringW>* UnityEngine::InputSystem::InputManager___c::getStaticF___9__184_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::StringW>*, "<>9__184_0", ::UnityEngine::InputSystem::InputManager___c*>();
}
inline void UnityEngine::InputSystem::InputManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputManager___c::_MakeDeviceNameUnique_b__184_0(::UnityEngine::InputSystem::InputDevice* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager___c*>(),
                                                                                         { "<MakeDeviceNameUnique>b__184_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::InputManager___c* UnityEngine::InputSystem::InputManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputManager___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputManager___c::InputManager___c() {}
template <typename TDevice> inline void UnityEngine::InputSystem::InputManager___c__82_1<TDevice>::setStaticF___9(::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>*, "<>9", ::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>*>(
      std::forward<::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>*>(value));
}
template <typename TDevice> inline ::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>* UnityEngine::InputSystem::InputManager___c__82_1<TDevice>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>*, "<>9", ::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>*>();
}
template <typename TDevice> inline void UnityEngine::InputSystem::InputManager___c__82_1<TDevice>::setStaticF___9__82_0(::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*, "<>9__82_0", ::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>*>(
      std::forward<::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*>(value));
}
template <typename TDevice> inline ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* UnityEngine::InputSystem::InputManager___c__82_1<TDevice>::getStaticF___9__82_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*, "<>9__82_0", ::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>*>();
}
template <typename TDevice> inline void UnityEngine::InputSystem::InputManager___c__82_1<TDevice>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TDevice> inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager___c__82_1<TDevice>::_RegisterPrecompiledLayout_b__82_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>*>(), { "<RegisterPrecompiledLayout>b__82_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method);
}
template <typename TDevice> inline ::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>* UnityEngine::InputSystem::InputManager___c__82_1<TDevice>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>*>());
}
// Ctor Parameters []
template <typename TDevice> constexpr ::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>::InputManager___c__82_1() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65710bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::*)()>(
    &::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x65710dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::*)()>(
    &::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::MoveNext)> {
  constexpr static std::size_t size = 0x960;
  constexpr static std::size_t addrs = 0x6571208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::*)()>(
    &::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__m__Finally1)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6571b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97.__m__Finally2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::*)()>(
    &::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__m__Finally2)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6571bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "<>m__Finally2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97.__m__Finally3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::*)()>(
    &::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__m__Finally3)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6571bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "<>m__Finally3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97.__m__Finally4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::*)()>(
    &::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__m__Finally4)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6571c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "<>m__Finally4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97.__m__Finally5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::*)()>(
    &::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__m__Finally5)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6571c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "<>m__Finally5", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97.__m__Finally6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::*)()>(
    &::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__m__Finally6)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6571cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "<>m__Finally6", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97.System_Collections_Generic_IEnumerator_System_String__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::*)()>(
    &::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::System_Collections_Generic_IEnumerator_System_String__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.String>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::*)()>(
    &::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6571d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::*)()>(
    &::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97.System_Collections_Generic_IEnumerable_System_String__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>* (::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::*)()>(
    &::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::System_Collections_Generic_IEnumerable_System_String__GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6571d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<System.String>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::*)()>(
    &::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6571e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_set___2__current(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get_basedOn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basedOn;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get_basedOn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basedOn;
}
constexpr void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_set_basedOn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___basedOn = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___3__basedOn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__basedOn;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___3__basedOn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__basedOn;
}
constexpr void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_set___3__basedOn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__basedOn = value;
}
constexpr ::UnityEngine::InputSystem::InputManager*& UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::InputSystem::InputManager* const& UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_set___4__this(::UnityEngine::InputSystem::InputManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get__internedBasedOn_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internedBasedOn_5__2;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get__internedBasedOn_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internedBasedOn_5__2;
}
constexpr void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_set__internedBasedOn_5__2(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____internedBasedOn_5__2 = value;
}
constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>&
UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*> const&
UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_set___7__wrap2(
    ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap2 = value;
}
constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>&
UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___7__wrap3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap3;
}
constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW> const&
UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___7__wrap3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap3;
}
constexpr void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_set___7__wrap3(
    ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap3 = value;
}
constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>&
UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___7__wrap4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap4;
}
constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,
                                                                  ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*> const&
UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_get___7__wrap4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap4;
}
constexpr void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__cordl_internal_set___7__wrap4(
    ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap4 = value;
}
inline void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "<>m__Finally2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__m__Finally3() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "<>m__Finally3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__m__Finally4() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "<>m__Finally4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__m__Finally5() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "<>m__Finally5", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::__m__Finally6() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "<>m__Finally6", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::System_Collections_Generic_IEnumerator_System_String__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.String>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::StringW>*
UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::System_Collections_Generic_IEnumerable_System_String__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<System.String>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97* UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*
UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>*
UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97::InputManager__ListControlLayouts_d__97() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_devices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> (
    ::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::get_devices)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x655d2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_devices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_processors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::TypeTable (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_processors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6563a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_processors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_interactions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::TypeTable (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_interactions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6563a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_interactions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_composites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::TypeTable (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_composites)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6563aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_composites", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_metrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputMetrics (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_metrics)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6563aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_metrics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_settings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputSettings> (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6563c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_settings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.set_settings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputSettings*)>(
    &::UnityEngine::InputSystem::InputManager::set_settings)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6563c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "set_settings", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_actions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_actions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656431c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_actions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.set_actions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputActionAsset*)>(
    &::UnityEngine::InputSystem::InputManager::set_actions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6564324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "set_actions", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_updateMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_updateMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65643b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_updateMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.set_updateMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::InputManager::set_updateMask)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x65643bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                           { "set_updateMask", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_defaultUpdateType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_defaultUpdateType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6564550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_defaultUpdateType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_scrollDeltaBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::get_scrollDeltaBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6564580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_scrollDeltaBehavior", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.set_scrollDeltaBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior)>(
    &::UnityEngine::InputSystem::InputManager::set_scrollDeltaBehavior)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6564588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                             { "set_scrollDeltaBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_pollingFrequency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::get_pollingFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6564684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_pollingFrequency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.set_pollingFrequency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(float_t)>(&::UnityEngine::InputSystem::InputManager::set_pollingFrequency)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x656468c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "set_pollingFrequency", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onDeviceChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*)>(&::UnityEngine::InputSystem::InputManager::add_onDeviceChange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x655bb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                            { "add_onDeviceChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onDeviceChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*)>(&::UnityEngine::InputSystem::InputManager::remove_onDeviceChange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x655be5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                            { "remove_onDeviceChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onDeviceStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&::UnityEngine::InputSystem::InputManager::add_onDeviceStateChange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65647b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                         { "add_onDeviceStateChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onDeviceStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&::UnityEngine::InputSystem::InputManager::remove_onDeviceStateChange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6564814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
            { "remove_onDeviceStateChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onDeviceCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*)>(
    &::UnityEngine::InputSystem::InputManager::add_onDeviceCommand)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6564870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                             { "add_onDeviceCommand", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onDeviceCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*)>(
    &::UnityEngine::InputSystem::InputManager::remove_onDeviceCommand)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65648cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                             { "remove_onDeviceCommand", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onFindControlLayoutForDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*)>(
    &::UnityEngine::InputSystem::InputManager::add_onFindControlLayoutForDevice)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6564928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                { "add_onFindControlLayoutForDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onFindControlLayoutForDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*)>(
    &::UnityEngine::InputSystem::InputManager::remove_onFindControlLayoutForDevice)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6564bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                { "remove_onFindControlLayoutForDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onLayoutChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*)>(
    &::UnityEngine::InputSystem::InputManager::add_onLayoutChange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x655bbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                { "add_onLayoutChange", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onLayoutChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*)>(
    &::UnityEngine::InputSystem::InputManager::remove_onLayoutChange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x655beb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                { "remove_onLayoutChange", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*)>(&::UnityEngine::InputSystem::InputManager::add_onEvent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x655bb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                            { "add_onEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*)>(&::UnityEngine::InputSystem::InputManager::remove_onEvent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x655be00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                            { "remove_onEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onBeforeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action*)>(&::UnityEngine::InputSystem::InputManager::add_onBeforeUpdate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6564c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "add_onBeforeUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onBeforeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action*)>(&::UnityEngine::InputSystem::InputManager::remove_onBeforeUpdate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6564dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "remove_onBeforeUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onAfterUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action*)>(&::UnityEngine::InputSystem::InputManager::add_onAfterUpdate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6564e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "add_onAfterUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onAfterUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action*)>(&::UnityEngine::InputSystem::InputManager::remove_onAfterUpdate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6564e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "remove_onAfterUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onSettingsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action*)>(&::UnityEngine::InputSystem::InputManager::add_onSettingsChange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6564ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "add_onSettingsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onSettingsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action*)>(&::UnityEngine::InputSystem::InputManager::remove_onSettingsChange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6564f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "remove_onSettingsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.add_onActionsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action*)>(&::UnityEngine::InputSystem::InputManager::add_onActionsChange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6564fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "add_onActionsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.remove_onActionsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Action*)>(&::UnityEngine::InputSystem::InputManager::remove_onActionsChange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6564ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "remove_onActionsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_isProcessingEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::get_isProcessingEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6565058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_isProcessingEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_gameIsPlaying
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::get_gameIsPlaying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6565060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_gameIsPlaying", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_gameHasFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::get_gameHasFocus)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6565068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_gameHasFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_gameShouldGetInputRegardlessOfFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::get_gameShouldGetInputRegardlessOfFocus)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6565098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_gameShouldGetInputRegardlessOfFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RegisterControlLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::StringW, ::System::Type*)>(
    &::UnityEngine::InputSystem::InputManager::RegisterControlLayout)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x65650b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                           { "RegisterControlLayout", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RegisterControlLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::StringW, ::StringW, bool)>(
    &::UnityEngine::InputSystem::InputManager::RegisterControlLayout)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x655e550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                             { "RegisterControlLayout", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RegisterControlLayoutBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*, ::StringW,
                                                                                                          ::StringW)>(&::UnityEngine::InputSystem::InputManager::RegisterControlLayoutBuilder)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6565ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                            { "RegisterControlLayoutBuilder",
                              {},
                              { ::i2c::type_of<::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.PerformLayoutPostRegistration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>, bool, bool, bool)>(
    &::UnityEngine::InputSystem::InputManager::PerformLayoutPostRegistration)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x656567c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                             { "PerformLayoutPostRegistration",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RecreateDevicesUsingLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Utilities::InternedString, bool)>(
    &::UnityEngine::InputSystem::InputManager::RecreateDevicesUsingLayout)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6565e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                { "RecreateDevicesUsingLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.IsControlOrChildUsingLayoutRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::IsControlOrChildUsingLayoutRecursive)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6566194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
            { "IsControlOrChildUsingLayoutRecursive", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.IsControlUsingLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::IsControlUsingLayout)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x65660bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                            { "IsControlUsingLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RegisterControlLayoutMatcher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::StringW, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(
    &::UnityEngine::InputSystem::InputManager::RegisterControlLayoutMatcher)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6565b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                { "RegisterControlLayoutMatcher", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RegisterControlLayoutMatcher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::System::Type*, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(
    &::UnityEngine::InputSystem::InputManager::RegisterControlLayoutMatcher)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6566968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                         { "RegisterControlLayoutMatcher", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RecreateDevicesUsingLayoutWithInferiorMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(
    &::UnityEngine::InputSystem::InputManager::RecreateDevicesUsingLayoutWithInferiorMatch)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x65663e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                             { "RecreateDevicesUsingLayoutWithInferiorMatch", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RecreateDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::RecreateDevice)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6566298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                            { "RecreateDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddAvailableDevicesMatchingDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, ::UnityEngine::InputSystem::Utilities::InternedString)>(
        &::UnityEngine::InputSystem::InputManager::AddAvailableDevicesMatchingDescription)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x6566600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                         { "AddAvailableDevicesMatchingDescription",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RemoveControlLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::StringW)>(&::UnityEngine::InputSystem::InputManager::RemoveControlLayout)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x65677b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "RemoveControlLayout", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.TryLoadControlLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (::UnityEngine::InputSystem::InputManager::*)(::System::Type*)>(
    &::UnityEngine::InputSystem::InputManager::TryLoadControlLayout)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6567a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "TryLoadControlLayout", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.TryLoadControlLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (
    ::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::TryLoadControlLayout)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x655e540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                             { "TryLoadControlLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.TryFindMatchingControlLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::InputManager::*)(
    ::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>, int32_t)>(&::UnityEngine::InputSystem::InputManager::TryFindMatchingControlLayout)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x6566b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                            { "TryFindMatchingControlLayout", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.FindOrRegisterDeviceLayoutForType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::InputManager::*)(::System::Type*)>(
    &::UnityEngine::InputSystem::InputManager::FindOrRegisterDeviceLayoutForType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6567c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "FindOrRegisterDeviceLayoutForType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.IsDeviceLayoutMarkedAsSupportedInSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::InputManager::IsDeviceLayoutMarkedAsSupportedInSettings)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6567c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                             { "IsDeviceLayoutMarkedAsSupportedInSettings", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ListControlLayouts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::UnityEngine::InputSystem::InputManager::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputManager::ListControlLayouts)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6567da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "ListControlLayouts", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.SetDeviceUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::SetDeviceUsage)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6567e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                            { "SetDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDeviceUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::AddDeviceUsage)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x655ebb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                            { "AddDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RemoveDeviceUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::RemoveDeviceUsage)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x655ed78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                            { "RemoveDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.NotifyUsageChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::NotifyUsageChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6567f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "NotifyUsageChanged", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputManager::*)(::System::Type*, ::StringW)>(
    &::UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6568098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "AddDevice", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (
    ::UnityEngine::InputSystem::InputManager::*)(::StringW, ::StringW, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x655ea78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                         { "AddDevice", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (
    ::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Utilities::InternedString, int32_t, ::StringW, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription,
                                                 ::UnityEngine::InputSystem::InputDevice_DeviceFlags, ::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6567630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                         { "AddDevice",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_DeviceFlags>(),
                                             ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0x6567024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "AddDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (
    ::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&::UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6568a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                           { "AddDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (
    ::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, bool, ::StringW, int32_t, ::UnityEngine::InputSystem::InputDevice_DeviceFlags)>(
    &::UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6568ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                             { "AddDevice",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_DeviceFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (
    ::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, ::UnityEngine::InputSystem::Utilities::InternedString, ::StringW, int32_t,
                                                 ::UnityEngine::InputSystem::InputDevice_DeviceFlags)>(&::UnityEngine::InputSystem::InputManager::AddDevice)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6568c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                         { "AddDevice",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_DeviceFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RemoveDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*, bool)>(
    &::UnityEngine::InputSystem::InputManager::RemoveDevice)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x655df94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                             { "RemoveDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.FlushDisconnectedDevices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::FlushDisconnectedDevices)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6568e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "FlushDisconnectedDevices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ResetDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*, bool, ::System::Nullable_1<bool>)>(
    &::UnityEngine::InputSystem::InputManager::ResetDevice)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x6568e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                         { "ResetDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.TryGetDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputManager::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputManager::TryGetDevice)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6569980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "TryGetDevice", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.GetDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputManager::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputManager::GetDevice)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6569a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "GetDevice", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.TryGetDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputManager::*)(::System::Type*)>(
    &::UnityEngine::InputSystem::InputManager::TryGetDevice)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6569b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "TryGetDevice", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.TryGetDeviceById
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputManager::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputManager::TryGetDeviceById)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x655de10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "TryGetDeviceById", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.GetUnsupportedDevices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputManager::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*)>(&::UnityEngine::InputSystem::InputManager::GetUnsupportedDevices)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6569b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                         { "GetUnsupportedDevices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.EnableOrDisableDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, bool, ::UnityEngine::InputSystem::InputManager_DeviceDisableScope)>(&::UnityEngine::InputSystem::InputManager::EnableOrDisableDevice)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x6568750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "EnableOrDisableDevice",
                                                                                                                {},
                                                                                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>(),
                                                                                                                  ::i2c::type_of<::UnityEngine::InputSystem::InputManager_DeviceDisableScope>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.QueueEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::InputEvent*)>(
    &::UnityEngine::InputSystem::InputManager::QueueEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6569d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "QueueEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.QueueEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::InputManager::QueueEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x655ed74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                           { "QueueEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::Update)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6569e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::InputManager::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6569e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "Update", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::LowLevel::IInputRuntime*, ::UnityEngine::InputSystem::InputSettings*)>(&::UnityEngine::InputSystem::InputManager::Initialize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6569f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                            { "Initialize", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::Destroy)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x656bff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "Destroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.InitializeActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::InitializeActions)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6569f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "InitializeActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.InitializeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::InitializeData)> {
  constexpr static std::size_t size = 0x16c0;
  constexpr static std::size_t addrs = 0x6569fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "InitializeData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RegisterCustomTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::ArrayW<::System::Type*>)>(&::UnityEngine::InputSystem::InputManager::RegisterCustomTypes)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x656c704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "RegisterCustomTypes", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RegisterCustomTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::RegisterCustomTypes)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x656c4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "RegisterCustomTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.InstallRuntime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::IInputRuntime*)>(
    &::UnityEngine::InputSystem::InputManager::InstallRuntime)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x656b6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                           { "InstallRuntime", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.InstallGlobals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::InstallGlobals)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x656bdd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "InstallGlobals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.UninstallGlobals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::UninstallGlobals)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x656c110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "UninstallGlobals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_optimizedControlsFeatureEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::get_optimizedControlsFeatureEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656c970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_optimizedControlsFeatureEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.set_optimizedControlsFeatureEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(bool)>(&::UnityEngine::InputSystem::InputManager::set_optimizedControlsFeatureEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656c978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "set_optimizedControlsFeatureEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_readValueCachingFeatureEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::get_readValueCachingFeatureEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656c980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_readValueCachingFeatureEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.set_readValueCachingFeatureEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(bool)>(&::UnityEngine::InputSystem::InputManager::set_readValueCachingFeatureEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656c988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "set_readValueCachingFeatureEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.get_paranoidReadValueCachingChecksEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::get_paranoidReadValueCachingChecksEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656c990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_paranoidReadValueCachingChecksEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.set_paranoidReadValueCachingChecksEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(bool)>(
    &::UnityEngine::InputSystem::InputManager::set_paranoidReadValueCachingChecksEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656c998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "set_paranoidReadValueCachingChecksEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.MakeDeviceNameUnique
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::MakeDeviceNameUnique)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6568150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                           { "MakeDeviceNameUnique", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ResetControlPathsRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputManager::ResetControlPathsRecursive)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x656c9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                           { "ResetControlPathsRecursive", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AssignUniqueDeviceId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::AssignUniqueDeviceId)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6568310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                           { "AssignUniqueDeviceId", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ReallocateStateBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::ReallocateStateBuffers)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x65643e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "ReallocateStateBuffers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.InitializeDefaultState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::InitializeDefaultState)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x656ca88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                           { "InitializeDefaultState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.InitializeDeviceState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::InitializeDeviceState)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x6568488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                           { "InitializeDeviceState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.OnNativeDeviceDiscovered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(int32_t, ::StringW)>(&::UnityEngine::InputSystem::InputManager::OnNativeDeviceDiscovered)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x656cc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                           { "OnNativeDeviceDiscovered", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.MakeEscapedJsonString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString (::UnityEngine::InputSystem::InputManager::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputManager::MakeEscapedJsonString)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x656d350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "MakeEscapedJsonString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.TryMatchDisconnectedDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputManager::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputManager::TryMatchDisconnectedDevice)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x656d09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "TryMatchDisconnectedDevice", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.InstallBeforeUpdateHookIfNecessary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::InstallBeforeUpdateHookIfNecessary)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6564c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "InstallBeforeUpdateHookIfNecessary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RestoreDevicesAfterDomainReloadIfNecessary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::RestoreDevicesAfterDomainReloadIfNecessary)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x656d098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "RestoreDevicesAfterDomainReloadIfNecessary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.WarnAboutDevicesFailingToRecreateAfterDomainReload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::WarnAboutDevicesFailingToRecreateAfterDomainReload)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x656d4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "WarnAboutDevicesFailingToRecreateAfterDomainReload", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.OnBeforeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::InputManager::OnBeforeUpdate)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x656d4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                           { "OnBeforeUpdate", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ApplySettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::ApplySettings)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x6563d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "ApplySettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ApplyActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::ApplyActions)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x656432c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "ApplyActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddAvailableDevicesThatAreNowRecognized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::AddAvailableDevicesThatAreNowRecognized)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x656498c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "AddAvailableDevicesThatAreNowRecognized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ShouldRunDeviceInBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::ShouldRunDeviceInBackground)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6568718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                           { "ShouldRunDeviceInBackground", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.OnFocusChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(bool)>(&::UnityEngine::InputSystem::InputManager::OnFocusChanged)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x656d6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "OnFocusChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ShouldRunUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::InputManager::ShouldRunUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x656d93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                           { "ShouldRunUpdate", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.OnUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::LowLevel::InputUpdateType, ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>)>(&::UnityEngine::InputSystem::InputManager::OnUpdate)> {
  constexpr static std::size_t size = 0x11ec;
  constexpr static std::size_t addrs = 0x656d958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
            { "OnUpdate", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AreMaximumEventBytesPerUpdateExceeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(uint32_t)>(
    &::UnityEngine::InputSystem::InputManager::AreMaximumEventBytesPerUpdateExceeded)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x656efc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "AreMaximumEventBytesPerUpdateExceeded", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.MakeStringWithEventsProcessedByDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::MakeStringWithEventsProcessedByDevice)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x656f1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "MakeStringWithEventsProcessedByDevice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ResetCurrentProcessedEventBytesForDevices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::ResetCurrentProcessedEventBytesForDevices)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x656f104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "ResetCurrentProcessedEventBytesForDevices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.CheckAllDevicesOptimizedControlsHaveValidState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(
    &::UnityEngine::InputSystem::InputManager::CheckAllDevicesOptimizedControlsHaveValidState)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x656f370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "CheckAllDevicesOptimizedControlsHaveValidState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.InvokeAfterUpdateCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::InputManager::InvokeAfterUpdateCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x656ee18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                             { "InvokeAfterUpdateCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.DontMakeCurrentlyUpdatingDeviceCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::DontMakeCurrentlyUpdatingDeviceCurrent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656f4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "DontMakeCurrentlyUpdatingDeviceCurrent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.UpdateState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEvent*,
                                                                                                          ::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::InputManager::UpdateState)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x656eec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                             { "UpdateState",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.UpdateState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputUpdateType, void*, uint32_t, uint32_t, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::InputManager::UpdateState)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x65694d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                            { "UpdateState",
                              {},
                              { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(), ::i2c::type_of<void*>(),
                                ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.WriteStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers, int32_t, ::by_ref<::UnityEngine::InputSystem::LowLevel::InputStateBlock>, uint32_t, void*, uint32_t, bool)>(
    &::UnityEngine::InputSystem::InputManager::WriteStateChange)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x656f854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                             { "WriteStateChange",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputStateBlock>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.FlipBuffersForDeviceIfNecessary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::InputManager::FlipBuffersForDeviceIfNecessary)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x656f794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
            { "FlipBuffersForDeviceIfNecessary", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddStateChangeMonitor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t, uint32_t)>(&::UnityEngine::InputSystem::InputManager::AddStateChangeMonitor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x656ffb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                { "AddStateChangeMonitor",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(),
                                                    ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RemoveStateChangeMonitors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitors)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6568d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                           { "RemoveStateChangeMonitors", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RemoveStateChangeMonitor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t)>(&::UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6570114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                             { "RemoveStateChangeMonitor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.AddStateChangeMonitorTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::InputControl*,
                                                                                                          ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, double_t, int64_t, int32_t)>(
    &::UnityEngine::InputSystem::InputManager::AddStateChangeMonitorTimeout)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6570274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                { "AddStateChangeMonitorTimeout",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(),
                                                    ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.RemoveStateChangeMonitorTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t, int32_t)>(
    &::UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitorTimeout)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x657030c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
            { "RemoveStateChangeMonitorTimeout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.SortStateChangeMonitorsIfNecessary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(int32_t)>(&::UnityEngine::InputSystem::InputManager::SortStateChangeMonitorsIfNecessary)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x656f504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "SortStateChangeMonitorsIfNecessary", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.SignalStateChangeMonitor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*)>(&::UnityEngine::InputSystem::InputManager::SignalStateChangeMonitor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x657042c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
            { "SignalStateChangeMonitor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.FireStateChangeNotifications
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::FireStateChangeNotifications)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x657051c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "FireStateChangeNotifications", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ProcessStateChangeMonitors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputManager::*)(int32_t, void*, void*, uint32_t, uint32_t)>(
    &::UnityEngine::InputSystem::InputManager::ProcessStateChangeMonitors)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x656f550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
            { "ProcessStateChangeMonitors", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.FireStateChangeNotifications
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)(int32_t, double_t, ::UnityEngine::InputSystem::LowLevel::InputEvent*)>(
    &::UnityEngine::InputSystem::InputManager::FireStateChangeNotifications)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x656fadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                            { "FireStateChangeNotifications", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager.ProcessStateChangeMonitorTimeouts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::ProcessStateChangeMonitorTimeouts)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x656eb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "ProcessStateChangeMonitorTimeouts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputManager::*)()>(&::UnityEngine::InputSystem::InputManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x657065c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputManager._TryFindMatchingControlLayout_b__94_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::InputSystem::InputManager::*)(::by_ref<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>)>(
    &::UnityEngine::InputSystem::InputManager::_TryFindMatchingControlLayout_b__94_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x65709dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                { "<TryFindMatchingControlLayout>b__94_0", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>>() } })));
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
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Layouts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Layouts;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Layouts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Layouts;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_Layouts(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection value) {
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
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*>& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Devices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Devices;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*> const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Devices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Devices;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_Devices(::ArrayW<::UnityEngine::InputSystem::InputDevice*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Devices = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::InputSystem::InputDevice*>*& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DevicesById() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DevicesById;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::InputSystem::InputDevice*>* const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DevicesById() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DevicesById;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_DevicesById(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::InputSystem::InputDevice*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DevicesById = value;
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
constexpr ::ArrayW<::UnityEngine::InputSystem::InputManager_AvailableDevice>& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_AvailableDevices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AvailableDevices;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputManager_AvailableDevice> const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_AvailableDevices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AvailableDevices;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_AvailableDevices(::ArrayW<::UnityEngine::InputSystem::InputManager_AvailableDevice> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AvailableDevices = value;
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
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*>& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DisconnectedDevices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisconnectedDevices;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*> const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DisconnectedDevices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisconnectedDevices;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_DisconnectedDevices(::ArrayW<::UnityEngine::InputSystem::InputDevice*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisconnectedDevices = value;
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
constexpr ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_ScrollDeltaBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollDeltaBehavior;
}
constexpr ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_ScrollDeltaBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollDeltaBehavior;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_ScrollDeltaBehavior(::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollDeltaBehavior = value;
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
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_ActionsChangedListeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionsChangedListeners;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_ActionsChangedListeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionsChangedListeners;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_ActionsChangedListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionsChangedListeners = value;
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
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_DeviceFindExecuteCommandDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceFindExecuteCommandDelegate;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_DeviceFindExecuteCommandDelegate(::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceFindExecuteCommandDelegate = value;
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
constexpr ::UnityEngine::InputSystem::LowLevel::IInputRuntime* const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Runtime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Runtime;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_Runtime(::UnityEngine::InputSystem::LowLevel::IInputRuntime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Runtime = value;
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
  this->___m_Settings = value;
}
constexpr bool& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_OptimizedControlsFeatureEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OptimizedControlsFeatureEnabled;
}
constexpr bool const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_OptimizedControlsFeatureEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OptimizedControlsFeatureEnabled;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_OptimizedControlsFeatureEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OptimizedControlsFeatureEnabled = value;
}
constexpr bool& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_ReadValueCachingFeatureEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadValueCachingFeatureEnabled;
}
constexpr bool const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_ReadValueCachingFeatureEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadValueCachingFeatureEnabled;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_ReadValueCachingFeatureEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReadValueCachingFeatureEnabled = value;
}
constexpr bool& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_ParanoidReadValueCachingChecksEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParanoidReadValueCachingChecksEnabled;
}
constexpr bool const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_ParanoidReadValueCachingChecksEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParanoidReadValueCachingChecksEnabled;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_ParanoidReadValueCachingChecksEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParanoidReadValueCachingChecksEnabled = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Actions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Actions;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_Actions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Actions;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_Actions(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Actions = value;
}
constexpr bool& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_ShouldMakeCurrentlyUpdatingDeviceCurrent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldMakeCurrentlyUpdatingDeviceCurrent;
}
constexpr bool const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_ShouldMakeCurrentlyUpdatingDeviceCurrent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldMakeCurrentlyUpdatingDeviceCurrent;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_ShouldMakeCurrentlyUpdatingDeviceCurrent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShouldMakeCurrentlyUpdatingDeviceCurrent = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_StateChangeMonitors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateChangeMonitors;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice> const& UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_StateChangeMonitors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateChangeMonitors;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_StateChangeMonitors(::ArrayW<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StateChangeMonitors = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout>&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_StateChangeMonitorTimeouts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateChangeMonitorTimeouts;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout> const&
UnityEngine::InputSystem::InputManager::__cordl_internal_get_m_StateChangeMonitorTimeouts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateChangeMonitorTimeouts;
}
constexpr void UnityEngine::InputSystem::InputManager::__cordl_internal_set_m_StateChangeMonitorTimeouts(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StateChangeMonitorTimeouts = value;
}
inline void UnityEngine::InputSystem::InputManager::setStaticF_k_InputUpdateProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputUpdateProfilerMarker", ::UnityEngine::InputSystem::InputManager*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputManager::getStaticF_k_InputUpdateProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputUpdateProfilerMarker", ::UnityEngine::InputSystem::InputManager*>();
}
inline void UnityEngine::InputSystem::InputManager::setStaticF_k_InputTryFindMatchingControllerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputTryFindMatchingControllerMarker", ::UnityEngine::InputSystem::InputManager*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputManager::getStaticF_k_InputTryFindMatchingControllerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputTryFindMatchingControllerMarker", ::UnityEngine::InputSystem::InputManager*>();
}
inline void UnityEngine::InputSystem::InputManager::setStaticF_k_InputAddDeviceMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputAddDeviceMarker", ::UnityEngine::InputSystem::InputManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputManager::getStaticF_k_InputAddDeviceMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputAddDeviceMarker", ::UnityEngine::InputSystem::InputManager*>();
}
inline void UnityEngine::InputSystem::InputManager::setStaticF_k_InputRestoreDevicesAfterReloadMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputRestoreDevicesAfterReloadMarker", ::UnityEngine::InputSystem::InputManager*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputManager::getStaticF_k_InputRestoreDevicesAfterReloadMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputRestoreDevicesAfterReloadMarker", ::UnityEngine::InputSystem::InputManager*>();
}
inline void UnityEngine::InputSystem::InputManager::setStaticF_k_InputRegisterCustomTypesMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputRegisterCustomTypesMarker", ::UnityEngine::InputSystem::InputManager*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputManager::getStaticF_k_InputRegisterCustomTypesMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputRegisterCustomTypesMarker", ::UnityEngine::InputSystem::InputManager*>();
}
inline void UnityEngine::InputSystem::InputManager::setStaticF_k_InputOnBeforeUpdateMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnBeforeUpdateMarker", ::UnityEngine::InputSystem::InputManager*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputManager::getStaticF_k_InputOnBeforeUpdateMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnBeforeUpdateMarker", ::UnityEngine::InputSystem::InputManager*>();
}
inline void UnityEngine::InputSystem::InputManager::setStaticF_k_InputOnAfterUpdateMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnAfterUpdateMarker", ::UnityEngine::InputSystem::InputManager*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputManager::getStaticF_k_InputOnAfterUpdateMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnAfterUpdateMarker", ::UnityEngine::InputSystem::InputManager*>();
}
inline void UnityEngine::InputSystem::InputManager::setStaticF_k_InputOnSettingsChangeMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnSettingsChangeMarker", ::UnityEngine::InputSystem::InputManager*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputManager::getStaticF_k_InputOnSettingsChangeMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnSettingsChangeMarker", ::UnityEngine::InputSystem::InputManager*>();
}
inline void UnityEngine::InputSystem::InputManager::setStaticF_k_InputOnDeviceSettingsChangeMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnDeviceSettingsChangeMarker", ::UnityEngine::InputSystem::InputManager*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputManager::getStaticF_k_InputOnDeviceSettingsChangeMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnDeviceSettingsChangeMarker", ::UnityEngine::InputSystem::InputManager*>();
}
inline void UnityEngine::InputSystem::InputManager::setStaticF_k_InputOnEventMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnEventMarker", ::UnityEngine::InputSystem::InputManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputManager::getStaticF_k_InputOnEventMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnEventMarker", ::UnityEngine::InputSystem::InputManager*>();
}
inline void UnityEngine::InputSystem::InputManager::setStaticF_k_InputOnLayoutChangeMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnLayoutChangeMarker", ::UnityEngine::InputSystem::InputManager*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputManager::getStaticF_k_InputOnLayoutChangeMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnLayoutChangeMarker", ::UnityEngine::InputSystem::InputManager*>();
}
inline void UnityEngine::InputSystem::InputManager::setStaticF_k_InputOnDeviceChangeMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnDeviceChangeMarker", ::UnityEngine::InputSystem::InputManager*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputManager::getStaticF_k_InputOnDeviceChangeMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnDeviceChangeMarker", ::UnityEngine::InputSystem::InputManager*>();
}
inline void UnityEngine::InputSystem::InputManager::setStaticF_k_InputOnActionsChangeMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnActionsChangeMarker", ::UnityEngine::InputSystem::InputManager*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputManager::getStaticF_k_InputOnActionsChangeMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnActionsChangeMarker", ::UnityEngine::InputSystem::InputManager*>();
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::InputManager::get_devices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_devices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputManager::get_processors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_processors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::TypeTable>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputManager::get_interactions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_interactions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::TypeTable>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputManager::get_composites() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_composites", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::TypeTable>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputMetrics UnityEngine::InputSystem::InputManager::get_metrics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_metrics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputMetrics>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::InputSystem::InputSettings> UnityEngine::InputSystem::InputManager::get_settings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_settings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputSettings>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::set_settings(::UnityEngine::InputSystem::InputSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "set_settings", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::InputSystem::InputManager::get_actions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_actions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::set_actions(::UnityEngine::InputSystem::InputActionAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "set_actions", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::InputManager::get_updateMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_updateMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                         { "set_updateMask", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::InputManager::get_defaultUpdateType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_defaultUpdateType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior UnityEngine::InputSystem::InputManager::get_scrollDeltaBehavior() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_scrollDeltaBehavior", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::set_scrollDeltaBehavior(::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "set_scrollDeltaBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputManager::get_pollingFrequency() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_pollingFrequency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::set_pollingFrequency(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "set_pollingFrequency", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                          { "add_onDeviceChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                          { "remove_onDeviceChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                       { "add_onDeviceStateChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
UnityEngine::InputSystem::InputManager::remove_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
          { "remove_onDeviceStateChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "add_onDeviceCommand", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "remove_onDeviceCommand", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                              { "add_onFindControlLayoutForDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                              { "remove_onFindControlLayoutForDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onLayoutChange(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "add_onLayoutChange", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onLayoutChange(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                              { "remove_onLayoutChange", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                          { "add_onEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                          { "remove_onEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onBeforeUpdate(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "add_onBeforeUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onBeforeUpdate(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "remove_onBeforeUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onAfterUpdate(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "add_onAfterUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onAfterUpdate(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "remove_onAfterUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onSettingsChange(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "add_onSettingsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onSettingsChange(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "remove_onSettingsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::add_onActionsChange(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "add_onActionsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::remove_onActionsChange(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "remove_onActionsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputManager::get_isProcessingEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_isProcessingEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputManager::get_gameIsPlaying() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_gameIsPlaying", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputManager::get_gameHasFocus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_gameHasFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputManager::get_gameShouldGetInputRegardlessOfFocus() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_gameShouldGetInputRegardlessOfFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::RegisterControlLayout(::StringW name, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                         { "RegisterControlLayout", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, type);
}
inline void UnityEngine::InputSystem::InputManager::RegisterControlLayout(::StringW json, ::StringW name, bool isOverride) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "RegisterControlLayout", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json, name, isOverride);
}
inline void UnityEngine::InputSystem::InputManager::RegisterControlLayoutBuilder(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>* method, ::StringW name,
                                                                                 ::StringW baseLayout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                          { "RegisterControlLayoutBuilder",
                            {},
                            { ::i2c::type_of<::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, name, baseLayout);
}
inline void
UnityEngine::InputSystem::InputManager::PerformLayoutPostRegistration(::UnityEngine::InputSystem::Utilities::InternedString layoutName,
                                                                      ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> baseLayouts,
                                                                      bool isReplacement, bool isKnownToBeDeviceLayout, bool isOverride) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "PerformLayoutPostRegistration",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layoutName, baseLayouts, isReplacement, isKnownToBeDeviceLayout, isOverride);
}
template <typename TDevice> inline void UnityEngine::InputSystem::InputManager::RegisterPrecompiledLayout(::StringW metadata) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                              { "RegisterPrecompiledLayout", { ::i2c::class_of<TDevice>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDevice>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, metadata);
}
inline void UnityEngine::InputSystem::InputManager::RecreateDevicesUsingLayout(::UnityEngine::InputSystem::Utilities::InternedString layout, bool isKnownToBeDeviceLayout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "RecreateDevicesUsingLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layout, isKnownToBeDeviceLayout);
}
inline bool UnityEngine::InputSystem::InputManager::IsControlOrChildUsingLayoutRecursive(::UnityEngine::InputSystem::InputControl* control,
                                                                                         ::UnityEngine::InputSystem::Utilities::InternedString layout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
          { "IsControlOrChildUsingLayoutRecursive", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, control, layout);
}
inline bool UnityEngine::InputSystem::InputManager::IsControlUsingLayout(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::Utilities::InternedString layout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                          { "IsControlUsingLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, control, layout);
}
inline void UnityEngine::InputSystem::InputManager::RegisterControlLayoutMatcher(::StringW layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                              { "RegisterControlLayoutMatcher", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layoutName, matcher);
}
inline void UnityEngine::InputSystem::InputManager::RegisterControlLayoutMatcher(::System::Type* type, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                       { "RegisterControlLayoutMatcher", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, matcher);
}
inline void UnityEngine::InputSystem::InputManager::RecreateDevicesUsingLayoutWithInferiorMatch(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher deviceMatcher) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "RecreateDevicesUsingLayoutWithInferiorMatch", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceMatcher);
}
inline void UnityEngine::InputSystem::InputManager::RecreateDevice(::UnityEngine::InputSystem::InputDevice* oldDevice, ::UnityEngine::InputSystem::Utilities::InternedString newLayout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                          { "RecreateDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldDevice, newLayout);
}
inline void UnityEngine::InputSystem::InputManager::AddAvailableDevicesMatchingDescription(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher,
                                                                                           ::UnityEngine::InputSystem::Utilities::InternedString layout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                       { "AddAvailableDevicesMatchingDescription",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matcher, layout);
}
inline void UnityEngine::InputSystem::InputManager::RemoveControlLayout(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "RemoveControlLayout", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::InputManager::TryLoadControlLayout(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "TryLoadControlLayout", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(this, ___internal_method, type);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::InputManager::TryLoadControlLayout(::UnityEngine::InputSystem::Utilities::InternedString name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                         { "TryLoadControlLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString
UnityEngine::InputSystem::InputManager::TryFindMatchingControlLayout(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> deviceDescription, int32_t deviceId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                          { "TryFindMatchingControlLayout", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, deviceDescription, deviceId);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::InputManager::FindOrRegisterDeviceLayoutForType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "FindOrRegisterDeviceLayoutForType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, type);
}
inline bool UnityEngine::InputSystem::InputManager::IsDeviceLayoutMarkedAsSupportedInSettings(::UnityEngine::InputSystem::Utilities::InternedString layoutName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "IsDeviceLayoutMarkedAsSupportedInSettings", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layoutName);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::InputSystem::InputManager::ListControlLayouts(::StringW basedOn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "ListControlLayouts", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method, basedOn);
}
template <typename TControl> inline int32_t UnityEngine::InputSystem::InputManager::GetControls(::StringW path, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>> controls) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                          { "GetControls", { ::i2c::class_of<TControl>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TControl>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, path, controls);
}
inline void UnityEngine::InputSystem::InputManager::SetDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                          { "SetDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputManager::AddDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                          { "AddDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputManager::RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                          { "RemoveDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputManager::NotifyUsageChanged(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "NotifyUsageChanged", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::AddDevice(::System::Type* type, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "AddDevice", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method, type, name);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::AddDevice(::StringW layout, ::StringW name, ::UnityEngine::InputSystem::Utilities::InternedString variants) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                       { "AddDevice", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method, layout, name, variants);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::AddDevice(::UnityEngine::InputSystem::Utilities::InternedString layout, int32_t deviceId, ::StringW deviceName,
                                                                                                  ::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription,
                                                                                                  ::UnityEngine::InputSystem::InputDevice_DeviceFlags deviceFlags,
                                                                                                  ::UnityEngine::InputSystem::Utilities::InternedString variants) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                              { "AddDevice",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_DeviceFlags>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method, layout, deviceId, deviceName, deviceDescription, deviceFlags, variants);
}
inline void UnityEngine::InputSystem::InputManager::AddDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "AddDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                         { "AddDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method, description);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description, bool throwIfNoLayoutFound,
                                                                                                  ::StringW deviceName, int32_t deviceId,
                                                                                                  ::UnityEngine::InputSystem::InputDevice_DeviceFlags deviceFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "AddDevice",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_DeviceFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method, description, throwIfNoLayoutFound, deviceName, deviceId, deviceFlags);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description,
                                                                                                  ::UnityEngine::InputSystem::Utilities::InternedString layout, ::StringW deviceName, int32_t deviceId,
                                                                                                  ::UnityEngine::InputSystem::InputDevice_DeviceFlags deviceFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                       { "AddDevice",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                           ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_DeviceFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method, description, layout, deviceName, deviceId, deviceFlags);
}
inline void UnityEngine::InputSystem::InputManager::RemoveDevice(::UnityEngine::InputSystem::InputDevice* device, bool keepOnListOfAvailableDevices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "RemoveDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device, keepOnListOfAvailableDevices);
}
inline void UnityEngine::InputSystem::InputManager::FlushDisconnectedDevices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "FlushDisconnectedDevices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::ResetDevice(::UnityEngine::InputSystem::InputDevice* device, bool alsoResetDontResetControls, ::System::Nullable_1<bool> issueResetCommand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                       { "ResetDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device, alsoResetDontResetControls, issueResetCommand);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::TryGetDevice(::StringW nameOrLayout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "TryGetDevice", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method, nameOrLayout);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::GetDevice(::StringW nameOrLayout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "GetDevice", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method, nameOrLayout);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::TryGetDevice(::System::Type* layoutType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "TryGetDevice", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method, layoutType);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::TryGetDeviceById(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "TryGetDeviceById", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method, id);
}
inline int32_t UnityEngine::InputSystem::InputManager::GetUnsupportedDevices(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* descriptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                       { "GetUnsupportedDevices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, descriptions);
}
inline void UnityEngine::InputSystem::InputManager::EnableOrDisableDevice(::UnityEngine::InputSystem::InputDevice* device, bool enable,
                                                                          ::UnityEngine::InputSystem::InputManager_DeviceDisableScope scope) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "EnableOrDisableDevice",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>(),
                                                                                                                ::i2c::type_of<::UnityEngine::InputSystem::InputManager_DeviceDisableScope>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device, enable, scope);
}
inline void UnityEngine::InputSystem::InputManager::QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "QueueEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventPtr);
}
inline void UnityEngine::InputSystem::InputManager::QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "QueueEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr);
}
template <typename TEvent> inline void UnityEngine::InputSystem::InputManager::QueueEvent(::by_ref<TEvent> inputEvent) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "QueueEvent", { ::i2c::class_of<TEvent>() }, { ::i2c::type_of<::by_ref<TEvent>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEvent>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputEvent);
}
inline void UnityEngine::InputSystem::InputManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "Update", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateType);
}
inline void UnityEngine::InputSystem::InputManager::Initialize(::UnityEngine::InputSystem::LowLevel::IInputRuntime* runtime, ::UnityEngine::InputSystem::InputSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                          { "Initialize", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runtime, settings);
}
inline void UnityEngine::InputSystem::InputManager::Destroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "Destroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::InitializeActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "InitializeActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::InitializeData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "InitializeData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::RegisterCustomTypes(::ArrayW<::System::Type*> types) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "RegisterCustomTypes", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, types);
}
inline void UnityEngine::InputSystem::InputManager::RegisterCustomTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "RegisterCustomTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::InstallRuntime(::UnityEngine::InputSystem::LowLevel::IInputRuntime* runtime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                         { "InstallRuntime", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runtime);
}
inline void UnityEngine::InputSystem::InputManager::InstallGlobals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "InstallGlobals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::UninstallGlobals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "UninstallGlobals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputManager::get_optimizedControlsFeatureEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_optimizedControlsFeatureEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::set_optimizedControlsFeatureEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "set_optimizedControlsFeatureEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputManager::get_readValueCachingFeatureEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_readValueCachingFeatureEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::set_readValueCachingFeatureEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "set_readValueCachingFeatureEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputManager::get_paranoidReadValueCachingChecksEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "get_paranoidReadValueCachingChecksEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::set_paranoidReadValueCachingChecksEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "set_paranoidReadValueCachingChecksEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputManager::MakeDeviceNameUnique(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "MakeDeviceNameUnique", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputManager::ResetControlPathsRecursive(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                         { "ResetControlPathsRecursive", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control);
}
inline void UnityEngine::InputSystem::InputManager::AssignUniqueDeviceId(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "AssignUniqueDeviceId", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputManager::ReallocateStateBuffers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "ReallocateStateBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::InitializeDefaultState(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                         { "InitializeDefaultState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputManager::InitializeDeviceState(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "InitializeDeviceState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputManager::OnNativeDeviceDiscovered(int32_t deviceId, ::StringW deviceDescriptor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "OnNativeDeviceDiscovered", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceId, deviceDescriptor);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString UnityEngine::InputSystem::InputManager::MakeEscapedJsonString(::StringW theString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "MakeEscapedJsonString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(this, ___internal_method, theString);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputManager::TryMatchDisconnectedDevice(::StringW deviceDescriptor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "TryMatchDisconnectedDevice", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method, deviceDescriptor);
}
inline void UnityEngine::InputSystem::InputManager::InstallBeforeUpdateHookIfNecessary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "InstallBeforeUpdateHookIfNecessary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::RestoreDevicesAfterDomainReloadIfNecessary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "RestoreDevicesAfterDomainReloadIfNecessary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::WarnAboutDevicesFailingToRecreateAfterDomainReload() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "WarnAboutDevicesFailingToRecreateAfterDomainReload", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                         { "OnBeforeUpdate", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateType);
}
inline void UnityEngine::InputSystem::InputManager::ApplySettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "ApplySettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::ApplyActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "ApplyActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TCommand> inline int64_t UnityEngine::InputSystem::InputManager::ExecuteGlobalCommand(::by_ref<TCommand> command) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                              { "ExecuteGlobalCommand", { ::i2c::class_of<TCommand>() }, { ::i2c::type_of<::by_ref<TCommand>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TCommand>() })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, command);
}
inline void UnityEngine::InputSystem::InputManager::AddAvailableDevicesThatAreNowRecognized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "AddAvailableDevicesThatAreNowRecognized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputManager::ShouldRunDeviceInBackground(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                         { "ShouldRunDeviceInBackground", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputManager::OnFocusChanged(bool focus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "OnFocusChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
inline bool UnityEngine::InputSystem::InputManager::ShouldRunUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                         { "ShouldRunUpdate", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, updateType);
}
inline void UnityEngine::InputSystem::InputManager::OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType,
                                                             ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
          { "OnUpdate", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateType, eventBuffer);
}
inline bool UnityEngine::InputSystem::InputManager::AreMaximumEventBytesPerUpdateExceeded(uint32_t totalEventBytesProcessed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "AreMaximumEventBytesPerUpdateExceeded", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, totalEventBytesProcessed);
}
inline ::StringW UnityEngine::InputSystem::InputManager::MakeStringWithEventsProcessedByDevice() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "MakeStringWithEventsProcessedByDevice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::ResetCurrentProcessedEventBytesForDevices() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "ResetCurrentProcessedEventBytesForDevices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::CheckAllDevicesOptimizedControlsHaveValidState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "CheckAllDevicesOptimizedControlsHaveValidState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::InvokeAfterUpdateCallback(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "InvokeAfterUpdateCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateType);
}
inline void UnityEngine::InputSystem::InputManager::DontMakeCurrentlyUpdatingDeviceCurrent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "DontMakeCurrentlyUpdatingDeviceCurrent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputManager::UpdateState(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr,
                                                                ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "UpdateState",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device, eventPtr, updateType);
}
inline bool UnityEngine::InputSystem::InputManager::UpdateState(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, void* statePtr,
                                                                uint32_t stateOffsetInDevice, uint32_t stateSize, double_t internalTime, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                          { "UpdateState",
                            {},
                            { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(), ::i2c::type_of<void*>(),
                              ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device, updateType, statePtr, stateOffsetInDevice, stateSize, internalTime, eventPtr);
}
inline void UnityEngine::InputSystem::InputManager::WriteStateChange(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers buffers, int32_t deviceIndex,
                                                                     ::by_ref<::UnityEngine::InputSystem::LowLevel::InputStateBlock> deviceStateBlock, uint32_t stateOffsetInDevice, void* statePtr,
                                                                     uint32_t stateSizeInBytes, bool flippedBuffers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "WriteStateChange",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputStateBlock>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffers, deviceIndex, deviceStateBlock, stateOffsetInDevice, statePtr, stateSizeInBytes, flippedBuffers);
}
inline bool UnityEngine::InputSystem::InputManager::FlipBuffersForDeviceIfNecessary(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
          { "FlipBuffersForDeviceIfNecessary", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device, updateType);
}
inline void UnityEngine::InputSystem::InputManager::AddStateChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor,
                                                                          int64_t monitorIndex, uint32_t groupIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                              { "AddStateChangeMonitor",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(),
                                                  ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, monitor, monitorIndex, groupIndex);
}
inline void UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitors(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                                                         { "RemoveStateChangeMonitors", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor,
                                                                             int64_t monitorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "RemoveStateChangeMonitor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, monitor, monitorIndex);
}
inline void UnityEngine::InputSystem::InputManager::AddStateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl* control,
                                                                                 ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, double_t time, int64_t monitorIndex,
                                                                                 int32_t timerIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                              { "AddStateChangeMonitorTimeout",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(),
                                                  ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, monitor, time, monitorIndex, timerIndex);
}
inline void UnityEngine::InputSystem::InputManager::RemoveStateChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex, int32_t timerIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
          { "RemoveStateChangeMonitorTimeout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, monitor, monitorIndex, timerIndex);
}
inline void UnityEngine::InputSystem::InputManager::SortStateChangeMonitorsIfNecessary(int32_t deviceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "SortStateChangeMonitorsIfNecessary", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceIndex);
}
inline void UnityEngine::InputSystem::InputManager::SignalStateChangeMonitor(::UnityEngine::InputSystem::InputControl* control,
                                                                             ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
          { "SignalStateChangeMonitor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, monitor);
}
inline void UnityEngine::InputSystem::InputManager::FireStateChangeNotifications() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "FireStateChangeNotifications", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputManager::ProcessStateChangeMonitors(int32_t deviceIndex, void* newStateFromEvent, void* oldStateOfDevice, uint32_t newStateSizeInBytes,
                                                                               uint32_t newStateOffsetInBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                       { "ProcessStateChangeMonitors", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, deviceIndex, newStateFromEvent, oldStateOfDevice, newStateSizeInBytes, newStateOffsetInBytes);
}
inline void UnityEngine::InputSystem::InputManager::FireStateChangeNotifications(int32_t deviceIndex, double_t internalTime, ::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                          { "FireStateChangeNotifications", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceIndex, internalTime, eventPtr);
}
inline void UnityEngine::InputSystem::InputManager::ProcessStateChangeMonitorTimeouts() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { "ProcessStateChangeMonitorTimeouts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t UnityEngine::InputSystem::InputManager::_TryFindMatchingControlLayout_b__94_0(::by_ref<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandRef) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputManager*>(),
                                                           { "<TryFindMatchingControlLayout>b__94_0", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, commandRef);
}
inline ::UnityEngine::InputSystem::InputManager* UnityEngine::InputSystem::InputManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputManager::InputManager() {}
