#pragma once
// IWYU pragma private; include "UnityEngine/ImageEffectAllowedInSceneView.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__ImageEffectAllowedInSceneView_def.hpp"
//  Writing Method size for method: ::UnityEngine::ImageEffectAllowedInSceneView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ImageEffectAllowedInSceneView::*)()>(&::UnityEngine::ImageEffectAllowedInSceneView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47ffc20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ImageEffectAllowedInSceneView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::ImageEffectAllowedInSceneView* UnityEngine::ImageEffectAllowedInSceneView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ImageEffectAllowedInSceneView*>());
}
inline void UnityEngine::ImageEffectAllowedInSceneView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ImageEffectAllowedInSceneView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ImageEffectAllowedInSceneView::ImageEffectAllowedInSceneView() {}
