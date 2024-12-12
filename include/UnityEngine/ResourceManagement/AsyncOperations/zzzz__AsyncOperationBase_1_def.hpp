#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationStatus_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__IAsyncOperation_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOperationBase_1)
namespace GlobalNamespace {
template <typename T> class DelegateList_1;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> class AsyncOperationBase_1___c__DisplayClass60_0;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> class AsyncOperationBase_1___c__DisplayClass61_0;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationStatus;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IAsyncOperation;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> class AsyncOperationBase_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> class AsyncOperationBase_1___c__DisplayClass60_0;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> class AsyncOperationBase_1___c__DisplayClass61_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1);
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1___c__DisplayClass60_0);
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1___c__DisplayClass61_0);
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template <typename TObject>
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1/<>c__DisplayClass60_0<TObject>
class CORDL_TYPE AsyncOperationBase_1___c__DisplayClass60_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value;

  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1___c__DisplayClass60_0<TObject>* New_ctor();

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_value() const;

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method <add_CompletedTypeless>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _add_CompletedTypeless_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> s);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperationBase_1___c__DisplayClass60_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1___c__DisplayClass60_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncOperationBase_1___c__DisplayClass60_0(AsyncOperationBase_1___c__DisplayClass60_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1___c__DisplayClass60_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncOperationBase_1___c__DisplayClass60_0(AsyncOperationBase_1___c__DisplayClass60_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15690 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::AsyncOperations
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template <typename TObject>
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1/<>c__DisplayClass61_0<TObject>
class CORDL_TYPE AsyncOperationBase_1___c__DisplayClass61_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value;

  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1___c__DisplayClass61_0<TObject>* New_ctor();

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_value() const;

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <remove_CompletedTypeless>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _remove_CompletedTypeless_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> s);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperationBase_1___c__DisplayClass61_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1___c__DisplayClass61_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncOperationBase_1___c__DisplayClass61_0(AsyncOperationBase_1___c__DisplayClass61_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1___c__DisplayClass61_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncOperationBase_1___c__DisplayClass61_0(AsyncOperationBase_1___c__DisplayClass61_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15691 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::AsyncOperations
// Dependencies System.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus, UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template <typename TObject>
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>
class CORDL_TYPE AsyncOperationBase_1 : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass60_0 = ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1___c__DisplayClass60_0<TObject>;

  using __c__DisplayClass61_0 = ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1___c__DisplayClass61_0<TObject>;

  __declspec(property(get = get_CompletedEventHasListeners)) bool CompletedEventHasListeners;

  __declspec(property(get = get_Current)) ::System::Object* Current;

  __declspec(property(get = get_DebugName)) ::StringW DebugName;

  __declspec(property(get = get_DestroyedEventHasListeners)) bool DestroyedEventHasListeners;

  /// @brief Field Executed, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_Executed, put = __cordl_internal_set_Executed)) ::System::Action* Executed;

  __declspec(property(get = get_Handle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> Handle;

  /// @brief Field HasExecuted, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_HasExecuted, put = __cordl_internal_set_HasExecuted)) bool HasExecuted;

  __declspec(property(get = get_IsDone)) bool IsDone;

  __declspec(property(get = get_IsRunning, put = set_IsRunning)) bool IsRunning;

  __declspec(property(put = set_OnDestroy)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* OnDestroy;

  __declspec(property(get = get_OperationException, put = set_OperationException)) ::System::Exception* OperationException;

  __declspec(property(get = get_PercentComplete)) float_t PercentComplete;

  __declspec(property(get = get_Progress)) float_t Progress;

  __declspec(property(get = get_ReferenceCount)) int32_t ReferenceCount;

  __declspec(property(get = get_Result, put = set_Result)) TObject Result;

  __declspec(property(get = get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus Status;

  __declspec(property(get = get_Task)) ::System::Threading::Tasks::Task_1<TObject>* Task;

  __declspec(property(get = UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName)) ::StringW UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DebugName;

  __declspec(property(get = UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
      UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Handle;

  __declspec(property(get = UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone)) bool UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IsDone;

  __declspec(property(put = UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*
      UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_OnDestroy;

  __declspec(property(get = UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException)) ::System::Exception*
      UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_OperationException;

  __declspec(property(get = UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete)) float_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_PercentComplete;

  __declspec(property(get = UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount)) int32_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_ReferenceCount;

  __declspec(property(get = UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType)) ::System::Type* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_ResultType;

  __declspec(property(get = UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus
      UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Status;

  __declspec(property(get = UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task)) ::System::Threading::Tasks::Task_1<::System::Object*>*
      UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Task;

  __declspec(property(get = UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version)) int32_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Version;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field <IsRunning>k__BackingField, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__IsRunning_k__BackingField, put = __cordl_internal_set__IsRunning_k__BackingField)) bool _IsRunning_k__BackingField;

  /// @brief Field <Result>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Result_k__BackingField, put = __cordl_internal_set__Result_k__BackingField)) TObject _Result_k__BackingField;

  /// @brief Field m_CompletedActionT, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_CompletedActionT,
      put = __cordl_internal_set_m_CompletedActionT)) ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* m_CompletedActionT;

  /// @brief Field m_DestroyedAction, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DestroyedAction,
                      put = __cordl_internal_set_m_DestroyedAction)) ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* m_DestroyedAction;

  /// @brief Field m_Error, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Error, put = __cordl_internal_set_m_Error)) ::System::Exception* m_Error;

  /// @brief Field m_InDeferredCallbackQueue, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_m_InDeferredCallbackQueue, put = __cordl_internal_set_m_InDeferredCallbackQueue)) bool m_InDeferredCallbackQueue;

  /// @brief Field m_OnDestroyAction, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnDestroyAction,
                      put = __cordl_internal_set_m_OnDestroyAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* m_OnDestroyAction;

  /// @brief Field m_RM, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RM, put = __cordl_internal_set_m_RM)) ::UnityEngine::ResourceManagement::ResourceManager* m_RM;

  /// @brief Field m_Status, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Status, put = __cordl_internal_set_m_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus m_Status;

  /// @brief Field m_UpdateCallback, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdateCallback, put = __cordl_internal_set_m_UpdateCallback)) ::System::Action_1<float_t>* m_UpdateCallback;

  /// @brief Field m_UpdateCallbacks, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdateCallbacks, put = __cordl_internal_set_m_UpdateCallbacks)) ::GlobalNamespace::DelegateList_1<float_t>* m_UpdateCallbacks;

  /// @brief Field m_Version, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  /// @brief Field m_dependencyCompleteAction, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_dependencyCompleteAction,
                      put = __cordl_internal_set_m_dependencyCompleteAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* m_dependencyCompleteAction;

  /// @brief Field m_referenceCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_referenceCount, put = __cordl_internal_set_m_referenceCount)) int32_t m_referenceCount;

  /// @brief Field m_taskCompletionSource, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_taskCompletionSource,
                      put = __cordl_internal_set_m_taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<TObject>* m_taskCompletionSource;

  /// @brief Field m_taskCompletionSourceTypeless, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_taskCompletionSourceTypeless,
                      put = __cordl_internal_set_m_taskCompletionSourceTypeless)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* m_taskCompletionSourceTypeless;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation"
  constexpr operator ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*() noexcept;

  /// @brief Method Complete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Complete(TObject result, bool success, ::StringW errorMsg);

  /// @brief Method Complete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Complete(TObject result, bool success, ::StringW errorMsg, bool releaseDependenciesOnFailure);

  /// @brief Method Complete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Complete(TObject result, bool success, ::System::Exception* exception, bool releaseDependenciesOnFailure);

  /// @brief Method DecrementReferenceCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void DecrementReferenceCount();

  /// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Destroy();

  /// @brief Method Execute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method GetDependencies, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* dependencies);

  /// @brief Method GetDownloadStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited);

  /// @brief Method IncrementReferenceCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void IncrementReferenceCount();

  /// @brief Method InvokeCompletionEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InvokeCompletionEvent();

  /// @brief Method InvokeExecute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InvokeExecute();

  /// @brief Method InvokeWaitForCompletion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool MoveNext();

  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* New_ctor();

  /// @brief Method RegisterForDeferredCallbackEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RegisterForDeferredCallbackEvent(bool incrementReferenceCount);

  /// @brief Method ReleaseDependencies, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReleaseDependencies();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ShortenPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::StringW ShortenPath(::StringW p, bool keepExtension);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Start(::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency,
                    ::GlobalNamespace::DelegateList_1<float_t>* updateCallbacks);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.DecrementReferenceCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount();

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDependencies, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies(
      ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps);

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDownloadStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited);

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetResultAsObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject();

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.IncrementReferenceCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount();

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.InvokeCompletionEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent();

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start(::UnityEngine::ResourceManagement::ResourceManager* rm,
                                                                                   ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency,
                                                                                   ::GlobalNamespace::DelegateList_1<float_t>* updateCallbacks);

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_CompletedTypeless, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_Destroyed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_DebugName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName();

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Handle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle();

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_IsDone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone();

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_OperationException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Exception* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException();

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_PercentComplete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline float_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete();

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ReferenceCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount();

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ResultType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Type* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType();

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Status, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status();

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Task, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Object*>* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task();

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Version, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version();

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_CompletedTypeless, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void
  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_Destroyed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.set_OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value);

  /// @brief Method UpdateCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateCallback(float_t unscaledDeltaTime);

  /// @brief Method WaitForCompletion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void WaitForCompletion();

  constexpr ::System::Action* const& __cordl_internal_get_Executed() const;

  constexpr ::System::Action*& __cordl_internal_get_Executed();

  constexpr bool const& __cordl_internal_get_HasExecuted() const;

  constexpr bool& __cordl_internal_get_HasExecuted();

  constexpr bool const& __cordl_internal_get__IsRunning_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsRunning_k__BackingField();

  constexpr TObject const& __cordl_internal_get__Result_k__BackingField() const;

  constexpr TObject& __cordl_internal_get__Result_k__BackingField();

  constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* const& __cordl_internal_get_m_CompletedActionT() const;

  constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*& __cordl_internal_get_m_CompletedActionT();

  constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_m_DestroyedAction() const;

  constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_DestroyedAction();

  constexpr ::System::Exception* const& __cordl_internal_get_m_Error() const;

  constexpr ::System::Exception*& __cordl_internal_get_m_Error();

  constexpr bool const& __cordl_internal_get_m_InDeferredCallbackQueue() const;

  constexpr bool& __cordl_internal_get_m_InDeferredCallbackQueue();

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* const& __cordl_internal_get_m_OnDestroyAction() const;

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& __cordl_internal_get_m_OnDestroyAction();

  constexpr ::UnityEngine::ResourceManagement::ResourceManager* const& __cordl_internal_get_m_RM() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceManager*& __cordl_internal_get_m_RM();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus const& __cordl_internal_get_m_Status() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus& __cordl_internal_get_m_Status();

  constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_m_UpdateCallback() const;

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_m_UpdateCallback();

  constexpr ::GlobalNamespace::DelegateList_1<float_t>* const& __cordl_internal_get_m_UpdateCallbacks() const;

  constexpr ::GlobalNamespace::DelegateList_1<float_t>*& __cordl_internal_get_m_UpdateCallbacks();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_m_dependencyCompleteAction() const;

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_dependencyCompleteAction();

  constexpr int32_t const& __cordl_internal_get_m_referenceCount() const;

  constexpr int32_t& __cordl_internal_get_m_referenceCount();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<TObject>* const& __cordl_internal_get_m_taskCompletionSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<TObject>*& __cordl_internal_get_m_taskCompletionSource();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* const& __cordl_internal_get_m_taskCompletionSourceTypeless() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& __cordl_internal_get_m_taskCompletionSourceTypeless();

  constexpr void __cordl_internal_set_Executed(::System::Action* value);

  constexpr void __cordl_internal_set_HasExecuted(bool value);

  constexpr void __cordl_internal_set__IsRunning_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Result_k__BackingField(TObject value);

  constexpr void __cordl_internal_set_m_CompletedActionT(::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value);

  constexpr void __cordl_internal_set_m_DestroyedAction(::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  constexpr void __cordl_internal_set_m_Error(::System::Exception* value);

  constexpr void __cordl_internal_set_m_InDeferredCallbackQueue(bool value);

  constexpr void __cordl_internal_set_m_OnDestroyAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value);

  constexpr void __cordl_internal_set_m_RM(::UnityEngine::ResourceManagement::ResourceManager* value);

  constexpr void __cordl_internal_set_m_Status(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus value);

  constexpr void __cordl_internal_set_m_UpdateCallback(::System::Action_1<float_t>* value);

  constexpr void __cordl_internal_set_m_UpdateCallbacks(::GlobalNamespace::DelegateList_1<float_t>* value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  constexpr void __cordl_internal_set_m_dependencyCompleteAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  constexpr void __cordl_internal_set_m_referenceCount(int32_t value);

  constexpr void __cordl_internal_set_m_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<TObject>* value);

  constexpr void __cordl_internal_set_m_taskCompletionSourceTypeless(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value);

  /// @brief Method <.ctor>b__38_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __ctor_b__38_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle o);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_Completed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value);

  /// @brief Method add_CompletedTypeless, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method add_Destroyed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method add_Executed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_Executed(::System::Action* value);

  /// @brief Method get_CompletedEventHasListeners, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_CompletedEventHasListeners();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Object* get_Current();

  /// @brief Method get_DebugName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_DebugName();

  /// @brief Method get_DestroyedEventHasListeners, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_DestroyedEventHasListeners();

  /// @brief Method get_Handle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> get_Handle();

  /// @brief Method get_IsDone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsDone();

  /// @brief Method get_IsRunning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsRunning();

  /// @brief Method get_OperationException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Exception* get_OperationException();

  /// @brief Method get_PercentComplete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_PercentComplete();

  /// @brief Method get_Progress, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_Progress();

  /// @brief Method get_ReferenceCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_ReferenceCount();

  /// @brief Method get_Result, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TObject get_Result();

  /// @brief Method get_Status, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status();

  /// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<TObject>* get_Task();

  /// @brief Method get_Version, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Convert to "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation"
  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* i___UnityEngine__ResourceManagement__AsyncOperations__IAsyncOperation() noexcept;

  /// @brief Method remove_Completed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value);

  /// @brief Method remove_CompletedTypeless, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method remove_Destroyed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method remove_Executed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_Executed(::System::Action* value);

  /// @brief Method set_IsRunning, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_IsRunning(bool value);

  /// @brief Method set_OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_OnDestroy(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value);

  /// @brief Method set_OperationException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_OperationException(::System::Exception* value);

  /// @brief Method set_Result, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Result(TObject value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperationBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncOperationBase_1(AsyncOperationBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncOperationBase_1(AsyncOperationBase_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15692 };

  /// @brief Field <Result>k__BackingField, offset: 0x10, size: 0x8, def value: None
  TObject ____Result_k__BackingField;

  /// @brief Field m_referenceCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_referenceCount;

  /// @brief Field m_Status, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus ___m_Status;

  /// @brief Field m_Error, offset: 0x20, size: 0x8, def value: None
  ::System::Exception* ___m_Error;

  /// @brief Field m_RM, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceManager* ___m_RM;

  /// @brief Field m_Version, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_DestroyedAction, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* ___m_DestroyedAction;

  /// @brief Field m_CompletedActionT, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* ___m_CompletedActionT;

  /// @brief Field m_OnDestroyAction, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* ___m_OnDestroyAction;

  /// @brief Field m_dependencyCompleteAction, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* ___m_dependencyCompleteAction;

  /// @brief Field HasExecuted, offset: 0x58, size: 0x1, def value: None
  bool ___HasExecuted;

  /// @brief Field Executed, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___Executed;

  /// @brief Field <IsRunning>k__BackingField, offset: 0x68, size: 0x1, def value: None
  bool ____IsRunning_k__BackingField;

  /// @brief Field m_taskCompletionSource, offset: 0x70, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<TObject>* ___m_taskCompletionSource;

  /// @brief Field m_taskCompletionSourceTypeless, offset: 0x78, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* ___m_taskCompletionSourceTypeless;

  /// @brief Field m_InDeferredCallbackQueue, offset: 0x80, size: 0x1, def value: None
  bool ___m_InDeferredCallbackQueue;

  /// @brief Field m_UpdateCallbacks, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::DelegateList_1<float_t>* ___m_UpdateCallbacks;

  /// @brief Field m_UpdateCallback, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___m_UpdateCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::AsyncOperations
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationBase`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1___c__DisplayClass60_0, "UnityEngine.ResourceManagement.AsyncOperations",
                                     "AsyncOperationBase`1/<>c__DisplayClass60_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1___c__DisplayClass61_0, "UnityEngine.ResourceManagement.AsyncOperations",
                                     "AsyncOperationBase`1/<>c__DisplayClass61_0");
