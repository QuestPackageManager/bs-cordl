#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ListViewController.hpp"
#include "UnityEngine/UIElements/zzzz__BaseListViewController_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListView_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewController.get_listView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ListView* (::UnityEngine::UIElements::ListViewController::*)()>(
    &::UnityEngine::UIElements::ListViewController::get_listView)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c535e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), { "get_listView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewController.MakeItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::ListViewController::*)()>(
    &::UnityEngine::UIElements::ListViewController::MakeItem)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6c53660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), { ::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewController.BindItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewController::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::ListViewController::BindItem)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6c53760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), { ::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewController.UnbindItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewController::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::ListViewController::UnbindItem)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c539a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), { ::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewController.DestroyItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewController::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::ListViewController::DestroyItem)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c539f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), { ::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewController::*)()>(&::UnityEngine::UIElements::ListViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c53a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::ListView* UnityEngine::UIElements::ListViewController::get_listView() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), { "get_listView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ListView*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::ListViewController::MakeItem() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListViewController::BindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, index);
}
inline void UnityEngine::UIElements::ListViewController::UnbindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, index);
}
inline void UnityEngine::UIElements::ListViewController::DestroyItem(::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::ListViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ListViewController* UnityEngine::UIElements::ListViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ListViewController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ListViewController::ListViewController() {}
