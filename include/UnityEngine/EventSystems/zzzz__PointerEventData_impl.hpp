#pragma once
// IWYU pragma private; include "UnityEngine\EventSystems\PointerEventData.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_impl.hpp"
#include "UnityEngine/zzzz__PenStatus_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__PenStatus_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::PointerEventData_InputButton::PointerEventData_InputButton(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::PointerEventData_InputButton::PointerEventData_InputButton() {}
constexpr ::UnityEngine::EventSystems::PointerEventData_InputButton UnityEngine::EventSystems::PointerEventData_InputButton::Left{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::EventSystems::PointerEventData_InputButton UnityEngine::EventSystems::PointerEventData_InputButton::Right{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::EventSystems::PointerEventData_InputButton UnityEngine::EventSystems::PointerEventData_InputButton::Middle{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState::PointerEventData_FramePressState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState::PointerEventData_FramePressState() {}
constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState UnityEngine::EventSystems::PointerEventData_FramePressState::Pressed{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState UnityEngine::EventSystems::PointerEventData_FramePressState::Released{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState UnityEngine::EventSystems::PointerEventData_FramePressState::PressedAndReleased{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState UnityEngine::EventSystems::PointerEventData_FramePressState::NotChanged{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_pointerEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::PointerEventData::*)()>(
    &::UnityEngine::EventSystems::PointerEventData::get_pointerEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e180d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pointerEnter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_pointerEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::EventSystems::PointerEventData::set_pointerEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e180d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_pointerEnter", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_lastPress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::PointerEventData::*)()>(
    &::UnityEngine::EventSystems::PointerEventData::get_lastPress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e180e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_lastPress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_lastPress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::EventSystems::PointerEventData::set_lastPress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e180e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_lastPress", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_rawPointerPress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::PointerEventData::*)()>(
    &::UnityEngine::EventSystems::PointerEventData::get_rawPointerPress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e180f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_rawPointerPress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_rawPointerPress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::EventSystems::PointerEventData::set_rawPointerPress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e180f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_rawPointerPress", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_pointerDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::PointerEventData::*)()>(
    &::UnityEngine::EventSystems::PointerEventData::get_pointerDrag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pointerDrag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_pointerDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::EventSystems::PointerEventData::set_pointerDrag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_pointerDrag", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_pointerClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::PointerEventData::*)()>(
    &::UnityEngine::EventSystems::PointerEventData::get_pointerClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pointerClick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_pointerClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::EventSystems::PointerEventData::set_pointerClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_pointerClick", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_pointerCurrentRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::RaycastResult (::UnityEngine::EventSystems::PointerEventData::*)()>(
    &::UnityEngine::EventSystems::PointerEventData::get_pointerCurrentRaycast)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e18120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pointerCurrentRaycast", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_pointerCurrentRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::EventSystems::RaycastResult)>(
    &::UnityEngine::EventSystems::PointerEventData::set_pointerCurrentRaycast)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e18130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                                                           { "set_pointerCurrentRaycast", {}, { ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_pointerPressRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::RaycastResult (::UnityEngine::EventSystems::PointerEventData::*)()>(
    &::UnityEngine::EventSystems::PointerEventData::get_pointerPressRaycast)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e1813c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pointerPressRaycast", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_pointerPressRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::EventSystems::RaycastResult)>(
    &::UnityEngine::EventSystems::PointerEventData::set_pointerPressRaycast)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e1814c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                                                           { "set_pointerPressRaycast", {}, { ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_eligibleForClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_eligibleForClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_eligibleForClick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_eligibleForClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(bool)>(&::UnityEngine::EventSystems::PointerEventData::set_eligibleForClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_eligibleForClick", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_displayIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_displayIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(int32_t)>(&::UnityEngine::EventSystems::PointerEventData::set_displayIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_displayIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_pointerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_pointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pointerId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_pointerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(int32_t)>(&::UnityEngine::EventSystems::PointerEventData::set_pointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_pointerId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e18188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::Vector2)>(&::UnityEngine::EventSystems::PointerEventData::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e18194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_delta)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e181a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_delta", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::Vector2)>(&::UnityEngine::EventSystems::PointerEventData::set_delta)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e181ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_delta", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_pressPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::PointerEventData::*)()>(
    &::UnityEngine::EventSystems::PointerEventData::get_pressPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e181b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pressPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_pressPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::EventSystems::PointerEventData::set_pressPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e181c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_pressPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_worldPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::EventSystems::PointerEventData::*)()>(
    &::UnityEngine::EventSystems::PointerEventData::get_worldPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e181d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_worldPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_worldPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::EventSystems::PointerEventData::set_worldPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e181e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_worldPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_worldNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_worldNormal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e181f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_worldNormal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_worldNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::EventSystems::PointerEventData::set_worldNormal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e18200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_worldNormal", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_clickTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_clickTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_clickTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_clickTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(float_t)>(&::UnityEngine::EventSystems::PointerEventData::set_clickTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_clickTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_clickCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_clickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_clickCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_clickCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(int32_t)>(&::UnityEngine::EventSystems::PointerEventData::set_clickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_clickCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_scrollDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_scrollDelta)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e18230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_scrollDelta", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_scrollDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::EventSystems::PointerEventData::set_scrollDelta)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e1823c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_scrollDelta", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_useDragThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_useDragThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_useDragThreshold", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_useDragThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(bool)>(&::UnityEngine::EventSystems::PointerEventData::set_useDragThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_useDragThreshold", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_dragging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_dragging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_dragging", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_dragging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(bool)>(&::UnityEngine::EventSystems::PointerEventData::set_dragging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_dragging", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_button
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData_InputButton (::UnityEngine::EventSystems::PointerEventData::*)()>(
    &::UnityEngine::EventSystems::PointerEventData::get_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_button", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_button
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::EventSystems::PointerEventData_InputButton)>(
    &::UnityEngine::EventSystems::PointerEventData::set_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                                                           { "set_button", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_InputButton>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_pressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pressure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(float_t)>(&::UnityEngine::EventSystems::PointerEventData::set_pressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_pressure", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_tangentialPressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_tangentialPressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_tangentialPressure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_tangentialPressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(float_t)>(&::UnityEngine::EventSystems::PointerEventData::set_tangentialPressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_tangentialPressure", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_altitudeAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_altitudeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_altitudeAngle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_altitudeAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(float_t)>(&::UnityEngine::EventSystems::PointerEventData::set_altitudeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e182a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_altitudeAngle", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_azimuthAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_azimuthAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e182a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_azimuthAngle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_azimuthAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(float_t)>(&::UnityEngine::EventSystems::PointerEventData::set_azimuthAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e182b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_azimuthAngle", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_twist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_twist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e182b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_twist", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_twist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(float_t)>(&::UnityEngine::EventSystems::PointerEventData::set_twist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e182c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_twist", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_tilt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_tilt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e182c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_tilt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_tilt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::Vector2)>(&::UnityEngine::EventSystems::PointerEventData::set_tilt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e182d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_tilt", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_penStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PenStatus (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_penStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e182e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_penStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_penStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::PenStatus)>(
    &::UnityEngine::EventSystems::PointerEventData::set_penStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e182e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_penStatus", {}, { ::i2c::type_of<::UnityEngine::PenStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_radius)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e182f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_radius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::Vector2)>(&::UnityEngine::EventSystems::PointerEventData::set_radius)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e182fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_radius", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_radiusVariance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::PointerEventData::*)()>(
    &::UnityEngine::EventSystems::PointerEventData::get_radiusVariance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e18308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_radiusVariance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_radiusVariance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::EventSystems::PointerEventData::set_radiusVariance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e18314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_radiusVariance", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_fullyExited
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_fullyExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_fullyExited", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_fullyExited
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(bool)>(&::UnityEngine::EventSystems::PointerEventData::set_fullyExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_fullyExited", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_reentered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::get_reentered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_reentered", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_reentered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(bool)>(&::UnityEngine::EventSystems::PointerEventData::set_reentered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e18338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_reentered", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::EventSystems::EventSystem*)>(
    &::UnityEngine::EventSystems::PointerEventData::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e18340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.IsPointerMoving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::IsPointerMoving)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e1846c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "IsPointerMoving", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.IsScrolling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::IsScrolling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e1848c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "IsScrolling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_enterEventCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::EventSystems::PointerEventData::*)()>(
    &::UnityEngine::EventSystems::PointerEventData::get_enterEventCamera)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e184ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_enterEventCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_pressEventCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::EventSystems::PointerEventData::*)()>(
    &::UnityEngine::EventSystems::PointerEventData::get_pressEventCamera)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e18540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pressEventCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.get_pointerPress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::PointerEventData::*)()>(
    &::UnityEngine::EventSystems::PointerEventData::get_pointerPress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e185d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pointerPress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.set_pointerPress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerEventData::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::EventSystems::PointerEventData::set_pointerPress)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e185dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_pointerPress", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventData.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EventSystems::PointerEventData::*)()>(&::UnityEngine::EventSystems::PointerEventData::ToString)> {
  constexpr static std::size_t size = 0x754;
  constexpr static std::size_t addrs = 0x6e1865c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { ::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pointerEnter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerEnter_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pointerEnter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerEnter_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__pointerEnter_k__BackingField(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerEnter_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get_m_PointerPress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerPress;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get_m_PointerPress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerPress;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set_m_PointerPress(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerPress = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__lastPress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPress_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__lastPress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPress_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__lastPress_k__BackingField(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPress_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__rawPointerPress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rawPointerPress_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__rawPointerPress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rawPointerPress_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__rawPointerPress_k__BackingField(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rawPointerPress_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pointerDrag_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerDrag_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pointerDrag_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerDrag_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__pointerDrag_k__BackingField(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerDrag_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pointerClick_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerClick_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pointerClick_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerClick_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__pointerClick_k__BackingField(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerClick_k__BackingField = value;
}
constexpr ::UnityEngine::EventSystems::RaycastResult& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pointerCurrentRaycast_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerCurrentRaycast_k__BackingField;
}
constexpr ::UnityEngine::EventSystems::RaycastResult const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pointerCurrentRaycast_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerCurrentRaycast_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__pointerCurrentRaycast_k__BackingField(::UnityEngine::EventSystems::RaycastResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerCurrentRaycast_k__BackingField = value;
}
constexpr ::UnityEngine::EventSystems::RaycastResult& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pointerPressRaycast_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPressRaycast_k__BackingField;
}
constexpr ::UnityEngine::EventSystems::RaycastResult const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pointerPressRaycast_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPressRaycast_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__pointerPressRaycast_k__BackingField(::UnityEngine::EventSystems::RaycastResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerPressRaycast_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get_hovered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hovered;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get_hovered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hovered;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set_hovered(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hovered = value;
}
constexpr bool& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__eligibleForClick_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eligibleForClick_k__BackingField;
}
constexpr bool const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__eligibleForClick_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eligibleForClick_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__eligibleForClick_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eligibleForClick_k__BackingField = value;
}
constexpr int32_t& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__displayIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__displayIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayIndex_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__displayIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayIndex_k__BackingField = value;
}
constexpr int32_t& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pointerId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerId_k__BackingField;
}
constexpr int32_t const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pointerId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerId_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__pointerId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerId_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__position_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__position_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__position_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__delta_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delta_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__delta_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delta_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__delta_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delta_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pressPosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pressPosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressPosition_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__pressPosition_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressPosition_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__worldPosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____worldPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__worldPosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____worldPosition_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__worldPosition_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____worldPosition_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__worldNormal_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____worldNormal_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__worldNormal_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____worldNormal_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__worldNormal_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____worldNormal_k__BackingField = value;
}
constexpr float_t& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__clickTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickTime_k__BackingField;
}
constexpr float_t const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__clickTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickTime_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__clickTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clickTime_k__BackingField = value;
}
constexpr int32_t& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__clickCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickCount_k__BackingField;
}
constexpr int32_t const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__clickCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickCount_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__clickCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clickCount_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__scrollDelta_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollDelta_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__scrollDelta_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollDelta_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__scrollDelta_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scrollDelta_k__BackingField = value;
}
constexpr bool& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__useDragThreshold_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDragThreshold_k__BackingField;
}
constexpr bool const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__useDragThreshold_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDragThreshold_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__useDragThreshold_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useDragThreshold_k__BackingField = value;
}
constexpr bool& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__dragging_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragging_k__BackingField;
}
constexpr bool const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__dragging_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragging_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__dragging_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dragging_k__BackingField = value;
}
constexpr ::UnityEngine::EventSystems::PointerEventData_InputButton& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__button_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button_k__BackingField;
}
constexpr ::UnityEngine::EventSystems::PointerEventData_InputButton const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__button_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__button_k__BackingField(::UnityEngine::EventSystems::PointerEventData_InputButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____button_k__BackingField = value;
}
constexpr float_t& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pressure_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressure_k__BackingField;
}
constexpr float_t const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__pressure_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressure_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__pressure_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressure_k__BackingField = value;
}
constexpr float_t& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__tangentialPressure_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tangentialPressure_k__BackingField;
}
constexpr float_t const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__tangentialPressure_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tangentialPressure_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__tangentialPressure_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tangentialPressure_k__BackingField = value;
}
constexpr float_t& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__altitudeAngle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____altitudeAngle_k__BackingField;
}
constexpr float_t const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__altitudeAngle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____altitudeAngle_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__altitudeAngle_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____altitudeAngle_k__BackingField = value;
}
constexpr float_t& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__azimuthAngle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____azimuthAngle_k__BackingField;
}
constexpr float_t const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__azimuthAngle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____azimuthAngle_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__azimuthAngle_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____azimuthAngle_k__BackingField = value;
}
constexpr float_t& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__twist_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____twist_k__BackingField;
}
constexpr float_t const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__twist_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____twist_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__twist_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____twist_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__tilt_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tilt_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__tilt_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tilt_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__tilt_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tilt_k__BackingField = value;
}
constexpr ::UnityEngine::PenStatus& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__penStatus_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____penStatus_k__BackingField;
}
constexpr ::UnityEngine::PenStatus const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__penStatus_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____penStatus_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__penStatus_k__BackingField(::UnityEngine::PenStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____penStatus_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__radius_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__radius_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__radius_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radius_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__radiusVariance_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radiusVariance_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__radiusVariance_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radiusVariance_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__radiusVariance_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radiusVariance_k__BackingField = value;
}
constexpr bool& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__fullyExited_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullyExited_k__BackingField;
}
constexpr bool const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__fullyExited_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullyExited_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__fullyExited_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullyExited_k__BackingField = value;
}
constexpr bool& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__reentered_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reentered_k__BackingField;
}
constexpr bool const& UnityEngine::EventSystems::PointerEventData::__cordl_internal_get__reentered_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reentered_k__BackingField;
}
constexpr void UnityEngine::EventSystems::PointerEventData::__cordl_internal_set__reentered_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reentered_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::PointerEventData::get_pointerEnter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pointerEnter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_pointerEnter(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_pointerEnter", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::PointerEventData::get_lastPress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_lastPress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_lastPress(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_lastPress", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::PointerEventData::get_rawPointerPress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_rawPointerPress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_rawPointerPress(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_rawPointerPress", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::PointerEventData::get_pointerDrag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pointerDrag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_pointerDrag(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_pointerDrag", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::PointerEventData::get_pointerClick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pointerClick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_pointerClick(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_pointerClick", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::EventSystems::RaycastResult UnityEngine::EventSystems::PointerEventData::get_pointerCurrentRaycast() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pointerCurrentRaycast", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::RaycastResult>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_pointerCurrentRaycast(::UnityEngine::EventSystems::RaycastResult value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                                                         { "set_pointerCurrentRaycast", {}, { ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::EventSystems::RaycastResult UnityEngine::EventSystems::PointerEventData::get_pointerPressRaycast() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pointerPressRaycast", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::RaycastResult>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_pointerPressRaycast(::UnityEngine::EventSystems::RaycastResult value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                                                         { "set_pointerPressRaycast", {}, { ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::PointerEventData::get_eligibleForClick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_eligibleForClick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_eligibleForClick(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_eligibleForClick", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::EventSystems::PointerEventData::get_displayIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_displayIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_displayIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_displayIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::EventSystems::PointerEventData::get_pointerId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pointerId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_pointerId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_pointerId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::PointerEventData::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_position(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::PointerEventData::get_delta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_delta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_delta(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_delta", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::PointerEventData::get_pressPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pressPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_pressPosition(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_pressPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::EventSystems::PointerEventData::get_worldPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_worldPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_worldPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_worldPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::EventSystems::PointerEventData::get_worldNormal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_worldNormal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_worldNormal(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_worldNormal", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::EventSystems::PointerEventData::get_clickTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_clickTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_clickTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_clickTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::EventSystems::PointerEventData::get_clickCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_clickCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_clickCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_clickCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::PointerEventData::get_scrollDelta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_scrollDelta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_scrollDelta(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_scrollDelta", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::PointerEventData::get_useDragThreshold() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_useDragThreshold", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_useDragThreshold(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_useDragThreshold", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::PointerEventData::get_dragging() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_dragging", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_dragging(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_dragging", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::EventSystems::PointerEventData_InputButton UnityEngine::EventSystems::PointerEventData::get_button() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_button", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData_InputButton>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_button(::UnityEngine::EventSystems::PointerEventData_InputButton value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                                                         { "set_button", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_InputButton>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::EventSystems::PointerEventData::get_pressure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pressure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_pressure(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_pressure", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::EventSystems::PointerEventData::get_tangentialPressure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_tangentialPressure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_tangentialPressure(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_tangentialPressure", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::EventSystems::PointerEventData::get_altitudeAngle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_altitudeAngle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_altitudeAngle(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_altitudeAngle", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::EventSystems::PointerEventData::get_azimuthAngle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_azimuthAngle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_azimuthAngle(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_azimuthAngle", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::EventSystems::PointerEventData::get_twist() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_twist", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_twist(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_twist", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::PointerEventData::get_tilt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_tilt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_tilt(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_tilt", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::PenStatus UnityEngine::EventSystems::PointerEventData::get_penStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_penStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PenStatus>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_penStatus(::UnityEngine::PenStatus value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_penStatus", {}, { ::i2c::type_of<::UnityEngine::PenStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::PointerEventData::get_radius() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_radius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_radius(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_radius", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::PointerEventData::get_radiusVariance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_radiusVariance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_radiusVariance(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_radiusVariance", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::PointerEventData::get_fullyExited() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_fullyExited", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_fullyExited(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_fullyExited", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::PointerEventData::get_reentered() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_reentered", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_reentered(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_reentered", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::EventSystems::PointerEventData::_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventSystem);
}
inline bool UnityEngine::EventSystems::PointerEventData::IsPointerMoving() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "IsPointerMoving", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::PointerEventData::IsScrolling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "IsScrolling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::EventSystems::PointerEventData::get_enterEventCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_enterEventCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::EventSystems::PointerEventData::get_pressEventCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pressEventCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::PointerEventData::get_pointerPress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "get_pointerPress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerEventData::set_pointerPress(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), { "set_pointerPress", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::PointerEventData::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::PointerEventData*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::PointerEventData* UnityEngine::EventSystems::PointerEventData::New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::PointerEventData*>(eventSystem));
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::PointerEventData::PointerEventData() {}
