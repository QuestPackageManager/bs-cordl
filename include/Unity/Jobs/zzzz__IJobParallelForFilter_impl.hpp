#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobParallelForFilter.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForFilter_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::IJobParallelForFilter.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Jobs::IJobParallelForFilter::*)(int32_t)>(&::Unity::Jobs::IJobParallelForFilter::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::IJobParallelForFilter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::IJobParallelForFilter*>::get(), 0));
    return ___internal_method;
  }
};
inline bool Unity::Jobs::IJobParallelForFilter::Execute(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::IJobParallelForFilter*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
