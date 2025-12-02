#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobParallelForDefer.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForDefer_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::IJobParallelForDefer.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::IJobParallelForDefer::*)(int32_t)>(&::Unity::Jobs::IJobParallelForDefer::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::IJobParallelForDefer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::IJobParallelForDefer*>::get(), 0));
    return ___internal_method;
  }
};
inline void Unity::Jobs::IJobParallelForDefer::Execute(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::IJobParallelForDefer*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
