#pragma once
// IWYU pragma private; include "UnityEngine/AsyncInstantiateOperationHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperationHelper_def.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperation_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AsyncInstantiateOperationHelper.CreateAsyncInstantiateOperationResultArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> (*)(
    ::UnityEngine::AsyncInstantiateOperation*, int32_t)>(&::UnityEngine::AsyncInstantiateOperationHelper::CreateAsyncInstantiateOperationResultArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68a6284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AsyncInstantiateOperationHelper*>::get(),
                                                 "CreateAsyncInstantiateOperationResultArray", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncInstantiateOperation*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>
UnityEngine::AsyncInstantiateOperationHelper::CreateAsyncInstantiateOperationResultArray(::UnityEngine::AsyncInstantiateOperation* op, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AsyncInstantiateOperationHelper*>::get(),
                                               "CreateAsyncInstantiateOperationResultArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncInstantiateOperation*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, false>(nullptr, ___internal_method, op, size);
}
// Ctor Parameters []
constexpr ::UnityEngine::AsyncInstantiateOperationHelper::AsyncInstantiateOperationHelper() {}
