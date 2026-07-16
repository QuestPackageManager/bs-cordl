#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TabDragger.hpp"
#include "UnityEngine/UIElements/zzzz__PointerManipulator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TabDragger_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCancelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__TabDragLocationPreview_def.hpp"
#include "UnityEngine/UIElements/zzzz__TabLayout_def.hpp"
#include "UnityEngine/UIElements/zzzz__TabView_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.get_tabLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TabLayout* (::UnityEngine::UIElements::TabDragger::*)()>(&::UnityEngine::UIElements::TabDragger::get_tabLayout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d71830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "get_tabLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.set_tabLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(::UnityEngine::UIElements::TabLayout*)>(&::UnityEngine::UIElements::TabDragger::set_tabLayout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d71838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "set_tabLayout", {}, { ::i2c::type_of<::UnityEngine::UIElements::TabLayout*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.get_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TabDragger::*)()>(&::UnityEngine::UIElements::TabDragger::get_active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d71840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "get_active", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.set_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(bool)>(&::UnityEngine::UIElements::TabDragger::set_active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d71848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "set_active", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.get_isVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TabDragger::*)()>(&::UnityEngine::UIElements::TabDragger::get_isVertical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d71850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "get_isVertical", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.set_isVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(bool)>(&::UnityEngine::UIElements::TabDragger::set_isVertical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d71858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "set_isVertical", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.get_moving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TabDragger::*)()>(&::UnityEngine::UIElements::TabDragger::get_moving)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d71860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "get_moving", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.set_moving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(bool)>(&::UnityEngine::UIElements::TabDragger::set_moving)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6d71868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "set_moving", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)()>(&::UnityEngine::UIElements::TabDragger::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6d70580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.RegisterCallbacksOnTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)()>(&::UnityEngine::UIElements::TabDragger::RegisterCallbacksOnTarget)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x6d7191c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { ::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.UnregisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)()>(&::UnityEngine::UIElements::TabDragger::UnregisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x6d71c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { ::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.OnPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::TabDragger::OnPointerDown)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6d71f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.OnPointerMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(
    &::UnityEngine::UIElements::TabDragger::OnPointerMove)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d72280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.OnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::TabDragger::OnPointerUp)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6d7241c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.OnPointerCancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(::UnityEngine::UIElements::PointerCancelEvent*)>(
    &::UnityEngine::UIElements::TabDragger::OnPointerCancel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6d7256c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "OnPointerCancel", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCancelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.OnPointerCaptureOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(::UnityEngine::UIElements::PointerCaptureOutEvent*)>(
    &::UnityEngine::UIElements::TabDragger::OnPointerCaptureOut)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d726ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(),
                                                                                           { "OnPointerCaptureOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCaptureOutEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.ProcessCancelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(::UnityEngine::UIElements::EventBase*, int32_t)>(
    &::UnityEngine::UIElements::TabDragger::ProcessCancelEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6d725f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(),
                                                             { "ProcessCancelEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.OnKeyDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(::UnityEngine::UIElements::KeyDownEvent*)>(&::UnityEngine::UIElements::TabDragger::OnKeyDown)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6d72868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "OnKeyDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.ProcessDownEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2, int32_t)>(
    &::UnityEngine::UIElements::TabDragger::ProcessDownEvent)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6d72028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(),
                            { "ProcessDownEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.ProcessMoveEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::TabDragger::ProcessMoveEvent)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6d722f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(),
                                                             { "ProcessMoveEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.ProcessUpEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2, int32_t)>(
    &::UnityEngine::UIElements::TabDragger::ProcessUpEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6d724bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(),
                                         { "ProcessUpEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.BeginDragMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(float_t)>(&::UnityEngine::UIElements::TabDragger::BeginDragMove)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x6d7293c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "BeginDragMove", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.DragMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(float_t)>(&::UnityEngine::UIElements::TabDragger::DragMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d72ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "DragMove", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.UpdatePreviewPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)()>(&::UnityEngine::UIElements::TabDragger::UpdatePreviewPosition)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x6d72e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "UpdatePreviewPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.UpdateMoveLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)()>(&::UnityEngine::UIElements::TabDragger::UpdateMoveLocation)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6d72cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "UpdateMoveLocation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragger.EndDragMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragger::*)(bool)>(&::UnityEngine::UIElements::TabDragger::EndDragMove)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6d72724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "EndDragMove", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_StartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartPos;
}
constexpr float_t const& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_StartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartPos;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set_m_StartPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartPos = value;
}
constexpr float_t& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_LastPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPos;
}
constexpr float_t const& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_LastPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPos;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set_m_LastPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastPos = value;
}
constexpr bool& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_Moving() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Moving;
}
constexpr bool const& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_Moving() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Moving;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set_m_Moving(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Moving = value;
}
constexpr bool& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_Cancelled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cancelled;
}
constexpr bool const& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_Cancelled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cancelled;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set_m_Cancelled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Cancelled = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_Header() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Header;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_Header() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Header;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set_m_Header(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Header = value;
}
constexpr ::UnityEngine::UIElements::TabView*& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_TabView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabView;
}
constexpr ::UnityEngine::UIElements::TabView* const& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_TabView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabView;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set_m_TabView(::UnityEngine::UIElements::TabView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TabView = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_PreviewElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviewElement;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_PreviewElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviewElement;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set_m_PreviewElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviewElement = value;
}
constexpr ::UnityEngine::UIElements::TabDragLocationPreview*& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_LocationPreviewElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocationPreviewElement;
}
constexpr ::UnityEngine::UIElements::TabDragLocationPreview* const& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_LocationPreviewElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocationPreviewElement;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set_m_LocationPreviewElement(::UnityEngine::UIElements::TabDragLocationPreview* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LocationPreviewElement = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_TabToMove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabToMove;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_TabToMove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabToMove;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set_m_TabToMove(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TabToMove = value;
}
constexpr float_t& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_TabToMovePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabToMovePos;
}
constexpr float_t const& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_TabToMovePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabToMovePos;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set_m_TabToMovePos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TabToMovePos = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_DestinationTab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DestinationTab;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_DestinationTab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DestinationTab;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set_m_DestinationTab(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DestinationTab = value;
}
constexpr bool& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_MoveBeforeDestination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveBeforeDestination;
}
constexpr bool const& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_MoveBeforeDestination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveBeforeDestination;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set_m_MoveBeforeDestination(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MoveBeforeDestination = value;
}
constexpr int32_t& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_DraggingPointerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DraggingPointerId;
}
constexpr int32_t const& UnityEngine::UIElements::TabDragger::__cordl_internal_get_m_DraggingPointerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DraggingPointerId;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set_m_DraggingPointerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DraggingPointerId = value;
}
constexpr ::UnityEngine::UIElements::TabLayout*& UnityEngine::UIElements::TabDragger::__cordl_internal_get__tabLayout_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tabLayout_k__BackingField;
}
constexpr ::UnityEngine::UIElements::TabLayout* const& UnityEngine::UIElements::TabDragger::__cordl_internal_get__tabLayout_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tabLayout_k__BackingField;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set__tabLayout_k__BackingField(::UnityEngine::UIElements::TabLayout* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tabLayout_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::TabDragger::__cordl_internal_get__active_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____active_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::TabDragger::__cordl_internal_get__active_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____active_k__BackingField;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set__active_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____active_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::TabDragger::__cordl_internal_get__isVertical_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isVertical_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::TabDragger::__cordl_internal_get__isVertical_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isVertical_k__BackingField;
}
constexpr void UnityEngine::UIElements::TabDragger::__cordl_internal_set__isVertical_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isVertical_k__BackingField = value;
}
inline ::UnityEngine::UIElements::TabLayout* UnityEngine::UIElements::TabDragger::get_tabLayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "get_tabLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TabLayout*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabDragger::set_tabLayout(::UnityEngine::UIElements::TabLayout* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "set_tabLayout", {}, { ::i2c::type_of<::UnityEngine::UIElements::TabLayout*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::TabDragger::get_active() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "get_active", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabDragger::set_active(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "set_active", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::TabDragger::get_isVertical() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "get_isVertical", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabDragger::set_isVertical(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "set_isVertical", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::TabDragger::get_moving() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "get_moving", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabDragger::set_moving(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "set_moving", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TabDragger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabDragger::RegisterCallbacksOnTarget() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabDragger::UnregisterCallbacksFromTarget() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabDragger::OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TabDragger::OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TabDragger::OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TabDragger::OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "OnPointerCancel", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCancelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TabDragger::OnPointerCaptureOut(::UnityEngine::UIElements::PointerCaptureOutEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(),
                                                                                         { "OnPointerCaptureOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCaptureOutEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TabDragger::ProcessCancelEvent(::UnityEngine::UIElements::EventBase* evt, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(),
                                                           { "ProcessCancelEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, pointerId);
}
inline void UnityEngine::UIElements::TabDragger::OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "OnKeyDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::TabDragger::ProcessDownEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(),
                                       { "ProcessDownEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, localPosition, pointerId);
}
inline void UnityEngine::UIElements::TabDragger::ProcessMoveEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::Vector2 localPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(),
                                                           { "ProcessMoveEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, localPosition);
}
inline void UnityEngine::UIElements::TabDragger::ProcessUpEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(),
                                       { "ProcessUpEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, localPosition, pointerId);
}
inline void UnityEngine::UIElements::TabDragger::BeginDragMove(float_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "BeginDragMove", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline void UnityEngine::UIElements::TabDragger::DragMove(float_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "DragMove", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline void UnityEngine::UIElements::TabDragger::UpdatePreviewPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "UpdatePreviewPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabDragger::UpdateMoveLocation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "UpdateMoveLocation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabDragger::EndDragMove(bool cancelled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragger*>(), { "EndDragMove", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancelled);
}
inline ::UnityEngine::UIElements::TabDragger* UnityEngine::UIElements::TabDragger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TabDragger*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TabDragger::TabDragger() {}
