#pragma once
// IWYU pragma private; include "GlobalNamespace/IStandaloneThreadRunner.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunner_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunnable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IStandaloneThreadRunner.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IStandaloneThreadRunner::*)(::GlobalNamespace::IStandaloneThreadRunnable*)>(
    &::GlobalNamespace::IStandaloneThreadRunner::Run)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStandaloneThreadRunner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStandaloneThreadRunner*>::get(), 0));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IStandaloneThreadRunner::Run(::GlobalNamespace::IStandaloneThreadRunnable* runnable) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStandaloneThreadRunner*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runnable);
}
