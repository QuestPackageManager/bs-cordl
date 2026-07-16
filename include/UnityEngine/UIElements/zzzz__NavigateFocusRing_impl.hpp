#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigateFocusRing.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigateFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigateFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection::*)(int32_t)>(
    &::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6da7f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::NavigateFocusRing_ChangeDirection::_ctor(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* UnityEngine::UIElements::NavigateFocusRing_ChangeDirection::New_ctor(int32_t i) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(i));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection::NavigateFocusRing_ChangeDirection() {}
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal.ValidateHierarchyTraversal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::ValidateHierarchyTraversal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6da7fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal>(),
                                                                                           { "ValidateHierarchyTraversal", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal.ValidateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::ValidateElement)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6da8090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal>(),
                                                                                           { "ValidateElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal.Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::Order)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6da815c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal>(),
                                                { "Order", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal.StrictOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::StrictOrder)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6da8500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal>(),
                                                { "StrictOrder", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal.StrictOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(
    &::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::StrictOrder)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6da8248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal>(),
                                                                                           { "StrictOrder", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal.TieBreaker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(
    &::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::TieBreaker)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6da8404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal>(),
                                                                                           { "TieBreaker", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal.GetBestOverall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (
    ::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::GetBestOverall)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6da7b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal>(),
                                         { "GetBestOverall", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::ValidateHierarchyTraversal(::UnityEngine::UIElements::VisualElement* v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal>(),
                                                                                         { "ValidateHierarchyTraversal", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, v);
}
inline bool UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::ValidateElement(::UnityEngine::UIElements::VisualElement* v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal>(),
                                                                                         { "ValidateElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, v);
}
inline int32_t UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::Order(::UnityEngine::UIElements::VisualElement* a, ::UnityEngine::UIElements::VisualElement* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal>(),
                                              { "Order", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, a, b);
}
inline int32_t UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::StrictOrder(::UnityEngine::UIElements::VisualElement* a, ::UnityEngine::UIElements::VisualElement* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal>(),
                                              { "StrictOrder", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, a, b);
}
inline int32_t UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::StrictOrder(::UnityEngine::Rect ra, ::UnityEngine::Rect rb) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal>(),
                                                                                         { "StrictOrder", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, ra, rb);
}
inline int32_t UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::TieBreaker(::UnityEngine::Rect ra, ::UnityEngine::Rect rb) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal>(),
                                                                                         { "TieBreaker", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, ra, rb);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::GetBestOverall(::UnityEngine::UIElements::VisualElement* candidate,
                                                                                                                                        ::UnityEngine::UIElements::VisualElement* bestSoFar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal>(),
                                              { "GetBestOverall", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(*this, ___internal_method, candidate, bestSoFar);
}
// Ctor Parameters [CppParam { name: "currentFocusable", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "validRect", ty:
// "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstPass", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "direction", ty:
// "::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::NavigateFocusRing_FocusableHierarchyTraversal(
    ::UnityEngine::UIElements::VisualElement* currentFocusable, ::UnityEngine::Rect validRect, bool firstPass, ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* direction) noexcept {
  this->currentFocusable = currentFocusable;
  this->validRect = validRect;
  this->firstPass = firstPass;
  this->direction = direction;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::NavigateFocusRing_FocusableHierarchyTraversal::NavigateFocusRing_FocusableHierarchyTraversal() {}
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.get_focusController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FocusController* (::UnityEngine::UIElements::NavigateFocusRing::*)()>(
    &::UnityEngine::UIElements::NavigateFocusRing::get_focusController)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6da7244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(), { "get_focusController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::NavigateFocusRing::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::NavigateFocusRing::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6da7264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.GetFocusChangeDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::FocusChangeDirection* (::UnityEngine::UIElements::NavigateFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::EventBase*)>(
        &::UnityEngine::UIElements::NavigateFocusRing::GetFocusChangeDirection)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x6da72d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                                         { "GetFocusChangeDirection", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.GetNextFocusable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::NavigateFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*)>(
        &::UnityEngine::UIElements::NavigateFocusRing::GetNextFocusable)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6da7638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(), { ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.GetNextFocusable2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Focusable* (
    ::UnityEngine::UIElements::NavigateFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*)>(
    &::UnityEngine::UIElements::NavigateFocusRing::GetNextFocusable2D)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x6da7794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                         { "GetNextFocusable2D", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::NavigateFocusRing::IsActive)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6da7c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(), { "IsActive", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.IsNavigable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::Focusable*)>(&::UnityEngine::UIElements::NavigateFocusRing::IsNavigable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6da7d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(), { "IsNavigable", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_get_m_Root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Root;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_get_m_Root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Root;
}
constexpr void UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_set_m_Root(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Root = value;
}
constexpr ::UnityEngine::UIElements::VisualElementFocusRing*& UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_get_m_Ring() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ring;
}
constexpr ::UnityEngine::UIElements::VisualElementFocusRing* const& UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_get_m_Ring() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ring;
}
constexpr void UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_set_m_Ring(::UnityEngine::UIElements::VisualElementFocusRing* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ring = value;
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Left(::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Left", ::UnityEngine::UIElements::NavigateFocusRing*>(
      std::forward<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Left() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Left", ::UnityEngine::UIElements::NavigateFocusRing*>();
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Right(::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Right", ::UnityEngine::UIElements::NavigateFocusRing*>(
      std::forward<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Right() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Right", ::UnityEngine::UIElements::NavigateFocusRing*>();
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Up(::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Up", ::UnityEngine::UIElements::NavigateFocusRing*>(
      std::forward<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Up() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Up", ::UnityEngine::UIElements::NavigateFocusRing*>();
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Down(::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Down", ::UnityEngine::UIElements::NavigateFocusRing*>(
      std::forward<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Down() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Down", ::UnityEngine::UIElements::NavigateFocusRing*>();
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Next(::UnityEngine::UIElements::FocusChangeDirection* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FocusChangeDirection*, "Next", ::UnityEngine::UIElements::NavigateFocusRing*>(
      std::forward<::UnityEngine::UIElements::FocusChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Next() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FocusChangeDirection*, "Next", ::UnityEngine::UIElements::NavigateFocusRing*>();
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Previous(::UnityEngine::UIElements::FocusChangeDirection* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FocusChangeDirection*, "Previous", ::UnityEngine::UIElements::NavigateFocusRing*>(
      std::forward<::UnityEngine::UIElements::FocusChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Previous() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FocusChangeDirection*, "Previous", ::UnityEngine::UIElements::NavigateFocusRing*>();
}
inline ::UnityEngine::UIElements::FocusController* UnityEngine::UIElements::NavigateFocusRing::get_focusController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(), { "get_focusController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusController*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::NavigateFocusRing::_ctor(::UnityEngine::UIElements::VisualElement* root) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::NavigateFocusRing::GetFocusChangeDirection(::UnityEngine::UIElements::Focusable* currentFocusable,
                                                                                                                            ::UnityEngine::UIElements::EventBase* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                                       { "GetFocusChangeDirection", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusChangeDirection*>(this, ___internal_method, currentFocusable, e);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::NavigateFocusRing::GetNextFocusable(::UnityEngine::UIElements::Focusable* currentFocusable,
                                                                                                          ::UnityEngine::UIElements::FocusChangeDirection* direction) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*>(this, ___internal_method, currentFocusable, direction);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::NavigateFocusRing::GetNextFocusable2D(::UnityEngine::UIElements::Focusable* currentFocusable,
                                                                                                            ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                          { "GetNextFocusable2D", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*>(this, ___internal_method, currentFocusable, direction);
}
inline bool UnityEngine::UIElements::NavigateFocusRing::IsActive(::UnityEngine::UIElements::VisualElement* v) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(), { "IsActive", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v);
}
inline bool UnityEngine::UIElements::NavigateFocusRing::IsNavigable(::UnityEngine::UIElements::Focusable* focusable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(), { "IsNavigable", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, focusable);
}
inline ::UnityEngine::UIElements::NavigateFocusRing* UnityEngine::UIElements::NavigateFocusRing::New_ctor(::UnityEngine::UIElements::VisualElement* root) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::NavigateFocusRing*>(root));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IFocusRing"
constexpr UnityEngine::UIElements::NavigateFocusRing::operator ::UnityEngine::UIElements::IFocusRing*() noexcept {
  return static_cast<::UnityEngine::UIElements::IFocusRing*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IFocusRing"
constexpr ::UnityEngine::UIElements::IFocusRing* UnityEngine::UIElements::NavigateFocusRing::i___UnityEngine__UIElements__IFocusRing() noexcept {
  return static_cast<::UnityEngine::UIElements::IFocusRing*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::NavigateFocusRing::NavigateFocusRing() {}
