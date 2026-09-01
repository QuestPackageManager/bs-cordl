#pragma once
// IWYU pragma private; include "GlobalNamespace\UIExtensionMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UIExtensionMethods_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UIExtensionMethods.CopySizeAndPositionFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*)>(&::GlobalNamespace::UIExtensionMethods::CopySizeAndPositionFrom)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5858638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIExtensionMethods*>(),
                                                             { "CopySizeAndPositionFrom", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIExtensionMethods.GetWorldRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::RectTransform*)>(&::GlobalNamespace::UIExtensionMethods::GetWorldRect)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5858704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIExtensionMethods*>(), { "GetWorldRect", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UIExtensionMethods::CopySizeAndPositionFrom(::UnityEngine::RectTransform* target, ::UnityEngine::RectTransform* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIExtensionMethods*>(),
                                                           { "CopySizeAndPositionFrom", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, source);
}
inline ::UnityEngine::Rect GlobalNamespace::UIExtensionMethods::GetWorldRect(::UnityEngine::RectTransform* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIExtensionMethods*>(), { "GetWorldRect", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, target);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UIExtensionMethods::UIExtensionMethods() {}
