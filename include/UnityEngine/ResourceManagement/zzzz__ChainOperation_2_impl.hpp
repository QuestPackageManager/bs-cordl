#pragma once
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_impl.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ChainOperation_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename TObject, typename TObjectDependency>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>&
UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__get_m_DepOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
template <typename TObject, typename TObjectDependency>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> const&
UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__get_m_DepOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
template <typename TObject, typename TObjectDependency>
constexpr void
UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__set_m_DepOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepOp = value;
}
template <typename TObject, typename TObjectDependency>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>& UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__get_m_WrappedOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WrappedOp;
}
template <typename TObject, typename TObjectDependency>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> const&
UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__get_m_WrappedOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WrappedOp;
}
template <typename TObject, typename TObjectDependency>
constexpr void
UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__set_m_WrappedOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WrappedOp = value;
}
template <typename TObject, typename TObjectDependency>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__get_m_depStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_depStatus;
}
template <typename TObject, typename TObjectDependency>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const& UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__get_m_depStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_depStatus;
}
template <typename TObject, typename TObjectDependency>
constexpr void UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__set_m_depStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_depStatus = value;
}
template <typename TObject, typename TObjectDependency>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__get_m_wrapStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_wrapStatus;
}
template <typename TObject, typename TObjectDependency>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const& UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__get_m_wrapStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_wrapStatus;
}
template <typename TObject, typename TObjectDependency>
constexpr void UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__set_m_wrapStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_wrapStatus = value;
}
template <typename TObject, typename TObjectDependency>
constexpr ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                           ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*&
UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__get_m_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
template <typename TObject, typename TObjectDependency>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                                                               ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*> const&
UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__get_m_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
template <typename TObject, typename TObjectDependency>
constexpr void UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__set_m_Callback(
    ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                     ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject, typename TObjectDependency>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*&
UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__get_m_CachedOnWrappedCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedOnWrappedCompleted;
}
template <typename TObject, typename TObjectDependency>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*> const&
UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__get_m_CachedOnWrappedCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedOnWrappedCompleted;
}
template <typename TObject, typename TObjectDependency>
constexpr void UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__set_m_CachedOnWrappedCompleted(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CachedOnWrappedCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject, typename TObjectDependency> constexpr bool& UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__get_m_ReleaseDependenciesOnFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseDependenciesOnFailure;
}
template <typename TObject, typename TObjectDependency>
constexpr bool const& UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__get_m_ReleaseDependenciesOnFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseDependenciesOnFailure;
}
template <typename TObject, typename TObjectDependency> constexpr void UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::__set_m_ReleaseDependenciesOnFailure(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReleaseDependenciesOnFailure = value;
}
template <typename TObject, typename TObjectDependency>
inline ::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>* UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>*>());
}
template <typename TObject, typename TObjectDependency> inline void UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject, typename TObjectDependency> inline ::StringW UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::get_DebugName() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TObject, typename TObjectDependency>
inline void UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deps);
}
template <typename TObject, typename TObjectDependency>
inline void
UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> dependentOp,
                                                                                    ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                                                                                                     ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback,
                                                                                    bool releaseDependenciesOnFailure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                                                                                 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dependentOp, callback, releaseDependenciesOnFailure);
}
template <typename TObject, typename TObjectDependency> inline bool UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::InvokeWaitForCompletion() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObject, typename TObjectDependency> inline void UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::Execute() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject, typename TObjectDependency>
inline void UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::OnWrappedCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>*>::get(), "OnWrappedCompleted",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
template <typename TObject, typename TObjectDependency> inline void UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::Destroy() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject, typename TObjectDependency> inline void UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::ReleaseDependencies() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject, typename TObjectDependency>
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(this, ___internal_method, visited);
}
/// @param visited: ::System::Collections::Generic::HashSet_1<::System::Object*>* (default: nullptr)
template <typename TObject, typename TObjectDependency>
inline void UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::RefreshDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>*>::get(), "RefreshDownloadStatus",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visited);
}
template <typename TObject, typename TObjectDependency> inline float_t UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::get_Progress() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TObject, typename TObjectDependency> constexpr ::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>::ChainOperation_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
