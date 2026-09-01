#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ReusableMultiColumnTreeViewItem.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableTreeViewItem_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableMultiColumnTreeViewItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__Columns_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem.get_rootElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem::*)()>(
    &::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem::get_rootElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c55f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c55f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::Columns*)>(&::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem::Init)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x6c54900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem*>(),
                                                             { "Init", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::Columns*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem::*)()>(&::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c56424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::ReusableMultiColumnTreeViewItem::get_rootElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableMultiColumnTreeViewItem::Init(::UnityEngine::UIElements::VisualElement* item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void UnityEngine::UIElements::ReusableMultiColumnTreeViewItem::Init(::UnityEngine::UIElements::VisualElement* container, ::UnityEngine::UIElements::Columns* columns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem*>(),
                                                           { "Init", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::Columns*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, columns);
}
inline void UnityEngine::UIElements::ReusableMultiColumnTreeViewItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem* UnityEngine::UIElements::ReusableMultiColumnTreeViewItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem::ReusableMultiColumnTreeViewItem() {}
