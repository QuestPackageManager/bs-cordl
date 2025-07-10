#pragma once
// IWYU pragma private; include "GlobalNamespace/AsyncComputeManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IAsyncComputeManager_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncComputeManager)
namespace GlobalNamespace {
template <typename T> class AsyncComputeOperation_1;
}
namespace GlobalNamespace {
class AsyncComputeOperation;
}
namespace System::Collections::Concurrent {
template <typename T> class BlockingCollection_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace GlobalNamespace {
class AsyncComputeManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AsyncComputeManager);
// Dependencies IAsyncComputeManager, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AsyncComputeManager
class CORDL_TYPE AsyncComputeManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field _asyncComputeRequests, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__asyncComputeRequests,
                      put = __cordl_internal_set__asyncComputeRequests)) ::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>* _asyncComputeRequests;

  /// @brief Field _computeThread, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__computeThread, put = __cordl_internal_set__computeThread)) ::System::Threading::Thread* _computeThread;

  /// @brief Field _disposed, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Convert operator to "::GlobalNamespace::IAsyncComputeManager"
  constexpr operator ::GlobalNamespace::IAsyncComputeManager*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BeginOperation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* BeginOperation(::GlobalNamespace::AsyncComputeOperation_1<T>* operation);

  /// @brief Method BeginOperation, addr 0x22b94b4, size 0x58, virtual true, abstract: false, final true
  inline void BeginOperation(::GlobalNamespace::AsyncComputeOperation* operation);

  /// @brief Method ComputeThreadRun, addr 0x22b950c, size 0x160, virtual false, abstract: false, final false
  inline void ComputeThreadRun();

  /// @brief Method Dispose, addr 0x22b944c, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::AsyncComputeManager* New_ctor();

  constexpr ::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>* const& __cordl_internal_get__asyncComputeRequests() const;

  constexpr ::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>*& __cordl_internal_get__asyncComputeRequests();

  constexpr ::System::Threading::Thread* const& __cordl_internal_get__computeThread() const;

  constexpr ::System::Threading::Thread*& __cordl_internal_get__computeThread();

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr void __cordl_internal_set__asyncComputeRequests(::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>* value);

  constexpr void __cordl_internal_set__computeThread(::System::Threading::Thread* value);

  constexpr void __cordl_internal_set__disposed(bool value);

  /// @brief Method .ctor, addr 0x22b930c, size 0x140, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IAsyncComputeManager"
  constexpr ::GlobalNamespace::IAsyncComputeManager* i___GlobalNamespace__IAsyncComputeManager() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncComputeManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncComputeManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncComputeManager(AsyncComputeManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncComputeManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncComputeManager(AsyncComputeManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14686 };

  /// @brief Field _asyncComputeRequests, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>* ____asyncComputeRequests;

  /// @brief Field _computeThread, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Thread* ____computeThread;

  /// @brief Field _disposed, offset: 0x20, size: 0x1, def value: None
  bool ____disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AsyncComputeManager, ____asyncComputeRequests) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncComputeManager, ____computeThread) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncComputeManager, ____disposed) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AsyncComputeManager, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AsyncComputeManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AsyncComputeManager*, "", "AsyncComputeManager");
