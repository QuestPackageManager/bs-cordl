#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TabLayout.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TabLayout_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TabView_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TabLayout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabLayout::*)(::UnityEngine::UIElements::TabView*, bool)>(&::UnityEngine::UIElements::TabLayout::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6d715d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabLayout*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TabView*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabLayout.GetHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::TabLayout::GetHeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6d715f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabLayout*>(), { "GetHeight", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabLayout.GetWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::TabLayout::GetWidth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6d71614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabLayout*>(), { "GetWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabLayout.GetTabOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::TabLayout::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::TabLayout::GetTabOffset)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6d71634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabLayout*>(), { "GetTabOffset", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabLayout.InitOrderTabs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabLayout::*)()>(&::UnityEngine::UIElements::TabLayout::InitOrderTabs)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6d71778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabLayout*>(), { "InitOrderTabs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabLayout.ReorderDisplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabLayout::*)(int32_t, int32_t)>(&::UnityEngine::UIElements::TabLayout::ReorderDisplay)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6d717f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabLayout*>(), { "ReorderDisplay", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::TabView*& UnityEngine::UIElements::TabLayout::__cordl_internal_get_m_TabView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabView;
}
constexpr ::UnityEngine::UIElements::TabView* const& UnityEngine::UIElements::TabLayout::__cordl_internal_get_m_TabView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabView;
}
constexpr void UnityEngine::UIElements::TabLayout::__cordl_internal_set_m_TabView(::UnityEngine::UIElements::TabView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TabView = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::TabLayout::__cordl_internal_get_m_TabHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabHeaders;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& UnityEngine::UIElements::TabLayout::__cordl_internal_get_m_TabHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabHeaders;
}
constexpr void UnityEngine::UIElements::TabLayout::__cordl_internal_set_m_TabHeaders(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TabHeaders = value;
}
constexpr bool& UnityEngine::UIElements::TabLayout::__cordl_internal_get_m_IsVertical() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsVertical;
}
constexpr bool const& UnityEngine::UIElements::TabLayout::__cordl_internal_get_m_IsVertical() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsVertical;
}
constexpr void UnityEngine::UIElements::TabLayout::__cordl_internal_set_m_IsVertical(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsVertical = value;
}
inline void UnityEngine::UIElements::TabLayout::_ctor(::UnityEngine::UIElements::TabView* tabView, bool isVertical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabLayout*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TabView*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tabView, isVertical);
}
inline float_t UnityEngine::UIElements::TabLayout::GetHeight(::UnityEngine::UIElements::VisualElement* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabLayout*>(), { "GetHeight", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, t);
}
inline float_t UnityEngine::UIElements::TabLayout::GetWidth(::UnityEngine::UIElements::VisualElement* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabLayout*>(), { "GetWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, t);
}
inline float_t UnityEngine::UIElements::TabLayout::GetTabOffset(::UnityEngine::UIElements::VisualElement* tab) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabLayout*>(), { "GetTabOffset", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, tab);
}
inline void UnityEngine::UIElements::TabLayout::InitOrderTabs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabLayout*>(), { "InitOrderTabs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabLayout::ReorderDisplay(int32_t from, int32_t to) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabLayout*>(), { "ReorderDisplay", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to);
}
inline ::UnityEngine::UIElements::TabLayout* UnityEngine::UIElements::TabLayout::New_ctor(::UnityEngine::UIElements::TabView* tabView, bool isVertical) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TabLayout*>(tabView, isVertical));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TabLayout::TabLayout() {}
