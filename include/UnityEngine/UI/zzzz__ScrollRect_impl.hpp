#pragma once
// IWYU pragma private; include "UnityEngine\UI\ScrollRect.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UI/zzzz__ScrollRect_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEndDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IInitializePotentialDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IScrollHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutElement_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutGroup_def.hpp"
#include "UnityEngine/UI/zzzz__ScrollRect_def.hpp"
#include "UnityEngine/UI/zzzz__Scrollbar_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::ScrollRect_MovementType::ScrollRect_MovementType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ScrollRect_MovementType::ScrollRect_MovementType() {}
constexpr ::UnityEngine::UI::ScrollRect_MovementType UnityEngine::UI::ScrollRect_MovementType::Unrestricted{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::ScrollRect_MovementType UnityEngine::UI::ScrollRect_MovementType::Elastic{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::ScrollRect_MovementType UnityEngine::UI::ScrollRect_MovementType::Clamped{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::ScrollRect_ScrollbarVisibility::ScrollRect_ScrollbarVisibility(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ScrollRect_ScrollbarVisibility::ScrollRect_ScrollbarVisibility() {}
constexpr ::UnityEngine::UI::ScrollRect_ScrollbarVisibility UnityEngine::UI::ScrollRect_ScrollbarVisibility::Permanent{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::ScrollRect_ScrollbarVisibility UnityEngine::UI::ScrollRect_ScrollbarVisibility::AutoHide{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::ScrollRect_ScrollbarVisibility UnityEngine::UI::ScrollRect_ScrollbarVisibility::AutoHideAndExpandViewport{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect_ScrollRectEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect_ScrollRectEvent::*)()>(&::UnityEngine::UI::ScrollRect_ScrollRectEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e068bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect_ScrollRectEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::ScrollRect_ScrollRectEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect_ScrollRectEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::ScrollRect_ScrollRectEvent* UnityEngine::UI::ScrollRect_ScrollRectEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::ScrollRect_ScrollRectEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ScrollRect_ScrollRectEvent::ScrollRect_ScrollRectEvent() {}
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e05fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_content", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::RectTransform*)>(&::UnityEngine::UI::ScrollRect::set_content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e05fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_content", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_horizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_horizontal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e05ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_horizontal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_horizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(bool)>(&::UnityEngine::UI::ScrollRect::set_horizontal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e05ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_horizontal", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_vertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_vertical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_vertical", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_vertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(bool)>(&::UnityEngine::UI::ScrollRect::set_vertical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0600c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_vertical", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_movementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::ScrollRect_MovementType (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_movementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_movementType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_movementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::UI::ScrollRect_MovementType)>(&::UnityEngine::UI::ScrollRect::set_movementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0601c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_movementType", {}, { ::i2c::type_of<::UnityEngine::UI::ScrollRect_MovementType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_elasticity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_elasticity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_elasticity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_elasticity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::set_elasticity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0602c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_elasticity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_inertia
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_inertia)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_inertia", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_inertia
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(bool)>(&::UnityEngine::UI::ScrollRect::set_inertia)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0603c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_inertia", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_decelerationRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_decelerationRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_decelerationRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_decelerationRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::set_decelerationRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0604c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_decelerationRate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_scrollSensitivity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_scrollSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_scrollSensitivity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_scrollSensitivity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::set_scrollSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0605c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_scrollSensitivity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_viewport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_viewport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_viewport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_viewport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::RectTransform*)>(&::UnityEngine::UI::ScrollRect::set_viewport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0606c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_viewport", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_horizontalScrollbar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Scrollbar> (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_horizontalScrollbar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_horizontalScrollbar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_horizontalScrollbar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::UI::Scrollbar*)>(&::UnityEngine::UI::ScrollRect::set_horizontalScrollbar)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6e06138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_horizontalScrollbar", {}, { ::i2c::type_of<::UnityEngine::UI::Scrollbar*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_verticalScrollbar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Scrollbar> (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_verticalScrollbar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_verticalScrollbar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_verticalScrollbar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::UI::Scrollbar*)>(&::UnityEngine::UI::ScrollRect::set_verticalScrollbar)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6e06338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_verticalScrollbar", {}, { ::i2c::type_of<::UnityEngine::UI::Scrollbar*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_horizontalScrollbarVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::ScrollRect_ScrollbarVisibility (::UnityEngine::UI::ScrollRect::*)()>(
    &::UnityEngine::UI::ScrollRect::get_horizontalScrollbarVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_horizontalScrollbarVisibility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_horizontalScrollbarVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::UI::ScrollRect_ScrollbarVisibility)>(
    &::UnityEngine::UI::ScrollRect::set_horizontalScrollbarVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_horizontalScrollbarVisibility", {}, { ::i2c::type_of<::UnityEngine::UI::ScrollRect_ScrollbarVisibility>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_verticalScrollbarVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::ScrollRect_ScrollbarVisibility (::UnityEngine::UI::ScrollRect::*)()>(
    &::UnityEngine::UI::ScrollRect::get_verticalScrollbarVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_verticalScrollbarVisibility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_verticalScrollbarVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::UI::ScrollRect_ScrollbarVisibility)>(
    &::UnityEngine::UI::ScrollRect::set_verticalScrollbarVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_verticalScrollbarVisibility", {}, { ::i2c::type_of<::UnityEngine::UI::ScrollRect_ScrollbarVisibility>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_horizontalScrollbarSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_horizontalScrollbarSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_horizontalScrollbarSpacing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_horizontalScrollbarSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::set_horizontalScrollbarSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_horizontalScrollbarSpacing", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_verticalScrollbarSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_verticalScrollbarSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e065ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_verticalScrollbarSpacing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_verticalScrollbarSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::set_verticalScrollbarSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e065f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_verticalScrollbarSpacing", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_onValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::ScrollRect_ScrollRectEvent* (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e065fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_onValueChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_onValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::UI::ScrollRect_ScrollRectEvent*)>(&::UnityEngine::UI::ScrollRect::set_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_onValueChanged", {}, { ::i2c::type_of<::UnityEngine::UI::ScrollRect_ScrollRectEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_viewRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_viewRect)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6e0660c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_viewRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_velocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_velocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e06704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_velocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_velocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::ScrollRect::set_velocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0670c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_velocity", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_rectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_rectTransform)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e06714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_rectTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6e067b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.Rebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::UI::CanvasUpdate)>(&::UnityEngine::UI::ScrollRect::Rebuild)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e06908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.LayoutComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e072dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.GraphicUpdateComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e072e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UpdateCachedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::UpdateCachedData)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x6e06994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UpdateCachedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::OnEnable)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6e072e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::OnDisable)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x6e0750c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::IsActive)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e077a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.EnsureLayoutHasRebuilt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::EnsureLayoutHasRebuilt)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e07828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "EnsureLayoutHasRebuilt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.StopMovement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::StopMovement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e078a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnScroll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::ScrollRect::OnScroll)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6e078f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnInitializePotentialDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::ScrollRect::OnInitializePotentialDrag)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e07a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnBeginDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::ScrollRect::OnBeginDrag)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6e07afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnEndDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::ScrollRect::OnEndDrag)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e07c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::ScrollRect::OnDrag)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6e07c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetContentAnchoredPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::ScrollRect::SetContentAnchoredPosition)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e07ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::LateUpdate)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x6e07f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UpdatePrevData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::UpdatePrevData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6e071fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UpdatePrevData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UpdateScrollbars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::ScrollRect::UpdateScrollbars)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6e07070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UpdateScrollbars", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_normalizedPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_normalizedPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e08530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_normalizedPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_normalizedPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::ScrollRect::set_normalizedPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6e08798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_normalizedPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_horizontalNormalizedPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_horizontalNormalizedPosition)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6e085a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_horizontalNormalizedPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_horizontalNormalizedPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::set_horizontalNormalizedPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e087e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_horizontalNormalizedPosition", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_verticalNormalizedPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_verticalNormalizedPosition)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6e0869c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_verticalNormalizedPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_verticalNormalizedPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::set_verticalNormalizedPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e087f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_verticalNormalizedPosition", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetHorizontalNormalizedPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::SetHorizontalNormalizedPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e08808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "SetHorizontalNormalizedPosition", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetVerticalNormalizedPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::SetVerticalNormalizedPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e0881c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "SetVerticalNormalizedPosition", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetNormalizedPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t, int32_t)>(&::UnityEngine::UI::ScrollRect::SetNormalizedPosition)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x6e08830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.RubberDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::UI::ScrollRect::RubberDelta)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e07e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "RubberDelta", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnRectTransformDimensionsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e08ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_hScrollingNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_hScrollingNeeded)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e08ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_hScrollingNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_vScrollingNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_vScrollingNeeded)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e08b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_vScrollingNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.CalculateLayoutInputHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::CalculateLayoutInputHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e08c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.CalculateLayoutInputVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::CalculateLayoutInputVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e08c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_minWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_minWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e08c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_preferredWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_preferredWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e08c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_flexibleWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_flexibleWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e08c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_minHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_minHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e08c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_preferredHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_preferredHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e08c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_flexibleHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_flexibleHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e08c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_layoutPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_layoutPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e08c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetLayoutHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x6e08c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetLayoutVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::SetLayoutVertical)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e09230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UpdateScrollbarVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::UpdateScrollbarVisibility)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e08560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UpdateScrollbarVisibility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UpdateOneScrollbarVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, bool, ::UnityEngine::UI::ScrollRect_ScrollbarVisibility, ::UnityEngine::UI::Scrollbar*)>(
    &::UnityEngine::UI::ScrollRect::UpdateOneScrollbarVisibility)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e09518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UpdateOneScrollbarVisibility",
                                                                                 {},
                                                                                 { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UI::ScrollRect_ScrollbarVisibility>(),
                                                                                   ::i2c::type_of<::UnityEngine::UI::Scrollbar*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UpdateScrollbarLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::UpdateScrollbarLayout)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6e092e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UpdateScrollbarLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UpdateBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::UpdateBounds)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x6e06cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UpdateBounds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.AdjustBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bounds>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::UI::ScrollRect::AdjustBounds)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e0963c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "AdjustBounds",
                                                                                 {},
                                                                                 { ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(),
                                                                                   ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.GetBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::GetBounds)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6e09148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "GetBounds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.InternalGetBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::ArrayW<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::UI::ScrollRect::InternalGetBounds)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6e096b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(),
                                                { "InternalGetBounds", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.CalculateOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::ScrollRect::CalculateOffset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e07a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "CalculateOffset", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.InternalCalculateOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Vector2 (*)(::by_ref<::UnityEngine::Bounds>, ::by_ref<::UnityEngine::Bounds>, bool, bool, ::UnityEngine::UI::ScrollRect_MovementType, ::by_ref<::UnityEngine::Vector2>)>(
        &::UnityEngine::UI::ScrollRect::InternalCalculateOffset)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e09810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(),
                                                { "InternalCalculateOffset",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UI::ScrollRect_MovementType>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::SetDirty)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e06560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "SetDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetDirtyCaching
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::SetDirtyCaching)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e06074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "SetDirtyCaching", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UnityEngine_UI_ICanvasElement_get_transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::UI::ScrollRect::*)()>(
    &::UnityEngine::UI::ScrollRect::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e09960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UnityEngine.UI.ICanvasElement.get_transform", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Content;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Content;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_Content(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Content = value;
}
constexpr bool& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Horizontal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Horizontal;
}
constexpr bool const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Horizontal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Horizontal;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_Horizontal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Horizontal = value;
}
constexpr bool& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Vertical() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vertical;
}
constexpr bool const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Vertical() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vertical;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_Vertical(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Vertical = value;
}
constexpr ::UnityEngine::UI::ScrollRect_MovementType& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_MovementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MovementType;
}
constexpr ::UnityEngine::UI::ScrollRect_MovementType const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_MovementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MovementType;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_MovementType(::UnityEngine::UI::ScrollRect_MovementType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MovementType = value;
}
constexpr float_t& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Elasticity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Elasticity;
}
constexpr float_t const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Elasticity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Elasticity;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_Elasticity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Elasticity = value;
}
constexpr bool& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Inertia() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Inertia;
}
constexpr bool const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Inertia() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Inertia;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_Inertia(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Inertia = value;
}
constexpr float_t& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_DecelerationRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecelerationRate;
}
constexpr float_t const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_DecelerationRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecelerationRate;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_DecelerationRate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecelerationRate = value;
}
constexpr float_t& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_ScrollSensitivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollSensitivity;
}
constexpr float_t const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_ScrollSensitivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollSensitivity;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_ScrollSensitivity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollSensitivity = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Viewport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Viewport;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Viewport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Viewport;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_Viewport(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Viewport = value;
}
constexpr ::UnityW<::UnityEngine::UI::Scrollbar>& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_HorizontalScrollbar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollbar;
}
constexpr ::UnityW<::UnityEngine::UI::Scrollbar> const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_HorizontalScrollbar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollbar;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_HorizontalScrollbar(::UnityW<::UnityEngine::UI::Scrollbar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HorizontalScrollbar = value;
}
constexpr ::UnityW<::UnityEngine::UI::Scrollbar>& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_VerticalScrollbar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollbar;
}
constexpr ::UnityW<::UnityEngine::UI::Scrollbar> const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_VerticalScrollbar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollbar;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_VerticalScrollbar(::UnityW<::UnityEngine::UI::Scrollbar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticalScrollbar = value;
}
constexpr ::UnityEngine::UI::ScrollRect_ScrollbarVisibility& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_HorizontalScrollbarVisibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollbarVisibility;
}
constexpr ::UnityEngine::UI::ScrollRect_ScrollbarVisibility const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_HorizontalScrollbarVisibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollbarVisibility;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_HorizontalScrollbarVisibility(::UnityEngine::UI::ScrollRect_ScrollbarVisibility value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HorizontalScrollbarVisibility = value;
}
constexpr ::UnityEngine::UI::ScrollRect_ScrollbarVisibility& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_VerticalScrollbarVisibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollbarVisibility;
}
constexpr ::UnityEngine::UI::ScrollRect_ScrollbarVisibility const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_VerticalScrollbarVisibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollbarVisibility;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_VerticalScrollbarVisibility(::UnityEngine::UI::ScrollRect_ScrollbarVisibility value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticalScrollbarVisibility = value;
}
constexpr float_t& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_HorizontalScrollbarSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollbarSpacing;
}
constexpr float_t const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_HorizontalScrollbarSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollbarSpacing;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_HorizontalScrollbarSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HorizontalScrollbarSpacing = value;
}
constexpr float_t& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_VerticalScrollbarSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollbarSpacing;
}
constexpr float_t const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_VerticalScrollbarSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollbarSpacing;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_VerticalScrollbarSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticalScrollbarSpacing = value;
}
constexpr ::UnityEngine::UI::ScrollRect_ScrollRectEvent*& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_OnValueChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValueChanged;
}
constexpr ::UnityEngine::UI::ScrollRect_ScrollRectEvent* const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_OnValueChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValueChanged;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_OnValueChanged(::UnityEngine::UI::ScrollRect_ScrollRectEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnValueChanged = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_PointerStartLocalCursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerStartLocalCursor;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_PointerStartLocalCursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerStartLocalCursor;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_PointerStartLocalCursor(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerStartLocalCursor = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_ContentStartPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentStartPosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_ContentStartPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentStartPosition;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_ContentStartPosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentStartPosition = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_ViewRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewRect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_ViewRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewRect;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_ViewRect(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ViewRect = value;
}
constexpr ::UnityEngine::Bounds& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_ContentBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentBounds;
}
constexpr ::UnityEngine::Bounds const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_ContentBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentBounds;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_ContentBounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentBounds = value;
}
constexpr ::UnityEngine::Bounds& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_ViewBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewBounds;
}
constexpr ::UnityEngine::Bounds const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_ViewBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewBounds;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_ViewBounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ViewBounds = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Velocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Velocity;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Velocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Velocity;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_Velocity(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Velocity = value;
}
constexpr bool& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Dragging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dragging;
}
constexpr bool const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Dragging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dragging;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_Dragging(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dragging = value;
}
constexpr bool& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Scrolling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scrolling;
}
constexpr bool const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Scrolling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scrolling;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_Scrolling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Scrolling = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_PrevPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevPosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_PrevPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevPosition;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_PrevPosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevPosition = value;
}
constexpr ::UnityEngine::Bounds& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_PrevContentBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevContentBounds;
}
constexpr ::UnityEngine::Bounds const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_PrevContentBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevContentBounds;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_PrevContentBounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevContentBounds = value;
}
constexpr ::UnityEngine::Bounds& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_PrevViewBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevViewBounds;
}
constexpr ::UnityEngine::Bounds const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_PrevViewBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevViewBounds;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_PrevViewBounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevViewBounds = value;
}
constexpr bool& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_HasRebuiltLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasRebuiltLayout;
}
constexpr bool const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_HasRebuiltLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasRebuiltLayout;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_HasRebuiltLayout(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasRebuiltLayout = value;
}
constexpr bool& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_HSliderExpand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HSliderExpand;
}
constexpr bool const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_HSliderExpand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HSliderExpand;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_HSliderExpand(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HSliderExpand = value;
}
constexpr bool& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_VSliderExpand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VSliderExpand;
}
constexpr bool const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_VSliderExpand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VSliderExpand;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_VSliderExpand(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VSliderExpand = value;
}
constexpr float_t& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_HSliderHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HSliderHeight;
}
constexpr float_t const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_HSliderHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HSliderHeight;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_HSliderHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HSliderHeight = value;
}
constexpr float_t& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_VSliderWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VSliderWidth;
}
constexpr float_t const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_VSliderWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VSliderWidth;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_VSliderWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VSliderWidth = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Rect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Rect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rect;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_Rect(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Rect = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_HorizontalScrollbarRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollbarRect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_HorizontalScrollbarRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollbarRect;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_HorizontalScrollbarRect(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HorizontalScrollbarRect = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_VerticalScrollbarRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollbarRect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_VerticalScrollbarRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollbarRect;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_VerticalScrollbarRect(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticalScrollbarRect = value;
}
constexpr ::UnityEngine::DrivenRectTransformTracker& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Tracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tracker;
}
constexpr ::UnityEngine::DrivenRectTransformTracker const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Tracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tracker;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tracker = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Corners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Corners;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& UnityEngine::UI::ScrollRect::__cordl_internal_get_m_Corners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Corners;
}
constexpr void UnityEngine::UI::ScrollRect::__cordl_internal_set_m_Corners(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Corners = value;
}
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::UI::ScrollRect::get_content() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_content", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_content(::UnityEngine::RectTransform* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_content", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::ScrollRect::get_horizontal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_horizontal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_horizontal(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_horizontal", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::ScrollRect::get_vertical() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_vertical", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_vertical(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_vertical", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::ScrollRect_MovementType UnityEngine::UI::ScrollRect::get_movementType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_movementType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ScrollRect_MovementType>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_movementType(::UnityEngine::UI::ScrollRect_MovementType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_movementType", {}, { ::i2c::type_of<::UnityEngine::UI::ScrollRect_MovementType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::ScrollRect::get_elasticity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_elasticity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_elasticity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_elasticity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::ScrollRect::get_inertia() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_inertia", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_inertia(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_inertia", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::ScrollRect::get_decelerationRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_decelerationRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_decelerationRate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_decelerationRate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::ScrollRect::get_scrollSensitivity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_scrollSensitivity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_scrollSensitivity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_scrollSensitivity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::UI::ScrollRect::get_viewport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_viewport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_viewport(::UnityEngine::RectTransform* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_viewport", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Scrollbar> UnityEngine::UI::ScrollRect::get_horizontalScrollbar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_horizontalScrollbar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Scrollbar>>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_horizontalScrollbar(::UnityEngine::UI::Scrollbar* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_horizontalScrollbar", {}, { ::i2c::type_of<::UnityEngine::UI::Scrollbar*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Scrollbar> UnityEngine::UI::ScrollRect::get_verticalScrollbar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_verticalScrollbar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Scrollbar>>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_verticalScrollbar(::UnityEngine::UI::Scrollbar* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_verticalScrollbar", {}, { ::i2c::type_of<::UnityEngine::UI::Scrollbar*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::ScrollRect_ScrollbarVisibility UnityEngine::UI::ScrollRect::get_horizontalScrollbarVisibility() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_horizontalScrollbarVisibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ScrollRect_ScrollbarVisibility>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_horizontalScrollbarVisibility(::UnityEngine::UI::ScrollRect_ScrollbarVisibility value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_horizontalScrollbarVisibility", {}, { ::i2c::type_of<::UnityEngine::UI::ScrollRect_ScrollbarVisibility>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::ScrollRect_ScrollbarVisibility UnityEngine::UI::ScrollRect::get_verticalScrollbarVisibility() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_verticalScrollbarVisibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ScrollRect_ScrollbarVisibility>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_verticalScrollbarVisibility(::UnityEngine::UI::ScrollRect_ScrollbarVisibility value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_verticalScrollbarVisibility", {}, { ::i2c::type_of<::UnityEngine::UI::ScrollRect_ScrollbarVisibility>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::ScrollRect::get_horizontalScrollbarSpacing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_horizontalScrollbarSpacing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_horizontalScrollbarSpacing(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_horizontalScrollbarSpacing", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::ScrollRect::get_verticalScrollbarSpacing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_verticalScrollbarSpacing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_verticalScrollbarSpacing(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_verticalScrollbarSpacing", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::ScrollRect_ScrollRectEvent* UnityEngine::UI::ScrollRect::get_onValueChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_onValueChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ScrollRect_ScrollRectEvent*>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_onValueChanged(::UnityEngine::UI::ScrollRect_ScrollRectEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_onValueChanged", {}, { ::i2c::type_of<::UnityEngine::UI::ScrollRect_ScrollRectEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::UI::ScrollRect::get_viewRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_viewRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::ScrollRect::get_velocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_velocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_velocity(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_velocity", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::UI::ScrollRect::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_rectTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::Rebuild(::UnityEngine::UI::CanvasUpdate executing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, executing);
}
inline void UnityEngine::UI::ScrollRect::LayoutComplete() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::GraphicUpdateComplete() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::UpdateCachedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UpdateCachedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UI::ScrollRect::IsActive() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::EnsureLayoutHasRebuilt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "EnsureLayoutHasRebuilt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::StopMovement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::OnScroll(::UnityEngine::EventSystems::PointerEventData* data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::UI::ScrollRect::OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::ScrollRect::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::ScrollRect::OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::ScrollRect::OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::ScrollRect::SetContentAnchoredPosition(::UnityEngine::Vector2 position) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void UnityEngine::UI::ScrollRect::LateUpdate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::UpdatePrevData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UpdatePrevData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::UpdateScrollbars(::UnityEngine::Vector2 offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UpdateScrollbars", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::ScrollRect::get_normalizedPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_normalizedPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_normalizedPosition(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_normalizedPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::ScrollRect::get_horizontalNormalizedPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_horizontalNormalizedPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_horizontalNormalizedPosition(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_horizontalNormalizedPosition", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::ScrollRect::get_verticalNormalizedPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_verticalNormalizedPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_verticalNormalizedPosition(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "set_verticalNormalizedPosition", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::ScrollRect::SetHorizontalNormalizedPosition(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "SetHorizontalNormalizedPosition", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::ScrollRect::SetVerticalNormalizedPosition(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "SetVerticalNormalizedPosition", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::ScrollRect::SetNormalizedPosition(float_t value, int32_t axis) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, axis);
}
inline float_t UnityEngine::UI::ScrollRect::RubberDelta(float_t overStretching, float_t viewSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "RubberDelta", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, overStretching, viewSize);
}
inline void UnityEngine::UI::ScrollRect::OnRectTransformDimensionsChange() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UI::ScrollRect::get_hScrollingNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_hScrollingNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UI::ScrollRect::get_vScrollingNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "get_vScrollingNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::CalculateLayoutInputHorizontal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::CalculateLayoutInputVertical() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::UI::ScrollRect::get_minWidth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::ScrollRect::get_preferredWidth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::ScrollRect::get_flexibleWidth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::ScrollRect::get_minHeight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::ScrollRect::get_preferredHeight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::ScrollRect::get_flexibleHeight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::UI::ScrollRect::get_layoutPriority() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::SetLayoutHorizontal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::SetLayoutVertical() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::UpdateScrollbarVisibility() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UpdateScrollbarVisibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::UpdateOneScrollbarVisibility(bool xScrollingNeeded, bool xAxisEnabled, ::UnityEngine::UI::ScrollRect_ScrollbarVisibility scrollbarVisibility,
                                                                      ::UnityEngine::UI::Scrollbar* scrollbar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UpdateOneScrollbarVisibility",
                                                                               {},
                                                                               { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UI::ScrollRect_ScrollbarVisibility>(),
                                                                                 ::i2c::type_of<::UnityEngine::UI::Scrollbar*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xScrollingNeeded, xAxisEnabled, scrollbarVisibility, scrollbar);
}
inline void UnityEngine::UI::ScrollRect::UpdateScrollbarLayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UpdateScrollbarLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::UpdateBounds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UpdateBounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::AdjustBounds(::by_ref<::UnityEngine::Bounds> viewBounds, ::by_ref<::UnityEngine::Vector2> contentPivot, ::by_ref<::UnityEngine::Vector3> contentSize,
                                                      ::by_ref<::UnityEngine::Vector3> contentPos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "AdjustBounds",
                                                                               {},
                                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(),
                                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, viewBounds, contentPivot, contentSize, contentPos);
}
inline ::UnityEngine::Bounds UnityEngine::UI::ScrollRect::GetBounds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "GetBounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::UnityEngine::Bounds UnityEngine::UI::ScrollRect::InternalGetBounds(::ArrayW<::UnityEngine::Vector3> corners, ::by_ref<::UnityEngine::Matrix4x4> viewWorldToLocalMatrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(),
                                                           { "InternalGetBounds", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, corners, viewWorldToLocalMatrix);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::ScrollRect::CalculateOffset(::UnityEngine::Vector2 delta) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "CalculateOffset", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, delta);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::ScrollRect::InternalCalculateOffset(::by_ref<::UnityEngine::Bounds> viewBounds, ::by_ref<::UnityEngine::Bounds> contentBounds, bool horizontal,
                                                                                   bool vertical, ::UnityEngine::UI::ScrollRect_MovementType movementType, ::by_ref<::UnityEngine::Vector2> delta) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(),
                                              { "InternalCalculateOffset",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<::UnityEngine::UI::ScrollRect_MovementType>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, viewBounds, contentBounds, horizontal, vertical, movementType, delta);
}
inline void UnityEngine::UI::ScrollRect::SetDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "SetDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::SetDirtyCaching() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "SetDirtyCaching", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::UI::ScrollRect::UnityEngine_UI_ICanvasElement_get_transform() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ScrollRect*>(), { "UnityEngine.UI.ICanvasElement.get_transform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::UI::ScrollRect* UnityEngine::UI::ScrollRect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::ScrollRect*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr UnityEngine::UI::ScrollRect::operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr ::UnityEngine::EventSystems::IInitializePotentialDragHandler* UnityEngine::UI::ScrollRect::i___UnityEngine__EventSystems__IInitializePotentialDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr UnityEngine::UI::ScrollRect::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* UnityEngine::UI::ScrollRect::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr UnityEngine::UI::ScrollRect::operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr ::UnityEngine::EventSystems::IBeginDragHandler* UnityEngine::UI::ScrollRect::i___UnityEngine__EventSystems__IBeginDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr UnityEngine::UI::ScrollRect::operator ::UnityEngine::EventSystems::IEndDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEndDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr ::UnityEngine::EventSystems::IEndDragHandler* UnityEngine::UI::ScrollRect::i___UnityEngine__EventSystems__IEndDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEndDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr UnityEngine::UI::ScrollRect::operator ::UnityEngine::EventSystems::IDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* UnityEngine::UI::ScrollRect::i___UnityEngine__EventSystems__IDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IScrollHandler"
constexpr UnityEngine::UI::ScrollRect::operator ::UnityEngine::EventSystems::IScrollHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IScrollHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IScrollHandler"
constexpr ::UnityEngine::EventSystems::IScrollHandler* UnityEngine::UI::ScrollRect::i___UnityEngine__EventSystems__IScrollHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IScrollHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr UnityEngine::UI::ScrollRect::operator ::UnityEngine::UI::ICanvasElement*() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ICanvasElement"
constexpr ::UnityEngine::UI::ICanvasElement* UnityEngine::UI::ScrollRect::i___UnityEngine__UI__ICanvasElement() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
constexpr UnityEngine::UI::ScrollRect::operator ::UnityEngine::UI::ILayoutElement*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutElement"
constexpr ::UnityEngine::UI::ILayoutElement* UnityEngine::UI::ScrollRect::i___UnityEngine__UI__ILayoutElement() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutGroup"
constexpr UnityEngine::UI::ScrollRect::operator ::UnityEngine::UI::ILayoutGroup*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutGroup*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutGroup"
constexpr ::UnityEngine::UI::ILayoutGroup* UnityEngine::UI::ScrollRect::i___UnityEngine__UI__ILayoutGroup() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutGroup*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr UnityEngine::UI::ScrollRect::operator ::UnityEngine::UI::ILayoutController*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutController"
constexpr ::UnityEngine::UI::ILayoutController* UnityEngine::UI::ScrollRect::i___UnityEngine__UI__ILayoutController() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ScrollRect::ScrollRect() {}
