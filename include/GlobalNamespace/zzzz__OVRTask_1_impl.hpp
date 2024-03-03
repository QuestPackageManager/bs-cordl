#pragma once
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TResult> inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>* GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>(object, method));
}
template <typename TResult> inline void GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TResult> inline void GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>::Invoke(::System::Guid guid, TResult result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, guid, result);
}
template <typename TResult>
inline ::System::IAsyncResult* GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>::BeginInvoke(::System::Guid guid, TResult result, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, guid, result, callback, object);
}
template <typename TResult> inline void GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>::__OVRTask_1__CallbackInvoker() {}
template <typename TResult> inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>* GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>(object, method));
}
template <typename TResult> inline void GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TResult> inline bool GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>::Invoke(::System::Guid guid) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, guid);
}
template <typename TResult>
inline ::System::IAsyncResult* GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>::BeginInvoke(::System::Guid guid, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, guid, callback, object);
}
template <typename TResult> inline bool GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>::__OVRTask_1__CallbackRemover() {}
template <typename TResult>
inline ::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>* GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*>(object, method));
}
template <typename TResult> inline void GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TResult> inline bool GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>::Invoke(::System::Guid guid) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, guid);
}
template <typename TResult>
inline ::System::IAsyncResult* GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>::BeginInvoke(::System::Guid guid, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, guid, callback, object);
}
template <typename TResult> inline bool GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>::__OVRTask_1__InternalDataRemover() {}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>::setStaticF_Data(::System::Collections::Generic::Dictionary_2<::System::Guid, T>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, T>*, "Data",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, T>*>(value));
}
template <typename TResult, typename T> inline ::System::Collections::Generic::Dictionary_2<::System::Guid, T>* GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>::getStaticF_Data() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, T>*, "Data",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>*>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>::setStaticF_Remover(::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*, "Remover",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>*>::get>(
      std::forward<::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*>(value));
}
template <typename TResult, typename T> inline ::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>* GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>::getStaticF_Remover() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*, "Remover",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>*>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>::setStaticF_Clearer(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "Clearer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>*>::get>(
      std::forward<::System::Action*>(value));
}
template <typename TResult, typename T> inline ::System::Action* GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>::getStaticF_Clearer() {
  return ::cordl_internals::getStaticField<::System::Action*, "Clearer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>*>::get>();
}
template <typename TResult, typename T> inline bool GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>::TryGet(::System::Guid taskId, ByRef<T> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>*>::get(), "TryGet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, taskId, data);
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>::Set(::System::Guid taskId, T data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskId, data);
}
template <typename TResult, typename T> inline bool GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>::Remove(::System::Guid taskId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>*>::get(), "Remove",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, taskId);
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TResult, typename T> constexpr ::GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>::__OVRTask_1__InternalData_1() {}
template <typename TResult, typename T>
inline void
GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>::setStaticF_Subscribers(::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<T>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<T>*>*, "Subscribers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<T>*>*>(value));
}
template <typename TResult, typename T>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<T>*>* GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>::getStaticF_Subscribers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<T>*>*, "Subscribers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>*>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>::setStaticF_Remover(::System::Action_1<::System::Guid>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Guid>*, "Remover",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>*>::get>(
      std::forward<::System::Action_1<::System::Guid>*>(value));
}
template <typename TResult, typename T> inline ::System::Action_1<::System::Guid>* GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>::getStaticF_Remover() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Guid>*, "Remover",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>*>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>::setStaticF_Clearer(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "Clearer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>*>::get>(
      std::forward<::System::Action*>(value));
}
template <typename TResult, typename T> inline ::System::Action* GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>::getStaticF_Clearer() {
  return ::cordl_internals::getStaticField<::System::Action*, "Clearer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>*>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>::Set(::System::Guid taskId, ::System::Action_1<T>* subscriber) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskId, subscriber);
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>::Notify(::System::Guid taskId, T result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>*>::get(), "Notify", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskId, result);
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>::Remove(::System::Guid id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>*>::get(), "Remove",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, id);
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TResult, typename T> constexpr ::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>::__OVRTask_1__IncrementalResultSubscriber_1() {}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>"
template <typename TResult> constexpr GlobalNamespace::OVRTask_1<TResult>::operator ::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>"
template <typename TResult>
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>* GlobalNamespace::OVRTask_1<TResult>::i___System__IEquatable_1___GlobalNamespace__OVRTask_1_TResult__() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TResult> constexpr GlobalNamespace::OVRTask_1<TResult>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TResult> constexpr ::System::IDisposable* GlobalNamespace::OVRTask_1<TResult>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_Pending(::System::Collections::Generic::HashSet_1<::System::Guid>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Guid>*, "Pending",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::System::Guid>*>(value));
}
template <typename TResult> inline ::System::Collections::Generic::HashSet_1<::System::Guid>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_Pending() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Guid>*, "Pending",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_Results(::System::Collections::Generic::Dictionary_2<::System::Guid, TResult>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, TResult>*, "Results",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, TResult>*>(value));
}
template <typename TResult> inline ::System::Collections::Generic::Dictionary_2<::System::Guid, TResult>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_Results() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, TResult>*, "Results",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_Continuations(::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action*>*, "Continuations",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action*>*>(value));
}
template <typename TResult> inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_Continuations() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action*>*, "Continuations",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult>
inline void
GlobalNamespace::OVRTask_1<TResult>::setStaticF_CallbackInvokers(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>*, "CallbackInvokers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>*>(value));
}
template <typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_CallbackInvokers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>*, "CallbackInvokers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult>
inline void
GlobalNamespace::OVRTask_1<TResult>::setStaticF_CallbackRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>*, "CallbackRemovers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>*>(value));
}
template <typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_CallbackRemovers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>*, "CallbackRemovers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_CallbackClearers(::System::Collections::Generic::HashSet_1<::System::Action*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "CallbackClearers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::System::Action*>*>(value));
}
template <typename TResult> inline ::System::Collections::Generic::HashSet_1<::System::Action*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_CallbackClearers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "CallbackClearers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_InternalDataRemovers(
    ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*>*, "InternalDataRemovers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*>*>(value));
}
template <typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*>*
GlobalNamespace::OVRTask_1<TResult>::getStaticF_InternalDataRemovers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*>*, "InternalDataRemovers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_InternalDataClearers(::System::Collections::Generic::HashSet_1<::System::Action*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "InternalDataClearers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::System::Action*>*>(value));
}
template <typename TResult> inline ::System::Collections::Generic::HashSet_1<::System::Action*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_InternalDataClearers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "InternalDataClearers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_SubscriberRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<::System::Guid>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<::System::Guid>*>*, "SubscriberRemovers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<::System::Guid>*>*>(value));
}
template <typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<::System::Guid>*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_SubscriberRemovers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<::System::Guid>*>*, "SubscriberRemovers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_SubscriberClearers(::System::Collections::Generic::HashSet_1<::System::Action*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "SubscriberClearers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::System::Action*>*>(value));
}
template <typename TResult> inline ::System::Collections::Generic::HashSet_1<::System::Action*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_SubscriberClearers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "SubscriberClearers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::_ctor(::System::Guid id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::AddToPending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "AddToPending",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1<TResult>::get_IsPending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "get_IsPending",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> template <typename T> inline void GlobalNamespace::OVRTask_1<TResult>::SetInternalData(T data) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "SetInternalData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
template <typename TResult> template <typename T> inline bool GlobalNamespace::OVRTask_1<TResult>::TryGetInternalData(ByRef<T> data) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "TryGetInternalData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::SetResult(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "SetResult",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename TResult>
template <typename TIncrementalResult>
inline void GlobalNamespace::OVRTask_1<TResult>::SetIncrementalResultCallback(::System::Action_1<TIncrementalResult>* onIncrementalResultAvailable) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "SetIncrementalResultCallback",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TIncrementalResult>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TIncrementalResult>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TIncrementalResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onIncrementalResultAvailable);
}
template <typename TResult> template <typename TIncrementalResult> inline void GlobalNamespace::OVRTask_1<TResult>::NotifyIncrementalResult(TIncrementalResult incrementalResult) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "NotifyIncrementalResult",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TIncrementalResult>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TIncrementalResult>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TIncrementalResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, incrementalResult);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1<TResult>::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "get_IsCompleted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline TResult GlobalNamespace::OVRTask_1<TResult>::GetResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "GetResult",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
template <typename TResult> inline ::GlobalNamespace::__OVRTask_1__Awaiter<TResult> GlobalNamespace::OVRTask_1<TResult>::GetAwaiter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "GetAwaiter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTask_1__Awaiter<TResult>, false>(this, ___internal_method);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::WithContinuation(::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "WithContinuation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::ContinueWith(::System::Action_1<TResult>* onCompleted) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "ContinueWith", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onCompleted);
}
template <typename TResult> template <typename T> inline void GlobalNamespace::OVRTask_1<TResult>::ContinueWith(::System::Action_2<TResult, T>* onCompleted, T state) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "ContinueWith",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TResult, T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onCompleted, state);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::ValidateDelegateAndThrow(::System::Object* delegate, ::StringW paramName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "ValidateDelegateAndThrow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delegate, paramName);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1<TResult>::Equals(::GlobalNamespace::OVRTask_1<TResult> other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<TResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1<TResult>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1<TResult>::op_Equality(::GlobalNamespace::OVRTask_1<TResult> lhs, ::GlobalNamespace::OVRTask_1<TResult> rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<TResult>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<TResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1<TResult>::op_Inequality(::GlobalNamespace::OVRTask_1<TResult> lhs, ::GlobalNamespace::OVRTask_1<TResult> rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<TResult>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<TResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
template <typename TResult> inline int32_t GlobalNamespace::OVRTask_1<TResult>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TResult> inline ::StringW GlobalNamespace::OVRTask_1<TResult>::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_id", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }]
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1<TResult>::OVRTask_1(::System::Guid _id) noexcept {
  this->_id = _id;
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1<TResult>::OVRTask_1() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename TResult> constexpr GlobalNamespace::__OVRTask_1__Awaiter<TResult>::operator ::System::Runtime::CompilerServices::INotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::__OVRTask_1__Awaiter<TResult>::i___System__Runtime__CompilerServices__INotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename TResult> inline void GlobalNamespace::__OVRTask_1__Awaiter<TResult>::_ctor(::GlobalNamespace::OVRTask_1<TResult> task) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Awaiter<TResult>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<TResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
template <typename TResult> inline bool GlobalNamespace::__OVRTask_1__Awaiter<TResult>::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Awaiter<TResult>>::get(),
                                                                             "get_IsCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline void GlobalNamespace::__OVRTask_1__Awaiter<TResult>::OnCompleted(::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Awaiter<TResult>>::get(), "OnCompleted",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
template <typename TResult> inline TResult GlobalNamespace::__OVRTask_1__Awaiter<TResult>::GetResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Awaiter<TResult>>::get(),
                                                                             "GetResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_task", ty: "::GlobalNamespace::OVRTask_1<TResult>", modifiers: "", def_value: Some("{}") }]
template <typename TResult> constexpr ::GlobalNamespace::__OVRTask_1__Awaiter<TResult>::__OVRTask_1__Awaiter(::GlobalNamespace::OVRTask_1<TResult> _task) noexcept {
  this->_task = _task;
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::__OVRTask_1__Awaiter<TResult>::__OVRTask_1__Awaiter() {}
template <typename TResult>
inline void
GlobalNamespace::__OVRTask_1__Callback<TResult>::setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__Callback<TResult>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__Callback<TResult>>*, "Callbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Callback<TResult>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__Callback<TResult>>*>(value));
}
template <typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__Callback<TResult>>* GlobalNamespace::__OVRTask_1__Callback<TResult>::getStaticF_Callbacks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__Callback<TResult>>*, "Callbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Callback<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::__OVRTask_1__Callback<TResult>::setStaticF_Invoker(::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*, "Invoker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Callback<TResult>>::get>(
      std::forward<::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>(value));
}
template <typename TResult> inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>* GlobalNamespace::__OVRTask_1__Callback<TResult>::getStaticF_Invoker() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*, "Invoker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Callback<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::__OVRTask_1__Callback<TResult>::setStaticF_Remover(::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*, "Remover",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Callback<TResult>>::get>(
      std::forward<::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>(value));
}
template <typename TResult> inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>* GlobalNamespace::__OVRTask_1__Callback<TResult>::getStaticF_Remover() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*, "Remover",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Callback<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::__OVRTask_1__Callback<TResult>::setStaticF_Clearer(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "Clearer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Callback<TResult>>::get>(
      std::forward<::System::Action*>(value));
}
template <typename TResult> inline ::System::Action* GlobalNamespace::__OVRTask_1__Callback<TResult>::getStaticF_Clearer() {
  return ::cordl_internals::getStaticField<::System::Action*, "Clearer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Callback<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::__OVRTask_1__Callback<TResult>::Invoke(::System::Guid taskId, TResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Callback<TResult>>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskId, result);
}
template <typename TResult> inline bool GlobalNamespace::__OVRTask_1__Callback<TResult>::Remove(::System::Guid taskId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Callback<TResult>>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, taskId);
}
template <typename TResult> inline void GlobalNamespace::__OVRTask_1__Callback<TResult>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Callback<TResult>>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template <typename TResult> inline void GlobalNamespace::__OVRTask_1__Callback<TResult>::Invoke(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Callback<TResult>>::get(), "Invoke",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename TResult> inline void GlobalNamespace::__OVRTask_1__Callback<TResult>::_ctor(::System::Action_1<TResult>* delegate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Callback<TResult>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delegate);
}
template <typename TResult> inline void GlobalNamespace::__OVRTask_1__Callback<TResult>::Add(::System::Guid taskId, ::System::Action_1<TResult>* delegate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__Callback<TResult>>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskId, delegate);
}
// Ctor Parameters [CppParam { name: "_delegate", ty: "::System::Action_1<TResult>*", modifiers: "", def_value: Some("nullptr") }]
template <typename TResult> constexpr ::GlobalNamespace::__OVRTask_1__Callback<TResult>::__OVRTask_1__Callback(::System::Action_1<TResult>* _delegate) noexcept {
  this->_delegate = _delegate;
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::__OVRTask_1__Callback<TResult>::__OVRTask_1__Callback() {}
template <typename TResult, typename T>
inline void GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::setStaticF_Callbacks(
    ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>*, "Callbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>*>(value));
}
template <typename TResult, typename T>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>*
GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::getStaticF_Callbacks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>*, "Callbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::setStaticF_Invoker(::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*, "Invoker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>::get>(
      std::forward<::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>(value));
}
template <typename TResult, typename T> inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>* GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::getStaticF_Invoker() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*, "Invoker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::setStaticF_Remover(::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*, "Remover",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>::get>(
      std::forward<::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>(value));
}
template <typename TResult, typename T> inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>* GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::getStaticF_Remover() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*, "Remover",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::setStaticF_Clearer(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "Clearer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>::get>(
      std::forward<::System::Action*>(value));
}
template <typename TResult, typename T> inline ::System::Action* GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::getStaticF_Clearer() {
  return ::cordl_internals::getStaticField<::System::Action*, "Clearer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::Invoke(::System::Guid taskId, TResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskId, result);
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::_ctor(T data, ::System::Action_2<TResult, T>* delegate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TResult, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, delegate);
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template <typename TResult, typename T> inline bool GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::Remove(::System::Guid taskId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>::get(), "Remove",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, taskId);
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::Invoke(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>::get(), "Invoke",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename TResult, typename T> inline void GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::Add(::System::Guid taskId, T data, ::System::Action_2<TResult, T>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TResult, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskId, data, callback);
}
// Ctor Parameters [CppParam { name: "_data", ty: "T", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_delegate", ty: "::System::Action_2<TResult,T>*", modifiers: "", def_value:
// Some("nullptr") }]
template <typename TResult, typename T>
constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::__OVRTask_1__CallbackWithState_1(T _data, ::System::Action_2<TResult, T>* _delegate) noexcept {
  this->_data = _data;
  this->_delegate = _delegate;
}
// Ctor Parameters []
template <typename TResult, typename T> constexpr ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>::__OVRTask_1__CallbackWithState_1() {}
