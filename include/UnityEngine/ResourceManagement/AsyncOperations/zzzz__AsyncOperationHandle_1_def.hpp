#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOperationHandle_1)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Exception;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> class AsyncOperationBase_1;
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
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1);
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1
// SizeInfo { instance_size: 32, native_size: 41, calculated_instance_size: 32, calculated_native_size: 41, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template <typename TObject>
// Is value type: true
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1<TObject>
struct CORDL_TYPE AsyncOperationHandle_1 {
public:
  // Declarations
  __declspec(property(get = get_DebugName)) ::StringW DebugName;

  __declspec(property(get = get_InternalOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* InternalOp;

  __declspec(property(get = get_IsDone)) bool IsDone;

  __declspec(property(get = get_LocationName, put = set_LocationName)) ::StringW LocationName;

  __declspec(property(get = get_OperationException)) ::System::Exception* OperationException;

  __declspec(property(get = get_PercentComplete)) float_t PercentComplete;

  __declspec(property(get = get_ReferenceCount)) int32_t ReferenceCount;

  __declspec(property(get = get_Result)) TObject Result;

  __declspec(property(get = get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus Status;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  __declspec(property(get = get_Task)) ::System::Threading::Tasks::Task_1<TObject>* Task;

  __declspec(property(get = get_UnloadSceneOpExcludeReleaseCallback, put = set_UnloadSceneOpExcludeReleaseCallback)) bool UnloadSceneOpExcludeReleaseCallback;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*();

  /// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> Acquire();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> other);

  /// @brief Method GetDependencies, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps);

  /// @brief Method GetDownloadStatus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus();

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method InternalGetDownloadStatus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus InternalGetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited);

  /// @brief Method IsValid, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IEnumerator_MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method WaitForCompletion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TObject WaitForCompletion();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* op);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, ::StringW locationName);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int32_t version);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int32_t version, ::StringW locationName);

  /// @brief Method add_Completed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value);

  /// @brief Method add_CompletedTypeless, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method add_Destroyed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method get_DebugName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_DebugName();

  /// @brief Method get_InternalOp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* get_InternalOp();

  /// @brief Method get_IsDone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsDone();

  /// @brief Method get_LocationName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_LocationName();

  /// @brief Method get_OperationException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Exception* get_OperationException();

  /// @brief Method get_PercentComplete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_PercentComplete();

  /// @brief Method get_ReferenceCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_ReferenceCount();

  /// @brief Method get_Result, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TObject get_Result();

  /// @brief Method get_Status, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status();

  /// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<TObject>* get_Task();

  /// @brief Method get_UnloadSceneOpExcludeReleaseCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_UnloadSceneOpExcludeReleaseCallback();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>"
  constexpr ::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*
  i___System__IEquatable_1___UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationHandle_1_TObject__();

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  op_Implicit___UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> obj);

  /// @brief Method remove_Completed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value);

  /// @brief Method remove_CompletedTypeless, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method remove_Destroyed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method set_LocationName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_LocationName(::StringW value);

  /// @brief Method set_UnloadSceneOpExcludeReleaseCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_UnloadSceneOpExcludeReleaseCallback(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperationHandle_1();

  // Ctor Parameters [CppParam { name: "m_InternalOp", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*", modifiers: "", def_value: None }, CppParam { name:
  // "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "m_UnloadSceneOpExcludeReleaseCallback", ty: "bool", modifiers: "", def_value: None }]
  constexpr AsyncOperationHandle_1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* m_InternalOp, int32_t m_Version, ::StringW m_LocationName,
                                   bool m_UnloadSceneOpExcludeReleaseCallback) noexcept;

  /// @brief Field m_InternalOp, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* m_InternalOp;

  /// @brief Field m_Version, offset: 0x8, size: 0x4, def value: None
  int32_t m_Version;

  /// @brief Field m_LocationName, offset: 0x10, size: 0x8, def value: None
  ::StringW m_LocationName;

  /// @brief Field m_UnloadSceneOpExcludeReleaseCallback, offset: 0x18, size: 0x1, def value: None
  bool m_UnloadSceneOpExcludeReleaseCallback;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15658 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::AsyncOperations
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1");
