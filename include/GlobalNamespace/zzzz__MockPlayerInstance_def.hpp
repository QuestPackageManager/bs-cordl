#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayerInstance)
namespace GlobalNamespace {
template <typename T> class __MockPlayerInstance____c__DisplayClass17_0_1;
}
namespace GlobalNamespace {
struct __MockPlayerInstance___Stop_d__21;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace GlobalNamespace {
class MultiplayerSessionManager;
}
namespace GlobalNamespace {
class IStandaloneMonobehavior;
}
namespace GlobalNamespace {
struct __MockPlayerInstance___RunAsync_d__18;
}
namespace System {
class Action;
}
namespace System::Threading::Tasks {
class Task;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace GlobalNamespace {
class IStandaloneThreadRunner;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class MockPlayerFiniteStateMachine;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
class IMockBeatmapDataProvider;
}
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
struct __MockPlayerInstance___DisposeAsync_d__22;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerInstance;
}
namespace GlobalNamespace {
template <typename T> class __MockPlayerInstance____c__DisplayClass17_0_1;
}
namespace GlobalNamespace {
struct __MockPlayerInstance___DisposeAsync_d__22;
}
namespace GlobalNamespace {
struct __MockPlayerInstance___RunAsync_d__18;
}
namespace GlobalNamespace {
struct __MockPlayerInstance___Stop_d__21;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerInstance);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1);
MARK_VAL_T(::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22);
MARK_VAL_T(::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18);
MARK_VAL_T(::GlobalNamespace::__MockPlayerInstance___Stop_d__21);
// Type: ::<>c__DisplayClass17_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15517))
// CS Name: ::MockPlayerInstance::<>c__DisplayClass17_0`1<T>*
class CORDL_TYPE __MockPlayerInstance____c__DisplayClass17_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MockPlayerInstance* __4__this;

  /// @brief Field connectionInitParams, offset 0x18, size 0x8
  __declspec(property(get = __get_connectionInitParams, put = __set_connectionInitParams))::GlobalNamespace::IConnectionInitParams_1<T>* connectionInitParams;

  constexpr ::GlobalNamespace::MockPlayerInstance*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockPlayerInstance*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MockPlayerInstance* value);

  constexpr ::GlobalNamespace::IConnectionInitParams_1<T>*& __get_connectionInitParams();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionInitParams_1<T>*> const& __get_connectionInitParams() const;

  constexpr void __set_connectionInitParams(::GlobalNamespace::IConnectionInitParams_1<T>* value);

  static inline ::GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <ConnectToServer>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ConnectToServer_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__MockPlayerInstance____c__DisplayClass17_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MockPlayerInstance____c__DisplayClass17_0_1(__MockPlayerInstance____c__DisplayClass17_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MockPlayerInstance____c__DisplayClass17_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MockPlayerInstance____c__DisplayClass17_0_1(__MockPlayerInstance____c__DisplayClass17_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockPlayerInstance____c__DisplayClass17_0_1();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerInstance* _____4__this;

  /// @brief Field connectionInitParams, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IConnectionInitParams_1<T>* ___connectionInitParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<RunAsync>d__18
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3393))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15518))
// CS Name: ::MockPlayerInstance::<RunAsync>d__18
struct CORDL_TYPE __MockPlayerInstance___RunAsync_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x23eb820 size 0x218 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x23eba38 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
  // None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance*", modifiers: "", def_value: None }, CppParam { name: "runner", ty: "::GlobalNamespace::IStandaloneThreadRunner*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MockPlayerInstance___RunAsync_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::CancellationToken token,
                                                  ::GlobalNamespace::MockPlayerInstance* __4__this, ::GlobalNamespace::IStandaloneThreadRunner* runner,
                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockPlayerInstance___RunAsync_d__18();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<Stop>d__21
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3393)), TypeDefinitionIndex(TypeDefinitionIndex(3400))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15519))
// CS Name: ::MockPlayerInstance::<Stop>d__21
struct CORDL_TYPE __MockPlayerInstance___Stop_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x23eba44 size 0x178 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x23ebbbc size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MockPlayerInstance___Stop_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::MockPlayerInstance* __4__this,
                                              ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockPlayerInstance___Stop_d__21();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerInstance* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockPlayerInstance___Stop_d__21, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<DisposeAsync>d__22
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3393)), TypeDefinitionIndex(TypeDefinitionIndex(3401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15520))
// CS Name: ::MockPlayerInstance::<DisposeAsync>d__22
struct CORDL_TYPE __MockPlayerInstance___DisposeAsync_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x23ebbc8 size 0x20c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x23ebdd4 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MockPlayerInstance___DisposeAsync_d__22(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::MockPlayerInstance* __4__this,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockPlayerInstance___DisposeAsync_d__22();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerInstance* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MockPlayerInstance
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15521))
// CS Name: ::MockPlayerInstance*
class CORDL_TYPE MockPlayerInstance : public ::System::Object {
public:
  // Declarations
  using _DisposeAsync_d__22 = ::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22;

  using _Stop_d__21 = ::GlobalNamespace::__MockPlayerInstance___Stop_d__21;

  using _RunAsync_d__18 = ::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18;

  template <typename T> using __c__DisplayClass17_0_1 = ::GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>;

  /// @brief Field _id, offset 0x10, size 0x8
  __declspec(property(get = __get__id, put = __set__id))::StringW _id;

  /// @brief Field _userId, offset 0x18, size 0x8
  __declspec(property(get = __get__userId, put = __set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0x20, size 0x8
  __declspec(property(get = __get__userName, put = __set__userName))::StringW _userName;

  /// @brief Field _timeProvider, offset 0x28, size 0x8
  __declspec(property(get = __get__timeProvider, put = __set__timeProvider))::BGNet::Core::ITimeProvider* _timeProvider;

  /// @brief Field _taskUtility, offset 0x30, size 0x8
  __declspec(property(get = __get__taskUtility, put = __set__taskUtility))::BGNet::Core::ITaskUtility* _taskUtility;

  /// @brief Field _cancellationTokenSource, offset 0x38, size 0x8
  __declspec(property(get = __get__cancellationTokenSource, put = __set__cancellationTokenSource))::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _multiplayerSessionManager, offset 0x40, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::MultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _connectedPlayerManager, offset 0x48, size 0x8
  __declspec(property(get = __get__connectedPlayerManager, put = __set__connectedPlayerManager))::GlobalNamespace::ConnectedPlayerManager* _connectedPlayerManager;

  /// @brief Field _fsm, offset 0x50, size 0x8
  __declspec(property(get = __get__fsm, put = __set__fsm))::GlobalNamespace::MockPlayerFiniteStateMachine* _fsm;

  __declspec(property(get = get_id))::StringW id;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IStandaloneMonobehavior"
  constexpr operator ::GlobalNamespace::IStandaloneMonobehavior*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::StringW& __get__id();

  constexpr ::StringW const& __get__id() const;

  constexpr void __set__id(::StringW value);

  constexpr ::StringW& __get__userId();

  constexpr ::StringW const& __get__userId() const;

  constexpr void __set__userId(::StringW value);

  constexpr ::StringW& __get__userName();

  constexpr ::StringW const& __get__userName() const;

  constexpr void __set__userName(::StringW value);

  constexpr ::BGNet::Core::ITimeProvider*& __get__timeProvider();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> const& __get__timeProvider() const;

  constexpr void __set__timeProvider(::BGNet::Core::ITimeProvider* value);

  constexpr ::BGNet::Core::ITaskUtility*& __get__taskUtility();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& __get__taskUtility() const;

  constexpr void __set__taskUtility(::BGNet::Core::ITaskUtility* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__cancellationTokenSource() const;

  constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr ::GlobalNamespace::MultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::MultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::ConnectedPlayerManager*& __get__connectedPlayerManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConnectedPlayerManager*> const& __get__connectedPlayerManager() const;

  constexpr void __set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager* value);

  constexpr ::GlobalNamespace::MockPlayerFiniteStateMachine*& __get__fsm();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockPlayerFiniteStateMachine*> const& __get__fsm() const;

  constexpr void __set__fsm(::GlobalNamespace::MockPlayerFiniteStateMachine* value);

  /// @brief Method get_id addr 0x23eb074 size 0x8 virtual false final false
  inline ::StringW get_id();

  /// @brief Method get_userId addr 0x23eb07c size 0x8 virtual false final false
  inline ::StringW get_userId();

  /// @brief Method get_userName addr 0x23eb084 size 0x8 virtual false final false
  inline ::StringW get_userName();

  static inline ::GlobalNamespace::MockPlayerInstance* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                                ::GlobalNamespace::IMockBeatmapDataProvider* beatmapDataProvider, ::GlobalNamespace::IConnectionManager* connectionManager);

  /// @brief Method .ctor addr 0x23eb08c size 0x384 virtual false final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IMockBeatmapDataProvider* beatmapDataProvider,
                    ::GlobalNamespace::IConnectionManager* connectionManager);

  /// @brief Method Tick addr 0x23eb414 size 0x18 virtual false final false
  inline void Tick();

  /// @brief Method ConnectToServer addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void ConnectToServer(::GlobalNamespace::IConnectionInitParams_1<T>* connectionInitParams);

  /// @brief Method RunAsync addr 0x23eb42c size 0xdc virtual true final true
  inline ::System::Threading::Tasks::Task* RunAsync(::GlobalNamespace::IStandaloneThreadRunner* runner, ::System::Threading::CancellationToken token);

  /// @brief Method Dispatch addr 0x23eb508 size 0x1c virtual true final true
  inline void Dispatch(::System::Action* action);

  /// @brief Method DispatchAsync addr 0x23eb524 size 0x1c virtual true final true
  inline ::System::Threading::Tasks::Task* DispatchAsync(::System::Func_1<::System::Threading::Tasks::Task*>* action);

  /// @brief Method Stop addr 0x23eb540 size 0x94 virtual true final true
  inline void Stop();

  /// @brief Method DisposeAsync addr 0x23eb5d4 size 0xc8 virtual false final false
  inline ::System::Threading::Tasks::Task* DisposeAsync();

  /// @brief Method Dispose addr 0x23eb69c size 0xb4 virtual true final true
  inline void Dispose();

  /// @brief Method <.ctor>b__15_0 addr 0x23eb750 size 0x4 virtual false final false
  inline void __ctor_b__15_0(::GlobalNamespace::ConnectionFailedReason r);

  /// @brief Method <.ctor>b__15_1 addr 0x23eb754 size 0x4 virtual false final false
  inline void __ctor_b__15_1(::GlobalNamespace::DisconnectedReason r);

  /// @brief Method <DisposeAsync>b__22_0 addr 0x23eb758 size 0xc8 virtual false final false
  inline ::System::Threading::Tasks::Task* _DisposeAsync_b__22_0();

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerInstance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerInstance(MockPlayerInstance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerInstance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerInstance(MockPlayerInstance const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerInstance();

public:
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
  ::GlobalNamespace::MultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _connectedPlayerManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager* ____connectedPlayerManager;

  /// @brief Field _fsm, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerFiniteStateMachine* ____fsm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerInstance, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerInstance);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerInstance*, "", "MockPlayerInstance");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1, "", "MockPlayerInstance/<>c__DisplayClass17_0`1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22, "", "MockPlayerInstance/<DisposeAsync>d__22");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18, "", "MockPlayerInstance/<RunAsync>d__18");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockPlayerInstance___Stop_d__21, "", "MockPlayerInstance/<Stop>d__21");
