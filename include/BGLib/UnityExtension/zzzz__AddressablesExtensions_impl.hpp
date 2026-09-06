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
  this->___taskSource = value;
}
template <typename T> inline void BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline void
BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>::_GetAwaiter_g__OnCompleted_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>*>(),
                                              { "<GetAwaiter>g__OnCompleted|0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
template <typename T> inline ::BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>* BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass4_0_1<T>::AddressablesExtensions___c__DisplayClass4_0_1() {}
template <typename T> inline ::System::Collections::Generic::IList_1<T>* BGLib::UnityExtension::AddressablesExtensions::LoadContent(::System::Object* label) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AddressablesExtensions*>(), { "LoadContent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<T>*>(nullptr, ___internal_method, label);
}
template <typename T>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>
BGLib::UnityExtension::AddressablesExtensions::LoadContentOperation(::System::Object* label) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AddressablesExtensions*>(),
                                                                                              { "LoadContentOperation", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>>(nullptr, ___internal_method,
                                                                                                                                                                      label);
}
template <typename T>
inline ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>>
BGLib::UnityExtension::AddressablesExtensions::GetAssetLoadingAsyncOperationHandleOrNull(::StringW runtimeKey) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AddressablesExtensions*>(),
                                                           { "GetAssetLoadingAsyncOperationHandleOrNull", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>>>(
      nullptr, ___internal_method, runtimeKey);
}
template <typename T>
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*
BGLib::UnityExtension::AddressablesExtensions::GetLocations(::StringW runtimeKey) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AddressablesExtensions*>(), { "GetLocations", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(nullptr, ___internal_method,
                                                                                                                                                                   runtimeKey);
}
template <typename T>
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<T>
BGLib::UnityExtension::AddressablesExtensions::GetAwaiter(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> asyncOperationHandle) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AddressablesExtensions*>(),
                                              { "GetAwaiter", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<T>>(nullptr, ___internal_method, asyncOperationHandle);
}
template <typename T>
inline void BGLib::UnityExtension::AddressablesExtensions::CompleteTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<T>* taskSource,
                                                                              ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> handle) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AddressablesExtensions*>(),
                                                           { "CompleteTaskSource",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::System::Threading::Tasks::TaskCompletionSource_1<T>*>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, taskSource, handle);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::AddressablesExtensions::AddressablesExtensions() {}
