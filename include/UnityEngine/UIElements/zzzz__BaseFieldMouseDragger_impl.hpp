#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseFieldMouseDragger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldMouseDragger_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BaseFieldMouseDragger.SetDragZone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseFieldMouseDragger::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::BaseFieldMouseDragger::SetDragZone)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6da3fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseFieldMouseDragger*>(),
                                                                                           { "SetDragZone", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseFieldMouseDragger.SetDragZone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseFieldMouseDragger::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Rect)>(
    &::UnityEngine::UIElements::BaseFieldMouseDragger::SetDragZone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseFieldMouseDragger*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseFieldMouseDragger*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseFieldMouseDragger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseFieldMouseDragger::*)()>(&::UnityEngine::UIElements::BaseFieldMouseDragger::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6da3fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseFieldMouseDragger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::BaseFieldMouseDragger::SetDragZone(::UnityEngine::UIElements::VisualElement* dragElement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseFieldMouseDragger*>(), { "SetDragZone", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dragElement);
}
inline void UnityEngine::UIElements::BaseFieldMouseDragger::SetDragZone(::UnityEngine::UIElements::VisualElement* dragElement, ::UnityEngine::Rect hotZone) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseFieldMouseDragger*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dragElement, hotZone);
}
inline void UnityEngine::UIElements::BaseFieldMouseDragger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseFieldMouseDragger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseFieldMouseDragger* UnityEngine::UIElements::BaseFieldMouseDragger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseFieldMouseDragger*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseFieldMouseDragger::BaseFieldMouseDragger() {}
