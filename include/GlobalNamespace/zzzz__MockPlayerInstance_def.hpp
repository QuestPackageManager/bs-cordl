#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerInstance.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
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
class BeatSaberConnectedPlayerManager;
}
namespace GlobalNamespace {
class BeatSaberMultiplayerSessionManager;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
template<typename T>
class IConnectionInitParams_1;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace GlobalNamespace {
class IMockBeatmapDataProvider;
}
namespace GlobalNamespace {
class IStandaloneMonobehavior;
}
namespace GlobalNamespace {
class IStandaloneThreadRunnable;
}
namespace GlobalNamespace {
class IStandaloneThreadRunner;
}
namespace GlobalNamespace {
class MockPlayerFiniteStateMachine;
}
namespace GlobalNamespace {
class MockPlayerGamePoseGeneratorAI;
}
namespace GlobalNamespace {
class MockPlayerInstance_FsmTickRunnable;
}
namespace GlobalNamespace {
struct MockPlayerInstance__DisposeAsync_d__33;
}
namespace GlobalNamespace {
struct MockPlayerInstance__RunAsync_d__27;
}
namespace GlobalNamespace {
struct MockPlayerInstance__Stop_d__30;
}
namespace GlobalNamespace {
template<typename T>
class MockPlayerInstance___c__DisplayClass26_0_1;
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
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerInstance;
}
namespace GlobalNamespace {
class MockPlayerInstance_FsmTickRunnable;
}
namespace GlobalNamespace {
template<typename T>
class MockPlayerInstance___c__DisplayClass26_0_1;
}
namespace GlobalNamespace {
struct MockPlayerInstance__DisposeAsync_d__33;
}
namespace GlobalNamespace {
struct MockPlayerInstance__RunAsync_d__27;
}
namespace GlobalNamespace {
struct MockPlayerInstance__Stop_d__30;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerInstance);
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerInstance_FsmTickRunnable);
MARK_GEN_REF_PTR_T(::GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1);
MARK_VAL_T(::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33);
MARK_VAL_T(::GlobalNamespace::MockPlayerInstance__RunAsync_d__27);
MARK_VAL_T(::GlobalNamespace::MockPlayerInstance__Stop_d__30);
// Dependencies System.Object, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockPlayerInstance/FsmTickRunnable
class CORDL_TYPE MockPlayerInstance_FsmTickRunnable : public ::System::Object {
public:
// Declarations
/// @brief Field _cancellationToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancellationToken, put=__cordl_internal_set__cancellationToken)) ::System::Threading::CancellationToken  _cancellationToken;

/// @brief Field _instance, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__instance, put=__cordl_internal_set__instance)) ::GlobalNamespace::MockPlayerInstance*  _instance;

/// @brief Convert operator to "::GlobalNamespace::IStandaloneThreadRunnable"
constexpr operator  ::GlobalNamespace::IStandaloneThreadRunnable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x594ca18, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x594c984, size 0x94, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::MockPlayerInstance_FsmTickRunnable* New_ctor(::GlobalNamespace::MockPlayerInstance*  instance, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get__cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get__cancellationToken() ;

constexpr ::GlobalNamespace::MockPlayerInstance* const& __cordl_internal_get__instance() const;

constexpr ::GlobalNamespace::MockPlayerInstance*& __cordl_internal_get__instance() ;

constexpr void __cordl_internal_set__cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set__instance(::GlobalNamespace::MockPlayerInstance*  value) ;

/// @brief Method .ctor, addr 0x594c97c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MockPlayerInstance*  instance, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Convert to "::GlobalNamespace::IStandaloneThreadRunnable"
constexpr ::GlobalNamespace::IStandaloneThreadRunnable* i___GlobalNamespace__IStandaloneThreadRunnable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockPlayerInstance_FsmTickRunnable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerInstance_FsmTickRunnable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockPlayerInstance_FsmTickRunnable(MockPlayerInstance_FsmTickRunnable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerInstance_FsmTickRunnable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockPlayerInstance_FsmTickRunnable(MockPlayerInstance_FsmTickRunnable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22000};

/// @brief Field _instance, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::MockPlayerInstance*  ____instance;

/// @brief Field _cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ____cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerInstance_FsmTickRunnable, ____instance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance_FsmTickRunnable, ____cancellationToken) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerInstance_FsmTickRunnable, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: MockPlayerInstance/<>c__DisplayClass26_0`1<T>
class CORDL_TYPE MockPlayerInstance___c__DisplayClass26_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::GlobalNamespace::MockPlayerInstance*  __4__this;

/// @brief Field connectionInitParams, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectionInitParams, put=__cordl_internal_set_connectionInitParams)) ::GlobalNamespace::IConnectionInitParams_1<T>*  connectionInitParams;

static inline ::GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>* New_ctor() ;

/// @brief Method <ConnectToServer>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ConnectToServer_b__0() ;

constexpr ::GlobalNamespace::MockPlayerInstance* const& __cordl_internal_get___4__this() const;

constexpr ::GlobalNamespace::MockPlayerInstance*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::IConnectionInitParams_1<T>* const& __cordl_internal_get_connectionInitParams() const;

constexpr ::GlobalNamespace::IConnectionInitParams_1<T>*& __cordl_internal_get_connectionInitParams() ;

constexpr void __cordl_internal_set___4__this(::GlobalNamespace::MockPlayerInstance*  value) ;

constexpr void __cordl_internal_set_connectionInitParams(::GlobalNamespace::IConnectionInitParams_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockPlayerInstance___c__DisplayClass26_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerInstance___c__DisplayClass26_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockPlayerInstance___c__DisplayClass26_0_1(MockPlayerInstance___c__DisplayClass26_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerInstance___c__DisplayClass26_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockPlayerInstance___c__DisplayClass26_0_1(MockPlayerInstance___c__DisplayClass26_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22001};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::MockPlayerInstance*  _____4__this;

/// @brief Field connectionInitParams, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::IConnectionInitParams_1<T>*  ___connectionInitParams;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockPlayerInstance/<DisposeAsync>d__33
struct CORDL_TYPE MockPlayerInstance__DisposeAsync_d__33 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x594ca1c, size 0x294, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x594ccb0, size 0x6c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MockPlayerInstance__DisposeAsync_d__33() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr MockPlayerInstance__DisposeAsync_d__33(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::MockPlayerInstance*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22002};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::MockPlayerInstance*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockPlayerInstance/<RunAsync>d__27
struct CORDL_TYPE MockPlayerInstance__RunAsync_d__27 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x594cd1c, size 0x3a4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x594d0c0, size 0x6c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MockPlayerInstance__RunAsync_d__27() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance*", modifiers: "", def_value: None }, CppParam { name: "runner", ty: "::GlobalNamespace::IStandaloneThreadRunner*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr MockPlayerInstance__RunAsync_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::CancellationToken  token, ::GlobalNamespace::MockPlayerInstance*  __4__this, ::GlobalNamespace::IStandaloneThreadRunner*  runner, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22003};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field token, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  token;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::MockPlayerInstance*  __4__this;

/// @brief Field runner, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::IStandaloneThreadRunner*  runner;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__RunAsync_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__RunAsync_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__RunAsync_d__27, token) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__RunAsync_d__27, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__RunAsync_d__27, runner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__RunAsync_d__27, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerInstance__RunAsync_d__27, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockPlayerInstance/<Stop>d__30
struct CORDL_TYPE MockPlayerInstance__Stop_d__30 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x594d12c, size 0x184, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x594d2b0, size 0x8, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MockPlayerInstance__Stop_d__30() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr MockPlayerInstance__Stop_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::MockPlayerInstance*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22004};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::MockPlayerInstance*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__Stop_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__Stop_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__Stop_d__30, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance__Stop_d__30, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerInstance__Stop_d__30, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ConnectionFailedReason, DisconnectedReason, System.Nullable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockPlayerInstance
class CORDL_TYPE MockPlayerInstance : public ::System::Object {
public:
// Declarations
using FsmTickRunnable = ::GlobalNamespace::MockPlayerInstance_FsmTickRunnable;

using _DisposeAsync_d__33 = ::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33;

using _RunAsync_d__27 = ::GlobalNamespace::MockPlayerInstance__RunAsync_d__27;

using _Stop_d__30 = ::GlobalNamespace::MockPlayerInstance__Stop_d__30;

template<typename T>
using __c__DisplayClass26_0_1 = ::GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>;

/// @brief Field _cancellationTokenSource, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancellationTokenSource, put=__cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

/// @brief Field _connectedPlayerManager, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectedPlayerManager, put=__cordl_internal_set__connectedPlayerManager)) ::GlobalNamespace::BeatSaberConnectedPlayerManager*  _connectedPlayerManager;

/// @brief Field <connectionFailedReason>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectionFailedReason_k__BackingField, put=__cordl_internal_set__connectionFailedReason_k__BackingField)) ::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason>  _connectionFailedReason_k__BackingField;

/// @brief Field <disconnectedReason>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__disconnectedReason_k__BackingField, put=__cordl_internal_set__disconnectedReason_k__BackingField)) ::System::Nullable_1<::GlobalNamespace::DisconnectedReason>  _disconnectedReason_k__BackingField;

/// @brief Field _fsm, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__fsm, put=__cordl_internal_set__fsm)) ::GlobalNamespace::MockPlayerFiniteStateMachine*  _fsm;

/// @brief Field _gameplayPoseGenerator, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameplayPoseGenerator, put=__cordl_internal_set__gameplayPoseGenerator)) ::GlobalNamespace::MockPlayerGamePoseGeneratorAI*  _gameplayPoseGenerator;

/// @brief Field _id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) ::StringW  _id;

/// @brief Field _multiplayerSessionManager, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__multiplayerSessionManager, put=__cordl_internal_set__multiplayerSessionManager)) ::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager>  _multiplayerSessionManager;

/// @brief Field _taskUtility, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__taskUtility, put=__cordl_internal_set__taskUtility)) ::BGNet::Core::ITaskUtility*  _taskUtility;

/// @brief Field _timeProvider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::BGNet::Core::ITimeProvider*  _timeProvider;

/// @brief Field _userId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__userId, put=__cordl_internal_set__userId)) ::StringW  _userId;

/// @brief Field _userName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__userName, put=__cordl_internal_set__userName)) ::StringW  _userName;

 __declspec(property(get=get_connectionFailedReason, put=set_connectionFailedReason)) ::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason>  connectionFailedReason;

 __declspec(property(get=get_disconnectedReason, put=set_disconnectedReason)) ::System::Nullable_1<::GlobalNamespace::DisconnectedReason>  disconnectedReason;

 __declspec(property(get=get_id)) ::StringW  id;

 __declspec(property(get=get_userId)) ::StringW  userId;

 __declspec(property(get=get_userName)) ::StringW  userName;

/// @brief Convert operator to "::GlobalNamespace::IStandaloneMonobehavior"
constexpr operator  ::GlobalNamespace::IStandaloneMonobehavior*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ConnectToServer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void ConnectToServer(::GlobalNamespace::IConnectionInitParams_1<T>*  connectionInitParams) ;

/// @brief Method Dispose, addr 0x594c66c, size 0xb8, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DisposeAsync, addr 0x594c5bc, size 0xb0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DisposeAsync() ;

/// @brief Method HandleConnectionFailedEvent, addr 0x594c560, size 0x5c, virtual false, abstract: false, final false
inline void HandleConnectionFailedEvent(::GlobalNamespace::ConnectionFailedReason  reason) ;

/// @brief Method HandleDisconnectedEvent, addr 0x594c504, size 0x5c, virtual false, abstract: false, final false
inline void HandleDisconnectedEvent(::GlobalNamespace::DisconnectedReason  reason) ;

static inline ::GlobalNamespace::MockPlayerInstance* New_ctor(::BGNet::Core::ITimeProvider*  timeProvider, ::BGNet::Core::ITaskUtility*  taskUtility, ::GlobalNamespace::IMockBeatmapDataProvider*  beatmapDataProvider, ::GlobalNamespace::IConnectionManager*  connectionManager) ;

/// @brief Method RunAsync, addr 0x594c36c, size 0xc4, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* RunAsync(::GlobalNamespace::IStandaloneThreadRunner*  runner, ::System::Threading::CancellationToken  token) ;

/// @brief Method Stop, addr 0x594c460, size 0xa4, virtual true, abstract: false, final true
inline void Stop() ;

/// @brief Method Tick, addr 0x594c358, size 0x14, virtual false, abstract: false, final false
inline void Tick() ;

/// @brief Method WhenReady, addr 0x594c430, size 0x18, virtual true, abstract: false, final true
inline void WhenReady(::System::Action*  action) ;

/// @brief Method WhenReadyAsync, addr 0x594c448, size 0x18, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* WhenReadyAsync(::System::Func_1<::System::Threading::Tasks::Task*>*  action) ;

/// @brief Method <DisposeAsync>b__33_0, addr 0x594c724, size 0x258, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _DisposeAsync_b__33_0() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource() ;

constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager* const& __cordl_internal_get__connectedPlayerManager() const;

constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager*& __cordl_internal_get__connectedPlayerManager() ;

constexpr ::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason> const& __cordl_internal_get__connectionFailedReason_k__BackingField() const;

constexpr ::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason>& __cordl_internal_get__connectionFailedReason_k__BackingField() ;

constexpr ::System::Nullable_1<::GlobalNamespace::DisconnectedReason> const& __cordl_internal_get__disconnectedReason_k__BackingField() const;

constexpr ::System::Nullable_1<::GlobalNamespace::DisconnectedReason>& __cordl_internal_get__disconnectedReason_k__BackingField() ;

constexpr ::GlobalNamespace::MockPlayerFiniteStateMachine* const& __cordl_internal_get__fsm() const;

constexpr ::GlobalNamespace::MockPlayerFiniteStateMachine*& __cordl_internal_get__fsm() ;

constexpr ::GlobalNamespace::MockPlayerGamePoseGeneratorAI* const& __cordl_internal_get__gameplayPoseGenerator() const;

constexpr ::GlobalNamespace::MockPlayerGamePoseGeneratorAI*& __cordl_internal_get__gameplayPoseGenerator() ;

constexpr ::StringW const& __cordl_internal_get__id() const;

constexpr ::StringW& __cordl_internal_get__id() ;

constexpr ::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager> const& __cordl_internal_get__multiplayerSessionManager() const;

constexpr ::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager>& __cordl_internal_get__multiplayerSessionManager() ;

constexpr ::BGNet::Core::ITaskUtility* const& __cordl_internal_get__taskUtility() const;

constexpr ::BGNet::Core::ITaskUtility*& __cordl_internal_get__taskUtility() ;

constexpr ::BGNet::Core::ITimeProvider* const& __cordl_internal_get__timeProvider() const;

constexpr ::BGNet::Core::ITimeProvider*& __cordl_internal_get__timeProvider() ;

constexpr ::StringW const& __cordl_internal_get__userId() const;

constexpr ::StringW& __cordl_internal_get__userId() ;

constexpr ::StringW const& __cordl_internal_get__userName() const;

constexpr ::StringW& __cordl_internal_get__userName() ;

constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__connectedPlayerManager(::GlobalNamespace::BeatSaberConnectedPlayerManager*  value) ;

constexpr void __cordl_internal_set__connectionFailedReason_k__BackingField(::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason>  value) ;

constexpr void __cordl_internal_set__disconnectedReason_k__BackingField(::System::Nullable_1<::GlobalNamespace::DisconnectedReason>  value) ;

constexpr void __cordl_internal_set__fsm(::GlobalNamespace::MockPlayerFiniteStateMachine*  value) ;

constexpr void __cordl_internal_set__gameplayPoseGenerator(::GlobalNamespace::MockPlayerGamePoseGeneratorAI*  value) ;

constexpr void __cordl_internal_set__id(::StringW  value) ;

constexpr void __cordl_internal_set__multiplayerSessionManager(::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager>  value) ;

constexpr void __cordl_internal_set__taskUtility(::BGNet::Core::ITaskUtility*  value) ;

constexpr void __cordl_internal_set__timeProvider(::BGNet::Core::ITimeProvider*  value) ;

constexpr void __cordl_internal_set__userId(::StringW  value) ;

constexpr void __cordl_internal_set__userName(::StringW  value) ;

/// @brief Method .ctor, addr 0x594bf20, size 0x434, virtual false, abstract: false, final false
inline void _ctor(::BGNet::Core::ITimeProvider*  timeProvider, ::BGNet::Core::ITaskUtility*  taskUtility, ::GlobalNamespace::IMockBeatmapDataProvider*  beatmapDataProvider, ::GlobalNamespace::IConnectionManager*  connectionManager) ;

/// @brief Method get_connectionFailedReason, addr 0x594bf10, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason> get_connectionFailedReason() ;

/// @brief Method get_disconnectedReason, addr 0x594bf00, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::DisconnectedReason> get_disconnectedReason() ;

/// @brief Method get_id, addr 0x594bee8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_userId, addr 0x594bef0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_userId() ;

/// @brief Method get_userName, addr 0x594bef8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_userName() ;

/// @brief Convert to "::GlobalNamespace::IStandaloneMonobehavior"
constexpr ::GlobalNamespace::IStandaloneMonobehavior* i___GlobalNamespace__IStandaloneMonobehavior() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_connectionFailedReason, addr 0x594bf18, size 0x8, virtual false, abstract: false, final false
inline void set_connectionFailedReason(::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason>  value) ;

/// @brief Method set_disconnectedReason, addr 0x594bf08, size 0x8, virtual false, abstract: false, final false
inline void set_disconnectedReason(::System::Nullable_1<::GlobalNamespace::DisconnectedReason>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockPlayerInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerInstance", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockPlayerInstance(MockPlayerInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerInstance", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockPlayerInstance(MockPlayerInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22005};

/// @brief Field _id, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____id;

/// @brief Field _userId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____userId;

/// @brief Field _userName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____userName;

/// @brief Field <disconnectedReason>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Nullable_1<::GlobalNamespace::DisconnectedReason>  ____disconnectedReason_k__BackingField;

/// @brief Field <connectionFailedReason>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason>  ____connectionFailedReason_k__BackingField;

/// @brief Field _timeProvider, offset: 0x38, size: 0x8, def value: None
 ::BGNet::Core::ITimeProvider*  ____timeProvider;

/// @brief Field _taskUtility, offset: 0x40, size: 0x8, def value: None
 ::BGNet::Core::ITaskUtility*  ____taskUtility;

/// @brief Field _cancellationTokenSource, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____cancellationTokenSource;

/// @brief Field _multiplayerSessionManager, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager>  ____multiplayerSessionManager;

/// @brief Field _connectedPlayerManager, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::BeatSaberConnectedPlayerManager*  ____connectedPlayerManager;

/// @brief Field _fsm, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::MockPlayerFiniteStateMachine*  ____fsm;

/// @brief Field _gameplayPoseGenerator, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::MockPlayerGamePoseGeneratorAI*  ____gameplayPoseGenerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____userName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____disconnectedReason_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____connectionFailedReason_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____timeProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____taskUtility) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____cancellationTokenSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____multiplayerSessionManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____connectedPlayerManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____fsm) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerInstance, ____gameplayPoseGenerator) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerInstance, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerInstance);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerInstance*, "", "MockPlayerInstance");
NEED_NO_BOX(::GlobalNamespace::MockPlayerInstance_FsmTickRunnable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerInstance_FsmTickRunnable*, "", "MockPlayerInstance/FsmTickRunnable");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1, "", "MockPlayerInstance/<>c__DisplayClass26_0`1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33, "", "MockPlayerInstance/<DisposeAsync>d__33");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerInstance__RunAsync_d__27, "", "MockPlayerInstance/<RunAsync>d__27");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerInstance__Stop_d__30, "", "MockPlayerInstance/<Stop>d__30");
