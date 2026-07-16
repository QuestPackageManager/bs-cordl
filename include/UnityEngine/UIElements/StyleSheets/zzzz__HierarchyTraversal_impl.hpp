#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/HierarchyTraversal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__HierarchyTraversal_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::HierarchyTraversal.Traverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::HierarchyTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::StyleSheets::HierarchyTraversal::Traverse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d00b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::HierarchyTraversal*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::HierarchyTraversal*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::HierarchyTraversal.TraverseRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::HierarchyTraversal::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::HierarchyTraversal::TraverseRecursive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::HierarchyTraversal*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::HierarchyTraversal*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::HierarchyTraversal.Recurse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::HierarchyTraversal::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::HierarchyTraversal::Recurse)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d00b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::HierarchyTraversal*>(),
                                                             { "Recurse", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::HierarchyTraversal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::HierarchyTraversal::*)()>(&::UnityEngine::UIElements::StyleSheets::HierarchyTraversal::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d00c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::HierarchyTraversal*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::HierarchyTraversal::Traverse(::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::HierarchyTraversal*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::StyleSheets::HierarchyTraversal::TraverseRecursive(::UnityEngine::UIElements::VisualElement* element, int32_t depth) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::HierarchyTraversal*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, depth);
}
inline void UnityEngine::UIElements::StyleSheets::HierarchyTraversal::Recurse(::UnityEngine::UIElements::VisualElement* element, int32_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::HierarchyTraversal*>(),
                                                           { "Recurse", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, depth);
}
inline void UnityEngine::UIElements::StyleSheets::HierarchyTraversal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::HierarchyTraversal*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::HierarchyTraversal* UnityEngine::UIElements::StyleSheets::HierarchyTraversal::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleSheets::HierarchyTraversal*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::HierarchyTraversal::HierarchyTraversal() {}
