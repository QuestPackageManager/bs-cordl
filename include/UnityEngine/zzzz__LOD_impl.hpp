#pragma once
#include "UnityEngine/zzzz__LOD_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::UnityEngine::LOD._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LOD::*)(float_t, ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*>)>(
    &::UnityEngine::LOD::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2cb70f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LOD>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::LOD::_ctor(float_t screenRelativeTransitionHeight, ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> renderers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LOD>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, screenRelativeTransitionHeight, renderers);
}
// Ctor Parameters [CppParam { name: "screenRelativeTransitionHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fadeTransitionWidth", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "renderers", ty: "::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::LOD::LOD(float_t screenRelativeTransitionHeight, float_t fadeTransitionWidth, ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> renderers) noexcept {
  this->screenRelativeTransitionHeight = screenRelativeTransitionHeight;
  this->fadeTransitionWidth = fadeTransitionWidth;
  this->renderers = renderers;
}
// Ctor Parameters []
constexpr ::UnityEngine::LOD::LOD() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
