#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\AsyncOperations\AsyncOperationHandle_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationStatus_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__IAsyncOperation_def.hpp"
template <typename TObject>
inline void
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>::setStaticF___9(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>*, "<>9",
                                    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>*>(
      std::forward<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>*>(value));
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>*
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>*, "<>9",
                                           ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>*>();
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>::setStaticF___9__20_0(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*, "<>9__20_0",
                                    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>*>(
      std::forward<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>(value));
}
template <typename TObject>
inline ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>::getStaticF___9__20_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*, "<>9__20_0",
                                           ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>*>();
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>::_ReleaseHandleOnCompletion_b__20_0(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>*>(),
                                       { "<ReleaseHandleOnCompletion>b__20_0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>*>());
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1___c<TObject>::AsyncOperationHandle_1___c() {}
template <typename TObject> inline int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_Version() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TObject> inline ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_LocationName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "get_LocationName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::set_LocationName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                                                                                         { "set_LocationName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::op_Implicit___UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationHandle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(nullptr, ___internal_method, obj);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, op);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::GetDownloadStatus() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "GetDownloadStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(*this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::InternalGetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                                                           { "InternalGetDownloadStatus", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(*this, ___internal_method, visited);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, op);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int32_t version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, op, version);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, ::StringW locationName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, op, locationName);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int32_t version,
                                                                                                     ::StringW locationName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, op, version, locationName);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::Acquire() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "Acquire", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(*this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::add_Completed(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                                       { "add_Completed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::remove_Completed(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                                       { "remove_Completed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::ReleaseHandleOnCompletion() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "ReleaseHandleOnCompletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::add_CompletedTypeless(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                                              { "add_CompletedTypeless", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::remove_CompletedTypeless(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                                       { "remove_CompletedTypeless", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename TObject> inline ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_DebugName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "get_DebugName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                          { "GetDependencies", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, deps);
}
template <typename TObject>
inline void
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                                              { "add_Destroyed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::remove_Destroyed(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                                              { "remove_Destroyed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename TObject>
inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::Equals(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename TObject> inline int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TObject> inline TObject UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::WaitForCompletion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "WaitForCompletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TObject>(*this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_InternalOp() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "get_InternalOp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>(*this, ___internal_method);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_IsDone() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "get_IsDone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::IsValid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TObject> inline ::System::Exception* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_OperationException() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "get_OperationException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(*this, ___internal_method);
}
template <typename TObject> inline float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_PercentComplete() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "get_PercentComplete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
template <typename TObject> inline int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_ReferenceCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "get_ReferenceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::Release() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TObject> inline TObject UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_Result() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "get_Result", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TObject>(*this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_Status() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "get_Status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus>(*this, ___internal_method);
}
template <typename TObject> inline ::System::Threading::Tasks::Task_1<TObject>* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_Task() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "get_Task", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TObject>*>(*this, ___internal_method);
}
template <typename TObject> inline ::System::Object* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(),
                                                                                         { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::System_Collections_IEnumerator_MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "System.Collections.IEnumerator.MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TObject> constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TObject> constexpr ::System::Collections::IEnumerator* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>"
template <typename TObject>
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::operator ::System::IEquatable_1<
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>"
template <typename TObject>
constexpr ::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::i___System__IEquatable_1___UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationHandle_1_TObject__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_InternalOp", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocationName", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::AsyncOperationHandle_1(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* m_InternalOp, int32_t m_Version, ::StringW m_LocationName) noexcept {
  this->m_InternalOp = m_InternalOp;
  this->m_Version = m_Version;
  this->m_LocationName = m_LocationName;
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::AsyncOperationHandle_1() {}
