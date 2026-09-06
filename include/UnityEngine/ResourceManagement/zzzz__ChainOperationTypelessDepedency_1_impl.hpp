#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ChainOperationTypelessDepedency_1.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_impl.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ChainOperationTypelessDepedency_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_get_m_DepOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const&
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_get_m_DepOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
template <typename TObject>
constexpr void
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_set_m_DepOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepOp = value;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>&
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_get_m_WrappedOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WrappedOp;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> const&
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_get_m_WrappedOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WrappedOp;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_set_m_WrappedOp(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WrappedOp = value;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_get_m_depStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_depStatus;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const&
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_get_m_depStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_depStatus;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_set_m_depStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_depStatus = value;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_get_m_wrapStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_wrapStatus;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const&
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_get_m_wrapStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_wrapStatus;
}
template <typename TObject>
constexpr void
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_set_m_wrapStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_wrapStatus = value;
}
template <typename TObject>
constexpr ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*&
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_get_m_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
template <typename TObject>
constexpr ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* const&
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_get_m_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_set_m_Callback(
    ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Callback = value;
}
template <typename TObject>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*&
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_get_m_CachedOnWrappedCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedOnWrappedCompleted;
}
template <typename TObject>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* const&
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_get_m_CachedOnWrappedCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedOnWrappedCompleted;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_set_m_CachedOnWrappedCompleted(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedOnWrappedCompleted = value;
}
template <typename TObject> constexpr bool& UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_get_m_ReleaseDependenciesOnFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseDependenciesOnFailure;
}
template <typename TObject> constexpr bool const& UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_get_m_ReleaseDependenciesOnFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseDependenciesOnFailure;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__cordl_internal_set_m_ReleaseDependenciesOnFailure(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReleaseDependenciesOnFailure = value;
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::get_WrappedOp() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>(), { "get_WrappedOp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject> inline ::StringW UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::get_DebugName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deps);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::Init(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependentOp,
    ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback,
    bool releaseDependenciesOnFailure) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                               ::i2c::type_of<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,
                                                                                               ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>(),
                                                               ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dependentOp, callback, releaseDependenciesOnFailure);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::InvokeWaitForCompletion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::Execute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::OnWrappedCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>(),
                                                           { "OnWrappedCompleted", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::Destroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::ReleaseDependencies() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(this, ___internal_method, visited);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::RefreshDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>(),
                                                           { "RefreshDownloadStatus", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visited);
}
template <typename TObject> inline float_t UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::get_Progress() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>* UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>());
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::ChainOperationTypelessDepedency_1() {}
