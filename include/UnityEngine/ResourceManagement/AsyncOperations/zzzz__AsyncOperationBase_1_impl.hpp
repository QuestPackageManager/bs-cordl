#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationStatus_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "GlobalNamespace/zzzz__DelegateList_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__IAsyncOperation_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationStatus_def.hpp"
template <typename TObject>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*&
UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<TObject>::__get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<TObject>::__get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<TObject>::__set_value(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<TObject>*
UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<TObject>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<TObject>*>());
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<TObject>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<TObject>*>::get(), ".ctor",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<TObject>::_add_CompletedTypeless_b__0(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<TObject>*>::get(),
      "<add_CompletedTypeless>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<TObject>::__AsyncOperationBase_1____c__DisplayClass57_0() {}
template <typename TObject>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*&
UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<TObject>::__get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<TObject>::__get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<TObject>::__set_value(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<TObject>*
UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<TObject>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<TObject>*>());
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<TObject>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<TObject>*>::get(), ".ctor",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<TObject>::_remove_CompletedTypeless_b__0(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<TObject>*>::get(),
      "<remove_CompletedTypeless>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<TObject>::__AsyncOperationBase_1____c__DisplayClass58_0() {}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation"
template <typename TObject>
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::operator ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(static_cast<void*>(this));
}
template <typename TObject> constexpr TObject& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get__Result_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Result_k__BackingField;
}
template <typename TObject> constexpr TObject const& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get__Result_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Result_k__BackingField;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set__Result_k__BackingField(TObject value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Result_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject> constexpr int32_t& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_referenceCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_referenceCount;
}
template <typename TObject> constexpr int32_t const& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_referenceCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_referenceCount;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set_m_referenceCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_referenceCount = value;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_Status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Status;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus const& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_Status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Status;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set_m_Status(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Status = value;
}
template <typename TObject> constexpr ::System::Exception*& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_Error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Error;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_Error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Error;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set_m_Error(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Error)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject> constexpr ::UnityEngine::ResourceManagement::ResourceManager*& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_RM() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RM;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> const&
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_RM() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RM;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set_m_RM(::UnityEngine::ResourceManagement::ResourceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RM)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject> constexpr int32_t& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Version;
}
template <typename TObject> constexpr int32_t const& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Version;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Version = value;
}
template <typename TObject>
constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*&
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_DestroyedAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DestroyedAction;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_DestroyedAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DestroyedAction;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set_m_DestroyedAction(
    ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DestroyedAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject>
constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*&
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_CompletedActionT() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CompletedActionT;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*> const&
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_CompletedActionT() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CompletedActionT;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set_m_CompletedActionT(
    ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CompletedActionT)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*&
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_OnDestroyAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnDestroyAction;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> const&
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_OnDestroyAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OnDestroyAction;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set_m_OnDestroyAction(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnDestroyAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*&
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_dependencyCompleteAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_dependencyCompleteAction;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_dependencyCompleteAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_dependencyCompleteAction;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set_m_dependencyCompleteAction(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_dependencyCompleteAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject> constexpr bool& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_HasExecuted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___HasExecuted;
}
template <typename TObject> constexpr bool const& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_HasExecuted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___HasExecuted;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set_HasExecuted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___HasExecuted = value;
}
template <typename TObject> constexpr bool& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get__IsRunning_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____IsRunning_k__BackingField;
}
template <typename TObject> constexpr bool const& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get__IsRunning_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____IsRunning_k__BackingField;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set__IsRunning_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____IsRunning_k__BackingField = value;
}
template <typename TObject>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<TObject>*& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_taskCompletionSource;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<TObject>*> const&
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_taskCompletionSource;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set_m_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<TObject>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_taskCompletionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*&
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_taskCompletionSourceTypeless() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_taskCompletionSourceTypeless;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*> const&
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_taskCompletionSourceTypeless() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_taskCompletionSourceTypeless;
}
template <typename TObject>
constexpr void
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set_m_taskCompletionSourceTypeless(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_taskCompletionSourceTypeless)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject> constexpr bool& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_InDeferredCallbackQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_InDeferredCallbackQueue;
}
template <typename TObject> constexpr bool const& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_InDeferredCallbackQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_InDeferredCallbackQueue;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set_m_InDeferredCallbackQueue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_InDeferredCallbackQueue = value;
}
template <typename TObject> constexpr ::GlobalNamespace::DelegateList_1<float_t>*& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_UpdateCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_UpdateCallbacks;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<float_t>*> const&
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_UpdateCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_UpdateCallbacks;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set_m_UpdateCallbacks(::GlobalNamespace::DelegateList_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UpdateCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject> constexpr ::System::Action_1<float_t>*& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_UpdateCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_UpdateCallback;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__get_m_UpdateCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_UpdateCallback;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__set_m_UpdateCallback(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UpdateCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "Execute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::Destroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "Destroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject> inline float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::get_Progress() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "get_Progress", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename TObject> inline ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::get_DebugName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "get_DebugName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* dependencies) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "GetDependencies", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dependencies);
}
template <typename TObject> inline TObject UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::get_Result() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "get_Result", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TObject, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::set_Result(TObject value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "set_Result", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject> inline int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::get_Version() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "get_Version", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::get_CompletedEventHasListeners() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "get_CompletedEventHasListeners", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::get_DestroyedEventHasListeners() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "get_DestroyedEventHasListeners", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObject>
inline void
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::set_OnDestroy(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "set_OnDestroy", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject> inline int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::get_ReferenceCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "get_ReferenceCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::get_IsRunning() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "get_IsRunning", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::set_IsRunning(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "set_IsRunning", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>());
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject> inline ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::ShortenPath(::StringW p, bool keepExtension) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "ShortenPath", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, p, keepExtension);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::IncrementReferenceCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "IncrementReferenceCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::WaitForCompletion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "WaitForCompletion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::InvokeWaitForCompletion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "InvokeWaitForCompletion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::DecrementReferenceCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "DecrementReferenceCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject> inline ::System::Threading::Tasks::Task_1<TObject>* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::get_Task() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "get_Task", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TObject>*, false>(this, ___internal_method);
}
template <typename TObject>
inline ::System::Threading::Tasks::Task_1<::System::Object*>*
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Task", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Object*>*, false>(this, ___internal_method);
}
template <typename TObject> inline ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::ToString() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "ToString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
/// @param incrementReferenceCount: bool (default: true)
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::RegisterForDeferredCallbackEvent(bool incrementReferenceCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "RegisterForDeferredCallbackEvent",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, incrementReferenceCount);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::add_Completed(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "add_Completed", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::remove_Completed(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "remove_Completed",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline void
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "add_Destroyed", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline void
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "remove_Destroyed",
                                  std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::add_CompletedTypeless(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                  "add_CompletedTypeless", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::remove_CompletedTypeless(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                  "remove_CompletedTypeless", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::get_Status() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "get_Status", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, false>(this, ___internal_method);
}
template <typename TObject> inline ::System::Exception* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::get_OperationException() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "get_OperationException", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::set_OperationException(::System::Exception* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "set_OperationException",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject> inline ::System::Object* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::get_IsDone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "get_IsDone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObject> inline float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::get_PercentComplete() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "get_PercentComplete", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::InvokeCompletionEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "InvokeCompletionEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::get_Handle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "get_Handle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UpdateCallback(float_t unscaledDeltaTime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "UpdateCallback",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unscaledDeltaTime);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::Complete(TObject result, bool success, ::StringW errorMsg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "Complete", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, success, errorMsg);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::Complete(TObject result, bool success, ::StringW errorMsg, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "Complete", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, success, errorMsg, releaseDependenciesOnFailure);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::Complete(TObject result, bool success, ::System::Exception* exception, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "Complete", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, success, exception, releaseDependenciesOnFailure);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::Start(::UnityEngine::ResourceManagement::ResourceManager* rm,
                                                                                                   ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency,
                                                                                                   ::GlobalNamespace::DelegateList_1<float_t>* updateCallbacks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "Start", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DelegateList_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rm, dependency, updateCallbacks);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::InvokeExecute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "InvokeExecute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                  "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_CompletedTypeless", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                  "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_CompletedTypeless", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                  "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_Destroyed", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                  "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_Destroyed", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Version", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TObject>
inline int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ReferenceCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TObject>
inline float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_PercentComplete", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Status", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, false>(this, ___internal_method);
}
template <typename TObject>
inline ::System::Exception* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                  "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_OperationException", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_IsDone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Handle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
      "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.set_OnDestroy", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_DebugName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TObject>
inline ::System::Object* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetResultAsObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TObject>
inline ::System::Type* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ResultType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
      "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDependencies", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deps);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                  "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.DecrementReferenceCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                  "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.IncrementReferenceCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                  "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.InvokeCompletionEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start(
    ::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency,
    ::GlobalNamespace::DelegateList_1<float_t>* updateCallbacks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
      "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.Start", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DelegateList_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rm, dependency, updateCallbacks);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::ReleaseDependencies() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                               "ReleaseDependencies", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus(
    ::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(),
                                  "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDownloadStatus", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(this, ___internal_method, visited);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "GetDownloadStatus",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(this, ___internal_method, visited);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::__ctor_b__35_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), "<.ctor>b__35_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>::AsyncOperationBase_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
