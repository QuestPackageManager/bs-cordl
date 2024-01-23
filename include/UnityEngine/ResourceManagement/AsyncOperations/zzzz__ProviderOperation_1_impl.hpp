#pragma once
#include "System/Collections/Generic/zzzz__IList_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__ProviderOperation_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
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
template <typename TObject>
constexpr ::System::Action_4<int32_t, ::System::Object*, bool, ::System::Exception*>*&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_CompletionCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompletionCallback;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<int32_t, ::System::Object*, bool, ::System::Exception*>*> const&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_CompletionCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompletionCallback;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_CompletionCallback(
    ::System::Action_4<int32_t, ::System::Object*, bool, ::System::Exception*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CompletionCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject>
constexpr ::System::Action_2<int32_t, ::System::Collections::Generic::IList_1<::System::Object*>*>*&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_GetDepCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetDepCallback;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t, ::System::Collections::Generic::IList_1<::System::Object*>*>*> const&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_GetDepCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetDepCallback;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_GetDepCallback(
    ::System::Action_2<int32_t, ::System::Collections::Generic::IList_1<::System::Object*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GetDepCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject> constexpr ::System::Func_1<float_t>*& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_GetProgressCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetProgressCallback;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<float_t>*> const&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_GetProgressCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetProgressCallback;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_GetProgressCallback(::System::Func_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GetProgressCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject>
constexpr ::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>*&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_GetDownloadProgressCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetDownloadProgressCallback;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>*> const&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_GetDownloadProgressCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetDownloadProgressCallback;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_GetDownloadProgressCallback(
    ::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GetDownloadProgressCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject> constexpr ::System::Func_1<bool>*& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_WaitForCompletionCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitForCompletionCallback;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> const&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_WaitForCompletionCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitForCompletionCallback;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_WaitForCompletionCallback(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WaitForCompletionCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*> const&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_Provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Provider;
}
template <typename TObject>
constexpr void
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_Provider(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Provider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_Location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Location;
}
template <typename TObject>
constexpr void
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_Location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Location)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*> const&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField(
    ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::ResourceManager*& UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_ResourceManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceManager;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> const&
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_get_m_ResourceManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceManager;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__cordl_internal_set_m_ResourceManager(::UnityEngine::ResourceManagement::ResourceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ResourceManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(),
                                  "UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key(
    ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(),
                                  "UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject> inline int32_t UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_ProvideHandleVersion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(),
                                               "get_ProvideHandleVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_Location() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(),
                                               "get_Location", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::SetDownloadProgressCallback(
    ::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(), "SetDownloadProgressCallback",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::SetWaitForCompletionCallback(::System::Func_1<bool>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(), "SetWaitForCompletionCallback",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::InvokeWaitForCompletion() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(this, ___internal_method, visited);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>* UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>());
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deps);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::ReleaseDependencies() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject> inline ::StringW UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_DebugName() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::GetDependencies(::System::Collections::Generic::IList_1<::System::Object*>* dstList) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(), "GetDependencies",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dstList);
}
template <typename TObject> inline ::System::Type* UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_RequestedType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(),
                                               "get_RequestedType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template <typename TObject> inline int32_t UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_DependencyCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(),
                                               "get_DependencyCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TObject> template <typename TDepObject> inline TDepObject UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::GetDependency(int32_t index) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(),
                                               "GetDependency", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDepObject>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDepObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<TDepObject, false>(this, ___internal_method, index);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::SetProgressCallback(::System::Func_1<float_t>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(), "SetProgressCallback",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
template <typename TObject>
template <typename T>
inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::ProviderCompleted(T result, bool status, ::System::Exception* e) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(), "ProviderCompleted",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, status, e);
}
template <typename TObject> inline float_t UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_Progress() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::Execute() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::Init(
    ::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* provider,
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        depOp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(), "Init",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                              ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rm, provider, location, depOp);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::Init(
    ::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* provider,
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        depOp,
    bool releaseDependenciesOnFailure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(), "Init",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                              ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rm, provider, location, depOp, releaseDependenciesOnFailure);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::WaitForCompletionHandler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(),
                                               "WaitForCompletionHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::Destroy() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::ProviderOperation_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
