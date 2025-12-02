#pragma once
// IWYU pragma private; include "UnityEngine/Jobs/IJobParallelForTransform.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
//  Writing Method size for method: ::UnityEngine::Jobs::IJobParallelForTransform.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Jobs::IJobParallelForTransform::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(
    &::UnityEngine::Jobs::IJobParallelForTransform::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Jobs::IJobParallelForTransform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Jobs::IJobParallelForTransform*>::get(), 0));
    return ___internal_method;
  }
};
inline void UnityEngine::Jobs::IJobParallelForTransform::Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Jobs::IJobParallelForTransform*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, transform);
}
