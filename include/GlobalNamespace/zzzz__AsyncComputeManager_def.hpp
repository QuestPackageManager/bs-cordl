#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncComputeManager)
namespace System::Threading {
class Thread;
}
namespace GlobalNamespace {
class AsyncComputeOperation;
}
namespace GlobalNamespace {
class IAsyncComputeManager;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Concurrent {
template <typename T> class BlockingCollection_1;
}
namespace GlobalNamespace {
template <typename T> class AsyncComputeOperation_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AsyncComputeManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AsyncComputeManager);
// Type: ::AsyncComputeManager
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12678))
// CS Name: ::AsyncComputeManager*
class CORDL_TYPE AsyncComputeManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field _asyncComputeRequests, offset 0x10, size 0x8
  __declspec(property(get = __get__asyncComputeRequests,
                      put = __set__asyncComputeRequests))::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>* _asyncComputeRequests;

  /// @brief Field _computeThread, offset 0x18, size 0x8
  __declspec(property(get = __get__computeThread, put = __set__computeThread))::System::Threading::Thread* _computeThread;

  /// @brief Field _disposed, offset 0x20, size 0x1
  __declspec(property(get = __get__disposed, put = __set__disposed)) bool _disposed;

  /// @brief Convert operator to "::GlobalNamespace::IAsyncComputeManager"
  constexpr operator ::GlobalNamespace::IAsyncComputeManager*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>*& __get__asyncComputeRequests();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>*> const& __get__asyncComputeRequests() const;

  constexpr void __set__asyncComputeRequests(::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>* value);

  constexpr ::System::Threading::Thread*& __get__computeThread();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& __get__computeThread() const;

  constexpr void __set__computeThread(::System::Threading::Thread* value);

  constexpr bool& __get__disposed();

  constexpr bool const& __get__disposed() const;

  constexpr void __set__disposed(bool value);

  static inline ::GlobalNamespace::AsyncComputeManager* New_ctor();

  /// @brief Method .ctor addr 0xe28f58 size 0x140 virtual false final false
  inline void _ctor();

  /// @brief Method Dispose addr 0xe29098 size 0x68 virtual true final true
  inline void Dispose();

  /// @brief Method BeginOperation addr 0xe29100 size 0x58 virtual true final true
  inline void BeginOperation(::GlobalNamespace::AsyncComputeOperation* operation);

  /// @brief Method BeginOperation addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* BeginOperation(::GlobalNamespace::AsyncComputeOperation_1<T>* operation);

  /// @brief Method ComputeThreadRun addr 0xe29158 size 0x160 virtual false final false
  inline void ComputeThreadRun();

  // Ctor Parameters [CppParam { name: "", ty: "AsyncComputeManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncComputeManager(AsyncComputeManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncComputeManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncComputeManager(AsyncComputeManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncComputeManager();

public:
  /// @brief Field _asyncComputeRequests, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>* ____asyncComputeRequests;

  /// @brief Field _computeThread, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Thread* ____computeThread;

  /// @brief Field _disposed, offset: 0x20, size: 0x1, def value: None
  bool ____disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AsyncComputeManager, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AsyncComputeManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AsyncComputeManager*, "", "AsyncComputeManager");
