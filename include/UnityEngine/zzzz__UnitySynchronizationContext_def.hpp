#pragma once
// IWYU pragma private; include "UnityEngine/UnitySynchronizationContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnitySynchronizationContext)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct UnitySynchronizationContext_WorkRequest;
}
// Forward declare root types
namespace UnityEngine {
class UnitySynchronizationContext;
}
namespace UnityEngine {
struct UnitySynchronizationContext_WorkRequest;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UnitySynchronizationContext);
MARK_VAL_T(::UnityEngine::UnitySynchronizationContext_WorkRequest);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.UnitySynchronizationContext/WorkRequest
struct CORDL_TYPE UnitySynchronizationContext_WorkRequest {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6921348, size 0xcc, virtual false, abstract: false, final false
  inline void Invoke();

  /// @brief Method .ctor, addr 0x6920f44, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::SendOrPostCallback* callback, ::System::Object* state, ::System::Threading::ManualResetEvent* waitHandle);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnitySynchronizationContext_WorkRequest();

  // Ctor Parameters [CppParam { name: "m_DelagateCallback", ty: "::System::Threading::SendOrPostCallback*", modifiers: "", def_value: None }, CppParam { name: "m_DelagateState", ty:
  // "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "m_WaitHandle", ty: "::System::Threading::ManualResetEvent*", modifiers: "", def_value: None }]
  constexpr UnitySynchronizationContext_WorkRequest(::System::Threading::SendOrPostCallback* m_DelagateCallback, ::System::Object* m_DelagateState,
                                                    ::System::Threading::ManualResetEvent* m_WaitHandle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10360 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_DelagateCallback, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::SendOrPostCallback* m_DelagateCallback;

  /// @brief Field m_DelagateState, offset: 0x8, size: 0x8, def value: None
  ::System::Object* m_DelagateState;

  /// @brief Field m_WaitHandle, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* m_WaitHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UnitySynchronizationContext_WorkRequest, m_DelagateCallback) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UnitySynchronizationContext_WorkRequest, m_DelagateState) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UnitySynchronizationContext_WorkRequest, m_WaitHandle) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UnitySynchronizationContext_WorkRequest, 0x18>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Threading.SynchronizationContext
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.UnitySynchronizationContext
class CORDL_TYPE UnitySynchronizationContext : public ::System::Threading::SynchronizationContext {
public:
  // Declarations
  using WorkRequest = ::UnityEngine::UnitySynchronizationContext_WorkRequest;

  __declspec(property(get = get_MainThreadId)) int32_t MainThreadId;

  /// @brief Field m_AsyncWorkQueue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AsyncWorkQueue,
                      put = __cordl_internal_set_m_AsyncWorkQueue)) ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* m_AsyncWorkQueue;

  /// @brief Field m_CurrentFrameWork, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentFrameWork,
                      put = __cordl_internal_set_m_CurrentFrameWork)) ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* m_CurrentFrameWork;

  /// @brief Field m_MainThreadID, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MainThreadID, put = __cordl_internal_set_m_MainThreadID)) int32_t m_MainThreadID;

  /// @brief Field m_TrackedCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TrackedCount, put = __cordl_internal_set_m_TrackedCount)) int32_t m_TrackedCount;

  /// @brief Method CreateCopy, addr 0x69210e8, size 0x68, virtual true, abstract: false, final false
  inline ::System::Threading::SynchronizationContext* CreateCopy();

  /// @brief Method Exec, addr 0x6921150, size 0x1f8, virtual false, abstract: false, final false
  inline void Exec();

  /// @brief Method ExecutePendingTasks, addr 0x6921590, size 0xe4, virtual false, abstract: false, final false
  static inline bool ExecutePendingTasks(int64_t millisecondsTimeout);

  /// @brief Method ExecuteTasks, addr 0x6921528, size 0x68, virtual false, abstract: false, final false
  static inline void ExecuteTasks();

  /// @brief Method HasPendingTasks, addr 0x6921414, size 0x68, virtual false, abstract: false, final false
  inline bool HasPendingTasks();

  /// @brief Method InitializeSynchronizationContext, addr 0x692147c, size 0xac, virtual false, abstract: false, final false
  static inline void InitializeSynchronizationContext();

  static inline ::UnityEngine::UnitySynchronizationContext* New_ctor(int32_t mainThreadID);

  static inline ::UnityEngine::UnitySynchronizationContext* New_ctor(::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* queue, int32_t mainThreadID);

  /// @brief Method OperationCompleted, addr 0x6920f6c, size 0x1c, virtual true, abstract: false, final false
  inline void OperationCompleted();

  /// @brief Method OperationStarted, addr 0x6920f50, size 0x1c, virtual true, abstract: false, final false
  inline void OperationStarted();

  /// @brief Method Post, addr 0x6920f88, size 0x160, virtual true, abstract: false, final false
  inline void Post(::System::Threading::SendOrPostCallback* callback, ::System::Object* state);

  /// @brief Method Send, addr 0x6920c70, size 0x2d4, virtual true, abstract: false, final false
  inline void Send(::System::Threading::SendOrPostCallback* callback, ::System::Object* state);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* const& __cordl_internal_get_m_AsyncWorkQueue() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>*& __cordl_internal_get_m_AsyncWorkQueue();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* const& __cordl_internal_get_m_CurrentFrameWork() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>*& __cordl_internal_get_m_CurrentFrameWork();

  constexpr int32_t const& __cordl_internal_get_m_MainThreadID() const;

  constexpr int32_t& __cordl_internal_get_m_MainThreadID();

  constexpr int32_t const& __cordl_internal_get_m_TrackedCount() const;

  constexpr int32_t& __cordl_internal_get_m_TrackedCount();

  constexpr void __cordl_internal_set_m_AsyncWorkQueue(::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* value);

  constexpr void __cordl_internal_set_m_CurrentFrameWork(::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* value);

  constexpr void __cordl_internal_set_m_MainThreadID(int32_t value);

  constexpr void __cordl_internal_set_m_TrackedCount(int32_t value);

  /// @brief Method .ctor, addr 0x6920b3c, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(int32_t mainThreadID);

  /// @brief Method .ctor, addr 0x6920be4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* queue, int32_t mainThreadID);

  /// @brief Method get_MainThreadId, addr 0x6920b34, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MainThreadId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnitySynchronizationContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnitySynchronizationContext(UnitySynchronizationContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnitySynchronizationContext(UnitySynchronizationContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10361 };

  /// @brief Field m_AsyncWorkQueue, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* ___m_AsyncWorkQueue;

  /// @brief Field m_CurrentFrameWork, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* ___m_CurrentFrameWork;

  /// @brief Field m_MainThreadID, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_MainThreadID;

  /// @brief Field m_TrackedCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ___m_TrackedCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UnitySynchronizationContext, ___m_AsyncWorkQueue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UnitySynchronizationContext, ___m_CurrentFrameWork) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UnitySynchronizationContext, ___m_MainThreadID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UnitySynchronizationContext, ___m_TrackedCount) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UnitySynchronizationContext, 0x30>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::UnitySynchronizationContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnitySynchronizationContext*, "UnityEngine", "UnitySynchronizationContext");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnitySynchronizationContext_WorkRequest, "UnityEngine", "UnitySynchronizationContext/WorkRequest");
