#pragma once
// IWYU pragma private; include "GlobalNamespace/StandaloneMonobehavior.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IStandaloneMonobehavior_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandaloneMonobehavior)
namespace GlobalNamespace {
class IStandaloneThreadRunner;
}
namespace GlobalNamespace {
class StandaloneMonobehavior__RunAsyncCoroutine_d__25;
}
namespace GlobalNamespace {
struct StandaloneMonobehavior__WhenReadyAsync_d__21;
}
namespace GlobalNamespace {
struct StandaloneMonobehavior__WhenReady_d__20;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct FrameTiming;
}
// Forward declare root types
namespace GlobalNamespace {
class StandaloneMonobehavior;
}
namespace GlobalNamespace {
class StandaloneMonobehavior__RunAsyncCoroutine_d__25;
}
namespace GlobalNamespace {
struct StandaloneMonobehavior__WhenReadyAsync_d__21;
}
namespace GlobalNamespace {
struct StandaloneMonobehavior__WhenReady_d__20;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandaloneMonobehavior);
MARK_REF_PTR_T(::GlobalNamespace::StandaloneMonobehavior__RunAsyncCoroutine_d__25);
MARK_VAL_T(::GlobalNamespace::StandaloneMonobehavior__WhenReadyAsync_d__21);
MARK_VAL_T(::GlobalNamespace::StandaloneMonobehavior__WhenReady_d__20);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandaloneMonobehavior/<RunAsyncCoroutine>d__25
class CORDL_TYPE StandaloneMonobehavior__RunAsyncCoroutine_d__25 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::StandaloneMonobehavior> __4__this;

  /// @brief Field cancellationToken, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cancellationToken, put = __cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field tcs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_tcs, put = __cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x22e5568, size 0x1b0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::StandaloneMonobehavior__RunAsyncCoroutine_d__25* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x22e5718, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22e5720, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22e5758, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x22e5564, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::StandaloneMonobehavior> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::StandaloneMonobehavior>& __cordl_internal_get___4__this();

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_tcs() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_tcs();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::StandaloneMonobehavior> value);

  constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value);

  constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  /// @brief Method .ctor, addr 0x22e553c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandaloneMonobehavior__RunAsyncCoroutine_d__25();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandaloneMonobehavior__RunAsyncCoroutine_d__25", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandaloneMonobehavior__RunAsyncCoroutine_d__25(StandaloneMonobehavior__RunAsyncCoroutine_d__25&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandaloneMonobehavior__RunAsyncCoroutine_d__25", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandaloneMonobehavior__RunAsyncCoroutine_d__25(StandaloneMonobehavior__RunAsyncCoroutine_d__25 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14972 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandaloneMonobehavior> _____4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  /// @brief Field tcs, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__RunAsyncCoroutine_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__RunAsyncCoroutine_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__RunAsyncCoroutine_d__25, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__RunAsyncCoroutine_d__25, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__RunAsyncCoroutine_d__25, ___tcs) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandaloneMonobehavior__RunAsyncCoroutine_d__25, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: StandaloneMonobehavior/<WhenReady>d__20
struct CORDL_TYPE StandaloneMonobehavior__WhenReady_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22e5760, size 0x200, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22e5960, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandaloneMonobehavior__WhenReady_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::StandaloneMonobehavior>",
  // modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr StandaloneMonobehavior__WhenReady_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                    ::UnityW<::GlobalNamespace::StandaloneMonobehavior> __4__this, ::System::Action* action,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14973 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandaloneMonobehavior> __4__this;

  /// @brief Field action, offset: 0x30, size: 0x8, def value: None
  ::System::Action* action;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__WhenReady_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__WhenReady_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__WhenReady_d__20, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__WhenReady_d__20, action) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__WhenReady_d__20, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandaloneMonobehavior__WhenReady_d__20, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: StandaloneMonobehavior/<WhenReadyAsync>d__21
struct CORDL_TYPE StandaloneMonobehavior__WhenReadyAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22e596c, size 0x308, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22e5c74, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandaloneMonobehavior__WhenReadyAsync_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::StandaloneMonobehavior>",
  // modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Func_1<::System::Threading::Tasks::Task*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }]
  constexpr StandaloneMonobehavior__WhenReadyAsync_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                         ::UnityW<::GlobalNamespace::StandaloneMonobehavior> __4__this, ::System::Func_1<::System::Threading::Tasks::Task*>* action,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14974 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandaloneMonobehavior> __4__this;

  /// @brief Field action, offset: 0x28, size: 0x8, def value: None
  ::System::Func_1<::System::Threading::Tasks::Task*>* action;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__WhenReadyAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__WhenReadyAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__WhenReadyAsync_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__WhenReadyAsync_d__21, action) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__WhenReadyAsync_d__21, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior__WhenReadyAsync_d__21, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandaloneMonobehavior__WhenReadyAsync_d__21, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IStandaloneMonobehavior, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandaloneMonobehavior
class CORDL_TYPE StandaloneMonobehavior : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _RunAsyncCoroutine_d__25 = ::GlobalNamespace::StandaloneMonobehavior__RunAsyncCoroutine_d__25;

  using _WhenReadyAsync_d__21 = ::GlobalNamespace::StandaloneMonobehavior__WhenReadyAsync_d__21;

  using _WhenReady_d__20 = ::GlobalNamespace::StandaloneMonobehavior__WhenReady_d__20;

  /// @brief Field _isRunning, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isRunning, put = __cordl_internal_set__isRunning)) bool _isRunning;

  /// @brief Field _lastFrameTimeCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameTimeCount, put = __cordl_internal_set__lastFrameTimeCount)) int32_t _lastFrameTimeCount;

  /// @brief Field _lastFrameTimings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lastFrameTimings, put = __cordl_internal_set__lastFrameTimings)) ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*>
      _lastFrameTimings;

  /// @brief Field _readyTcs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__readyTcs, put = __cordl_internal_set__readyTcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>* _readyTcs;

  /// @brief Field _startTime, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__startTime, put = __cordl_internal_set__startTime)) float_t _startTime;

  __declspec(property(get = get_deltaTime)) float_t deltaTime;

  __declspec(property(get = get_frameCount)) int32_t frameCount;

  __declspec(property(get = get_isReady)) bool isReady;

  __declspec(property(get = get_lastFrameTime)) float_t lastFrameTime;

  __declspec(property(get = get_objectLifeTime)) float_t objectLifeTime;

  /// @brief Convert operator to "::GlobalNamespace::IStandaloneMonobehavior"
  constexpr operator ::GlobalNamespace::IStandaloneMonobehavior*() noexcept;

  /// @brief Method Awake, addr 0x22e51f0, size 0x1c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Create();

  /// @brief Method GetLastFrameTime, addr 0x22e5130, size 0x70, virtual false, abstract: false, final false
  inline float_t GetLastFrameTime();

  static inline ::GlobalNamespace::StandaloneMonobehavior* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x22e5218, size 0x4, virtual true, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDestroy, addr 0x22e5214, size 0x4, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RunAsync, addr 0x22e5384, size 0x13c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* RunAsync(::GlobalNamespace::IStandaloneThreadRunner* runner, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method RunAsyncCoroutine, addr 0x22e54c0, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RunAsyncCoroutine(::System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Start, addr 0x22e520c, size 0x4, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Stop, addr 0x22e5534, size 0x8, virtual true, abstract: false, final true
  inline void Stop();

  /// @brief Method Update, addr 0x22e5210, size 0x4, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method WhenReady, addr 0x22e521c, size 0x98, virtual true, abstract: false, final true
  inline void WhenReady(::System::Action* action);

  /// @brief Method WhenReadyAsync, addr 0x22e52b4, size 0xd0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* WhenReadyAsync(::System::Func_1<::System::Threading::Tasks::Task*>* action);

  constexpr bool const& __cordl_internal_get__isRunning() const;

  constexpr bool& __cordl_internal_get__isRunning();

  constexpr int32_t const& __cordl_internal_get__lastFrameTimeCount() const;

  constexpr int32_t& __cordl_internal_get__lastFrameTimeCount();

  constexpr ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*> const& __cordl_internal_get__lastFrameTimings() const;

  constexpr ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*>& __cordl_internal_get__lastFrameTimings();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__readyTcs() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__readyTcs();

  constexpr float_t const& __cordl_internal_get__startTime() const;

  constexpr float_t& __cordl_internal_get__startTime();

  constexpr void __cordl_internal_set__isRunning(bool value);

  constexpr void __cordl_internal_set__lastFrameTimeCount(int32_t value);

  constexpr void __cordl_internal_set__lastFrameTimings(::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*> value);

  constexpr void __cordl_internal_set__readyTcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr void __cordl_internal_set__startTime(float_t value);

  /// @brief Method .ctor, addr 0x22d9384, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_deltaTime, addr 0x22e5124, size 0x8, virtual false, abstract: false, final false
  inline float_t get_deltaTime();

  /// @brief Method get_frameCount, addr 0x22d74b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_frameCount();

  /// @brief Method get_isReady, addr 0x22e51a0, size 0x50, virtual false, abstract: false, final false
  inline bool get_isReady();

  /// @brief Method get_lastFrameTime, addr 0x22e512c, size 0x4, virtual false, abstract: false, final false
  inline float_t get_lastFrameTime();

  /// @brief Method get_objectLifeTime, addr 0x22e5104, size 0x20, virtual false, abstract: false, final false
  inline float_t get_objectLifeTime();

  /// @brief Convert to "::GlobalNamespace::IStandaloneMonobehavior"
  constexpr ::GlobalNamespace::IStandaloneMonobehavior* i___GlobalNamespace__IStandaloneMonobehavior() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandaloneMonobehavior();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandaloneMonobehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandaloneMonobehavior(StandaloneMonobehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandaloneMonobehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandaloneMonobehavior(StandaloneMonobehavior const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14975 };

  /// @brief Field _readyTcs, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ____readyTcs;

  /// @brief Field _isRunning, offset: 0x28, size: 0x1, def value: None
  bool ____isRunning;

  /// @brief Field _startTime, offset: 0x2c, size: 0x4, def value: None
  float_t ____startTime;

  /// @brief Field _lastFrameTimings, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*> ____lastFrameTimings;

  /// @brief Field _lastFrameTimeCount, offset: 0x38, size: 0x4, def value: None
  int32_t ____lastFrameTimeCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior, ____readyTcs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior, ____isRunning) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior, ____startTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior, ____lastFrameTimings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneMonobehavior, ____lastFrameTimeCount) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandaloneMonobehavior, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandaloneMonobehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandaloneMonobehavior*, "", "StandaloneMonobehavior");
NEED_NO_BOX(::GlobalNamespace::StandaloneMonobehavior__RunAsyncCoroutine_d__25);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandaloneMonobehavior__RunAsyncCoroutine_d__25*, "", "StandaloneMonobehavior/<RunAsyncCoroutine>d__25");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandaloneMonobehavior__WhenReadyAsync_d__21, "", "StandaloneMonobehavior/<WhenReadyAsync>d__21");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandaloneMonobehavior__WhenReady_d__20, "", "StandaloneMonobehavior/<WhenReady>d__20");
