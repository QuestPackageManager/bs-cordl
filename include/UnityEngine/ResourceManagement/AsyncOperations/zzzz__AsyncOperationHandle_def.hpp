#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOperationHandle)
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
class Object;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class AsyncOperationHandle___c;
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
class AsyncOperationHandle___c;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c);
MARK_VAL_T(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle);
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle/<>c
class CORDL_TYPE AsyncOperationHandle___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c* __9;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__16_0, put = setStaticF___9__16_0)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __9__16_0;

  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c* New_ctor();

  /// @brief Method <ReleaseHandleOnCompletion>b__16_0, addr 0x6707024, size 0xc, virtual false, abstract: false, final false
  inline void _ReleaseHandleOnCompletion_b__16_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  /// @brief Method .ctor, addr 0x6707020, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c* getStaticF___9();

  static inline ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* getStaticF___9__16_0();

  static inline void setStaticF___9(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c* value);

  static inline void setStaticF___9__16_0(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperationHandle___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperationHandle___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncOperationHandle___c(AsyncOperationHandle___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperationHandle___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncOperationHandle___c(AsyncOperationHandle___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18770 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::AsyncOperations
// Dependencies
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct CORDL_TYPE AsyncOperationHandle {
public:
  // Declarations
  using __c = ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c;

  __declspec(property(get = get_DebugName)) ::StringW DebugName;

  __declspec(property(get = get_InternalOp)) ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* InternalOp;

  __declspec(property(get = get_IsDone)) bool IsDone;

  __declspec(property(get = get_LocationName, put = set_LocationName)) ::StringW LocationName;

  __declspec(property(get = get_OperationException)) ::System::Exception* OperationException;

  __declspec(property(get = get_PercentComplete)) float_t PercentComplete;

  __declspec(property(get = get_ReferenceCount)) int32_t ReferenceCount;

  __declspec(property(get = get_Result)) ::System::Object* Result;

  __declspec(property(get = get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus Status;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  __declspec(property(get = get_Task)) ::System::Threading::Tasks::Task_1<::System::Object*>* Task;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Method Acquire, addr 0x66ee794, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle Acquire();

  /// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> Convert();

  /// @brief Method Equals, addr 0x67063a8, size 0x2c, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle other);

  /// @brief Method GetDependencies, addr 0x67066f4, size 0xc0, virtual false, abstract: false, final false
  inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps);

  /// @brief Method GetDownloadStatus, addr 0x6706a10, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus();

  /// @brief Method GetHashCode, addr 0x67067b4, size 0x30, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method InternalGetDownloadStatus, addr 0x6706ab0, size 0x19c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus InternalGetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited);

  /// @brief Method IsValid, addr 0x67064b8, size 0xbc, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method Release, addr 0x66ee6bc, size 0xb8, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method ReleaseHandleOnCompletion, addr 0x67062c4, size 0xe4, virtual false, abstract: false, final false
  inline void ReleaseHandleOnCompletion();

  /// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x6706e60, size 0x18, virtual true, abstract: false, final true
  inline bool System_Collections_IEnumerator_MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x6706e78, size 0x4, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x6706e5c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method WaitForCompletion, addr 0x6706e7c, size 0x150, virtual false, abstract: false, final false
  inline ::System::Object* WaitForCompletion();

  /// @brief Method .ctor, addr 0x6706014, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op);

  /// @brief Method .ctor, addr 0x66ed4c8, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, ::StringW locationName);

  /// @brief Method .ctor, addr 0x67060e4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int32_t version);

  /// @brief Method .ctor, addr 0x67060f4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int32_t version, ::StringW locationName);

  /// @brief Method add_Completed, addr 0x66eec08, size 0xc0, virtual false, abstract: false, final false
  inline void add_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method add_Destroyed, addr 0x6706574, size 0xc0, virtual false, abstract: false, final false
  inline void add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method get_DebugName, addr 0x67063d4, size 0xe4, virtual false, abstract: false, final false
  inline ::StringW get_DebugName();

  /// @brief Method get_InternalOp, addr 0x6706104, size 0x100, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* get_InternalOp();

  /// @brief Method get_IsDone, addr 0x67067e4, size 0xcc, virtual false, abstract: false, final false
  inline bool get_IsDone();

  /// @brief Method get_LocationName, addr 0x6706004, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LocationName();

  /// @brief Method get_OperationException, addr 0x67068b0, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Exception* get_OperationException();

  /// @brief Method get_PercentComplete, addr 0x6706960, size 0xb0, virtual false, abstract: false, final false
  inline float_t get_PercentComplete();

  /// @brief Method get_ReferenceCount, addr 0x6706c4c, size 0xb0, virtual false, abstract: false, final false
  inline int32_t get_ReferenceCount();

  /// @brief Method get_Result, addr 0x6701b00, size 0xac, virtual false, abstract: false, final false
  inline ::System::Object* get_Result();

  /// @brief Method get_Status, addr 0x6706cfc, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status();

  /// @brief Method get_Task, addr 0x6706dac, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Object*>* get_Task();

  /// @brief Method get_Version, addr 0x6705ffc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Method remove_Completed, addr 0x6706204, size 0xc0, virtual false, abstract: false, final false
  inline void remove_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method remove_Destroyed, addr 0x6706634, size 0xc0, virtual false, abstract: false, final false
  inline void remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method set_LocationName, addr 0x670600c, size 0x8, virtual false, abstract: false, final false
  inline void set_LocationName(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperationHandle();

  // Ctor Parameters [CppParam { name: "m_InternalOp", ty: "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocationName", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr AsyncOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* m_InternalOp, int32_t m_Version, ::StringW m_LocationName) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18771 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_InternalOp, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* m_InternalOp;

  /// @brief Field m_Version, offset: 0x8, size: 0x4, def value: None
  int32_t m_Version;

  /// @brief Field m_LocationName, offset: 0x10, size: 0x8, def value: None
  ::StringW m_LocationName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, m_InternalOp) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, m_Version) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, m_LocationName) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::AsyncOperations
NEED_NO_BOX(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c*, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle");
