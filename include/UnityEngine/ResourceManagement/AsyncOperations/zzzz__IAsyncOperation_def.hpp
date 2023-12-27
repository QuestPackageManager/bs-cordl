#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IAsyncOperation)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
class Exception;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationStatus;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace GlobalNamespace {
template <typename T> class DelegateList_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IAsyncOperation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation);
// Type: UnityEngine.ResourceManagement.AsyncOperations::IAsyncOperation
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14029))
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::IAsyncOperation*
class CORDL_TYPE IAsyncOperation {
public:
  // Declarations
  __declspec(property(get = get_ResultType))::System::Type* ResultType;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_DebugName))::StringW DebugName;

  __declspec(property(get = get_ReferenceCount)) int32_t ReferenceCount;

  __declspec(property(get = get_PercentComplete)) float_t PercentComplete;

  __declspec(property(get = get_Status))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus Status;

  __declspec(property(get = get_OperationException))::System::Exception* OperationException;

  __declspec(property(get = get_IsDone)) bool IsDone;

  __declspec(property(put = set_OnDestroy))::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* OnDestroy;

  __declspec(property(get = get_IsRunning)) bool IsRunning;

  __declspec(property(get = get_Task))::System::Threading::Tasks::Task_1<::System::Object*>* Task;

  __declspec(property(get = get_Handle))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle Handle;

  /// @brief Method GetResultAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* GetResultAsObject();

  /// @brief Method get_ResultType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Type* get_ResultType();

  /// @brief Method get_Version addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_Version();

  /// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_DebugName();

  /// @brief Method DecrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void DecrementReferenceCount();

  /// @brief Method IncrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void IncrementReferenceCount();

  /// @brief Method get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_ReferenceCount();

  /// @brief Method get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_PercentComplete();

  /// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited);

  /// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status();

  /// @brief Method get_OperationException addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Exception* get_OperationException();

  /// @brief Method get_IsDone addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsDone();

  /// @brief Method set_OnDestroy addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_OnDestroy(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value);

  /// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps);

  /// @brief Method get_IsRunning addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsRunning();

  /// @brief Method add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method add_Destroyed addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method InvokeCompletionEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void InvokeCompletionEvent();

  /// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::System::Object*>* get_Task();

  /// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Start(::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency,
                    ::GlobalNamespace::DelegateList_1<float_t>* updateCallbacks);

  /// @brief Method get_Handle addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_Handle();

  /// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void WaitForCompletion();

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsyncOperation(IAsyncOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncOperation(IAsyncOperation const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::AsyncOperations
NEED_NO_BOX(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, "UnityEngine.ResourceManagement.AsyncOperations", "IAsyncOperation");
