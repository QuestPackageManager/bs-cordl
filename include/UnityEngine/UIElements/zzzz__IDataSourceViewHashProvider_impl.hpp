#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IDataSourceViewHashProvider.hpp"
#include "UnityEngine/UIElements/zzzz__IDataSourceViewHashProvider_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IDataSourceViewHashProvider.GetViewHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::UIElements::IDataSourceViewHashProvider::*)()>(
    &::UnityEngine::UIElements::IDataSourceViewHashProvider::GetViewHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDataSourceViewHashProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDataSourceViewHashProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline int64_t UnityEngine::UIElements::IDataSourceViewHashProvider::GetViewHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDataSourceViewHashProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
