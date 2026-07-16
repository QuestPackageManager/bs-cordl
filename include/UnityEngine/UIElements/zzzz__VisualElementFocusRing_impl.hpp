#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementFocusRing.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFocusRing_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder::VisualElementFocusRing_DefaultFocusOrder(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder::VisualElementFocusRing_DefaultFocusOrder() {}
constexpr ::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder::ChildOrder{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder::PositionXY{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder::PositionYX{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::*)()>(
    &::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cc9558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::__cordl_internal_get_m_AutoIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoIndex;
}
constexpr int32_t const& UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::__cordl_internal_get_m_AutoIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoIndex;
}
constexpr void UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::__cordl_internal_set_m_AutoIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AutoIndex = value;
}
constexpr ::UnityEngine::UIElements::Focusable*& UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::__cordl_internal_get_m_Focusable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Focusable;
}
constexpr ::UnityEngine::UIElements::Focusable* const& UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::__cordl_internal_get_m_Focusable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Focusable;
}
constexpr void UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::__cordl_internal_set_m_Focusable(::UnityEngine::UIElements::Focusable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Focusable = value;
}
constexpr bool& UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::__cordl_internal_get_m_IsSlot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsSlot;
}
constexpr bool const& UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::__cordl_internal_get_m_IsSlot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsSlot;
}
constexpr void UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::__cordl_internal_set_m_IsSlot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsSlot = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*&
UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::__cordl_internal_get_m_ScopeNavigationOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScopeNavigationOrder;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>* const&
UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::__cordl_internal_get_m_ScopeNavigationOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScopeNavigationOrder;
}
constexpr void UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::__cordl_internal_set_m_ScopeNavigationOrder(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScopeNavigationOrder = value;
}
inline void UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord* UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord::VisualElementFocusRing_FocusRingRecord() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder)>(&::UnityEngine::UIElements::VisualElementFocusRing::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6cc8008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.get_focusController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FocusController* (::UnityEngine::UIElements::VisualElementFocusRing::*)()>(
    &::UnityEngine::UIElements::VisualElementFocusRing::get_focusController)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6cc8094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(), { "get_focusController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.get_defaultFocusOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder (::UnityEngine::UIElements::VisualElementFocusRing::*)()>(
    &::UnityEngine::UIElements::VisualElementFocusRing::get_defaultFocusOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc80b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(), { "get_defaultFocusOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.set_defaultFocusOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder)>(
    &::UnityEngine::UIElements::VisualElementFocusRing::set_defaultFocusOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc80bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                                             { "set_defaultFocusOrder", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.FocusRingAutoIndexSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*,
                                                                                                                      ::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*)>(
    &::UnityEngine::UIElements::VisualElementFocusRing::FocusRingAutoIndexSort)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x6cc80c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                                                                           { "FocusRingAutoIndexSort",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.FocusRingSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*,
                                                                                                                      ::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*)>(
    &::UnityEngine::UIElements::VisualElementFocusRing::FocusRingSort)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6cc83dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                                                                           { "FocusRingSort",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.DoUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing::*)()>(&::UnityEngine::UIElements::VisualElementFocusRing::DoUpdate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6cc84d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(), { "DoUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.BuildRingForScopeRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing::*)(
    ::UnityEngine::UIElements::VisualElement*, ::by_ref<int32_t>, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*)>(
    &::UnityEngine::UIElements::VisualElementFocusRing::BuildRingForScopeRecursive)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6cc85c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                                             { "BuildRingForScopeRecursive",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.SortAndFlattenScopeLists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*)>(&::UnityEngine::UIElements::VisualElementFocusRing::SortAndFlattenScopeLists)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x6cc8880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                            { "SortAndFlattenScopeLists", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetFocusableInternalIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::Focusable*)>(
    &::UnityEngine::UIElements::VisualElementFocusRing::GetFocusableInternalIndex)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6cc8ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                                                                           { "GetFocusableInternalIndex", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetFocusChangeDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::FocusChangeDirection* (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::EventBase*)>(
        &::UnityEngine::UIElements::VisualElementFocusRing::GetFocusChangeDirection)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x6cc8b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                         { "GetFocusChangeDirection", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetNextFocusable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*)>(
        &::UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusable)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x6cc8f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                         { "GetNextFocusable", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetNextFocusableInTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Focusable* (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusableInTree)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6cc93ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                                                                           { "GetNextFocusableInTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetPreviousFocusableInTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Focusable* (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualElementFocusRing::GetPreviousFocusableInTree)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6cc9480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                                                                           { "GetPreviousFocusableInTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::VisualElementFocusRing::__cordl_internal_get_root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::VisualElementFocusRing::__cordl_internal_get_root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
constexpr void UnityEngine::UIElements::VisualElementFocusRing::__cordl_internal_set_root(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___root = value;
}
constexpr ::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder& UnityEngine::UIElements::VisualElementFocusRing::__cordl_internal_get__defaultFocusOrder_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultFocusOrder_k__BackingField;
}
constexpr ::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder const& UnityEngine::UIElements::VisualElementFocusRing::__cordl_internal_get__defaultFocusOrder_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultFocusOrder_k__BackingField;
}
constexpr void UnityEngine::UIElements::VisualElementFocusRing::__cordl_internal_set__defaultFocusOrder_k__BackingField(::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultFocusOrder_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*&
UnityEngine::UIElements::VisualElementFocusRing::__cordl_internal_get_m_FocusRing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FocusRing;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>* const&
UnityEngine::UIElements::VisualElementFocusRing::__cordl_internal_get_m_FocusRing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FocusRing;
}
constexpr void
UnityEngine::UIElements::VisualElementFocusRing::__cordl_internal_set_m_FocusRing(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FocusRing = value;
}
inline void UnityEngine::UIElements::VisualElementFocusRing::_ctor(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder dfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, dfo);
}
inline ::UnityEngine::UIElements::FocusController* UnityEngine::UIElements::VisualElementFocusRing::get_focusController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(), { "get_focusController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusController*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder UnityEngine::UIElements::VisualElementFocusRing::get_defaultFocusOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(), { "get_defaultFocusOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualElementFocusRing::set_defaultFocusOrder(::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                                           { "set_defaultFocusOrder", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::VisualElementFocusRing::FocusRingAutoIndexSort(::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord* a,
                                                                                       ::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord* b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                                                                         { "FocusRingAutoIndexSort",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline int32_t UnityEngine::UIElements::VisualElementFocusRing::FocusRingSort(::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord* a,
                                                                              ::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord* b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                                                                         { "FocusRingSort",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void UnityEngine::UIElements::VisualElementFocusRing::DoUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(), { "DoUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::VisualElementFocusRing::BuildRingForScopeRecursive(::UnityEngine::UIElements::VisualElement* ve, ::by_ref<int32_t> scopeIndex,
                                                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>* scopeList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                                           { "BuildRingForScopeRecursive",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, scopeIndex, scopeList);
}
inline void
UnityEngine::UIElements::VisualElementFocusRing::SortAndFlattenScopeLists(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>* rootScopeList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                          { "SortAndFlattenScopeLists", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rootScopeList);
}
inline int32_t UnityEngine::UIElements::VisualElementFocusRing::GetFocusableInternalIndex(::UnityEngine::UIElements::Focusable* f) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                                                                         { "GetFocusableInternalIndex", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, f);
}
inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::VisualElementFocusRing::GetFocusChangeDirection(::UnityEngine::UIElements::Focusable* currentFocusable,
                                                                                                                                 ::UnityEngine::UIElements::EventBase* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                       { "GetFocusChangeDirection", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusChangeDirection*>(this, ___internal_method, currentFocusable, e);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusable(::UnityEngine::UIElements::Focusable* currentFocusable,
                                                                                                               ::UnityEngine::UIElements::FocusChangeDirection* direction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                       { "GetNextFocusable", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*>(this, ___internal_method, currentFocusable, direction);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusableInTree(::UnityEngine::UIElements::VisualElement* currentFocusable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                                                                         { "GetNextFocusableInTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*>(nullptr, ___internal_method, currentFocusable);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::VisualElementFocusRing::GetPreviousFocusableInTree(::UnityEngine::UIElements::VisualElement* currentFocusable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusRing*>(),
                                                                                         { "GetPreviousFocusableInTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*>(nullptr, ___internal_method, currentFocusable);
}
inline ::UnityEngine::UIElements::VisualElementFocusRing* UnityEngine::UIElements::VisualElementFocusRing::New_ctor(::UnityEngine::UIElements::VisualElement* root,
                                                                                                                    ::UnityEngine::UIElements::VisualElementFocusRing_DefaultFocusOrder dfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualElementFocusRing*>(root, dfo));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IFocusRing"
constexpr UnityEngine::UIElements::VisualElementFocusRing::operator ::UnityEngine::UIElements::IFocusRing*() noexcept {
  return static_cast<::UnityEngine::UIElements::IFocusRing*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IFocusRing"
constexpr ::UnityEngine::UIElements::IFocusRing* UnityEngine::UIElements::VisualElementFocusRing::i___UnityEngine__UIElements__IFocusRing() noexcept {
  return static_cast<::UnityEngine::UIElements::IFocusRing*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementFocusRing::VisualElementFocusRing() {}
