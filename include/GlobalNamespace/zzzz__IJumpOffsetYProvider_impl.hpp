#pragma once
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IJumpOffsetYProvider.get_jumpOffsetY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::IJumpOffsetYProvider::*)()>(&::GlobalNamespace::IJumpOffsetYProvider::get_jumpOffsetY)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IJumpOffsetYProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IJumpOffsetYProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::IJumpOffsetYProvider::get_jumpOffsetY() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IJumpOffsetYProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
