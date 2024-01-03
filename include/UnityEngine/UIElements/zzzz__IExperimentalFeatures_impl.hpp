#pragma once
#include "UnityEngine/UIElements/zzzz__IExperimentalFeatures_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__ITransitionAnimations_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IExperimentalFeatures.get_animation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Experimental::ITransitionAnimations* (
    ::UnityEngine::UIElements::IExperimentalFeatures::*)()>(&::UnityEngine::UIElements::IExperimentalFeatures::get_animation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IExperimentalFeatures*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IExperimentalFeatures*>::get(), 0));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::Experimental::ITransitionAnimations* UnityEngine::UIElements::IExperimentalFeatures::get_animation() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IExperimentalFeatures*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Experimental::ITransitionAnimations*, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
