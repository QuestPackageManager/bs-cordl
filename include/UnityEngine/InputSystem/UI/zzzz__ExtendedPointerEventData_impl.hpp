#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\UI\ExtendedPointerEventData.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__ExtendedPointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchControl_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Pen_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::EventSystems::EventSystem*)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659224c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.get_control
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6592254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "get_control", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.set_control
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659225c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                           { "set_control", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.get_device
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6592264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "get_device", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.set_device
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659226c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                           { "set_device", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.get_touchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_touchId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6592274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "get_touchId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.set_touchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(int32_t)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_touchId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659227c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "set_touchId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.get_pointerType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::UI::UIPointerType (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_pointerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6592284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "get_pointerType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.set_pointerType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::InputSystem::UI::UIPointerType)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_pointerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659228c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                           { "set_pointerType", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::UIPointerType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.get_uiToolkitPointerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_uiToolkitPointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6592294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "get_uiToolkitPointerId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.set_uiToolkitPointerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(int32_t)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_uiToolkitPointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659229c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "set_uiToolkitPointerId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.get_trackedDevicePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_trackedDevicePosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65922a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "get_trackedDevicePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.set_trackedDevicePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_trackedDevicePosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65922b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                           { "set_trackedDevicePosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.get_trackedDeviceOrientation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_trackedDeviceOrientation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65922c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "get_trackedDeviceOrientation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.set_trackedDeviceOrientation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::Quaternion)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_trackedDeviceOrientation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65922d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                           { "set_trackedDeviceOrientation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::ToString)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x65922ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.MakePointerIdForTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::UI::ExtendedPointerEventData::MakePointerIdForTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65928bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                           { "MakePointerIdForTouch", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.TouchIdFromPointerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::InputSystem::UI::ExtendedPointerEventData::TouchIdFromPointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65928c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "TouchIdFromPointerId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.ReadDeviceState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::ReadDeviceState)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x65928cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "ReadDeviceState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.GetPenPointerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::InputSystem::Pen*)>(&::UnityEngine::InputSystem::UI::ExtendedPointerEventData::GetPenPointerId)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6592bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                           { "GetPenPointerId", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Pen*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.GetTouchPointerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::InputSystem::Controls::TouchControl*)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::GetTouchPointerId)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6592dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                           { "GetTouchPointerId", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::TouchControl*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::InputControl*& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_get__control_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____control_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::InputControl* const& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_get__control_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____control_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_set__control_k__BackingField(::UnityEngine::InputSystem::InputControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____control_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::InputDevice*& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_get__device_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____device_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::InputDevice* const& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_get__device_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____device_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_set__device_k__BackingField(::UnityEngine::InputSystem::InputDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____device_k__BackingField = value;
}
constexpr int32_t& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_get__touchId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchId_k__BackingField;
}
constexpr int32_t const& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_get__touchId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchId_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_set__touchId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____touchId_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::UI::UIPointerType& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_get__pointerType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerType_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::UI::UIPointerType const& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_get__pointerType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerType_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_set__pointerType_k__BackingField(::UnityEngine::InputSystem::UI::UIPointerType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerType_k__BackingField = value;
}
constexpr int32_t& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_get__uiToolkitPointerId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiToolkitPointerId_k__BackingField;
}
constexpr int32_t const& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_get__uiToolkitPointerId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiToolkitPointerId_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_set__uiToolkitPointerId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uiToolkitPointerId_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_get__trackedDevicePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackedDevicePosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_get__trackedDevicePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackedDevicePosition_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_set__trackedDevicePosition_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackedDevicePosition_k__BackingField = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_get__trackedDeviceOrientation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackedDeviceOrientation_k__BackingField;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_get__trackedDeviceOrientation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackedDeviceOrientation_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::ExtendedPointerEventData::__cordl_internal_set__trackedDeviceOrientation_k__BackingField(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackedDeviceOrientation_k__BackingField = value;
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventSystem);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_control() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "get_control", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_control(::UnityEngine::InputSystem::InputControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                         { "set_control", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_device() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "get_device", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_device(::UnityEngine::InputSystem::InputDevice* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                         { "set_device", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_touchId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "get_touchId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_touchId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "set_touchId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::UI::UIPointerType UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_pointerType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "get_pointerType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::UI::UIPointerType>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_pointerType(::UnityEngine::InputSystem::UI::UIPointerType value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                         { "set_pointerType", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::UIPointerType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_uiToolkitPointerId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "get_uiToolkitPointerId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_uiToolkitPointerId(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "set_uiToolkitPointerId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_trackedDevicePosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "get_trackedDevicePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_trackedDevicePosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                         { "set_trackedDevicePosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_trackedDeviceOrientation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "get_trackedDeviceOrientation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_trackedDeviceOrientation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                         { "set_trackedDeviceOrientation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::UI::ExtendedPointerEventData::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::UI::ExtendedPointerEventData::MakePointerIdForTouch(int32_t deviceId, int32_t touchId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                         { "MakePointerIdForTouch", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, deviceId, touchId);
}
inline int32_t UnityEngine::InputSystem::UI::ExtendedPointerEventData::TouchIdFromPointerId(int32_t pointerId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "TouchIdFromPointerId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pointerId);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::ReadDeviceState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), { "ReadDeviceState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::UI::ExtendedPointerEventData::GetPenPointerId(::UnityEngine::InputSystem::Pen* pen) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                         { "GetPenPointerId", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Pen*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pen);
}
inline int32_t UnityEngine::InputSystem::UI::ExtendedPointerEventData::GetTouchPointerId(::UnityEngine::InputSystem::Controls::TouchControl* touchControl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                                         { "GetTouchPointerId", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::TouchControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, touchControl);
}
inline ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* UnityEngine::InputSystem::UI::ExtendedPointerEventData::New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(eventSystem));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::ExtendedPointerEventData::ExtendedPointerEventData() {}
