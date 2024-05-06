#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/AddressablesExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "BGLib/UnityExtension/zzzz__AddressablesExtensions_def.hpp"
#include "BGLib/UnityExtension/zzzz__AddressablesExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__IKeyEvaluator_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
template <typename T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>&
BGLib::UnityExtension::__AddressablesExtensions____c__DisplayClass3_0_1<T>::__cordl_internal_get_asyncOperationHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncOperationHandle;
}
template <typename T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> const&
BGLib::UnityExtension::__AddressablesExtensions____c__DisplayClass3_0_1<T>::__cordl_internal_get_asyncOperationHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncOperationHandle;
}
template <typename T>
constexpr void BGLib::UnityExtension::__AddressablesExtensions____c__DisplayClass3_0_1<T>::__cordl_internal_set_asyncOperationHandle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___asyncOperationHandle = value;
}
template <typename T> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& BGLib::UnityExtension::__AddressablesExtensions____c__DisplayClass3_0_1<T>::__cordl_internal_get_taskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<T>*> const&
BGLib::UnityExtension::__AddressablesExtensions____c__DisplayClass3_0_1<T>::__cordl_internal_get_taskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
template <typename T>
constexpr void BGLib::UnityExtension::__AddressablesExtensions____c__DisplayClass3_0_1<T>::__cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::BGLib::UnityExtension::__AddressablesExtensions____c__DisplayClass3_0_1<T>* BGLib::UnityExtension::__AddressablesExtensions____c__DisplayClass3_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::__AddressablesExtensions____c__DisplayClass3_0_1<T>*>());
}
template <typename T> inline void BGLib::UnityExtension::__AddressablesExtensions____c__DisplayClass3_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__AddressablesExtensions____c__DisplayClass3_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void
BGLib::UnityExtension::__AddressablesExtensions____c__DisplayClass3_0_1<T>::_GetAwaiter_g__SetResult_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__AddressablesExtensions____c__DisplayClass3_0_1<T>*>::get(), "<GetAwaiter>g__SetResult|0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::UnityExtension::__AddressablesExtensions____c__DisplayClass3_0_1<T>::__AddressablesExtensions____c__DisplayClass3_0_1() {}
template <typename T>
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<T>*>*
BGLib::UnityExtension::AddressablesExtensions::LoadContentAsync(::UnityEngine::AddressableAssets::IKeyEvaluator* label) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AddressablesExtensions*>::get(), "LoadContentAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::IKeyEvaluator*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<T>*>*, false>(nullptr, ___internal_method, label);
}
template <typename T> inline ::System::Collections::Generic::IList_1<T>* BGLib::UnityExtension::AddressablesExtensions::LoadContent(::System::Object* label) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AddressablesExtensions*>::get(), "LoadContent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<T>*, false>(nullptr, ___internal_method, label);
}
template <typename T>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>
BGLib::UnityExtension::AddressablesExtensions::LoadContentOperation(::System::Object* label) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AddressablesExtensions*>::get(), "LoadContentOperation",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>, false>(nullptr,
                                                                                                                                                                             ___internal_method, label);
}
template <typename T>
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<T>
BGLib::UnityExtension::AddressablesExtensions::GetAwaiter(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> asyncOperationHandle) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AddressablesExtensions*>::get(), "GetAwaiter",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<T>, false>(nullptr, ___internal_method, asyncOperationHandle);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::AddressablesExtensions::AddressablesExtensions() {}
