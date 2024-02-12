#pragma once
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags::__InputDevice__DeviceFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags::__InputDevice__DeviceFlags() {}
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags UnityEngine::InputSystem::__InputDevice__DeviceFlags::UpdateBeforeRender{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags UnityEngine::InputSystem::__InputDevice__DeviceFlags::HasStateCallbacks{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags UnityEngine::InputSystem::__InputDevice__DeviceFlags::HasControlsWithDefaultState{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags UnityEngine::InputSystem::__InputDevice__DeviceFlags::HasDontResetControls{ static_cast<int32_t>(0x400) };
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags UnityEngine::InputSystem::__InputDevice__DeviceFlags::HasEventMerger{ static_cast<int32_t>(0x2000) };
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags UnityEngine::InputSystem::__InputDevice__DeviceFlags::HasEventPreProcessor{ static_cast<int32_t>(0x4000) };
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags UnityEngine::InputSystem::__InputDevice__DeviceFlags::Remote{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags UnityEngine::InputSystem::__InputDevice__DeviceFlags::Native{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags UnityEngine::InputSystem::__InputDevice__DeviceFlags::DisabledInFrontend{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags UnityEngine::InputSystem::__InputDevice__DeviceFlags::DisabledInRuntime{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags UnityEngine::InputSystem::__InputDevice__DeviceFlags::DisabledWhileInBackground{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags UnityEngine::InputSystem::__InputDevice__DeviceFlags::DisabledStateHasBeenQueriedFromRuntime{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags UnityEngine::InputSystem::__InputDevice__DeviceFlags::CanRunInBackground{ static_cast<int32_t>(0x800) };
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags UnityEngine::InputSystem::__InputDevice__DeviceFlags::CanRunInBackgroundHasBeenQueried{ static_cast<int32_t>(0x1000) };
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_description
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceDescription (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_description)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a6cb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "get_description", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_enabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a6cb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "get_enabled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_canRunInBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_canRunInBackground)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2a6cc38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "get_canRunInBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_added
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_added)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a61f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "get_added",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_remote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_remote)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6ccf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "get_remote",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_native
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_native)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6ccfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "get_native",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_updateBeforeRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_updateBeforeRender)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6cd08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "get_updateBeforeRender", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_deviceId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_deviceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6cd14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "get_deviceId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_lastUpdateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_lastUpdateTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a6cd1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "get_lastUpdateTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_wasUpdatedThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_wasUpdatedThisFrame)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a6cd70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "get_wasUpdatedThisFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_allControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> (
    ::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_allControls)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a6cdc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "get_allControls", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_valueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_valueType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a6ce28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_valueSizeInBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_valueSizeInBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6ce94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_all
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> (*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_all)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2a6cea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "get_all",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a6cb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.ReadValueFromBufferAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputDevice::*)(::cordl_internals::Ptr<void>, int32_t)>(
    &::UnityEngine::InputSystem::InputDevice::ReadValueFromBufferAsObject)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a6ceec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.ReadValueFromStateAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputDevice::*)(::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::InputDevice::ReadValueFromStateAsObject)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2a6cf2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.ReadValueFromStateIntoBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(
    ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<void>, int32_t)>(&::UnityEngine::InputSystem::InputDevice::ReadValueFromStateIntoBuffer)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2a6cff4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.CompareValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)(::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::InputDevice::CompareValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2a6d178;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.NotifyConfigurationChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::NotifyConfigurationChanged)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a6d22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "NotifyConfigurationChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.MakeCurrent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::MakeCurrent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a6c924;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.OnAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::OnAdded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a6d2a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.OnRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::OnRemoved)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a6d2ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.OnConfigurationChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::OnConfigurationChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a6d2b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.ExecuteCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::InputSystem::InputDevice::*)(
    ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>)>(&::UnityEngine::InputSystem::InputDevice::ExecuteCommand)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2a6d2b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.QueryEnabledStateFromRuntime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::QueryEnabledStateFromRuntime)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a6cb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "QueryEnabledStateFromRuntime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_disabledInFrontend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_disabledInFrontend)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6d38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "get_disabledInFrontend", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_disabledInFrontend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(
    &::UnityEngine::InputSystem::InputDevice::set_disabledInFrontend)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a6d398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_disabledInFrontend",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_disabledInRuntime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_disabledInRuntime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6d3b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "get_disabledInRuntime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_disabledInRuntime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(
    &::UnityEngine::InputSystem::InputDevice::set_disabledInRuntime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a6d3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_disabledInRuntime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_disabledWhileInBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_disabledWhileInBackground)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6d3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "get_disabledWhileInBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_disabledWhileInBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(
    &::UnityEngine::InputSystem::InputDevice::set_disabledWhileInBackground)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a6d3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_disabledWhileInBackground",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.EncodeStateOffsetToControlMapEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t, uint32_t, uint32_t)>(
    &::UnityEngine::InputSystem::InputDevice::EncodeStateOffsetToControlMapEntry)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6d404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "EncodeStateOffsetToControlMapEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.DecodeStateOffsetToControlMapEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<uint32_t>)>(
    &::UnityEngine::InputSystem::InputDevice::DecodeStateOffsetToControlMapEntry)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a68914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "DecodeStateOffsetToControlMapEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_hasControlsWithDefaultState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_hasControlsWithDefaultState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6d410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "get_hasControlsWithDefaultState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_hasControlsWithDefaultState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(
    &::UnityEngine::InputSystem::InputDevice::set_hasControlsWithDefaultState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a68bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_hasControlsWithDefaultState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_hasDontResetControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_hasDontResetControls)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6d41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "get_hasDontResetControls", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_hasDontResetControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(
    &::UnityEngine::InputSystem::InputDevice::set_hasDontResetControls)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a68cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_hasDontResetControls",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_hasStateCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_hasStateCallbacks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a67178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "get_hasStateCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_hasStateCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(
    &::UnityEngine::InputSystem::InputDevice::set_hasStateCallbacks)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a6d428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_hasStateCallbacks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_hasEventMerger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_hasEventMerger)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6d444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "get_hasEventMerger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_hasEventMerger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(
    &::UnityEngine::InputSystem::InputDevice::set_hasEventMerger)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a6d450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_hasEventMerger",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_hasEventPreProcessor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_hasEventPreProcessor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6d46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "get_hasEventPreProcessor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_hasEventPreProcessor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(
    &::UnityEngine::InputSystem::InputDevice::set_hasEventPreProcessor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a6d478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_hasEventPreProcessor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.AddDeviceUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::InputDevice::AddDeviceUsage)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2a6d494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "AddDeviceUsage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.RemoveDeviceUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::InputDevice::RemoveDeviceUsage)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2a6d548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "RemoveDeviceUsage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.ClearDeviceUsages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::ClearDeviceUsages)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a6d624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "ClearDeviceUsages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.RequestSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::RequestSync)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a61f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "RequestSync",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.RequestReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::RequestReset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a6207c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "RequestReset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.ExecuteEnableCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::ExecuteEnableCommand)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a6d684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "ExecuteEnableCommand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.ExecuteDisableCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::ExecuteDisableCommand)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a6d6f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                               "ExecuteDisableCommand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.NotifyAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::NotifyAdded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a6d75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "NotifyAdded",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.NotifyRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::NotifyRemoved)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a6d76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "NotifyRemoved",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_DeviceFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceFlags;
}
constexpr ::UnityEngine::InputSystem::__InputDevice__DeviceFlags const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_DeviceFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceFlags;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_DeviceFlags(::UnityEngine::InputSystem::__InputDevice__DeviceFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceFlags = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_DeviceId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceId;
}
constexpr int32_t const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_DeviceId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceId;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_DeviceId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceId = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_ParticipantId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParticipantId;
}
constexpr int32_t const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_ParticipantId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParticipantId;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_ParticipantId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParticipantId = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_DeviceIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_DeviceIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceIndex;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_DeviceIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceIndex = value;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_Description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Description;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_Description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Description;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_Description(::UnityEngine::InputSystem::Layouts::InputDeviceDescription value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Description = value;
}
constexpr double_t& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_LastUpdateTimeInternal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastUpdateTimeInternal;
}
constexpr double_t const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_LastUpdateTimeInternal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastUpdateTimeInternal;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_LastUpdateTimeInternal(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastUpdateTimeInternal = value;
}
constexpr uint32_t& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_CurrentUpdateStepCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentUpdateStepCount;
}
constexpr uint32_t const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_CurrentUpdateStepCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentUpdateStepCount;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_CurrentUpdateStepCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentUpdateStepCount = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>&
UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_AliasesForEachControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AliasesForEachControl;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> const&
UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_AliasesForEachControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AliasesForEachControl;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_AliasesForEachControl(
    ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AliasesForEachControl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>&
UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_UsagesForEachControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsagesForEachControl;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> const&
UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_UsagesForEachControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsagesForEachControl;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_UsagesForEachControl(
    ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UsagesForEachControl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_UsageToControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsageToControl;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> const&
UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_UsageToControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsageToControl;
}
constexpr void
UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_UsageToControl(::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UsageToControl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>&
UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_ChildrenForEachControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildrenForEachControl;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> const&
UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_ChildrenForEachControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildrenForEachControl;
}
constexpr void
UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_ChildrenForEachControl(::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ChildrenForEachControl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_StateOffsetToControlMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateOffsetToControlMap;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_StateOffsetToControlMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateOffsetToControlMap;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_StateOffsetToControlMap(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StateOffsetToControlMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceDescription UnityEngine::InputSystem::InputDevice::get_description() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "get_description",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceDescription, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "get_enabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_canRunInBackground() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "get_canRunInBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_added() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "get_added",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_remote() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "get_remote",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_native() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "get_native",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_updateBeforeRender() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "get_updateBeforeRender", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputDevice::get_deviceId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "get_deviceId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::InputDevice::get_lastUpdateTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "get_lastUpdateTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_wasUpdatedThisFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "get_wasUpdatedThisFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> UnityEngine::InputSystem::InputDevice::get_allControls() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "get_allControls",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>, false>(this, ___internal_method);
}
inline ::System::Type* UnityEngine::InputSystem::InputDevice::get_valueType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputDevice::get_valueSizeInBytes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::InputDevice::get_all() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "get_all",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputDevice::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::InputDevice*>());
}
inline void UnityEngine::InputSystem::InputDevice::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputDevice::ReadValueFromBufferAsObject(::cordl_internals::Ptr<void> buffer, int32_t bufferSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, buffer, bufferSize);
}
inline ::System::Object* UnityEngine::InputSystem::InputDevice::ReadValueFromStateAsObject(::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::InputDevice::ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void> statePtr, ::cordl_internals::Ptr<void> bufferPtr, int32_t bufferSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statePtr, bufferPtr, bufferSize);
}
inline bool UnityEngine::InputSystem::InputDevice::CompareValue(::cordl_internals::Ptr<void> firstStatePtr, ::cordl_internals::Ptr<void> secondStatePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, firstStatePtr, secondStatePtr);
}
inline void UnityEngine::InputSystem::InputDevice::NotifyConfigurationChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "NotifyConfigurationChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::MakeCurrent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::OnAdded() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::OnRemoved() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::OnConfigurationChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TCommand> inline int64_t UnityEngine::InputSystem::InputDevice::ExecuteCommand(ByRef<TCommand> command) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "ExecuteCommand",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCommand>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TCommand>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCommand>::get() }));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, command);
}
inline int64_t UnityEngine::InputSystem::InputDevice::ExecuteCommand(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandPtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, commandPtr);
}
inline bool UnityEngine::InputSystem::InputDevice::QueryEnabledStateFromRuntime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "QueryEnabledStateFromRuntime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_disabledInFrontend() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "get_disabledInFrontend", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_disabledInFrontend(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_disabledInFrontend",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputDevice::get_disabledInRuntime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "get_disabledInRuntime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_disabledInRuntime(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_disabledInRuntime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputDevice::get_disabledWhileInBackground() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "get_disabledWhileInBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_disabledWhileInBackground(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_disabledWhileInBackground",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::InputDevice::EncodeStateOffsetToControlMapEntry(uint32_t controlIndex, uint32_t stateOffsetInBits, uint32_t stateSizeInBits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "EncodeStateOffsetToControlMapEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, controlIndex, stateOffsetInBits, stateSizeInBits);
}
inline void UnityEngine::InputSystem::InputDevice::DecodeStateOffsetToControlMapEntry(uint32_t entry, ByRef<uint32_t> controlIndex, ByRef<uint32_t> stateOffset, ByRef<uint32_t> stateSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "DecodeStateOffsetToControlMapEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, entry, controlIndex, stateOffset, stateSize);
}
inline bool UnityEngine::InputSystem::InputDevice::get_hasControlsWithDefaultState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "get_hasControlsWithDefaultState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_hasControlsWithDefaultState(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_hasControlsWithDefaultState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputDevice::get_hasDontResetControls() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "get_hasDontResetControls", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_hasDontResetControls(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_hasDontResetControls",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputDevice::get_hasStateCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "get_hasStateCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_hasStateCallbacks(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_hasStateCallbacks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputDevice::get_hasEventMerger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "get_hasEventMerger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_hasEventMerger(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_hasEventMerger",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputDevice::get_hasEventPreProcessor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "get_hasEventPreProcessor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_hasEventPreProcessor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "set_hasEventPreProcessor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputDevice::AddDeviceUsage(::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "AddDeviceUsage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, usage);
}
inline void UnityEngine::InputSystem::InputDevice::RemoveDeviceUsage(::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "RemoveDeviceUsage", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, usage);
}
inline void UnityEngine::InputSystem::InputDevice::ClearDeviceUsages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "ClearDeviceUsages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::RequestSync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "RequestSync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::RequestReset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "RequestReset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::ExecuteEnableCommand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "ExecuteEnableCommand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::ExecuteDisableCommand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                             "ExecuteDisableCommand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::NotifyAdded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "NotifyAdded",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::NotifyRemoved() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "NotifyRemoved",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param layoutName: ::StringW (default: nullptr)
/// @param layoutVariants: ::StringW (default: nullptr)
/// @param deviceDescription: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription (default: {})
/// @param noPrecompiledLayouts: bool (default: false)
template <typename TDevice>
inline TDevice UnityEngine::InputSystem::InputDevice::Build(::StringW layoutName, ::StringW layoutVariants, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription,
                                                            bool noPrecompiledLayouts) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputDevice*>::get(), "Build",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() }));
  return ::cordl_internals::RunMethodRethrow<TDevice, false>(nullptr, ___internal_method, layoutName, layoutVariants, deviceDescription, noPrecompiledLayouts);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputDevice::InputDevice() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
