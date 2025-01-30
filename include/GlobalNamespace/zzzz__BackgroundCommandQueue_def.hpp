#pragma once
// IWYU pragma private; include "GlobalNamespace/BackgroundCommandQueue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BackgroundCommandQueue)
namespace GlobalNamespace {
struct BackgroundCommandQueue__RunInternal_d__4;
}
namespace GlobalNamespace {
class IBackgroundCommand;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class BackgroundCommandQueue;
}
namespace GlobalNamespace {
struct BackgroundCommandQueue__RunInternal_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BackgroundCommandQueue);
MARK_VAL_T(::GlobalNamespace::BackgroundCommandQueue__RunInternal_d__4);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: BackgroundCommandQueue/<RunInternal>d__4
struct CORDL_TYPE BackgroundCommandQueue__RunInternal_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22b12ac, size 0x42c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22b16d8, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundCommandQueue__RunInternal_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BackgroundCommandQueue*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr BackgroundCommandQueue__RunInternal_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::BackgroundCommandQueue* __4__this,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17110 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BackgroundCommandQueue* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BackgroundCommandQueue__RunInternal_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BackgroundCommandQueue__RunInternal_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BackgroundCommandQueue__RunInternal_d__4, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BackgroundCommandQueue__RunInternal_d__4, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BackgroundCommandQueue__RunInternal_d__4, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BackgroundCommandQueue
class CORDL_TYPE BackgroundCommandQueue : public ::System::Object {
public:
  // Declarations
  using _RunInternal_d__4 = ::GlobalNamespace::BackgroundCommandQueue__RunInternal_d__4;

  /// @brief Field _commandsQueue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__commandsQueue,
                      put = __cordl_internal_set__commandsQueue)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::IBackgroundCommand*>* _commandsQueue;

  /// @brief Field _isRunning, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isRunning, put = __cordl_internal_set__isRunning)) bool _isRunning;

  /// @brief Field _sync, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sync, put = __cordl_internal_set__sync)) ::System::Object* _sync;

  /// @brief Method Enqueue, addr 0x22b0fb4, size 0x190, virtual false, abstract: false, final false
  inline void Enqueue(::GlobalNamespace::IBackgroundCommand* command);

  static inline ::GlobalNamespace::BackgroundCommandQueue* New_ctor();

  /// @brief Method RunInternal, addr 0x22b1144, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RunInternal();

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::IBackgroundCommand*>* const& __cordl_internal_get__commandsQueue() const;

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::IBackgroundCommand*>*& __cordl_internal_get__commandsQueue();

  constexpr bool const& __cordl_internal_get__isRunning() const;

  constexpr bool& __cordl_internal_get__isRunning();

  constexpr ::System::Object* const& __cordl_internal_get__sync() const;

  constexpr ::System::Object*& __cordl_internal_get__sync();

  constexpr void __cordl_internal_set__commandsQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::IBackgroundCommand*>* value);

  constexpr void __cordl_internal_set__isRunning(bool value);

  constexpr void __cordl_internal_set__sync(::System::Object* value);

  /// @brief Method .ctor, addr 0x22b1204, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundCommandQueue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackgroundCommandQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackgroundCommandQueue(BackgroundCommandQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackgroundCommandQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackgroundCommandQueue(BackgroundCommandQueue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17111 };

  /// @brief Field _sync, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____sync;

  /// @brief Field _commandsQueue, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::GlobalNamespace::IBackgroundCommand*>* ____commandsQueue;

  /// @brief Field _isRunning, offset: 0x20, size: 0x1, def value: None
  bool ____isRunning;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BackgroundCommandQueue, ____sync) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BackgroundCommandQueue, ____commandsQueue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BackgroundCommandQueue, ____isRunning) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BackgroundCommandQueue, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BackgroundCommandQueue);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BackgroundCommandQueue*, "", "BackgroundCommandQueue");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BackgroundCommandQueue__RunInternal_d__4, "", "BackgroundCommandQueue/<RunInternal>d__4");
