#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextSelectingManipulator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextSelectingManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__ExecuteCommandEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__ValidateCommandEvent_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__TextSelectingUtilities_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.get_isClicking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TextSelectingManipulator::*)()>(&::UnityEngine::UIElements::TextSelectingManipulator::get_isClicking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ca2624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "get_isClicking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.set_isClicking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)(bool)>(&::UnityEngine::UIElements::TextSelectingManipulator::set_isClicking)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ca262c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "set_isClicking", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::TextElement*)>(
    &::UnityEngine::UIElements::TextSelectingManipulator::_ctor)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x6ca2644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.get_cursorIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::TextSelectingManipulator::*)()>(&::UnityEngine::UIElements::TextSelectingManipulator::get_cursorIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ca2940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "get_cursorIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.set_cursorIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)(int32_t)>(&::UnityEngine::UIElements::TextSelectingManipulator::set_cursorIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ca2958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "set_cursorIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.get_selectIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::TextSelectingManipulator::*)()>(&::UnityEngine::UIElements::TextSelectingManipulator::get_selectIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ca2994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "get_selectIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.set_selectIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)(int32_t)>(&::UnityEngine::UIElements::TextSelectingManipulator::set_selectIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ca29ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "set_selectIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.OnRevealCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)()>(&::UnityEngine::UIElements::TextSelectingManipulator::OnRevealCursor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ca29e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "OnRevealCursor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.OnSelectIndexChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)()>(&::UnityEngine::UIElements::TextSelectingManipulator::OnSelectIndexChange)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6ca2a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "OnSelectIndexChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.OnCursorIndexChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)()>(&::UnityEngine::UIElements::TextSelectingManipulator::OnCursorIndexChange)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6ca2bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "OnCursorIndexChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.RevealCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TextSelectingManipulator::*)()>(&::UnityEngine::UIElements::TextSelectingManipulator::RevealCursor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ca2d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "RevealCursor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.HasSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TextSelectingManipulator::*)()>(&::UnityEngine::UIElements::TextSelectingManipulator::HasSelection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ca2b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "HasSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.HasFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TextSelectingManipulator::*)()>(&::UnityEngine::UIElements::TextSelectingManipulator::HasFocus)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ca2d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "HasFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.HandleEventBubbleUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::TextSelectingManipulator::HandleEventBubbleUp)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x6ca2d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(),
                                                                                           { "HandleEventBubbleUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.OnFocusEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)()>(&::UnityEngine::UIElements::TextSelectingManipulator::OnFocusEvent)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x6ca30e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "OnFocusEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.OnBlurEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)()>(&::UnityEngine::UIElements::TextSelectingManipulator::OnBlurEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6ca3370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "OnBlurEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.OnKeyDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::KeyDownEvent*)>(
    &::UnityEngine::UIElements::TextSelectingManipulator::OnKeyDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6ca36c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(),
                                                                                           { "OnKeyDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.OnPointerDownEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::TextSelectingManipulator::OnPointerDownEvent)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x6ca372c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(),
                                                                                           { "OnPointerDownEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.OnPointerMoveEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(
    &::UnityEngine::UIElements::TextSelectingManipulator::OnPointerMoveEvent)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6ca3b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(),
                                                                                           { "OnPointerMoveEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.OnPointerUpEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::TextSelectingManipulator::OnPointerUpEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6ca3d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(),
                                                                                           { "OnPointerUpEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.OnValidateCommandEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::ValidateCommandEvent*)>(
    &::UnityEngine::UIElements::TextSelectingManipulator::OnValidateCommandEvent)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6ca3424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(),
                                                                                           { "OnValidateCommandEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::ValidateCommandEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.OnExecuteCommandEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::ExecuteCommandEvent*)>(
    &::UnityEngine::UIElements::TextSelectingManipulator::OnExecuteCommandEvent)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6ca35a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(),
                                                                                           { "OnExecuteCommandEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::ExecuteCommandEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextSelectingManipulator.MoveDistanceQualifiesForDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::TextSelectingManipulator::MoveDistanceQualifiesForDrag)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ca3e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(),
                                                             { "MoveDistanceQualifiesForDrag", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TextSelectingUtilities*& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_SelectingUtilities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectingUtilities;
}
constexpr ::UnityEngine::TextSelectingUtilities* const& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_SelectingUtilities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectingUtilities;
}
constexpr void UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_set_m_SelectingUtilities(::UnityEngine::TextSelectingUtilities* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectingUtilities = value;
}
constexpr bool& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_selectAllOnMouseUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectAllOnMouseUp;
}
constexpr bool const& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_selectAllOnMouseUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectAllOnMouseUp;
}
constexpr void UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_set_selectAllOnMouseUp(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectAllOnMouseUp = value;
}
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_TextElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElement;
}
constexpr ::UnityEngine::UIElements::TextElement* const& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_TextElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElement;
}
constexpr void UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextElement = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_ClickStartPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClickStartPosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_ClickStartPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClickStartPosition;
}
constexpr void UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_set_m_ClickStartPosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClickStartPosition = value;
}
constexpr bool& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_Dragged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dragged;
}
constexpr bool const& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_Dragged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dragged;
}
constexpr void UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_set_m_Dragged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dragged = value;
}
constexpr bool& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_IsClicking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsClicking;
}
constexpr bool const& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_IsClicking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsClicking;
}
constexpr void UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_set_m_IsClicking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsClicking = value;
}
constexpr int32_t& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_ConsecutiveMouseDownCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConsecutiveMouseDownCount;
}
constexpr int32_t const& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_ConsecutiveMouseDownCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConsecutiveMouseDownCount;
}
constexpr void UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_set_m_ConsecutiveMouseDownCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ConsecutiveMouseDownCount = value;
}
constexpr int64_t& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_LastMouseDownTimeStamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMouseDownTimeStamp;
}
constexpr int64_t const& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_LastMouseDownTimeStamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMouseDownTimeStamp;
}
constexpr void UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_set_m_LastMouseDownTimeStamp(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastMouseDownTimeStamp = value;
}
constexpr ::UnityEngine::Event*& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_ImguiEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImguiEvent;
}
constexpr ::UnityEngine::Event* const& UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_get_m_ImguiEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImguiEvent;
}
constexpr void UnityEngine::UIElements::TextSelectingManipulator::__cordl_internal_set_m_ImguiEvent(::UnityEngine::Event* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ImguiEvent = value;
}
inline bool UnityEngine::UIElements::TextSelectingManipulator::get_isClicking() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "get_isClicking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::set_isClicking(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "set_isClicking", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::_ctor(::UnityEngine::UIElements::TextElement* textElement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textElement);
}
inline int32_t UnityEngine::UIElements::TextSelectingManipulator::get_cursorIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "get_cursorIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::set_cursorIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "set_cursorIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::TextSelectingManipulator::get_selectIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "get_selectIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::set_selectIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "set_selectIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::OnRevealCursor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "OnRevealCursor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::OnSelectIndexChange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "OnSelectIndexChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::OnCursorIndexChange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "OnCursorIndexChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::TextSelectingManipulator::RevealCursor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "RevealCursor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::TextSelectingManipulator::HasSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "HasSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::TextSelectingManipulator::HasFocus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "HasFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(),
                                                                                         { "HandleEventBubbleUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::OnFocusEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "OnFocusEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::OnBlurEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "OnBlurEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(), { "OnKeyDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::OnPointerDownEvent(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(),
                                                                                         { "OnPointerDownEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(),
                                                                                         { "OnPointerMoveEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::OnPointerUpEvent(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(),
                                                                                         { "OnPointerUpEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::OnValidateCommandEvent(::UnityEngine::UIElements::ValidateCommandEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(),
                                                                                         { "OnValidateCommandEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::ValidateCommandEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TextSelectingManipulator::OnExecuteCommandEvent(::UnityEngine::UIElements::ExecuteCommandEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(),
                                                                                         { "OnExecuteCommandEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::ExecuteCommandEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::TextSelectingManipulator::MoveDistanceQualifiesForDrag(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 current) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextSelectingManipulator*>(),
                                                           { "MoveDistanceQualifiesForDrag", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, start, current);
}
inline ::UnityEngine::UIElements::TextSelectingManipulator* UnityEngine::UIElements::TextSelectingManipulator::New_ctor(::UnityEngine::UIElements::TextElement* textElement) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextSelectingManipulator*>(textElement));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextSelectingManipulator::TextSelectingManipulator() {}
