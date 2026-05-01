#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask_1.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ManualResetValueTaskSourceCore_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AwaitableCompletionSource_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceOnCompletedFlags_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceStatus_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Awaitable_1_def.hpp"
template <typename TResult> inline void GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>::Invoke(::System::Guid guid, TResult result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, guid, result);
}
template <typename TResult>
inline ::System::IAsyncResult* GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>::BeginInvoke(::System::Guid guid, TResult result, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, guid, result, callback, object);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename TResult>
inline ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>* GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>(object, method));
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>::OVRTask_1_ContinueWithInvoker() {}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>::Invoke(::System::Guid guid) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, guid);
}
template <typename TResult>
inline ::System::IAsyncResult* GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>::BeginInvoke(::System::Guid guid, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, guid, callback, object);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
template <typename TResult>
inline ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>* GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>(object, method));
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>::OVRTask_1_ContinueWithRemover() {}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>::Invoke(::System::Guid guid) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, guid);
}
template <typename TResult>
inline ::System::IAsyncResult* GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>::BeginInvoke(::System::Guid guid, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, guid, callback, object);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
template <typename TResult>
inline ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>* GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>(object, method));
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>::OVRTask_1_InternalDataRemover() {}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>::setStaticF_Data(::System::Collections::Generic::Dictionary_2<::System::Guid, T>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, T>*, "Data",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, T>*>(value));
}
template <typename TResult, typename T> inline ::System::Collections::Generic::Dictionary_2<::System::Guid, T>* GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>::getStaticF_Data() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, T>*, "Data",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>*>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>::setStaticF_Remover(::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*, "Remover",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>*>::get>(
      std::forward<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>(value));
}
template <typename TResult, typename T> inline ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>* GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>::getStaticF_Remover() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*, "Remover",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>*>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>::setStaticF_Clearer(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "Clearer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>*>::get>(
      std::forward<::System::Action*>(value));
}
template <typename TResult, typename T> inline ::System::Action* GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>::getStaticF_Clearer() {
  return ::cordl_internals::getStaticField<::System::Action*, "Clearer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>*>::get>();
}
template <typename TResult, typename T> inline bool GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>::TryGet(::System::Guid taskId, ::ByRef<T> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>*>::get(), "TryGet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, taskId, data);
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>::Set(::System::Guid taskId, T data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskId, data);
}
template <typename TResult, typename T> inline bool GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>::Remove(::System::Guid taskId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>*>::get(), "Remove",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, taskId);
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TResult, typename T> constexpr ::GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>::OVRTask_1_InternalData_1() {}
template <typename TResult, typename T>
inline void GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>::setStaticF_Subscribers(::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<T>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<T>*>*, "Subscribers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<T>*>*>(value));
}
template <typename TResult, typename T>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<T>*>* GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>::getStaticF_Subscribers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<T>*>*, "Subscribers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>*>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>::setStaticF_Remover(::System::Action_1<::System::Guid>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Guid>*, "Remover",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>*>::get>(
      std::forward<::System::Action_1<::System::Guid>*>(value));
}
template <typename TResult, typename T> inline ::System::Action_1<::System::Guid>* GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>::getStaticF_Remover() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Guid>*, "Remover",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>*>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>::setStaticF_Clearer(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "Clearer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>*>::get>(
      std::forward<::System::Action*>(value));
}
template <typename TResult, typename T> inline ::System::Action* GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>::getStaticF_Clearer() {
  return ::cordl_internals::getStaticField<::System::Action*, "Clearer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>*>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>::Set(::System::Guid taskId, ::System::Action_1<T>* subscriber) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskId, subscriber);
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>::Notify(::System::Guid taskId, T result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>*>::get(), "Notify", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskId, result);
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>::Remove(::System::Guid id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>*>::get(), "Remove",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, id);
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TResult, typename T> constexpr ::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>::OVRTask_1_IncrementalResultSubscriber_1() {}
template <typename TResult> inline void GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>::setStaticF___9(::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*>::get>(
      std::forward<::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*>(value));
}
template <typename TResult> inline ::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>* GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*>::get>();
}
template <typename TResult> inline void GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult>
inline void GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>::__cctor_b__10_0(TResult result, ::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*>::get(), "<.cctor>b__10_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename TResult> inline ::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>* GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*>());
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>::CombinedTaskData_OVRTask_1___c() {}
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
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_Exceptions(::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Exception*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Exception*>*, "Exceptions",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Exception*>*>(value));
}
template <typename TResult> inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Exception*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_Exceptions() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Exception*>*, "Exceptions",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_Sources(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>*, "Sources",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>*>(value));
}
template <typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_Sources() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>*, "Sources",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult>
inline void
GlobalNamespace::OVRTask_1<TResult>::setStaticF_AwaitableSources(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>*, "AwaitableSources",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>*>(value));
}
template <typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_AwaitableSources() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>*, "AwaitableSources",
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
GlobalNamespace::OVRTask_1<TResult>::setStaticF_ContinueWithInvokers(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>*, "ContinueWithInvokers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>*>(value));
}
template <typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>*
GlobalNamespace::OVRTask_1<TResult>::getStaticF_ContinueWithInvokers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>*, "ContinueWithInvokers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult>
inline void
GlobalNamespace::OVRTask_1<TResult>::setStaticF_ContinueWithRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>*, "ContinueWithRemovers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>*>(value));
}
template <typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>*
GlobalNamespace::OVRTask_1<TResult>::getStaticF_ContinueWithRemovers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>*, "ContinueWithRemovers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_ContinueWithClearers(::System::Collections::Generic::HashSet_1<::System::Action*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "ContinueWithClearers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::System::Action*>*>(value));
}
template <typename TResult> inline ::System::Collections::Generic::HashSet_1<::System::Action*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_ContinueWithClearers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "ContinueWithClearers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult>
inline void
GlobalNamespace::OVRTask_1<TResult>::setStaticF_InternalDataRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>*, "InternalDataRemovers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>*>(value));
}
template <typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>*
GlobalNamespace::OVRTask_1<TResult>::getStaticF_InternalDataRemovers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>*, "InternalDataRemovers",
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
inline void
GlobalNamespace::OVRTask_1<TResult>::setStaticF_IncrementalResultSubscriberRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<::System::Guid>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<::System::Guid>*>*, "IncrementalResultSubscriberRemovers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<::System::Guid>*>*>(value));
}
template <typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<::System::Guid>*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_IncrementalResultSubscriberRemovers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<::System::Guid>*>*, "IncrementalResultSubscriberRemovers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_IncrementalResultSubscriberClearers(::System::Collections::Generic::HashSet_1<::System::Action*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "IncrementalResultSubscriberClearers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::System::Action*>*>(value));
}
template <typename TResult> inline ::System::Collections::Generic::HashSet_1<::System::Action*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_IncrementalResultSubscriberClearers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "IncrementalResultSubscriberClearers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_Clear(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "Clear", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Action*>(value));
}
template <typename TResult> inline ::System::Action* GlobalNamespace::OVRTask_1<TResult>::getStaticF_Clear() {
  return ::cordl_internals::getStaticField<::System::Action*, "Clear", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF__onCombinedTaskCompleted(
    ::System::Action_2<::System::Collections::Generic::List_1<TResult>*, ::GlobalNamespace::OVRTask_1<::ArrayW<TResult, ::Array<TResult>*>>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::System::Collections::Generic::List_1<TResult>*, ::GlobalNamespace::OVRTask_1<::ArrayW<TResult, ::Array<TResult>*>>>*,
                                    "_onCombinedTaskCompleted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>(
      std::forward<::System::Action_2<::System::Collections::Generic::List_1<TResult>*, ::GlobalNamespace::OVRTask_1<::ArrayW<TResult, ::Array<TResult>*>>>*>(value));
}
template <typename TResult>
inline ::System::Action_2<::System::Collections::Generic::List_1<TResult>*, ::GlobalNamespace::OVRTask_1<::ArrayW<TResult, ::Array<TResult>*>>>*
GlobalNamespace::OVRTask_1<TResult>::getStaticF__onCombinedTaskCompleted() {
  return ::cordl_internals::getStaticField<::System::Action_2<::System::Collections::Generic::List_1<TResult>*, ::GlobalNamespace::OVRTask_1<::ArrayW<TResult, ::Array<TResult>*>>>*,
                                           "_onCombinedTaskCompleted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::_ctor(::System::Guid id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1<TResult>::AddToPending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "AddToPending",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
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
template <typename TResult> template <typename T> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask_1<TResult>::WithInternalData(T data) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "WithInternalData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>, false>(this, ___internal_method, data);
}
template <typename TResult> template <typename T> inline bool GlobalNamespace::OVRTask_1<TResult>::TryGetInternalData(::ByRef<T> data) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "TryGetInternalData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1<TResult>::SetException(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "SetException", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1<TResult>::TryRemoveInternalData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(),
                                                                             "TryRemoveInternalData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1<TResult>::TryInvokeContinuation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(),
                                                                             "TryInvokeContinuation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
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
template <typename TResult>
inline ::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*>
GlobalNamespace::OVRTask_1<TResult>::WhenAll(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>* tasks, ::System::Collections::Generic::List_1<TResult>* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "WhenAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*>, false>(nullptr, ___internal_method, tasks, results);
}
template <typename TResult>
inline ::GlobalNamespace::OVRTask_1<::ArrayW<TResult, ::Array<TResult>*>>
GlobalNamespace::OVRTask_1<TResult>::WhenAll(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>* tasks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "WhenAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::ArrayW<TResult, ::Array<TResult>*>>, false>(nullptr, ___internal_method, tasks);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1<TResult>::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "get_IsCompleted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1<TResult>::get_IsFaulted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "get_IsFaulted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Exception* GlobalNamespace::OVRTask_1<TResult>::GetException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "GetException",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
template <typename TResult> inline TResult GlobalNamespace::OVRTask_1<TResult>::GetResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "GetResult",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1<TResult>::get_HasResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "get_HasResult",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1<TResult>::TryGetResult(::ByRef<TResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "TryGetResult", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
template <typename TResult> inline ::System::Threading::Tasks::ValueTask_1<TResult> GlobalNamespace::OVRTask_1<TResult>::ToValueTask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "ToValueTask",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<TResult>, false>(this, ___internal_method);
}
template <typename TResult> inline ::UnityEngine::Awaitable_1<TResult>* GlobalNamespace::OVRTask_1<TResult>::ToAwaitable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "ToAwaitable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable_1<TResult>*, false>(this, ___internal_method);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1_Awaiter<TResult> GlobalNamespace::OVRTask_1<TResult>::GetAwaiter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1<TResult>>::get(), "GetAwaiter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1_Awaiter<TResult>, false>(this, ___internal_method);
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
// Ctor Parameters [CppParam { name: "_id", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }]
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1<TResult>::OVRTask_1(::System::Guid _id) noexcept {
  this->_id = _id;
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1<TResult>::OVRTask_1() {}
template <typename TResult>
inline void
GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::setStaticF__onSingleTaskCompleted(::System::Action_2<TResult, ::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<TResult, ::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>>*, "_onSingleTaskCompleted",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>>::get>(
      std::forward<::System::Action_2<TResult, ::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>>*>(value));
}
template <typename TResult>
inline ::System::Action_2<TResult, ::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>>*
GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::getStaticF__onSingleTaskCompleted() {
  return ::cordl_internals::getStaticField<::System::Action_2<TResult, ::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>>*, "_onSingleTaskCompleted",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::OnSingleTaskCompleted(::System::Guid taskId, TResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>>::get(), "OnSingleTaskCompleted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, taskId, result);
}
template <typename TResult>
inline void GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>* tasks,
                                                                        ::System::Collections::Generic::List_1<TResult>* userOwnedResultList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tasks, userOwnedResultList);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TResult> constexpr GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TResult> constexpr ::System::IDisposable* GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Task", ty: "::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_remainingTaskIds", ty: "::System::Collections::Generic::HashSet_1<::System::Guid>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_originalTaskOrder", ty:
// "::System::Collections::Generic::List_1<::System::Guid>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_completedTasks", ty:
// "::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_userOwnedResultList", ty:
// "::System::Collections::Generic::List_1<TResult>*", modifiers: "", def_value: Some("{}") }]
template <typename TResult>
constexpr ::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::OVRTask_1_CombinedTaskData(::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*> Task,
                                                                                             ::System::Collections::Generic::HashSet_1<::System::Guid>* _remainingTaskIds,
                                                                                             ::System::Collections::Generic::List_1<::System::Guid>* _originalTaskOrder,
                                                                                             ::System::Collections::Generic::Dictionary_2<::System::Guid, TResult>* _completedTasks,
                                                                                             ::System::Collections::Generic::List_1<TResult>* _userOwnedResultList) noexcept {
  this->Task = Task;
  this->_remainingTaskIds = _remainingTaskIds;
  this->_originalTaskOrder = _originalTaskOrder;
  this->_completedTasks = _completedTasks;
  this->_userOwnedResultList = _userOwnedResultList;
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::OVRTask_1_CombinedTaskData() {}
// Ctor Parameters [CppParam { name: "CompletedTaskId", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "CombinedData", ty:
// "::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>", modifiers: "", def_value: Some("{}") }]
template <typename TResult>
constexpr ::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>::OVRTask_1_CombinedTaskDataWithCompletedTaskId(
    ::System::Guid CompletedTaskId, ::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult> CombinedData) noexcept {
  this->CompletedTaskId = CompletedTaskId;
  this->CombinedData = CombinedData;
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>::OVRTask_1_CombinedTaskDataWithCompletedTaskId() {}
template <typename TResult>
constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>& GlobalNamespace::OVRTask_1_TaskSource<TResult>::__cordl_internal_get__manualSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manualSource;
}
template <typename TResult>
constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult> const& GlobalNamespace::OVRTask_1_TaskSource<TResult>::__cordl_internal_get__manualSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manualSource;
}
template <typename TResult>
constexpr void GlobalNamespace::OVRTask_1_TaskSource<TResult>::__cordl_internal_set__manualSource(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____manualSource = value;
}
template <typename TResult> constexpr ::System::Threading::Tasks::ValueTask_1<TResult>& GlobalNamespace::OVRTask_1_TaskSource<TResult>::__cordl_internal_get__Task_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Task_k__BackingField;
}
template <typename TResult> constexpr ::System::Threading::Tasks::ValueTask_1<TResult> const& GlobalNamespace::OVRTask_1_TaskSource<TResult>::__cordl_internal_get__Task_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Task_k__BackingField;
}
template <typename TResult> constexpr void GlobalNamespace::OVRTask_1_TaskSource<TResult>::__cordl_internal_set__Task_k__BackingField(::System::Threading::Tasks::ValueTask_1<TResult> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Task_k__BackingField = value;
}
template <typename TResult> inline ::System::Threading::Tasks::ValueTask_1<TResult> GlobalNamespace::OVRTask_1_TaskSource<TResult>::get_Task() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>::get(),
                                                                             "get_Task", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<TResult>, false>(this, ___internal_method);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_TaskSource<TResult>::set_Task(::System::Threading::Tasks::ValueTask_1<TResult> value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>::get(), "set_Task", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ValueTask_1<TResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TResult> inline TResult GlobalNamespace::OVRTask_1_TaskSource<TResult>::GetResult(int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>::get(), "GetResult",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, token);
}
template <typename TResult> inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus GlobalNamespace::OVRTask_1_TaskSource<TResult>::GetStatus(int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>::get(), "GetStatus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Sources::ValueTaskSourceStatus, false>(this, ___internal_method, token);
}
template <typename TResult>
inline void GlobalNamespace::OVRTask_1_TaskSource<TResult>::OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token,
                                                                        ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>::get(), "OnCompleted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation, state, token, flags);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_TaskSource<TResult>::OVRObjectPool_IPoolObject_OnGet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>::get(),
                                                                             "OVRObjectPool.IPoolObject.OnGet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_TaskSource<TResult>::OVRObjectPool_IPoolObject_OnReturn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>::get(), "OVRObjectPool.IPoolObject.OnReturn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_TaskSource<TResult>::SetResult(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>::get(), "SetResult",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_TaskSource<TResult>::SetException(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>::get(), "SetException",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_TaskSource<TResult>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1_TaskSource<TResult>* GlobalNamespace::OVRTask_1_TaskSource<TResult>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>());
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>"
template <typename TResult> constexpr GlobalNamespace::OVRTask_1_TaskSource<TResult>::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*() noexcept {
  return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>"
template <typename TResult>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*
GlobalNamespace::OVRTask_1_TaskSource<TResult>::i___System__Threading__Tasks__Sources__IValueTaskSource_1_TResult_() noexcept {
  return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::OVRObjectPool_IPoolObject"
template <typename TResult> constexpr GlobalNamespace::OVRTask_1_TaskSource<TResult>::operator ::GlobalNamespace::OVRObjectPool_IPoolObject*() noexcept {
  return static_cast<::GlobalNamespace::OVRObjectPool_IPoolObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRObjectPool_IPoolObject"
template <typename TResult> constexpr ::GlobalNamespace::OVRObjectPool_IPoolObject* GlobalNamespace::OVRTask_1_TaskSource<TResult>::i___GlobalNamespace__OVRObjectPool_IPoolObject() noexcept {
  return static_cast<::GlobalNamespace::OVRObjectPool_IPoolObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1_TaskSource<TResult>::OVRTask_1_TaskSource() {}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::OnGet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>::get(),
                                                                             "OnGet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::OnReturn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>::get(),
                                                                             "OnReturn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::SetResultAndReturnToPool(::ByRef<TResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>::get(), "SetResultAndReturnToPool",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>* GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>());
}
/// @brief Convert operator to "::GlobalNamespace::OVRObjectPool_IPoolObject"
template <typename TResult> constexpr GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::operator ::GlobalNamespace::OVRObjectPool_IPoolObject*() noexcept {
  return static_cast<::GlobalNamespace::OVRObjectPool_IPoolObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRObjectPool_IPoolObject"
template <typename TResult> constexpr ::GlobalNamespace::OVRObjectPool_IPoolObject* GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::i___GlobalNamespace__OVRObjectPool_IPoolObject() noexcept {
  return static_cast<::GlobalNamespace::OVRObjectPool_IPoolObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::OVRTask_1_AwaitableSource() {}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_Awaiter<TResult>::_ctor(::GlobalNamespace::OVRTask_1<TResult> task) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Awaiter<TResult>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<TResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1_Awaiter<TResult>::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Awaiter<TResult>>::get(),
                                                                             "get_IsCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_Awaiter<TResult>::System_Runtime_CompilerServices_INotifyCompletion_OnCompleted(::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Awaiter<TResult>>::get(),
                                                                             "System.Runtime.CompilerServices.INotifyCompletion.OnCompleted", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
template <typename TResult> inline TResult GlobalNamespace::OVRTask_1_Awaiter<TResult>::GetResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Awaiter<TResult>>::get(), "GetResult",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename TResult> constexpr GlobalNamespace::OVRTask_1_Awaiter<TResult>::operator ::System::Runtime::CompilerServices::INotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename TResult> constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::OVRTask_1_Awaiter<TResult>::i___System__Runtime__CompilerServices__INotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_task", ty: "::GlobalNamespace::OVRTask_1<TResult>", modifiers: "", def_value: Some("{}") }]
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1_Awaiter<TResult>::OVRTask_1_Awaiter(::GlobalNamespace::OVRTask_1<TResult> _task) noexcept {
  this->_task = _task;
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1_Awaiter<TResult>::OVRTask_1_Awaiter() {}
template <typename TResult>
inline void GlobalNamespace::OVRTask_1_Callback<TResult>::setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_Callback<TResult>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_Callback<TResult>>*, "Callbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Callback<TResult>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_Callback<TResult>>*>(value));
}
template <typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_Callback<TResult>>* GlobalNamespace::OVRTask_1_Callback<TResult>::getStaticF_Callbacks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_Callback<TResult>>*, "Callbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Callback<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_Callback<TResult>::setStaticF_Invoker(::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*, "Invoker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Callback<TResult>>::get>(
      std::forward<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>(value));
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>* GlobalNamespace::OVRTask_1_Callback<TResult>::getStaticF_Invoker() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*, "Invoker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Callback<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_Callback<TResult>::setStaticF_Remover(::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*, "Remover",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Callback<TResult>>::get>(
      std::forward<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>(value));
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>* GlobalNamespace::OVRTask_1_Callback<TResult>::getStaticF_Remover() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*, "Remover",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Callback<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_Callback<TResult>::setStaticF_Clearer(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "Clearer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Callback<TResult>>::get>(
      std::forward<::System::Action*>(value));
}
template <typename TResult> inline ::System::Action* GlobalNamespace::OVRTask_1_Callback<TResult>::getStaticF_Clearer() {
  return ::cordl_internals::getStaticField<::System::Action*, "Clearer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Callback<TResult>>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_Callback<TResult>::Invoke(::System::Guid taskId, TResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Callback<TResult>>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskId, result);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask_1_Callback<TResult>::Remove(::System::Guid taskId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Callback<TResult>>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, taskId);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_Callback<TResult>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Callback<TResult>>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_Callback<TResult>::Invoke(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Callback<TResult>>::get(), "Invoke",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_Callback<TResult>::_ctor(::System::Action_1<TResult>* delegate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Callback<TResult>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delegate);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1_Callback<TResult>::Add(::System::Guid taskId, ::System::Action_1<TResult>* delegate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_Callback<TResult>>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskId, delegate);
}
// Ctor Parameters [CppParam { name: "_delegate", ty: "::System::Action_1<TResult>*", modifiers: "", def_value: Some("{}") }]
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1_Callback<TResult>::OVRTask_1_Callback(::System::Action_1<TResult>* _delegate) noexcept {
  this->_delegate = _delegate;
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1_Callback<TResult>::OVRTask_1_Callback() {}
template <typename TResult, typename T>
inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::setStaticF_Callbacks(
    ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>*, "Callbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>*>(value));
}
template <typename TResult, typename T>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>*
GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::getStaticF_Callbacks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>*, "Callbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::setStaticF_Invoker(::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*, "Invoker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>::get>(
      std::forward<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>(value));
}
template <typename TResult, typename T> inline ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>* GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::getStaticF_Invoker() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*, "Invoker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::setStaticF_Remover(::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*, "Remover",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>::get>(
      std::forward<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>(value));
}
template <typename TResult, typename T> inline ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>* GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::getStaticF_Remover() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*, "Remover",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::setStaticF_Clearer(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "Clearer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>::get>(
      std::forward<::System::Action*>(value));
}
template <typename TResult, typename T> inline ::System::Action* GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::getStaticF_Clearer() {
  return ::cordl_internals::getStaticField<::System::Action*, "Clearer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>::get>();
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::Invoke(::System::Guid taskId, TResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskId, result);
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::_ctor(T data, ::System::Action_2<TResult, T>* delegate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TResult, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, delegate);
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template <typename TResult, typename T> inline bool GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::Remove(::System::Guid taskId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>::get(), "Remove",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, taskId);
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::Invoke(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>::get(), "Invoke",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename TResult, typename T> inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::Add(::System::Guid taskId, T data, ::System::Action_2<TResult, T>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TResult, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskId, data, callback);
}
// Ctor Parameters [CppParam { name: "_data", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "_delegate", ty: "::System::Action_2<TResult,T>*", modifiers: "", def_value: Some("{}")
// }]
template <typename TResult, typename T>
constexpr ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::OVRTask_1_CallbackWithState_1(T _data, ::System::Action_2<TResult, T>* _delegate) noexcept {
  this->_data = _data;
  this->_delegate = _delegate;
}
// Ctor Parameters []
template <typename TResult, typename T> constexpr ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>::OVRTask_1_CallbackWithState_1() {}
template <typename TResult> inline void GlobalNamespace::OVRTask_1___c<TResult>::setStaticF___9(::GlobalNamespace::OVRTask_1___c<TResult>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTask_1___c<TResult>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1___c<TResult>*>::get>(
      std::forward<::GlobalNamespace::OVRTask_1___c<TResult>*>(value));
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1___c<TResult>* GlobalNamespace::OVRTask_1___c<TResult>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTask_1___c<TResult>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1___c<TResult>*>::get>();
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1___c<TResult>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1___c<TResult>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void GlobalNamespace::OVRTask_1___c<TResult>::__cctor_b__19_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1___c<TResult>*>::get(),
                                                                             "<.cctor>b__19_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult>
inline void GlobalNamespace::OVRTask_1___c<TResult>::__cctor_b__19_1(::System::Collections::Generic::List_1<TResult>* resultsFromPool,
                                                                     ::GlobalNamespace::OVRTask_1<::ArrayW<TResult, ::Array<TResult>*>> task) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_1___c<TResult>*>::get(), "<.cctor>b__19_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TResult>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<::ArrayW<TResult, ::Array<TResult>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resultsFromPool, task);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1___c<TResult>* GlobalNamespace::OVRTask_1___c<TResult>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTask_1___c<TResult>*>());
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::OVRTask_1___c<TResult>::OVRTask_1___c() {}
