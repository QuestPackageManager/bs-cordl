#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandaloneMonobehavior)
namespace GlobalNamespace {
class __StandaloneMonobehavior___RunAsyncCoroutine_d__25;
}
namespace GlobalNamespace {
struct __StandaloneMonobehavior___DispatchAsync_d__21;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IStandaloneThreadRunner;
}
namespace GlobalNamespace {
struct __StandaloneMonobehavior___Dispatch_d__20;
}
namespace UnityEngine {
struct FrameTiming;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace GlobalNamespace {
class IStandaloneMonobehavior;
}
namespace System {
class Action;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class StandaloneMonobehavior;
}
namespace GlobalNamespace {
class __StandaloneMonobehavior___RunAsyncCoroutine_d__25;
}
namespace GlobalNamespace {
struct __StandaloneMonobehavior___DispatchAsync_d__21;
}
namespace GlobalNamespace {
struct __StandaloneMonobehavior___Dispatch_d__20;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandaloneMonobehavior);
MARK_REF_PTR_T(::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25);
MARK_VAL_T(::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21);
MARK_VAL_T(::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20);
// Type: ::<Dispatch>d__20
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(3400)),
// TypeDefinitionIndex(TypeDefinitionIndex(3394))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12963)) CS Name: ::StandaloneMonobehavior::<Dispatch>d__20
struct CORDL_TYPE __StandaloneMonobehavior___Dispatch_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xe58d1c size 0x200 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xe58f1c size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandaloneMonobehavior*", modifiers: "",
  // def_value: None }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __StandaloneMonobehavior___Dispatch_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                      ::GlobalNamespace::StandaloneMonobehavior* __4__this, ::System::Action* action,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandaloneMonobehavior___Dispatch_d__20();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::StandaloneMonobehavior* __4__this;

  /// @brief Field action, offset: 0x30, size: 0x8, def value: None
  ::System::Action* action;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<DispatchAsync>d__21
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(3401)),
// TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3393))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12964)) CS Name:
// ::StandaloneMonobehavior::<DispatchAsync>d__21
struct CORDL_TYPE __StandaloneMonobehavior___DispatchAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xe58f28 size 0x2b0 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xe591d8 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandaloneMonobehavior*", modifiers: "",
  // def_value: None }, CppParam { name: "action", ty: "::System::Func_1<::System::Threading::Tasks::Task*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }]
  constexpr __StandaloneMonobehavior___DispatchAsync_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                           ::GlobalNamespace::StandaloneMonobehavior* __4__this, ::System::Func_1<::System::Threading::Tasks::Task*>* action,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandaloneMonobehavior___DispatchAsync_d__21();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::StandaloneMonobehavior* __4__this;

  /// @brief Field action, offset: 0x28, size: 0x8, def value: None
  ::System::Func_1<::System::Threading::Tasks::Task*>* action;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<RunAsyncCoroutine>d__25
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12965))
// CS Name: ::StandaloneMonobehavior::<RunAsyncCoroutine>d__25*
class CORDL_TYPE __StandaloneMonobehavior___RunAsyncCoroutine_d__25 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::StandaloneMonobehavior* __4__this;

  /// @brief Field cancellationToken, offset 0x28, size 0x8
  __declspec(property(get = __get_cancellationToken, put = __set_cancellationToken))::System::Threading::CancellationToken cancellationToken;

  /// @brief Field tcs, offset 0x30, size 0x8
  __declspec(property(get = __get_tcs, put = __set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::StandaloneMonobehavior*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandaloneMonobehavior*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::StandaloneMonobehavior* value);

  constexpr ::System::Threading::CancellationToken& __get_cancellationToken();

  constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

  constexpr void __set_cancellationToken(::System::Threading::CancellationToken value);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __get_tcs() const;

  constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  static inline ::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0xe58cf4 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0xe591e4 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0xe591e8 size 0x174 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0xe5935c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0xe59364 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0xe593a4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__StandaloneMonobehavior___RunAsyncCoroutine_d__25", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StandaloneMonobehavior___RunAsyncCoroutine_d__25(__StandaloneMonobehavior___RunAsyncCoroutine_d__25&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StandaloneMonobehavior___RunAsyncCoroutine_d__25", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StandaloneMonobehavior___RunAsyncCoroutine_d__25(__StandaloneMonobehavior___RunAsyncCoroutine_d__25 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandaloneMonobehavior___RunAsyncCoroutine_d__25();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::StandaloneMonobehavior* _____4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  /// @brief Field tcs, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::StandaloneMonobehavior
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12966))
// CS Name: ::StandaloneMonobehavior*
class CORDL_TYPE StandaloneMonobehavior : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _RunAsyncCoroutine_d__25 = ::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25;

  using _DispatchAsync_d__21 = ::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21;

  using _Dispatch_d__20 = ::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20;

  /// @brief Field _readyTcs, offset 0x18, size 0x8
  __declspec(property(get = __get__readyTcs, put = __set__readyTcs))::System::Threading::Tasks::TaskCompletionSource_1<bool>* _readyTcs;

  /// @brief Field _isRunning, offset 0x20, size 0x1
  __declspec(property(get = __get__isRunning, put = __set__isRunning)) bool _isRunning;

  /// @brief Field _startTime, offset 0x24, size 0x4
  __declspec(property(get = __get__startTime, put = __set__startTime)) float_t _startTime;

  /// @brief Field _lastFrameTimings, offset 0x28, size 0x8
  __declspec(property(get = __get__lastFrameTimings, put = __set__lastFrameTimings))::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*> _lastFrameTimings;

  /// @brief Field _lastFrameTimeCount, offset 0x30, size 0x4
  __declspec(property(get = __get__lastFrameTimeCount, put = __set__lastFrameTimeCount)) int32_t _lastFrameTimeCount;

  __declspec(property(get = get_objectLifeTime)) float_t objectLifeTime;

  __declspec(property(get = get_deltaTime)) float_t deltaTime;

  __declspec(property(get = get_lastFrameTime)) float_t lastFrameTime;

  __declspec(property(get = get_frameCount)) int32_t frameCount;

  __declspec(property(get = get_isReady)) bool isReady;

  /// @brief Convert operator to "::GlobalNamespace::IStandaloneMonobehavior"
  constexpr operator ::GlobalNamespace::IStandaloneMonobehavior*() noexcept;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __get__readyTcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __get__readyTcs() const;

  constexpr void __set__readyTcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr bool& __get__isRunning();

  constexpr bool const& __get__isRunning() const;

  constexpr void __set__isRunning(bool value);

  constexpr float_t& __get__startTime();

  constexpr float_t const& __get__startTime() const;

  constexpr void __set__startTime(float_t value);

  constexpr ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*>& __get__lastFrameTimings();

  constexpr ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*> const& __get__lastFrameTimings() const;

  constexpr void __set__lastFrameTimings(::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*> value);

  constexpr int32_t& __get__lastFrameTimeCount();

  constexpr int32_t const& __get__lastFrameTimeCount() const;

  constexpr void __set__lastFrameTimeCount(int32_t value);

  /// @brief Method get_objectLifeTime addr 0xe588a4 size 0x20 virtual false final false
  inline float_t get_objectLifeTime();

  /// @brief Method get_deltaTime addr 0xe588c4 size 0x8 virtual false final false
  inline float_t get_deltaTime();

  /// @brief Method get_lastFrameTime addr 0xe588cc size 0x4 virtual false final false
  inline float_t get_lastFrameTime();

  /// @brief Method get_frameCount addr 0xe4ad1c size 0x8 virtual false final false
  inline int32_t get_frameCount();

  /// @brief Method get_isReady addr 0xe58940 size 0x50 virtual false final false
  inline bool get_isReady();

  /// @brief Method Awake addr 0xe58990 size 0x1c virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0xe589ac size 0x4 virtual true final false
  inline void Start();

  /// @brief Method Update addr 0xe589b0 size 0x4 virtual true final false
  inline void Update();

  /// @brief Method OnDestroy addr 0xe589b4 size 0x4 virtual true final false
  inline void OnDestroy();

  /// @brief Method OnApplicationPause addr 0xe589b8 size 0x4 virtual true final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method Dispatch addr 0xe589bc size 0x9c virtual true final true
  inline void Dispatch(::System::Action* action);

  /// @brief Method DispatchAsync addr 0xe58a58 size 0xd8 virtual true final true
  inline ::System::Threading::Tasks::Task* DispatchAsync(::System::Func_1<::System::Threading::Tasks::Task*>* action);

  /// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T Create();

  /// @brief Method RunAsync addr 0xe58b30 size 0x140 virtual true final true
  inline ::System::Threading::Tasks::Task* RunAsync(::GlobalNamespace::IStandaloneThreadRunner* runner, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Stop addr 0xe58cec size 0x8 virtual true final true
  inline void Stop();

  /// @brief Method RunAsyncCoroutine addr 0xe58c70 size 0x7c virtual false final false
  inline ::System::Collections::IEnumerator* RunAsyncCoroutine(::System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLastFrameTime addr 0xe588d0 size 0x70 virtual false final false
  inline float_t GetLastFrameTime();

  static inline ::GlobalNamespace::StandaloneMonobehavior* New_ctor();

  /// @brief Method .ctor addr 0xe4cbfc size 0xa0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StandaloneMonobehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandaloneMonobehavior(StandaloneMonobehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandaloneMonobehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandaloneMonobehavior(StandaloneMonobehavior const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandaloneMonobehavior();

public:
  /// @brief Field _readyTcs, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ____readyTcs;

  /// @brief Field _isRunning, offset: 0x20, size: 0x1, def value: None
  bool ____isRunning;

  /// @brief Field _startTime, offset: 0x24, size: 0x4, def value: None
  float_t ____startTime;

  /// @brief Field _lastFrameTimings, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*> ____lastFrameTimings;

  /// @brief Field _lastFrameTimeCount, offset: 0x30, size: 0x4, def value: None
  int32_t ____lastFrameTimeCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandaloneMonobehavior, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandaloneMonobehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandaloneMonobehavior*, "", "StandaloneMonobehavior");
NEED_NO_BOX(::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25*, "", "StandaloneMonobehavior/<RunAsyncCoroutine>d__25");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21, "", "StandaloneMonobehavior/<DispatchAsync>d__21");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20, "", "StandaloneMonobehavior/<Dispatch>d__20");
