#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ComponentExtensions_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
template <typename T> inline T GlobalNamespace::ComponentExtensions::GetComponentInParentOnly(::UnityEngine::Component* c) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ComponentExtensions*>::get(), "GetComponentInParentOnly",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ComponentExtensions::ComponentExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
