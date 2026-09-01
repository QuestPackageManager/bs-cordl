#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ReusableMultiColumnListViewItem.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableListViewItem_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableMultiColumnListViewItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__Columns_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableMultiColumnListViewItem.get_rootElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::ReusableMultiColumnListViewItem::*)()>(
    &::UnityEngine::UIElements::ReusableMultiColumnListViewItem::get_rootElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c55f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnListViewItem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnListViewItem*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableMultiColumnListViewItem.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableMultiColumnListViewItem::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::ReusableMultiColumnListViewItem::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c55f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnListViewItem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnListViewItem*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableMultiColumnListViewItem.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableMultiColumnListViewItem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::Columns*, bool)>(&::UnityEngine::UIElements::ReusableMultiColumnListViewItem::Init)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x6c53c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnListViewItem*>(),
                            { "Init", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::Columns*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableMultiColumnListViewItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableMultiColumnListViewItem::*)()>(&::UnityEngine::UIElements::ReusableMultiColumnListViewItem::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c55f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnListViewItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::ReusableMultiColumnListViewItem::get_rootElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnListViewItem*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableMultiColumnListViewItem::Init(::UnityEngine::UIElements::VisualElement* item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnListViewItem*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void UnityEngine::UIElements::ReusableMultiColumnListViewItem::Init(::UnityEngine::UIElements::VisualElement* container, ::UnityEngine::UIElements::Columns* columns, bool usesAnimatedDrag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnListViewItem*>(),
                          { "Init", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::Columns*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, columns, usesAnimatedDrag);
}
inline void UnityEngine::UIElements::ReusableMultiColumnListViewItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnListViewItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ReusableMultiColumnListViewItem* UnityEngine::UIElements::ReusableMultiColumnListViewItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ReusableMultiColumnListViewItem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ReusableMultiColumnListViewItem::ReusableMultiColumnListViewItem() {}
