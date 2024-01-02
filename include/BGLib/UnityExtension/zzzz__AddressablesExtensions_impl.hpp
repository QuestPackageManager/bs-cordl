#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/UnityExtension/zzzz__AddressablesExtensions_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__IKeyEvaluator_def.hpp"
template <typename T>
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<T>*>*
BGLib::UnityExtension::AddressablesExtensions::LoadContentAsync(::UnityEngine::AddressableAssets::IKeyEvaluator* label) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AddressablesExtensions*>::get(), "LoadContentAsync",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::IKeyEvaluator*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<T>*>*, false>(nullptr, ___internal_method, label);
}
template <typename T> inline ::System::Collections::Generic::IList_1<T>* BGLib::UnityExtension::AddressablesExtensions::LoadContent(::UnityEngine::AddressableAssets::IKeyEvaluator* label) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AddressablesExtensions*>::get(), "LoadContent",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::IKeyEvaluator*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<T>*, false>(nullptr, ___internal_method, label);
}
template <typename T>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>
BGLib::UnityExtension::AddressablesExtensions::LoadContentOperation(::UnityEngine::AddressableAssets::IKeyEvaluator* label) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AddressablesExtensions*>::get(), "LoadContentOperation",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::IKeyEvaluator*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>, false>(nullptr,
                                                                                                                                                                             ___internal_method, label);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::AddressablesExtensions::AddressablesExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
