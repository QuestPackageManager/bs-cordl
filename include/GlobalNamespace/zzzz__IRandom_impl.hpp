#pragma once
// IWYU pragma private; include "GlobalNamespace/IRandom.hpp"
#include "GlobalNamespace/zzzz__IRandom_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IRandom.Sample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::GlobalNamespace::IRandom::*)()>(&::GlobalNamespace::IRandom::Sample)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IRandom*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IRandom*>::get(), 0));
    return ___internal_method;
  }
};
inline double_t GlobalNamespace::IRandom::Sample() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IRandom*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
