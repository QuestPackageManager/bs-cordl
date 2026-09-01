#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\InputDevice.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags::InputDevice_DeviceFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags::InputDevice_DeviceFlags() {}
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags UnityEngine::InputSystem::InputDevice_DeviceFlags::UpdateBeforeRender{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags UnityEngine::InputSystem::InputDevice_DeviceFlags::HasStateCallbacks{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags UnityEngine::InputSystem::InputDevice_DeviceFlags::HasControlsWithDefaultState{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags UnityEngine::InputSystem::InputDevice_DeviceFlags::HasDontResetControls{ static_cast<int32_t>(0x400) };
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags UnityEngine::InputSystem::InputDevice_DeviceFlags::HasEventMerger{ static_cast<int32_t>(0x2000) };
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags UnityEngine::InputSystem::InputDevice_DeviceFlags::HasEventPreProcessor{ static_cast<int32_t>(0x4000) };
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags UnityEngine::InputSystem::InputDevice_DeviceFlags::Remote{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags UnityEngine::InputSystem::InputDevice_DeviceFlags::Native{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags UnityEngine::InputSystem::InputDevice_DeviceFlags::DisabledInFrontend{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags UnityEngine::InputSystem::InputDevice_DeviceFlags::DisabledInRuntime{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags UnityEngine::InputSystem::InputDevice_DeviceFlags::DisabledWhileInBackground{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags UnityEngine::InputSystem::InputDevice_DeviceFlags::DisabledStateHasBeenQueriedFromRuntime{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags UnityEngine::InputSystem::InputDevice_DeviceFlags::CanRunInBackground{ static_cast<int32_t>(0x800) };
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags UnityEngine::InputSystem::InputDevice_DeviceFlags::CanRunInBackgroundHasBeenQueried{ static_cast<int32_t>(0x1000) };
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode::*)(uint16_t)>(
    &::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6521bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>(), { ".ctor", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputDevice_ControlBitRangeNode::_ctor(uint16_t endOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>(), { ".ctor", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, endOffset);
}
// Ctor Parameters [CppParam { name: "endBitOffset", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftChildIndex", ty: "int16_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "controlStartIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlCount", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode::InputDevice_ControlBitRangeNode(uint16_t endBitOffset, int16_t leftChildIndex, uint16_t controlStartIndex,
                                                                                                       uint8_t controlCount) noexcept {
  this->endBitOffset = endBitOffset;
  this->leftChildIndex = leftChildIndex;
  this->controlStartIndex = controlStartIndex;
  this->controlCount = controlCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode::InputDevice_ControlBitRangeNode() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceDescription (::UnityEngine::InputSystem::InputDevice::*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_description)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x651f958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_description", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_enabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x651f974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_canRunInBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_canRunInBackground)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x651fa38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_canRunInBackground", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_canDeviceRunInBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_canDeviceRunInBackground)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x651fa3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_canDeviceRunInBackground", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_added
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_added)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x650ef88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_added", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_remote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_remote)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x651faf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_remote", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_native)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x651fafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_native", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_updateBeforeRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_updateBeforeRender)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x651fb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_updateBeforeRender", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_deviceId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_deviceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x651fb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_deviceId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_lastUpdateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_lastUpdateTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x651fb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_lastUpdateTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_wasUpdatedThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_wasUpdatedThisFrame)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x651fb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_wasUpdatedThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_allControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> (
    ::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_allControls)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x651baa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_allControls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_valueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_valueType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x651fbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_valueSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_valueSizeInBytes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x651fc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_all
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> (*)()>(
    &::UnityEngine::InputSystem::InputDevice::get_all)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x651fc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_all", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x651f938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.ReadValueFromBufferAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputDevice::*)(void*, int32_t)>(
    &::UnityEngine::InputSystem::InputDevice::ReadValueFromBufferAsObject)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x651fcdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.ReadValueFromStateAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputDevice::*)(void*)>(&::UnityEngine::InputSystem::InputDevice::ReadValueFromStateAsObject)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x651fd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.ReadValueFromStateIntoBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(void*, void*, int32_t)>(
    &::UnityEngine::InputSystem::InputDevice::ReadValueFromStateIntoBuffer)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x651fe40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.CompareValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)(void*, void*)>(&::UnityEngine::InputSystem::InputDevice::CompareValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6520010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.NotifyConfigurationChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::NotifyConfigurationChanged)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6520130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "NotifyConfigurationChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.MakeCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::MakeCurrent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x651f720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.OnAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::OnAdded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65201a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.OnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::OnRemoved)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65201a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.OnConfigurationChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::OnConfigurationChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65201ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.ExecuteCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::InputSystem::InputDevice::*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*)>(
    &::UnityEngine::InputSystem::InputDevice::ExecuteCommand)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x65201b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.QueryEnabledStateFromRuntime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::QueryEnabledStateFromRuntime)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x651f990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "QueryEnabledStateFromRuntime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_disabledInFrontend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_disabledInFrontend)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6520290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_disabledInFrontend", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_disabledInFrontend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(&::UnityEngine::InputSystem::InputDevice::set_disabledInFrontend)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x652029c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_disabledInFrontend", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_disabledInRuntime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_disabledInRuntime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65202bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_disabledInRuntime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_disabledInRuntime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(&::UnityEngine::InputSystem::InputDevice::set_disabledInRuntime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65202c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_disabledInRuntime", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_disabledWhileInBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_disabledWhileInBackground)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65202e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_disabledWhileInBackground", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_disabledWhileInBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(&::UnityEngine::InputSystem::InputDevice::set_disabledWhileInBackground)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65202f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_disabledWhileInBackground", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.EncodeStateOffsetToControlMapEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t, uint32_t)>(&::UnityEngine::InputSystem::InputDevice::EncodeStateOffsetToControlMapEntry)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6520314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                             { "EncodeStateOffsetToControlMapEntry", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.DecodeStateOffsetToControlMapEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(
    &::UnityEngine::InputSystem::InputDevice::DecodeStateOffsetToControlMapEntry)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x651b048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                { "DecodeStateOffsetToControlMapEntry",
                                                  {},
                                                  { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_hasControlsWithDefaultState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_hasControlsWithDefaultState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6520320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_hasControlsWithDefaultState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_hasControlsWithDefaultState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(&::UnityEngine::InputSystem::InputDevice::set_hasControlsWithDefaultState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x651b2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_hasControlsWithDefaultState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_hasDontResetControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_hasDontResetControls)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x652032c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_hasDontResetControls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_hasDontResetControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(&::UnityEngine::InputSystem::InputDevice::set_hasDontResetControls)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x651b3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_hasDontResetControls", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_hasStateCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_hasStateCallbacks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x651992c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_hasStateCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_hasStateCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(&::UnityEngine::InputSystem::InputDevice::set_hasStateCallbacks)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6520338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_hasStateCallbacks", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_hasEventMerger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_hasEventMerger)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6520358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_hasEventMerger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_hasEventMerger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(&::UnityEngine::InputSystem::InputDevice::set_hasEventMerger)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6520364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_hasEventMerger", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.get_hasEventPreProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::get_hasEventPreProcessor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6520384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_hasEventPreProcessor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.set_hasEventPreProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(bool)>(&::UnityEngine::InputSystem::InputDevice::set_hasEventPreProcessor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6520390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_hasEventPreProcessor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.AddDeviceUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::InputDevice::AddDeviceUsage)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x65203b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                                                           { "AddDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.RemoveDeviceUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::InputDevice::RemoveDeviceUsage)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6520468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                                                           { "RemoveDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.ClearDeviceUsages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::ClearDeviceUsages)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x652054c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "ClearDeviceUsages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.RequestSync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::RequestSync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x65134c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "RequestSync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.RequestReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::RequestReset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6513624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "RequestReset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.ExecuteEnableCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::ExecuteEnableCommand)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x65205ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "ExecuteEnableCommand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.ExecuteDisableCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::ExecuteDisableCommand)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6520634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "ExecuteDisableCommand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.NotifyAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::NotifyAdded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65206b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "NotifyAdded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.NotifyRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::NotifyRemoved)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65206c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "NotifyRemoved", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.WriteChangedControlStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(uint8_t*, void*, uint32_t, uint32_t)>(
    &::UnityEngine::InputSystem::InputDevice::WriteChangedControlStates)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x65206d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                { "WriteChangedControlStates", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.WritePartialChangedControlStatesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(uint32_t, uint32_t, ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, uint32_t)>(
    &::UnityEngine::InputSystem::InputDevice::WritePartialChangedControlStatesInternal)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x6520834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                             { "WritePartialChangedControlStatesInternal",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>(),
                                                                 ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.DumpControlBitRangeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(int32_t, ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, uint32_t, uint32_t,
                                                                                                         ::System::Collections::Generic::List_1<::StringW>*)>(
    &::UnityEngine::InputSystem::InputDevice::DumpControlBitRangeNode)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x6520f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                             { "DumpControlBitRangeNode",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>(), ::i2c::type_of<uint32_t>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.DumpControlTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(
    ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, uint32_t, ::System::Collections::Generic::List_1<::StringW>*)>(&::UnityEngine::InputSystem::InputDevice::DumpControlTree)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6521338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                                                           { "DumpControlTree",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>(),
                                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.DumpControlTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputDevice::*)()>(&::UnityEngine::InputSystem::InputDevice::DumpControlTree)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x652145c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "DumpControlTree", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.WriteChangedControlStatesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputDevice::*)(void*, uint8_t*, ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, uint32_t)>(
    &::UnityEngine::InputSystem::InputDevice::WriteChangedControlStatesInternal)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x6520b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                            { "WriteChangedControlStatesInternal",
                              {},
                              { ::i2c::type_of<void*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputDevice.HasDataChangedInRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, void*, uint32_t, uint32_t)>(&::UnityEngine::InputSystem::InputDevice::HasDataChangedInRange)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x652152c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                { "HasDataChangedInRange", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_DeviceFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceFlags;
}
constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_DeviceFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceFlags;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_DeviceFlags(::UnityEngine::InputSystem::InputDevice_DeviceFlags value) {
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
constexpr uint32_t& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_CurrentProcessedEventBytesOnUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentProcessedEventBytesOnUpdate;
}
constexpr uint32_t const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_CurrentProcessedEventBytesOnUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentProcessedEventBytesOnUpdate;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_CurrentProcessedEventBytesOnUpdate(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentProcessedEventBytesOnUpdate = value;
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
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_AliasesForEachControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AliasesForEachControl;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_AliasesForEachControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AliasesForEachControl;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_AliasesForEachControl(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AliasesForEachControl = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_UsagesForEachControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsagesForEachControl;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_UsagesForEachControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsagesForEachControl;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_UsagesForEachControl(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UsagesForEachControl = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*>& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_UsageToControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsageToControl;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*> const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_UsageToControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsageToControl;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_UsageToControl(::ArrayW<::UnityEngine::InputSystem::InputControl*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UsageToControl = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*>& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_ChildrenForEachControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildrenForEachControl;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*> const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_ChildrenForEachControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildrenForEachControl;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_ChildrenForEachControl(::ArrayW<::UnityEngine::InputSystem::InputControl*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChildrenForEachControl = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_UpdatedButtons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdatedButtons;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_UpdatedButtons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdatedButtons;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_UpdatedButtons(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdatedButtons = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Controls::ButtonControl*>*&
UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_ButtonControlsCheckingPressState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ButtonControlsCheckingPressState;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Controls::ButtonControl*>* const&
UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_ButtonControlsCheckingPressState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ButtonControlsCheckingPressState;
}
constexpr void
UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_ButtonControlsCheckingPressState(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Controls::ButtonControl*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ButtonControlsCheckingPressState = value;
}
constexpr bool& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_UseCachePathForButtonPresses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseCachePathForButtonPresses;
}
constexpr bool const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_UseCachePathForButtonPresses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseCachePathForButtonPresses;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_UseCachePathForButtonPresses(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseCachePathForButtonPresses = value;
}
constexpr ::ArrayW<uint32_t>& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_StateOffsetToControlMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateOffsetToControlMap;
}
constexpr ::ArrayW<uint32_t> const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_StateOffsetToControlMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateOffsetToControlMap;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_StateOffsetToControlMap(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StateOffsetToControlMap = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_ControlTreeNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlTreeNodes;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode> const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_ControlTreeNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlTreeNodes;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_ControlTreeNodes(::ArrayW<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ControlTreeNodes = value;
}
constexpr ::ArrayW<uint16_t>& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_ControlTreeIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlTreeIndices;
}
constexpr ::ArrayW<uint16_t> const& UnityEngine::InputSystem::InputDevice::__cordl_internal_get_m_ControlTreeIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlTreeIndices;
}
constexpr void UnityEngine::InputSystem::InputDevice::__cordl_internal_set_m_ControlTreeIndices(::ArrayW<uint16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ControlTreeIndices = value;
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceDescription UnityEngine::InputSystem::InputDevice::get_description() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_description", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_canRunInBackground() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_canRunInBackground", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_canDeviceRunInBackground() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_canDeviceRunInBackground", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_added() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_added", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_remote() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_remote", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_native() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_native", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_updateBeforeRender() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_updateBeforeRender", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputDevice::get_deviceId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_deviceId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::InputDevice::get_lastUpdateTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_lastUpdateTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_wasUpdatedThisFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_wasUpdatedThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> UnityEngine::InputSystem::InputDevice::get_allControls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_allControls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>>(this, ___internal_method);
}
inline ::System::Type* UnityEngine::InputSystem::InputDevice::get_valueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputDevice::get_valueSizeInBytes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::InputDevice::get_all() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_all", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputDevice::ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, buffer, bufferSize);
}
inline ::System::Object* UnityEngine::InputSystem::InputDevice::ReadValueFromStateAsObject(void* statePtr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::InputDevice::ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statePtr, bufferPtr, bufferSize);
}
inline bool UnityEngine::InputSystem::InputDevice::CompareValue(void* firstStatePtr, void* secondStatePtr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, firstStatePtr, secondStatePtr);
}
inline void UnityEngine::InputSystem::InputDevice::NotifyConfigurationChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "NotifyConfigurationChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::MakeCurrent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::OnAdded() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::OnRemoved() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::OnConfigurationChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TCommand> inline int64_t UnityEngine::InputSystem::InputDevice::ExecuteCommand(::by_ref<TCommand> command) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "ExecuteCommand", { ::i2c::class_of<TCommand>() }, { ::i2c::type_of<::by_ref<TCommand>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TCommand>() })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, command);
}
inline int64_t UnityEngine::InputSystem::InputDevice::ExecuteCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* commandPtr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, commandPtr);
}
inline bool UnityEngine::InputSystem::InputDevice::QueryEnabledStateFromRuntime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "QueryEnabledStateFromRuntime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::get_disabledInFrontend() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_disabledInFrontend", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_disabledInFrontend(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_disabledInFrontend", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputDevice::get_disabledInRuntime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_disabledInRuntime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_disabledInRuntime(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_disabledInRuntime", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputDevice::get_disabledWhileInBackground() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_disabledWhileInBackground", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_disabledWhileInBackground(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_disabledWhileInBackground", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::InputDevice::EncodeStateOffsetToControlMapEntry(uint32_t controlIndex, uint32_t stateOffsetInBits, uint32_t stateSizeInBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                           { "EncodeStateOffsetToControlMapEntry", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, controlIndex, stateOffsetInBits, stateSizeInBits);
}
inline void UnityEngine::InputSystem::InputDevice::DecodeStateOffsetToControlMapEntry(uint32_t entry, ::by_ref<uint32_t> controlIndex, ::by_ref<uint32_t> stateOffset, ::by_ref<uint32_t> stateSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                              { "DecodeStateOffsetToControlMapEntry",
                                                {},
                                                { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entry, controlIndex, stateOffset, stateSize);
}
inline bool UnityEngine::InputSystem::InputDevice::get_hasControlsWithDefaultState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_hasControlsWithDefaultState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_hasControlsWithDefaultState(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_hasControlsWithDefaultState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputDevice::get_hasDontResetControls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_hasDontResetControls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_hasDontResetControls(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_hasDontResetControls", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputDevice::get_hasStateCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_hasStateCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_hasStateCallbacks(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_hasStateCallbacks", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputDevice::get_hasEventMerger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_hasEventMerger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_hasEventMerger(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_hasEventMerger", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputDevice::get_hasEventPreProcessor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "get_hasEventPreProcessor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::set_hasEventPreProcessor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "set_hasEventPreProcessor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputDevice::AddDeviceUsage(::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                                                         { "AddDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usage);
}
inline void UnityEngine::InputSystem::InputDevice::RemoveDeviceUsage(::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                                                         { "RemoveDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usage);
}
inline void UnityEngine::InputSystem::InputDevice::ClearDeviceUsages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "ClearDeviceUsages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::RequestSync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "RequestSync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::RequestReset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "RequestReset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::ExecuteEnableCommand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "ExecuteEnableCommand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputDevice::ExecuteDisableCommand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "ExecuteDisableCommand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::NotifyAdded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "NotifyAdded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::NotifyRemoved() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "NotifyRemoved", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TDevice>
inline TDevice UnityEngine::InputSystem::InputDevice::Build(::StringW layoutName, ::StringW layoutVariants, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription,
                                                            bool noPrecompiledLayouts) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                          { "Build",
                            { ::i2c::class_of<TDevice>() },
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDevice>() })));
  return ::cordl_internals::RunMethodRethrow<TDevice>(nullptr, ___internal_method, layoutName, layoutVariants, deviceDescription, noPrecompiledLayouts);
}
inline void UnityEngine::InputSystem::InputDevice::WriteChangedControlStates(uint8_t* deviceStateBuffer, void* statePtr, uint32_t stateSizeInBytes, uint32_t stateOffsetInDevice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                              { "WriteChangedControlStates", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceStateBuffer, statePtr, stateSizeInBytes, stateOffsetInDevice);
}
inline void UnityEngine::InputSystem::InputDevice::WritePartialChangedControlStatesInternal(uint32_t stateSizeInBits, uint32_t stateOffsetInDeviceInBits,
                                                                                            ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode parentNode, uint32_t startOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                          { "WritePartialChangedControlStatesInternal",
                            {},
                            { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateSizeInBits, stateOffsetInDeviceInBits, parentNode, startOffset);
}
inline void UnityEngine::InputSystem::InputDevice::DumpControlBitRangeNode(int32_t nodeIndex, ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode node, uint32_t startOffset,
                                                                           uint32_t sizeInBits, ::System::Collections::Generic::List_1<::StringW>* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                           { "DumpControlBitRangeNode",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>(), ::i2c::type_of<uint32_t>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeIndex, node, startOffset, sizeInBits, output);
}
inline void UnityEngine::InputSystem::InputDevice::DumpControlTree(::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode parentNode, uint32_t startOffset,
                                                                   ::System::Collections::Generic::List_1<::StringW>* output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                                                         { "DumpControlTree",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>(), ::i2c::type_of<uint32_t>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentNode, startOffset, output);
}
inline ::StringW UnityEngine::InputSystem::InputDevice::DumpControlTree() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(), { "DumpControlTree", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputDevice::WriteChangedControlStatesInternal(void* statePtr, uint8_t* deviceStatePtr, ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode parentNode,
                                                                                     uint32_t startOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                          { "WriteChangedControlStatesInternal",
                            {},
                            { ::i2c::type_of<void*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statePtr, deviceStatePtr, parentNode, startOffset);
}
inline bool UnityEngine::InputSystem::InputDevice::HasDataChangedInRange(uint8_t* deviceStatePtr, void* statePtr, uint32_t startOffset, uint32_t sizeInBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputDevice*>(),
                                              { "HasDataChangedInRange", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceStatePtr, statePtr, startOffset, sizeInBits);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputDevice::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputDevice*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputDevice::InputDevice() {}
