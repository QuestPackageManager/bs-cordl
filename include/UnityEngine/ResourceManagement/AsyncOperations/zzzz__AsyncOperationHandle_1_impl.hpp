#pragma once
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__IAsyncOperation_def.hpp"
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TObject> constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>"
template <typename TObject>
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::operator ::System::IEquatable_1<
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TObject> inline ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_LocationName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "get_LocationName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::set_LocationName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                  "set_LocationName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_UnloadSceneOpExcludeReleaseCallback() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "get_UnloadSceneOpExcludeReleaseCallback", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::set_UnloadSceneOpExcludeReleaseCallback(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(), "set_UnloadSceneOpExcludeReleaseCallback",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::op_Implicit___UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationHandle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(nullptr, ___internal_method, obj);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::GetDownloadStatus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "GetDownloadStatus", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::InternalGetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(), "InternalGetDownloadStatus",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(this, ___internal_method, visited);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int32_t version) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, version);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, ::StringW locationName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, locationName);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int32_t version,
                                                                                                     ::StringW locationName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, version, locationName);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::Acquire() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "Acquire", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::add_Completed(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(), "add_Completed", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::remove_Completed(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(), "remove_Completed",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::add_CompletedTypeless(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                  "add_CompletedTypeless", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::remove_CompletedTypeless(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                  "remove_CompletedTypeless", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject> inline ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_DebugName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "get_DebugName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(), "GetDependencies",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deps);
}
template <typename TObject>
inline void
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(), "add_Destroyed", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::remove_Destroyed(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                  "remove_Destroyed", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TObject>
inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::Equals(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(), "Equals", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename TObject> inline int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::GetHashCode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TObject> inline TObject UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::WaitForCompletion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "WaitForCompletion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TObject, false>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_InternalOp() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "get_InternalOp", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*, false>(this, ___internal_method);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_IsDone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "get_IsDone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::IsValid() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "IsValid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObject> inline ::System::Exception* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_OperationException() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "get_OperationException", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
template <typename TObject> inline float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_PercentComplete() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "get_PercentComplete", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename TObject> inline int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_ReferenceCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "get_ReferenceCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "Release", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject> inline TObject UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_Result() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "get_Result", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TObject, false>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_Status() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "get_Status", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, false>(this, ___internal_method);
}
template <typename TObject> inline ::System::Threading::Tasks::Task_1<TObject>* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::get_Task() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "get_Task", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TObject>*, false>(this, ___internal_method);
}
template <typename TObject> inline ::System::Object* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::System_Collections_IEnumerator_MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "System.Collections.IEnumerator.MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_InternalOp", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocationName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "m_UnloadSceneOpExcludeReleaseCallback", ty: "bool", modifiers: "", def_value: Some("{}") }]
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::AsyncOperationHandle_1(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* m_InternalOp, int32_t m_Version, ::StringW m_LocationName, bool m_UnloadSceneOpExcludeReleaseCallback) noexcept {
  this->m_InternalOp = m_InternalOp;
  this->m_Version = m_Version;
  this->m_LocationName = m_LocationName;
  this->m_UnloadSceneOpExcludeReleaseCallback = m_UnloadSceneOpExcludeReleaseCallback;
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>::AsyncOperationHandle_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
