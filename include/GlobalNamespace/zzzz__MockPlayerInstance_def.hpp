#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerInstance.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IStandaloneMonobehavior_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayerInstance)
namespace BGNet::Core {
class ITaskUtility;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace GlobalNamespace {
class IMockBeatmapDataProvider;
}
namespace GlobalNamespace {
class IStandaloneThreadRunner;
}
namespace GlobalNamespace {
class MockPlayerFiniteStateMachine;
}
namespace GlobalNamespace {
struct MockPlayerInstance__DisposeAsync_d__22;
}
namespace GlobalNamespace {
struct MockPlayerInstance__RunAsync_d__18;
}
namespace GlobalNamespace {
struct MockPlayerInstance__Stop_d__21;
}
namespace GlobalNamespace {
template <typename T> class MockPlayerInstance___c__DisplayClass17_0_1;
}
namespace GlobalNamespace {
class MultiplayerSessionManager;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
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
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerInstance;
}
namespace GlobalNamespace {
template <typename T> class MockPlayerInstance___c__DisplayClass17_0_1;
}
namespace GlobalNamespace {
struct MockPlayerInstance__DisposeAsync_d__22;
}
namespace GlobalNamespace {
struct MockPlayerInstance__RunAsync_d__18;
}
namespace GlobalNamespace {
struct MockPlayerInstance__Stop_d__21;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerInstance);
MARK_GEN_REF_PTR_T(::GlobalNamespace::MockPlayerInstance___c__DisplayClass17_0_1);
MARK_VAL_T(::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__22);
MARK_VAL_T(::GlobalNamespace::MockPlayerInstance__RunAsync_d__18);
MARK_VAL_T(::GlobalNamespace::MockPlayerInstance__Stop_d__21);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: MockPlayerInstance/<>c__DisplayClass17_0`1<T>
class CORDL_TYPE MockPlayerInstance___c__DisplayClass17_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::MockPlayerInstance* __4__this;

  /// @brief Field connectionInitParams, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionInitParams, put = __cordl_internal_set_connectionInitParams)) ::GlobalNamespace::IConnectionInitParams_1<T>* connectionInitParams;

  static inline ::GlobalNamespace::MockPlayerInstance___c__DisplayClass17_0_1<T>* New_ctor();

  /// @brief Method <ConnectToServer>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ConnectToServer_b__0();

  constexpr ::GlobalNamespace::MockPlayerInstance* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::MockPlayerInstance*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::IConnectionInitParams_1<T>* const& __cordl_internal_get_connectionInitParams() const;

  constexpr ::GlobalNamespace::IConnectionInitParams_1<T>*& __cordl_internal_get_connectionInitParams();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::MockPlayerInstance* value);

  constexpr void __cordl_internal_set_connectionInitParams(::GlobalNamespace::IConnectionInitParams_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerInstance___c__DisplayClass17_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerInstance___c__DisplayClass17_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerInstance___c__DisplayClass17_0_1(MockPlayerInstance___c__DisplayClass17_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerInstance___c__DisplayClass17_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerInstance___c__DisplayClass17_0_1(MockPlayerInstance___c__DisplayClass17_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18103 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerInstance* _____4__this;

  /// @brief Field connectionInitParams, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IConnectionInitParams_1<T>* ___connectionInitParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockPlayerInstance/<DisposeAsync>d__22
struct CORDL_TYPE MockPlayerInstance__DisposeAsync_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3c2da58, size 0x254, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3c2dcac, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerInstance__DisposeAsync_d__22();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr MockPlayerInstance__DisposeAsync_d__22(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::MockPlayerInstance* __4__this,
                                                   ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18104 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerInstance* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__22, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__22, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__22, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockPlayerInstance/<RunAsync>d__18
struct CORDL_TYPE MockPlayerInstance__RunAsync_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3c2dd14, size 0x284, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3c2df98, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerInstance__RunAsync_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
  // None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance*", modifiers: "", def_value: None }, CppParam { name: "runner", ty: "::GlobalNamespace::IStandaloneThreadRunner*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr MockPlayerInstance__RunAsync_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::CancellationToken token,
                                               ::GlobalNamespace::MockPlayerInstance* __4__this, ::GlobalNamespace::IStandaloneThreadRunner* runner,
                                               ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18105 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field token, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerInstance* __4__this;

  /// @brief Field runner, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IStandaloneThreadRunner* runner;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__RunAsync_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__RunAsync_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__RunAsync_d__18, token) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__RunAsync_d__18, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__RunAsync_d__18, runner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__RunAsync_d__18, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerInstance__RunAsync_d__18, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockPlayerInstance/<Stop>d__21
struct CORDL_TYPE MockPlayerInstance__Stop_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3c2e000, size 0x178, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3c2e178, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerInstance__Stop_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr MockPlayerInstance__Stop_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::MockPlayerInstance* __4__this,
                                           ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18106 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerInstance* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__Stop_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__Stop_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__Stop_d__21, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__Stop_d__21, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerInstance__Stop_d__21, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IStandaloneMonobehavior, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockPlayerInstance
class CORDL_TYPE MockPlayerInstance : public ::System::Object {
public:
  // Declarations
  using _DisposeAsync_d__22 = ::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__22;

  using _RunAsync_d__18 = ::GlobalNamespace::MockPlayerInstance__RunAsync_d__18;

  using _Stop_d__21 = ::GlobalNamespace::MockPlayerInstance__Stop_d__21;

  template <typename T> using __c__DisplayClass17_0_1 = ::GlobalNamespace::MockPlayerInstance___c__DisplayClass17_0_1<T>;

  /// @brief Field _cancellationTokenSource, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _connectedPlayerManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayerManager, put = __cordl_internal_set__connectedPlayerManager)) ::GlobalNamespace::ConnectedPlayerManager* _connectedPlayerManager;

  /// @brief Field _fsm, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__fsm, put = __cordl_internal_set__fsm)) ::GlobalNamespace::MockPlayerFiniteStateMachine* _fsm;

  /// @brief Field _id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) ::StringW _id;

  /// @brief Field _multiplayerSessionManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager, put = __cordl_internal_set__multiplayerSessionManager)) ::UnityW<::GlobalNamespace::MultiplayerSessionManager>
      _multiplayerSessionManager;

  /// @brief Field _taskUtility, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__taskUtility, put = __cordl_internal_set__taskUtility)) ::BGNet::Core::ITaskUtility* _taskUtility;

  /// @brief Field _timeProvider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__timeProvider, put = __cordl_internal_set__timeProvider)) ::BGNet::Core::ITimeProvider* _timeProvider;

  /// @brief Field _userId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userId, put = __cordl_internal_set__userId)) ::StringW _userId;

  /// @brief Field _userName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__userName, put = __cordl_internal_set__userName)) ::StringW _userName;

  __declspec(property(get = get_id)) ::StringW id;

  __declspec(property(get = get_userId)) ::StringW userId;

  __declspec(property(get = get_userName)) ::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IStandaloneMonobehavior"
  constexpr operator ::GlobalNamespace::IStandaloneMonobehavior*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ConnectToServer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void ConnectToServer(::GlobalNamespace::IConnectionInitParams_1<T>* connectionInitParams);

  /// @brief Method Dispose, addr 0x3c2d8d4, size 0xb4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeAsync, addr 0x3c2d814, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* DisposeAsync();

  static inline ::GlobalNamespace::MockPlayerInstance* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                                ::GlobalNamespace::IMockBeatmapDataProvider* beatmapDataProvider, ::GlobalNamespace::IConnectionManager* connectionManager);

  /// @brief Method RunAsync, addr 0x3c2d678, size 0xd4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* RunAsync(::GlobalNamespace::IStandaloneThreadRunner* runner, ::System::Threading::CancellationToken token);

  /// @brief Method Stop, addr 0x3c2d784, size 0x90, virtual true, abstract: false, final true
  inline void Stop();

  /// @brief Method Tick, addr 0x3c2d660, size 0x18, virtual false, abstract: false, final false
  inline void Tick();

  /// @brief Method WhenReady, addr 0x3c2d74c, size 0x1c, virtual true, abstract: false, final true
  inline void WhenReady(::System::Action* action);

  /// @brief Method WhenReadyAsync, addr 0x3c2d768, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* WhenReadyAsync(::System::Func_1<::System::Threading::Tasks::Task*>* action);

  /// @brief Method <DisposeAsync>b__22_0, addr 0x3c2d990, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _DisposeAsync_b__22_0();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::GlobalNamespace::ConnectedPlayerManager* const& __cordl_internal_get__connectedPlayerManager() const;

  constexpr ::GlobalNamespace::ConnectedPlayerManager*& __cordl_internal_get__connectedPlayerManager();

  constexpr ::GlobalNamespace::MockPlayerFiniteStateMachine* const& __cordl_internal_get__fsm() const;

  constexpr ::GlobalNamespace::MockPlayerFiniteStateMachine*& __cordl_internal_get__fsm();

  constexpr ::StringW const& __cordl_internal_get__id() const;

  constexpr ::StringW& __cordl_internal_get__id();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSessionManager> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSessionManager>& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::BGNet::Core::ITaskUtility* const& __cordl_internal_get__taskUtility() const;

  constexpr ::BGNet::Core::ITaskUtility*& __cordl_internal_get__taskUtility();

  constexpr ::BGNet::Core::ITimeProvider* const& __cordl_internal_get__timeProvider() const;

  constexpr ::BGNet::Core::ITimeProvider*& __cordl_internal_get__timeProvider();

  constexpr ::StringW const& __cordl_internal_get__userId() const;

  constexpr ::StringW& __cordl_internal_get__userId();

  constexpr ::StringW const& __cordl_internal_get__userName() const;

  constexpr ::StringW& __cordl_internal_get__userName();

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager* value);

  constexpr void __cordl_internal_set__fsm(::GlobalNamespace::MockPlayerFiniteStateMachine* value);

  constexpr void __cordl_internal_set__id(::StringW value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::UnityW<::GlobalNamespace::MultiplayerSessionManager> value);

  constexpr void __cordl_internal_set__taskUtility(::BGNet::Core::ITaskUtility* value);

  constexpr void __cordl_internal_set__timeProvider(::BGNet::Core::ITimeProvider* value);

  constexpr void __cordl_internal_set__userId(::StringW value);

  constexpr void __cordl_internal_set__userName(::StringW value);

  /// @brief Method <.ctor>b__15_0, addr 0x3c2d988, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__15_0(::GlobalNamespace::ConnectionFailedReason r);

  /// @brief Method <.ctor>b__15_1, addr 0x3c2d98c, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__15_1(::GlobalNamespace::DisconnectedReason r);

  /// @brief Method .ctor, addr 0x3c2d2fc, size 0x360, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IMockBeatmapDataProvider* beatmapDataProvider,
                    ::GlobalNamespace::IConnectionManager* connectionManager);

  /// @brief Method get_id, addr 0x3c2d2e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_id();

  /// @brief Method get_userId, addr 0x3c2d2ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x3c2d2f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_userName();

  /// @brief Convert to "::GlobalNamespace::IStandaloneMonobehavior"
  constexpr ::GlobalNamespace::IStandaloneMonobehavior* i___GlobalNamespace__IStandaloneMonobehavior() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerInstance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerInstance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerInstance(MockPlayerInstance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerInstance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerInstance(MockPlayerInstance const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18107 };

  /// @brief Field _id, offset: 0x10, size: 0x8, def value: None
  ::StringW ____id;

  /// @brief Field _userId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _userName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _timeProvider, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::ITimeProvider* ____timeProvider;

  /// @brief Field _taskUtility, offset: 0x30, size: 0x8, def value: None
  ::BGNet::Core::ITaskUtility* ____taskUtility;

  /// @brief Field _cancellationTokenSource, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _multiplayerSessionManager, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerSessionManager> ____multiplayerSessionManager;

  /// @brief Field _connectedPlayerManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager* ____connectedPlayerManager;

  /// @brief Field _fsm, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerFiniteStateMachine* ____fsm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____userName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____timeProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____taskUtility) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____cancellationTokenSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____multiplayerSessionManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____connectedPlayerManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____fsm) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerInstance, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerInstance);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerInstance*, "", "MockPlayerInstance");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MockPlayerInstance___c__DisplayClass17_0_1, "", "MockPlayerInstance/<>c__DisplayClass17_0`1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__22, "", "MockPlayerInstance/<DisposeAsync>d__22");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerInstance__RunAsync_d__18, "", "MockPlayerInstance/<RunAsync>d__18");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerInstance__Stop_d__21, "", "MockPlayerInstance/<Stop>d__21");
