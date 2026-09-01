#pragma once
// IWYU pragma private; include "UnityEngine\ImageEffectAllowedInSceneView.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__ImageEffectAllowedInSceneView_def.hpp"
//  Writing Method size for method: ::UnityEngine::ImageEffectAllowedInSceneView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ImageEffectAllowedInSceneView::*)()>(&::UnityEngine::ImageEffectAllowedInSceneView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a8c7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageEffectAllowedInSceneView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ImageEffectAllowedInSceneView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageEffectAllowedInSceneView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ImageEffectAllowedInSceneView* UnityEngine::ImageEffectAllowedInSceneView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ImageEffectAllowedInSceneView*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ImageEffectAllowedInSceneView::ImageEffectAllowedInSceneView() {}
