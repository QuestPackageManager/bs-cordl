#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CustomBinding.hpp"
#include "UnityEngine/UIElements/zzzz__Binding_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CustomBinding_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingResult_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::CustomBinding.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BindingResult (::UnityEngine::UIElements::CustomBinding::*)(
    ::ByRef<::UnityEngine::UIElements::BindingContext>)>(&::UnityEngine::UIElements::CustomBinding::Update)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a0a898;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CustomBinding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CustomBinding*>::get(), 7));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::BindingResult UnityEngine::UIElements::CustomBinding::Update(::ByRef<::UnityEngine::UIElements::BindingContext> context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CustomBinding*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingResult, false>(this, ___internal_method, context);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CustomBinding::CustomBinding() {}
