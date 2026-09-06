#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/ProviderOperation_1.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__ProviderOperation_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__ICachable_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__IGenericProviderOperation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IResourceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
template <typename TObject> constexpr bool& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_ReleaseDependenciesOnFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseDependenciesOnFailure;
}
template <typename TObject> constexpr bool const& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_ReleaseDependenciesOnFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseDependenciesOnFailure;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_ReleaseDependenciesOnFailure(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReleaseDependenciesOnFailure = value;
}
template <typename TObject> constexpr ::System::Func_1<float_t>*& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_GetProgressCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetProgressCallback;
}
template <typename TObject>
constexpr ::System::Func_1<float_t>* const& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_GetProgressCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetProgressCallback;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_GetProgressCallback(::System::Func_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GetProgressCallback = value;
}
template <typename TObject>
constexpr ::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>*&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_GetDownloadProgressCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetDownloadProgressCallback;
}
template <typename TObject>
constexpr ::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>* const&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_GetDownloadProgressCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetDownloadProgressCallback;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_GetDownloadProgressCallback(
    ::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GetDownloadProgressCallback = value;
}
template <typename TObject> constexpr ::System::Func_1<bool>*& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_WaitForCompletionCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitForCompletionCallback;
}
template <typename TObject>
constexpr ::System::Func_1<bool>* const& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_WaitForCompletionCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitForCompletionCallback;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_WaitForCompletionCallback(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WaitForCompletionCallback = value;
}
template <typename TObject> constexpr bool& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_ProviderCompletedCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderCompletedCalled;
}
template <typename TObject> constexpr bool const& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_ProviderCompletedCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderCompletedCalled;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_ProviderCompletedCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProviderCompletedCalled = value;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_DownloadStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DownloadStatus;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_DownloadStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DownloadStatus;
}
template <typename TObject>
constexpr void
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_DownloadStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DownloadStatus = value;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_Provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Provider;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* const&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_Provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Provider;
}
template <typename TObject>
constexpr void
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_Provider(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Provider = value;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_DepOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_DepOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_DepOp(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepOp = value;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_Location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Location;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_Location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Location;
}
template <typename TObject>
constexpr void
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_Location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Location = value;
}
template <typename TObject> constexpr int32_t& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_ProvideHandleVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProvideHandleVersion;
}
template <typename TObject> constexpr int32_t const& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_ProvideHandleVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProvideHandleVersion;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_ProvideHandleVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProvideHandleVersion = value;
}
template <typename TObject> constexpr bool& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_NeedsRelease() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedsRelease;
}
template <typename TObject> constexpr bool const& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_NeedsRelease() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedsRelease;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_NeedsRelease(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NeedsRelease = value;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* const&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField(
    ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField = value;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::ResourceManager*& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_ResourceManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceManager;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::ResourceManager* const& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_ResourceManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceManager;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_ResourceManager(::UnityEngine::ResourceManagement::ResourceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResourceManager = value;
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(),
                                                                                         { "UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key(
    ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(),
                          { "UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TObject> inline int32_t UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_ProvideHandleVersion() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(), { "get_ProvideHandleVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_Location() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(), { "get_Location", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::SetDownloadProgressCallback(
    ::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(),
                                              { "SetDownloadProgressCallback", {}, { ::i2c::type_of<::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::SetWaitForCompletionCallback(::System::Func_1<bool>* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(),
                                                                                         { "SetWaitForCompletionCallback", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::InvokeWaitForCompletion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(this, ___internal_method, visited);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deps);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::ReleaseDependencies() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject> inline ::StringW UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_DebugName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::GetDependencies(::System::Collections::Generic::IList_1<::System::Object*>* dstList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(),
                                                           { "GetDependencies", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dstList);
}
template <typename TObject> inline ::System::Type* UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_RequestedType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(), { "get_RequestedType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template <typename TObject> inline int32_t UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_DependencyCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(), { "get_DependencyCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TObject> template <typename TDepObject> inline TDepObject UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::GetDependency(int32_t index) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(),
                                                                                              { "GetDependency", { ::i2c::class_of<TDepObject>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDepObject>() })));
  return ::cordl_internals::RunMethodRethrow<TDepObject>(this, ___internal_method, index);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::SetProgressCallback(::System::Func_1<float_t>* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(),
                                                                                         { "SetProgressCallback", {}, { ::i2c::type_of<::System::Func_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template <typename TObject>
template <typename T>
inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::ProviderCompleted(T result, bool status, ::System::Exception* e) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(),
                                              { "ProviderCompleted", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Exception*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, status, e);
}
template <typename TObject> inline float_t UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_Progress() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::Execute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::Init(
    ::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* provider,
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        depOp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(),
                          { "Init",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                  ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rm, provider, location, depOp);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::Init(
    ::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* provider,
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        depOp,
    bool releaseDependenciesOnFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(),
                          { "Init",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                  ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>(),
                              ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rm, provider, location, depOp, releaseDependenciesOnFailure);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::WaitForCompletionHandler() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(), { "WaitForCompletionHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::Destroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>* UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation"
template <typename TObject>
constexpr UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::operator ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation"
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::i___UnityEngine__ResourceManagement__AsyncOperations__IGenericProviderOperation() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::AsyncOperations::ICachable"
template <typename TObject>
constexpr UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::operator ::UnityEngine::ResourceManagement::AsyncOperations::ICachable*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::AsyncOperations::ICachable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::AsyncOperations::ICachable"
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::ICachable*
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::i___UnityEngine__ResourceManagement__AsyncOperations__ICachable() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::AsyncOperations::ICachable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::ProviderOperation_1() {}
