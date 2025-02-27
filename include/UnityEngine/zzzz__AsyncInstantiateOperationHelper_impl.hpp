#pragma once
// IWYU pragma private; include "UnityEngine/AsyncInstantiateOperationHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperationHelper_def.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperation_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AsyncInstantiateOperationHelper.SetAsyncInstantiateOperationResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::AsyncInstantiateOperation*, ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>)>(
        &::UnityEngine::AsyncInstantiateOperationHelper::SetAsyncInstantiateOperationResult)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x48b448c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AsyncInstantiateOperationHelper*>::get(), "SetAsyncInstantiateOperationResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncInstantiateOperation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::AsyncInstantiateOperationHelper::SetAsyncInstantiateOperationResult(::UnityEngine::AsyncInstantiateOperation* op,
                                                                                             ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AsyncInstantiateOperationHelper*>::get(), "SetAsyncInstantiateOperationResult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncInstantiateOperation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, op, result);
}
// Ctor Parameters []
constexpr ::UnityEngine::AsyncInstantiateOperationHelper::AsyncInstantiateOperationHelper() {}
