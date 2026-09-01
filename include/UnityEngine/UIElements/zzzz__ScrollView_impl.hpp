#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ScrollView.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollViewMode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollerVisibility_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleResolvedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCancelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollViewMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollerVisibility_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scroller_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFloatAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__WheelEvent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView_UxmlFactory::*)()>(&::UnityEngine::UIElements::ScrollView_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d6eb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ScrollView_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ScrollView_UxmlFactory* UnityEngine::UIElements::ScrollView_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ScrollView_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ScrollView_UxmlFactory::ScrollView_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::ScrollView_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x6d6ebf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::ScrollView_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView_UxmlTraits::*)()>(&::UnityEngine::UIElements::ScrollView_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x6d6f004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>*&
UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_ScrollViewMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollViewMode;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>* const&
UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_ScrollViewMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollViewMode;
}
constexpr void
UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_set_m_ScrollViewMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollViewMode = value;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_NestedInteractionKind>*&
UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_NestedInteractionKind() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NestedInteractionKind;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_NestedInteractionKind>* const&
UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_NestedInteractionKind() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NestedInteractionKind;
}
constexpr void UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_set_m_NestedInteractionKind(
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_NestedInteractionKind>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NestedInteractionKind = value;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_ShowHorizontal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowHorizontal;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_ShowHorizontal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowHorizontal;
}
constexpr void UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_set_m_ShowHorizontal(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowHorizontal = value;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_ShowVertical() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowVertical;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_ShowVertical() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowVertical;
}
constexpr void UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_set_m_ShowVertical(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowVertical = value;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*&
UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_HorizontalScrollerVisibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollerVisibility;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* const&
UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_HorizontalScrollerVisibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollerVisibility;
}
constexpr void UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_set_m_HorizontalScrollerVisibility(
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HorizontalScrollerVisibility = value;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*&
UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_VerticalScrollerVisibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollerVisibility;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* const&
UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_VerticalScrollerVisibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollerVisibility;
}
constexpr void UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_set_m_VerticalScrollerVisibility(
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticalScrollerVisibility = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_HorizontalPageSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalPageSize;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_HorizontalPageSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalPageSize;
}
constexpr void UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_set_m_HorizontalPageSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HorizontalPageSize = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_VerticalPageSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalPageSize;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_VerticalPageSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalPageSize;
}
constexpr void UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_set_m_VerticalPageSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticalPageSize = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_MouseWheelScrollSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseWheelScrollSize;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_MouseWheelScrollSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseWheelScrollSize;
}
constexpr void UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_set_m_MouseWheelScrollSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseWheelScrollSize = value;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_TouchScrollBehavior>*&
UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_TouchScrollBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchScrollBehavior;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_TouchScrollBehavior>* const&
UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_TouchScrollBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchScrollBehavior;
}
constexpr void UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_set_m_TouchScrollBehavior(
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_TouchScrollBehavior>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TouchScrollBehavior = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_ScrollDecelerationRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollDecelerationRate;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_ScrollDecelerationRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollDecelerationRate;
}
constexpr void UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_set_m_ScrollDecelerationRate(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollDecelerationRate = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_Elasticity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Elasticity;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_get_m_Elasticity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Elasticity;
}
constexpr void UnityEngine::UIElements::ScrollView_UxmlTraits::__cordl_internal_set_m_Elasticity(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Elasticity = value;
}
inline void UnityEngine::UIElements::ScrollView_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                 ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ScrollView_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::ScrollView_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ScrollView_UxmlTraits* UnityEngine::UIElements::ScrollView_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ScrollView_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ScrollView_UxmlTraits::ScrollView_UxmlTraits() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior::ScrollView_TouchScrollBehavior(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior::ScrollView_TouchScrollBehavior() {}
constexpr ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior UnityEngine::UIElements::ScrollView_TouchScrollBehavior::Unrestricted{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior UnityEngine::UIElements::ScrollView_TouchScrollBehavior::Elastic{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior UnityEngine::UIElements::ScrollView_TouchScrollBehavior::Clamped{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::ScrollView_NestedInteractionKind::ScrollView_NestedInteractionKind(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ScrollView_NestedInteractionKind::ScrollView_NestedInteractionKind() {}
constexpr ::UnityEngine::UIElements::ScrollView_NestedInteractionKind UnityEngine::UIElements::ScrollView_NestedInteractionKind::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::ScrollView_NestedInteractionKind UnityEngine::UIElements::ScrollView_NestedInteractionKind::StopScrolling{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::ScrollView_NestedInteractionKind UnityEngine::UIElements::ScrollView_NestedInteractionKind::ForwardScrolling{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::ScrollView_TouchScrollingResult::ScrollView_TouchScrollingResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ScrollView_TouchScrollingResult::ScrollView_TouchScrollingResult() {}
constexpr ::UnityEngine::UIElements::ScrollView_TouchScrollingResult UnityEngine::UIElements::ScrollView_TouchScrollingResult::Apply{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::ScrollView_TouchScrollingResult UnityEngine::UIElements::ScrollView_TouchScrollingResult::Forward{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::ScrollView_TouchScrollingResult UnityEngine::UIElements::ScrollView_TouchScrollingResult::Block{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_horizontalScrollerVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ScrollerVisibility (::UnityEngine::UIElements::ScrollView::*)()>(
    &::UnityEngine::UIElements::ScrollView::get_horizontalScrollerVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d67390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_horizontalScrollerVisibility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_horizontalScrollerVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::ScrollerVisibility)>(
    &::UnityEngine::UIElements::ScrollView::set_horizontalScrollerVisibility)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6d67398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                             { "set_horizontalScrollerVisibility", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollerVisibility>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_verticalScrollerVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ScrollerVisibility (::UnityEngine::UIElements::ScrollView::*)()>(
    &::UnityEngine::UIElements::ScrollView::get_verticalScrollerVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d678e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_verticalScrollerVisibility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_verticalScrollerVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::ScrollerVisibility)>(
    &::UnityEngine::UIElements::ScrollView::set_verticalScrollerVisibility)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6d678f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_verticalScrollerVisibility", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollerVisibility>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_elasticAnimationIntervalMs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_elasticAnimationIntervalMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d67a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_elasticAnimationIntervalMs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_elasticAnimationIntervalMs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(int64_t)>(&::UnityEngine::UIElements::ScrollView::set_elasticAnimationIntervalMs)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6d67a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_elasticAnimationIntervalMs", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_showHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(bool)>(&::UnityEngine::UIElements::ScrollView::set_showHorizontal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d67c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_showHorizontal", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_showVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(bool)>(&::UnityEngine::UIElements::ScrollView::set_showVertical)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d67c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_showVertical", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_needsHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_needsHorizontal)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6d674b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_needsHorizontal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_needsVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_needsVertical)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d67500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_needsVertical", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_isVerticalScrollDisplayed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_isVerticalScrollDisplayed)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6d67d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_isVerticalScrollDisplayed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_isHorizontalScrollDisplayed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_isHorizontalScrollDisplayed)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6d67dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_isHorizontalScrollDisplayed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_scrollOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_scrollOffset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d67e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_scrollOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_scrollOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::ScrollView::set_scrollOffset)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6d67f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_scrollOffset", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_horizontalPageSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_horizontalPageSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d68488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_horizontalPageSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_horizontalPageSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(float_t)>(&::UnityEngine::UIElements::ScrollView::set_horizontalPageSize)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6d68490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_horizontalPageSize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_verticalPageSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_verticalPageSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d687c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_verticalPageSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_verticalPageSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(float_t)>(&::UnityEngine::UIElements::ScrollView::set_verticalPageSize)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6d687c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_verticalPageSize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_mouseWheelScrollSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_mouseWheelScrollSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d68af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_mouseWheelScrollSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_mouseWheelScrollSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(float_t)>(&::UnityEngine::UIElements::ScrollView::set_mouseWheelScrollSize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6d68b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_mouseWheelScrollSize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_scrollableWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_scrollableWidth)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6d67c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_scrollableWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_scrollableHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_scrollableHeight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6d67cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_scrollableHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_hasInertia
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_hasInertia)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d68bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_hasInertia", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_scrollDecelerationRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_scrollDecelerationRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d68bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_scrollDecelerationRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_scrollDecelerationRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(float_t)>(&::UnityEngine::UIElements::ScrollView::set_scrollDecelerationRate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6d68be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_scrollDecelerationRate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_elasticity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_elasticity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d68cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_elasticity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_elasticity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(float_t)>(&::UnityEngine::UIElements::ScrollView::set_elasticity)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6d68cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_elasticity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_touchScrollBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ScrollView_TouchScrollBehavior (::UnityEngine::UIElements::ScrollView::*)()>(
    &::UnityEngine::UIElements::ScrollView::get_touchScrollBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d68dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_touchScrollBehavior", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_touchScrollBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::ScrollView_TouchScrollBehavior)>(
    &::UnityEngine::UIElements::ScrollView::set_touchScrollBehavior)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6d68e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                             { "set_touchScrollBehavior", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollView_TouchScrollBehavior>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_nestedInteractionKind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ScrollView_NestedInteractionKind (::UnityEngine::UIElements::ScrollView::*)()>(
    &::UnityEngine::UIElements::ScrollView::get_nestedInteractionKind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d68f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_nestedInteractionKind", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_nestedInteractionKind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::ScrollView_NestedInteractionKind)>(
    &::UnityEngine::UIElements::ScrollView::set_nestedInteractionKind)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6d68f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                             { "set_nestedInteractionKind", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollView_NestedInteractionKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnHorizontalScrollDragElementChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::ScrollView::OnHorizontalScrollDragElementChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6d68fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                             { "OnHorizontalScrollDragElementChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnVerticalScrollDragElementChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::ScrollView::OnVerticalScrollDragElementChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6d68fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                             { "OnVerticalScrollDragElementChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.UpdateHorizontalSliderPageSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::UpdateHorizontalSliderPageSize)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6d68598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "UpdateHorizontalSliderPageSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.UpdateVerticalSliderPageSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::UpdateVerticalSliderPageSize)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6d688d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "UpdateVerticalSliderPageSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.UpdateContentViewTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::UpdateContentViewTransform)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x6d681d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "UpdateContentViewTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ScrollTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::ScrollView::ScrollTo)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6d6901c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ScrollTo", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.GetXDeltaOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::ScrollView::GetXDeltaOffset)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6d693a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "GetXDeltaOffset", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.GetYDeltaOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::ScrollView::GetYDeltaOffset)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6d691f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "GetYDeltaOffset", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.GetDeltaDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)(float_t, float_t, float_t, float_t)>(
    &::UnityEngine::UIElements::ScrollView::GetDeltaDistance)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d69558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                { "GetDeltaDistance", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_contentViewport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::ScrollView::*)()>(
    &::UnityEngine::UIElements::ScrollView::get_contentViewport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d695fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_contentViewport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_horizontalScroller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Scroller* (::UnityEngine::UIElements::ScrollView::*)()>(
    &::UnityEngine::UIElements::ScrollView::get_horizontalScroller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d69604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_horizontalScroller", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_verticalScroller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Scroller* (::UnityEngine::UIElements::ScrollView::*)()>(
    &::UnityEngine::UIElements::ScrollView::get_verticalScroller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d6960c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_verticalScroller", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_contentContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::ScrollView::*)()>(
    &::UnityEngine::UIElements::ScrollView::get_contentContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d69614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { ::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), 135 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d6961c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::ScrollViewMode)>(&::UnityEngine::UIElements::ScrollView::_ctor)> {
  constexpr static std::size_t size = 0xea4;
  constexpr static std::size_t addrs = 0x6d69624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollViewMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ScrollViewMode (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d6abf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_mode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::ScrollViewMode)>(&::UnityEngine::UIElements::ScrollView::set_mode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6d6ac00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_mode", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollViewMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.SetScrollViewMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::ScrollViewMode)>(
    &::UnityEngine::UIElements::ScrollView::SetScrollViewMode)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x6d6a4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "SetScrollViewMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollViewMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnAttachToPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::AttachToPanelEvent*)>(
    &::UnityEngine::UIElements::ScrollView::OnAttachToPanel)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x6d6aca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnAttachToPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::AttachToPanelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnDetachFromPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(
    &::UnityEngine::UIElements::ScrollView::OnDetachFromPanel)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x6d6b36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                                                           { "OnDetachFromPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::DetachFromPanelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnPointerCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::PointerCaptureEvent*)>(
    &::UnityEngine::UIElements::ScrollView::OnPointerCapture)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6d6b9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                                                           { "OnPointerCapture", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCaptureEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnPointerCaptureOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::PointerCaptureOutEvent*)>(
    &::UnityEngine::UIElements::ScrollView::OnPointerCaptureOut)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6d6ba60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                                                           { "OnPointerCaptureOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCaptureOutEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnGeometryChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::ScrollView::OnGeometryChanged)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6d6bc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                                                           { "OnGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ScheduleResetLayoutPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::ScheduleResetLayoutPass)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6d6bd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ScheduleResetLayoutPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ResetLayoutPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::ResetLayoutPass)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d6b99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ResetLayoutPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ComputeElasticOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t, float_t)>(&::UnityEngine::UIElements::ScrollView::ComputeElasticOffset)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6d6bf8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ComputeElasticOffset",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ComputeInitialSpringBackVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::ComputeInitialSpringBackVelocity)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6d6c080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ComputeInitialSpringBackVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.SpringBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::SpringBack)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6d6c174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "SpringBack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ApplyScrollInertia
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::ApplyScrollInertia)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6d6c304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ApplyScrollInertia", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.PostPointerUpAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::PostPointerUpAnimation)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6d6c52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "PostPointerUpAnimation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::ScrollView::OnPointerDown)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6d6c704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnPointerMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(
    &::UnityEngine::UIElements::ScrollView::OnPointerMove)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6d6ca78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnPointerCancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::PointerCancelEvent*)>(
    &::UnityEngine::UIElements::ScrollView::OnPointerCancel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6d6d0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnPointerCancel", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCancelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::ScrollView::OnPointerUp)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6d6d12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.InitTouchScrolling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::ScrollView::InitTouchScrolling)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6d6c94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "InitTouchScrolling", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ComputeTouchScrolling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ScrollView_TouchScrollingResult (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::ScrollView::ComputeTouchScrolling)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x6d6cc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ComputeTouchScrolling", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ApplyTouchScrolling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::ScrollView::ApplyTouchScrolling)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6d6d218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ApplyTouchScrolling", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ReleaseScrolling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ScrollView::*)(int32_t, ::UnityEngine::UIElements::IEventHandler*)>(
    &::UnityEngine::UIElements::ScrollView::ReleaseScrolling)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6d6bb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                             { "ReleaseScrolling", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ExecuteElasticSpringAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::ExecuteElasticSpringAnimation)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6d6d46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ExecuteElasticSpringAnimation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.AdjustScrollers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::AdjustScrollers)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6d6d698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "AdjustScrollers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.UpdateScrollers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(bool, bool)>(&::UnityEngine::UIElements::ScrollView::UpdateScrollers)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x6d6754c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "UpdateScrollers", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnScrollersGeometryChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::ScrollView::OnScrollersGeometryChanged)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6d6daa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnScrollersGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnScrollWheel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::WheelEvent*)>(
    &::UnityEngine::UIElements::ScrollView::OnScrollWheel)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x6d6dc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnScrollWheel", {}, { ::i2c::type_of<::UnityEngine::UIElements::WheelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnRootCustomStyleResolved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::CustomStyleResolvedEvent*)>(
    &::UnityEngine::UIElements::ScrollView::OnRootCustomStyleResolved)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d6e070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                             { "OnRootCustomStyleResolved", {}, { ::i2c::type_of<::UnityEngine::UIElements::CustomStyleResolvedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnRootPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::ScrollView::OnRootPointerUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d6e074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnRootPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ReadSingleLineHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::ReadSingleLineHeight)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6d6b27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ReadSingleLineHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.UpdateElasticBehaviour
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::UpdateElasticBehaviour)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6d6df98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "UpdateElasticBehaviour", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.__ctor_b__138_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(float_t)>(&::UnityEngine::UIElements::ScrollView::__ctor_b__138_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6d6eb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "<.ctor>b__138_0", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.__ctor_b__138_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(float_t)>(&::UnityEngine::UIElements::ScrollView::__ctor_b__138_1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6d6eb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "<.ctor>b__138_1", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_FirstLayoutPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstLayoutPass;
}
constexpr int32_t const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_FirstLayoutPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstLayoutPass;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_FirstLayoutPass(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FirstLayoutPass = value;
}
constexpr ::UnityEngine::UIElements::ScrollerVisibility& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_HorizontalScrollerVisibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollerVisibility;
}
constexpr ::UnityEngine::UIElements::ScrollerVisibility const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_HorizontalScrollerVisibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollerVisibility;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_HorizontalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HorizontalScrollerVisibility = value;
}
constexpr ::UnityEngine::UIElements::ScrollerVisibility& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_VerticalScrollerVisibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollerVisibility;
}
constexpr ::UnityEngine::UIElements::ScrollerVisibility const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_VerticalScrollerVisibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollerVisibility;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_VerticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticalScrollerVisibility = value;
}
constexpr int64_t& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_ElasticAnimationIntervalMs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElasticAnimationIntervalMs;
}
constexpr int64_t const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_ElasticAnimationIntervalMs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElasticAnimationIntervalMs;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_ElasticAnimationIntervalMs(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ElasticAnimationIntervalMs = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_AttachedRootVisualContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachedRootVisualContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_AttachedRootVisualContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachedRootVisualContainer;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_AttachedRootVisualContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AttachedRootVisualContainer = value;
}
constexpr float_t& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_SingleLineHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SingleLineHeight;
}
constexpr float_t const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_SingleLineHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SingleLineHeight;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_SingleLineHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SingleLineHeight = value;
}
constexpr bool& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_MouseWheelScrollSizeIsInline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseWheelScrollSizeIsInline;
}
constexpr bool const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_MouseWheelScrollSizeIsInline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseWheelScrollSizeIsInline;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_MouseWheelScrollSizeIsInline(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseWheelScrollSizeIsInline = value;
}
constexpr float_t& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_HorizontalPageSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalPageSize;
}
constexpr float_t const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_HorizontalPageSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalPageSize;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_HorizontalPageSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HorizontalPageSize = value;
}
constexpr float_t& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_VerticalPageSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalPageSize;
}
constexpr float_t const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_VerticalPageSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalPageSize;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_VerticalPageSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticalPageSize = value;
}
constexpr float_t& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_MouseWheelScrollSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseWheelScrollSize;
}
constexpr float_t const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_MouseWheelScrollSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseWheelScrollSize;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_MouseWheelScrollSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseWheelScrollSize = value;
}
constexpr float_t& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_ScrollDecelerationRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollDecelerationRate;
}
constexpr float_t const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_ScrollDecelerationRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollDecelerationRate;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_ScrollDecelerationRate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollDecelerationRate = value;
}
constexpr float_t& UnityEngine::UIElements::ScrollView::__cordl_internal_get_k_ScaledPixelsPerPointMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_ScaledPixelsPerPointMultiplier;
}
constexpr float_t const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_k_ScaledPixelsPerPointMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_ScaledPixelsPerPointMultiplier;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_k_ScaledPixelsPerPointMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k_ScaledPixelsPerPointMultiplier = value;
}
constexpr float_t& UnityEngine::UIElements::ScrollView::__cordl_internal_get_k_TouchScrollInertiaBaseTimeInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_TouchScrollInertiaBaseTimeInterval;
}
constexpr float_t const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_k_TouchScrollInertiaBaseTimeInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_TouchScrollInertiaBaseTimeInterval;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_k_TouchScrollInertiaBaseTimeInterval(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k_TouchScrollInertiaBaseTimeInterval = value;
}
constexpr float_t& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_Elasticity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Elasticity;
}
constexpr float_t const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_Elasticity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Elasticity;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_Elasticity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Elasticity = value;
}
constexpr ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_TouchScrollBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchScrollBehavior;
}
constexpr ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_TouchScrollBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchScrollBehavior;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_TouchScrollBehavior(::UnityEngine::UIElements::ScrollView_TouchScrollBehavior value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TouchScrollBehavior = value;
}
constexpr ::UnityEngine::UIElements::ScrollView_NestedInteractionKind& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_NestedInteractionKind() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NestedInteractionKind;
}
constexpr ::UnityEngine::UIElements::ScrollView_NestedInteractionKind const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_NestedInteractionKind() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NestedInteractionKind;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_NestedInteractionKind(::UnityEngine::UIElements::ScrollView_NestedInteractionKind value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NestedInteractionKind = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ScrollView::__cordl_internal_get__contentViewport_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentViewport_k__BackingField;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ScrollView::__cordl_internal_get__contentViewport_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentViewport_k__BackingField;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set__contentViewport_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contentViewport_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::Scroller*& UnityEngine::UIElements::ScrollView::__cordl_internal_get__horizontalScroller_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____horizontalScroller_k__BackingField;
}
constexpr ::UnityEngine::UIElements::Scroller* const& UnityEngine::UIElements::ScrollView::__cordl_internal_get__horizontalScroller_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____horizontalScroller_k__BackingField;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set__horizontalScroller_k__BackingField(::UnityEngine::UIElements::Scroller* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____horizontalScroller_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::Scroller*& UnityEngine::UIElements::ScrollView::__cordl_internal_get__verticalScroller_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalScroller_k__BackingField;
}
constexpr ::UnityEngine::UIElements::Scroller* const& UnityEngine::UIElements::ScrollView::__cordl_internal_get__verticalScroller_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalScroller_k__BackingField;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set__verticalScroller_k__BackingField(::UnityEngine::UIElements::Scroller* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____verticalScroller_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_ContentContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_ContentContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainer;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentContainer = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_ContentAndVerticalScrollContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentAndVerticalScrollContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_ContentAndVerticalScrollContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentAndVerticalScrollContainer;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_ContentAndVerticalScrollContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentAndVerticalScrollContainer = value;
}
constexpr float_t& UnityEngine::UIElements::ScrollView::__cordl_internal_get_previousVerticalTouchScrollTimeStamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousVerticalTouchScrollTimeStamp;
}
constexpr float_t const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_previousVerticalTouchScrollTimeStamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousVerticalTouchScrollTimeStamp;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_previousVerticalTouchScrollTimeStamp(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previousVerticalTouchScrollTimeStamp = value;
}
constexpr float_t& UnityEngine::UIElements::ScrollView::__cordl_internal_get_previousHorizontalTouchScrollTimeStamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousHorizontalTouchScrollTimeStamp;
}
constexpr float_t const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_previousHorizontalTouchScrollTimeStamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousHorizontalTouchScrollTimeStamp;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_previousHorizontalTouchScrollTimeStamp(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previousHorizontalTouchScrollTimeStamp = value;
}
constexpr float_t& UnityEngine::UIElements::ScrollView::__cordl_internal_get_elapsedTimeSinceLastVerticalTouchScroll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elapsedTimeSinceLastVerticalTouchScroll;
}
constexpr float_t const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_elapsedTimeSinceLastVerticalTouchScroll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elapsedTimeSinceLastVerticalTouchScroll;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_elapsedTimeSinceLastVerticalTouchScroll(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elapsedTimeSinceLastVerticalTouchScroll = value;
}
constexpr float_t& UnityEngine::UIElements::ScrollView::__cordl_internal_get_elapsedTimeSinceLastHorizontalTouchScroll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elapsedTimeSinceLastHorizontalTouchScroll;
}
constexpr float_t const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_elapsedTimeSinceLastHorizontalTouchScroll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elapsedTimeSinceLastHorizontalTouchScroll;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_elapsedTimeSinceLastHorizontalTouchScroll(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elapsedTimeSinceLastHorizontalTouchScroll = value;
}
constexpr ::UnityEngine::UIElements::ScrollViewMode& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_Mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mode;
}
constexpr ::UnityEngine::UIElements::ScrollViewMode const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_Mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mode;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_Mode(::UnityEngine::UIElements::ScrollViewMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Mode = value;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_ScheduledLayoutPassResetItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScheduledLayoutPassResetItem;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_ScheduledLayoutPassResetItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScheduledLayoutPassResetItem;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_ScheduledLayoutPassResetItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScheduledLayoutPassResetItem = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_StartPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartPosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_StartPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartPosition;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_StartPosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartPosition = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_PointerStartPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerStartPosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_PointerStartPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerStartPosition;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_PointerStartPosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerStartPosition = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_Velocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Velocity;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_Velocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Velocity;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_Velocity(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Velocity = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_SpringBackVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpringBackVelocity;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_SpringBackVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpringBackVelocity;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_SpringBackVelocity(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpringBackVelocity = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_LowBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowBounds;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_LowBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowBounds;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_LowBounds(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LowBounds = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_HighBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighBounds;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_HighBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighBounds;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_HighBounds(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HighBounds = value;
}
constexpr float_t& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_LastVelocityLerpTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastVelocityLerpTime;
}
constexpr float_t const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_LastVelocityLerpTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastVelocityLerpTime;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_LastVelocityLerpTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastVelocityLerpTime = value;
}
constexpr bool& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_StartedMoving() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartedMoving;
}
constexpr bool const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_StartedMoving() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartedMoving;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_StartedMoving(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartedMoving = value;
}
constexpr bool& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_TouchPointerMoveAllowed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchPointerMoveAllowed;
}
constexpr bool const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_TouchPointerMoveAllowed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchPointerMoveAllowed;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_TouchPointerMoveAllowed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TouchPointerMoveAllowed = value;
}
constexpr bool& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_TouchStoppedVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchStoppedVelocity;
}
constexpr bool const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_TouchStoppedVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchStoppedVelocity;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_TouchStoppedVelocity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TouchStoppedVelocity = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_CapturedTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CapturedTarget;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_CapturedTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CapturedTarget;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_CapturedTarget(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CapturedTarget = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>*& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_CapturedTargetPointerMoveCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CapturedTargetPointerMoveCallback;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* const&
UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_CapturedTargetPointerMoveCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CapturedTargetPointerMoveCallback;
}
constexpr void
UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_CapturedTargetPointerMoveCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CapturedTargetPointerMoveCallback = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>*& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_CapturedTargetPointerUpCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CapturedTargetPointerUpCallback;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* const&
UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_CapturedTargetPointerUpCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CapturedTargetPointerUpCallback;
}
constexpr void
UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_CapturedTargetPointerUpCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CapturedTargetPointerUpCallback = value;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_PostPointerUpAnimation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostPointerUpAnimation;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& UnityEngine::UIElements::ScrollView::__cordl_internal_get_m_PostPointerUpAnimation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostPointerUpAnimation;
}
constexpr void UnityEngine::UIElements::ScrollView::__cordl_internal_set_m_PostPointerUpAnimation(::UnityEngine::UIElements::IVisualElementScheduledItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PostPointerUpAnimation = value;
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_horizontalScrollerVisibilityProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "horizontalScrollerVisibilityProperty", ::UnityEngine::UIElements::ScrollView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ScrollView::getStaticF_horizontalScrollerVisibilityProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "horizontalScrollerVisibilityProperty", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_verticalScrollerVisibilityProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "verticalScrollerVisibilityProperty", ::UnityEngine::UIElements::ScrollView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ScrollView::getStaticF_verticalScrollerVisibilityProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "verticalScrollerVisibilityProperty", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_scrollOffsetProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "scrollOffsetProperty", ::UnityEngine::UIElements::ScrollView*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ScrollView::getStaticF_scrollOffsetProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "scrollOffsetProperty", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_horizontalPageSizeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "horizontalPageSizeProperty", ::UnityEngine::UIElements::ScrollView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ScrollView::getStaticF_horizontalPageSizeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "horizontalPageSizeProperty", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_verticalPageSizeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "verticalPageSizeProperty", ::UnityEngine::UIElements::ScrollView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ScrollView::getStaticF_verticalPageSizeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "verticalPageSizeProperty", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_mouseWheelScrollSizeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "mouseWheelScrollSizeProperty", ::UnityEngine::UIElements::ScrollView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ScrollView::getStaticF_mouseWheelScrollSizeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "mouseWheelScrollSizeProperty", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_scrollDecelerationRateProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "scrollDecelerationRateProperty", ::UnityEngine::UIElements::ScrollView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ScrollView::getStaticF_scrollDecelerationRateProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "scrollDecelerationRateProperty", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_elasticityProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "elasticityProperty", ::UnityEngine::UIElements::ScrollView*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ScrollView::getStaticF_elasticityProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "elasticityProperty", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_touchScrollBehaviorProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "touchScrollBehaviorProperty", ::UnityEngine::UIElements::ScrollView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ScrollView::getStaticF_touchScrollBehaviorProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "touchScrollBehaviorProperty", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_nestedInteractionKindProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "nestedInteractionKindProperty", ::UnityEngine::UIElements::ScrollView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ScrollView::getStaticF_nestedInteractionKindProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "nestedInteractionKindProperty", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_modeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "modeProperty", ::UnityEngine::UIElements::ScrollView*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ScrollView::getStaticF_modeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "modeProperty", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_elasticAnimationIntervalMsProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "elasticAnimationIntervalMsProperty", ::UnityEngine::UIElements::ScrollView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ScrollView::getStaticF_elasticAnimationIntervalMsProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "elasticAnimationIntervalMsProperty", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_k_DefaultScrollDecelerationRate(float_t value) {
  ::cordl_internals::setStaticField<float_t, "k_DefaultScrollDecelerationRate", ::UnityEngine::UIElements::ScrollView*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::UIElements::ScrollView::getStaticF_k_DefaultScrollDecelerationRate() {
  return ::cordl_internals::getStaticField<float_t, "k_DefaultScrollDecelerationRate", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_k_DefaultElasticity(float_t value) {
  ::cordl_internals::setStaticField<float_t, "k_DefaultElasticity", ::UnityEngine::UIElements::ScrollView*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::UIElements::ScrollView::getStaticF_k_DefaultElasticity() {
  return ::cordl_internals::getStaticField<float_t, "k_DefaultElasticity", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_viewportUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "viewportUssClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_viewportUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "viewportUssClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_horizontalVariantViewportUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "horizontalVariantViewportUssClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_horizontalVariantViewportUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "horizontalVariantViewportUssClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_verticalVariantViewportUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "verticalVariantViewportUssClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_verticalVariantViewportUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "verticalVariantViewportUssClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_verticalHorizontalVariantViewportUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "verticalHorizontalVariantViewportUssClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_verticalHorizontalVariantViewportUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "verticalHorizontalVariantViewportUssClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_contentAndVerticalScrollUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "contentAndVerticalScrollUssClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_contentAndVerticalScrollUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "contentAndVerticalScrollUssClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_contentUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "contentUssClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_contentUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "contentUssClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_horizontalVariantContentUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "horizontalVariantContentUssClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_horizontalVariantContentUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "horizontalVariantContentUssClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_verticalVariantContentUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "verticalVariantContentUssClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_verticalVariantContentUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "verticalVariantContentUssClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_verticalHorizontalVariantContentUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "verticalHorizontalVariantContentUssClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_verticalHorizontalVariantContentUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "verticalHorizontalVariantContentUssClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_hScrollerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "hScrollerUssClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_hScrollerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "hScrollerUssClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_vScrollerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "vScrollerUssClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_vScrollerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "vScrollerUssClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_horizontalVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "horizontalVariantUssClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_horizontalVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "horizontalVariantUssClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_verticalVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "verticalVariantUssClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_verticalVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "verticalVariantUssClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_verticalHorizontalVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "verticalHorizontalVariantUssClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_verticalHorizontalVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "verticalHorizontalVariantUssClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline void UnityEngine::UIElements::ScrollView::setStaticF_scrollVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "scrollVariantUssClassName", ::UnityEngine::UIElements::ScrollView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ScrollView::getStaticF_scrollVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "scrollVariantUssClassName", ::UnityEngine::UIElements::ScrollView*>();
}
inline ::UnityEngine::UIElements::ScrollerVisibility UnityEngine::UIElements::ScrollView::get_horizontalScrollerVisibility() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_horizontalScrollerVisibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ScrollerVisibility>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::set_horizontalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_horizontalScrollerVisibility", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollerVisibility>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ScrollerVisibility UnityEngine::UIElements::ScrollView::get_verticalScrollerVisibility() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_verticalScrollerVisibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ScrollerVisibility>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::set_verticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_verticalScrollerVisibility", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollerVisibility>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t UnityEngine::UIElements::ScrollView::get_elasticAnimationIntervalMs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_elasticAnimationIntervalMs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::set_elasticAnimationIntervalMs(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_elasticAnimationIntervalMs", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ScrollView::set_showHorizontal(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_showHorizontal", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ScrollView::set_showVertical(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_showVertical", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::ScrollView::get_needsHorizontal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_needsHorizontal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::ScrollView::get_needsVertical() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_needsVertical", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::ScrollView::get_isVerticalScrollDisplayed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_isVerticalScrollDisplayed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::ScrollView::get_isHorizontalScrollDisplayed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_isHorizontalScrollDisplayed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::ScrollView::get_scrollOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_scrollOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::set_scrollOffset(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_scrollOffset", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::ScrollView::get_horizontalPageSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_horizontalPageSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::set_horizontalPageSize(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_horizontalPageSize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::ScrollView::get_verticalPageSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_verticalPageSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::set_verticalPageSize(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_verticalPageSize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::ScrollView::get_mouseWheelScrollSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_mouseWheelScrollSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::set_mouseWheelScrollSize(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_mouseWheelScrollSize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::ScrollView::get_scrollableWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_scrollableWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::ScrollView::get_scrollableHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_scrollableHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::ScrollView::get_hasInertia() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_hasInertia", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::ScrollView::get_scrollDecelerationRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_scrollDecelerationRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::set_scrollDecelerationRate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_scrollDecelerationRate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::ScrollView::get_elasticity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_elasticity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::set_elasticity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_elasticity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior UnityEngine::UIElements::ScrollView::get_touchScrollBehavior() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_touchScrollBehavior", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ScrollView_TouchScrollBehavior>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::set_touchScrollBehavior(::UnityEngine::UIElements::ScrollView_TouchScrollBehavior value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                           { "set_touchScrollBehavior", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollView_TouchScrollBehavior>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ScrollView_NestedInteractionKind UnityEngine::UIElements::ScrollView::get_nestedInteractionKind() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_nestedInteractionKind", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ScrollView_NestedInteractionKind>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::set_nestedInteractionKind(::UnityEngine::UIElements::ScrollView_NestedInteractionKind value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                           { "set_nestedInteractionKind", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollView_NestedInteractionKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ScrollView::OnHorizontalScrollDragElementChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                           { "OnHorizontalScrollDragElementChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ScrollView::OnVerticalScrollDragElementChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                           { "OnVerticalScrollDragElementChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ScrollView::UpdateHorizontalSliderPageSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "UpdateHorizontalSliderPageSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::UpdateVerticalSliderPageSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "UpdateVerticalSliderPageSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::UpdateContentViewTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "UpdateContentViewTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::ScrollTo(::UnityEngine::UIElements::VisualElement* child) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ScrollTo", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, child);
}
inline float_t UnityEngine::UIElements::ScrollView::GetXDeltaOffset(::UnityEngine::UIElements::VisualElement* child) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "GetXDeltaOffset", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, child);
}
inline float_t UnityEngine::UIElements::ScrollView::GetYDeltaOffset(::UnityEngine::UIElements::VisualElement* child) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "GetYDeltaOffset", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, child);
}
inline float_t UnityEngine::UIElements::ScrollView::GetDeltaDistance(float_t viewMin, float_t viewMax, float_t childBoundaryMin, float_t childBoundaryMax) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                              { "GetDeltaDistance", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, viewMin, viewMax, childBoundaryMin, childBoundaryMax);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::ScrollView::get_contentViewport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_contentViewport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Scroller* UnityEngine::UIElements::ScrollView::get_horizontalScroller() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_horizontalScroller", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Scroller*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Scroller* UnityEngine::UIElements::ScrollView::get_verticalScroller() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_verticalScroller", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Scroller*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::ScrollView::get_contentContainer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), 135 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::_ctor(::UnityEngine::UIElements::ScrollViewMode scrollViewMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollViewMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scrollViewMode);
}
inline ::UnityEngine::UIElements::ScrollViewMode UnityEngine::UIElements::ScrollView::get_mode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "get_mode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ScrollViewMode>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::set_mode(::UnityEngine::UIElements::ScrollViewMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "set_mode", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollViewMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ScrollView::SetScrollViewMode(::UnityEngine::UIElements::ScrollViewMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "SetScrollViewMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollViewMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void UnityEngine::UIElements::ScrollView::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnAttachToPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::AttachToPanelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ScrollView::OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                                                         { "OnDetachFromPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::DetachFromPanelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ScrollView::OnPointerCapture(::UnityEngine::UIElements::PointerCaptureEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnPointerCapture", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCaptureEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ScrollView::OnPointerCaptureOut(::UnityEngine::UIElements::PointerCaptureOutEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                                                         { "OnPointerCaptureOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCaptureOutEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ScrollView::OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                                                         { "OnGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ScrollView::ScheduleResetLayoutPass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ScheduleResetLayoutPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::ResetLayoutPass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ResetLayoutPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::ScrollView::ComputeElasticOffset(float_t deltaPointer, float_t initialScrollOffset, float_t lowLimit, float_t hardLowLimit, float_t highLimit,
                                                                         float_t hardHighLimit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ComputeElasticOffset",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, deltaPointer, initialScrollOffset, lowLimit, hardLowLimit, highLimit, hardHighLimit);
}
inline void UnityEngine::UIElements::ScrollView::ComputeInitialSpringBackVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ComputeInitialSpringBackVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::SpringBack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "SpringBack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::ApplyScrollInertia() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ApplyScrollInertia", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::PostPointerUpAnimation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "PostPointerUpAnimation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ScrollView::OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ScrollView::OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnPointerCancel", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCancelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ScrollView::OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ScrollView::InitTouchScrolling(::UnityEngine::Vector2 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "InitTouchScrolling", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline ::UnityEngine::UIElements::ScrollView_TouchScrollingResult UnityEngine::UIElements::ScrollView::ComputeTouchScrolling(::UnityEngine::Vector2 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ComputeTouchScrolling", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ScrollView_TouchScrollingResult>(this, ___internal_method, position);
}
inline bool UnityEngine::UIElements::ScrollView::ApplyTouchScrolling(::UnityEngine::Vector2 newScrollOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ApplyTouchScrolling", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newScrollOffset);
}
inline bool UnityEngine::UIElements::ScrollView::ReleaseScrolling(int32_t pointerId, ::UnityEngine::UIElements::IEventHandler* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(),
                                                           { "ReleaseScrolling", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerId, target);
}
inline void UnityEngine::UIElements::ScrollView::ExecuteElasticSpringAnimation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ExecuteElasticSpringAnimation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::AdjustScrollers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "AdjustScrollers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::UpdateScrollers(bool displayHorizontal, bool displayVertical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "UpdateScrollers", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayHorizontal, displayVertical);
}
inline void UnityEngine::UIElements::ScrollView::OnScrollersGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnScrollersGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ScrollView::OnScrollWheel(::UnityEngine::UIElements::WheelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnScrollWheel", {}, { ::i2c::type_of<::UnityEngine::UIElements::WheelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ScrollView::OnRootCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnRootCustomStyleResolved", {}, { ::i2c::type_of<::UnityEngine::UIElements::CustomStyleResolvedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ScrollView::OnRootPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "OnRootPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ScrollView::ReadSingleLineHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "ReadSingleLineHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::UpdateElasticBehaviour() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "UpdateElasticBehaviour", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ScrollView::__ctor_b__138_0(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "<.ctor>b__138_0", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ScrollView::__ctor_b__138_1(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScrollView*>(), { "<.ctor>b__138_1", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ScrollView* UnityEngine::UIElements::ScrollView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ScrollView*>());
}
inline ::UnityEngine::UIElements::ScrollView* UnityEngine::UIElements::ScrollView::New_ctor(::UnityEngine::UIElements::ScrollViewMode scrollViewMode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ScrollView*>(scrollViewMode));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ScrollView::ScrollView() {}
