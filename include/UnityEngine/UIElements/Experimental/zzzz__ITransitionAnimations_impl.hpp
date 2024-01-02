#pragma once
#include "UnityEngine/UIElements/Experimental/zzzz__ITransitionAnimations_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__StyleValues_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__ValueAnimation_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Experimental::ITransitionAnimations.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* (
    ::UnityEngine::UIElements::Experimental::ITransitionAnimations::*)(::UnityEngine::UIElements::Experimental::StyleValues, int32_t)>(
    &::UnityEngine::UIElements::Experimental::ITransitionAnimations::Start)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ITransitionAnimations*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ITransitionAnimations*>::get(), 0));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*
UnityEngine::UIElements::Experimental::ITransitionAnimations::Start(::UnityEngine::UIElements::Experimental::StyleValues to, int32_t durationMs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ITransitionAnimations*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*, false>(this, ___internal_method, to,
                                                                                                                                                                      durationMs);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
