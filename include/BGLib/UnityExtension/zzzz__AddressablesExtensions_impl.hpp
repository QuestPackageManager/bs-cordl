#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/AddressablesExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "BGLib/UnityExtension/zzzz__AddressablesExtensions_def.hpp"
#include "BGLib/UnityExtension/zzzz__AddressablesExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
template <typename T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>&
BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>::__cordl_internal_get_asyncOperationHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncOperationHandle;
}
template <typename T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> const&
BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>::__cordl_internal_get_asyncOperationHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncOperationHandle;
}
template <typename T>
constexpr void BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>::__cordl_internal_set_asyncOperationHandle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___asyncOperationHandle = value;
}
template <typename T> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>::__cordl_internal_get_taskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
template <typename T>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* const& BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>::__cordl_internal_get_taskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
template <typename T>
constexpr void BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>::__cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___taskSource, value);
}
template <typename T> inline void BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void
BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>::_GetAwaiter_g__OnCompleted_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>*>::get(), "<GetAwaiter>g__OnCompleted|0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
template <typename T> inline ::BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>* BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>::AddressablesExtensions___c__DisplayClass4_0_1() {}
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
inline ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>>
BGLib::UnityExtension::AddressablesExtensions::GetAssetLoadingAsyncOperationHandleOrNull(::StringW runtimeKey) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AddressablesExtensions*>::get(),
                                               "GetAssetLoadingAsyncOperationHandleOrNull", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>>, false>(
      nullptr, ___internal_method, runtimeKey);
}
template <typename T>
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*
BGLib::UnityExtension::AddressablesExtensions::GetLocations(::StringW runtimeKey) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AddressablesExtensions*>::get(),
                                                                                  "GetLocations", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, false>(nullptr, ___internal_method,
                                                                                                                                                                          runtimeKey);
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
template <typename T>
inline void BGLib::UnityExtension::AddressablesExtensions::CompleteTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<T>* taskSource,
                                                                              ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> handle) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AddressablesExtensions*>::get(), "CompleteTaskSource",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskSource, handle);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::AddressablesExtensions::AddressablesExtensions() {}
