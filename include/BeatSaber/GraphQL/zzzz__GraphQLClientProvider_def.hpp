#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/GraphQLClientProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/GraphQL/zzzz__BSClientProviderInitializationState_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphQLClientProvider)
namespace BeatSaber::GraphQL {
struct BSClientProviderInitializationState;
}
namespace BeatSaber::GraphQL {
class GraphQLClientEvents;
}
namespace BeatSaber::GraphQL {
class GraphQLClientProvider_Settings;
}
namespace BeatSaber::GraphQL {
struct GraphQLClientProvider__InitializationTask_d__24;
}
namespace BeatSaber::GraphQL {
struct GraphQLClientProvider__InitializeAsync_d__23;
}
namespace BeatSaber::GraphQL {
class IGraphQLClientProvider;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLClient;
}
namespace OculusStudios::GraphQL::ClientInterface {
class Request;
}
namespace OculusStudios::Platform::Core {
class IPlatform;
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
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Version;
}
namespace Zenject {
class IInitializable;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace BeatSaber::GraphQL {
class GraphQLClientProvider;
}
namespace BeatSaber::GraphQL {
class GraphQLClientProvider_Settings;
}
namespace BeatSaber::GraphQL {
struct GraphQLClientProvider__InitializationTask_d__24;
}
namespace BeatSaber::GraphQL {
struct GraphQLClientProvider__InitializeAsync_d__23;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GraphQL::GraphQLClientProvider);
MARK_REF_PTR_T(::BeatSaber::GraphQL::GraphQLClientProvider_Settings);
MARK_VAL_T(::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24);
MARK_VAL_T(::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23);
// Dependencies System.Object
namespace BeatSaber::GraphQL {
// Is value type: false
// CS Name: BeatSaber.GraphQL.GraphQLClientProvider/Settings
class CORDL_TYPE GraphQLClientProvider_Settings : public ::System::Object {
public:
  // Declarations
  /// @brief Field autoInitialize, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_autoInitialize, put = __cordl_internal_set_autoInitialize)) bool autoInitialize;

  /// @brief Field endpoint, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_endpoint, put = __cordl_internal_set_endpoint)) ::StringW endpoint;

  static inline ::BeatSaber::GraphQL::GraphQLClientProvider_Settings* New_ctor(::StringW endpoint, bool autoInitialize);

  constexpr bool const& __cordl_internal_get_autoInitialize() const;

  constexpr bool& __cordl_internal_get_autoInitialize();

  constexpr ::StringW const& __cordl_internal_get_endpoint() const;

  constexpr ::StringW& __cordl_internal_get_endpoint();

  constexpr void __cordl_internal_set_autoInitialize(bool value);

  constexpr void __cordl_internal_set_endpoint(::StringW value);

  /// @brief Method .ctor, addr 0x31ff444, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW endpoint, bool autoInitialize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClientProvider_Settings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClientProvider_Settings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLClientProvider_Settings(GraphQLClientProvider_Settings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClientProvider_Settings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLClientProvider_Settings(GraphQLClientProvider_Settings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22410 };

  /// @brief Field endpoint, offset: 0x10, size: 0x8, def value: None
  ::StringW ___endpoint;

  /// @brief Field autoInitialize, offset: 0x18, size: 0x1, def value: None
  bool ___autoInitialize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider_Settings, ___endpoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider_Settings, ___autoInitialize) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GraphQL::GraphQLClientProvider_Settings, 0x20>, "Size mismatch!");

} // namespace BeatSaber::GraphQL
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace BeatSaber::GraphQL {
// Is value type: true
// CS Name: BeatSaber.GraphQL.GraphQLClientProvider/<InitializationTask>d__24
struct CORDL_TYPE GraphQLClientProvider__InitializationTask_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x31ff450, size 0x92c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x31ffd7c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClientProvider__InitializationTask_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::GraphQL::GraphQLClientProvider*", modifiers: "",
  // def_value: None }, CppParam { name: "ctx", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_appVersion_5__2", ty: "::System::Version*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr GraphQLClientProvider__InitializationTask_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                            ::BeatSaber::GraphQL::GraphQLClientProvider* __4__this, ::System::Threading::CancellationToken ctx, ::System::Version* _appVersion_5__2,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22411 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::GraphQL::GraphQLClientProvider* __4__this;

  /// @brief Field ctx, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken ctx;

  /// @brief Field <appVersion>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Version* _appVersion_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24, ctx) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24, _appVersion_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24, 0x40>, "Size mismatch!");

} // namespace BeatSaber::GraphQL
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace BeatSaber::GraphQL {
// Is value type: true
// CS Name: BeatSaber.GraphQL.GraphQLClientProvider/<InitializeAsync>d__23
struct CORDL_TYPE GraphQLClientProvider__InitializeAsync_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x31ffde8, size 0x200, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x31fffe8, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClientProvider__InitializeAsync_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::GraphQL::GraphQLClientProvider*", modifiers: "",
  // def_value: None }, CppParam { name: "ctx", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr GraphQLClientProvider__InitializeAsync_d__23(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                         ::BeatSaber::GraphQL::GraphQLClientProvider* __4__this, ::System::Threading::CancellationToken ctx,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22412 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::GraphQL::GraphQLClientProvider* __4__this;

  /// @brief Field ctx, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken ctx;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23, ctx) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23, 0x38>, "Size mismatch!");

} // namespace BeatSaber::GraphQL
// Dependencies BeatSaber.GraphQL.BSClientProviderInitializationState, System.Object
namespace BeatSaber::GraphQL {
// Is value type: false
// CS Name: BeatSaber.GraphQL.GraphQLClientProvider
class CORDL_TYPE GraphQLClientProvider : public ::System::Object {
public:
  // Declarations
  using Settings = ::BeatSaber::GraphQL::GraphQLClientProvider_Settings;

  using _InitializationTask_d__24 = ::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24;

  using _InitializeAsync_d__23 = ::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23;

  /// @brief Field _graphQLClient, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__graphQLClient, put = __cordl_internal_set__graphQLClient)) ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* _graphQLClient;

  /// @brief Field _graphQLClientEvents, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__graphQLClientEvents, put = __cordl_internal_set__graphQLClientEvents)) ::BeatSaber::GraphQL::GraphQLClientEvents* _graphQLClientEvents;

  /// @brief Field _initializationCancellationToken, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__initializationCancellationToken,
                      put = __cordl_internal_set__initializationCancellationToken)) ::System::Threading::CancellationTokenSource* _initializationCancellationToken;

  /// @brief Field <initializationState>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__initializationState_k__BackingField,
                      put = __cordl_internal_set__initializationState_k__BackingField)) ::BeatSaber::GraphQL::BSClientProviderInitializationState _initializationState_k__BackingField;

  /// @brief Field _initializationTask, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__initializationTask, put = __cordl_internal_set__initializationTask)) ::System::Threading::Tasks::Task* _initializationTask;

  /// @brief Field _platform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__platform, put = __cordl_internal_set__platform)) ::OculusStudios::Platform::Core::IPlatform* _platform;

  /// @brief Field _settings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__settings, put = __cordl_internal_set__settings)) ::BeatSaber::GraphQL::GraphQLClientProvider_Settings* _settings;

  /// @brief Field globalRequestFailureEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_globalRequestFailureEvent,
                      put = __cordl_internal_set_globalRequestFailureEvent)) ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* globalRequestFailureEvent;

  /// @brief Field globalRequestSucceededEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_globalRequestSucceededEvent,
                      put = __cordl_internal_set_globalRequestSucceededEvent)) ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* globalRequestSucceededEvent;

  __declspec(property(get = get_graphQLClient)) ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* graphQLClient;

  /// @brief Field initializationDidFinishEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_initializationDidFinishEvent, put = __cordl_internal_set_initializationDidFinishEvent)) ::System::Action* initializationDidFinishEvent;

  __declspec(property(get = get_initializationState, put = set_initializationState)) ::BeatSaber::GraphQL::BSClientProviderInitializationState initializationState;

  /// @brief Convert operator to "::BeatSaber::GraphQL::IGraphQLClientProvider"
  constexpr operator ::BeatSaber::GraphQL::IGraphQLClientProvider*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Method Dispose, addr 0x31ff2d0, size 0x5c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method InitializationTask, addr 0x31ff0d8, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializationTask(::System::Threading::CancellationToken ctx);

  /// @brief Method Initialize, addr 0x31ff198, size 0x138, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method InitializeAsync, addr 0x31ff014, size 0xc4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* InitializeAsync(::System::Threading::CancellationToken ctx);

  static inline ::BeatSaber::GraphQL::GraphQLClientProvider* New_ctor();

  /// @brief Method Tick, addr 0x31ff32c, size 0xe4, virtual true, abstract: false, final true
  inline void Tick();

  /// @brief Method <Initialize>b__25_0, addr 0x31ff410, size 0x34, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _Initialize_b__25_0();

  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* const& __cordl_internal_get__graphQLClient() const;

  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*& __cordl_internal_get__graphQLClient();

  constexpr ::BeatSaber::GraphQL::GraphQLClientEvents* const& __cordl_internal_get__graphQLClientEvents() const;

  constexpr ::BeatSaber::GraphQL::GraphQLClientEvents*& __cordl_internal_get__graphQLClientEvents();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__initializationCancellationToken() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__initializationCancellationToken();

  constexpr ::BeatSaber::GraphQL::BSClientProviderInitializationState const& __cordl_internal_get__initializationState_k__BackingField() const;

  constexpr ::BeatSaber::GraphQL::BSClientProviderInitializationState& __cordl_internal_get__initializationState_k__BackingField();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__initializationTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__initializationTask();

  constexpr ::OculusStudios::Platform::Core::IPlatform* const& __cordl_internal_get__platform() const;

  constexpr ::OculusStudios::Platform::Core::IPlatform*& __cordl_internal_get__platform();

  constexpr ::BeatSaber::GraphQL::GraphQLClientProvider_Settings* const& __cordl_internal_get__settings() const;

  constexpr ::BeatSaber::GraphQL::GraphQLClientProvider_Settings*& __cordl_internal_get__settings();

  constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& __cordl_internal_get_globalRequestFailureEvent() const;

  constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& __cordl_internal_get_globalRequestFailureEvent();

  constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& __cordl_internal_get_globalRequestSucceededEvent() const;

  constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& __cordl_internal_get_globalRequestSucceededEvent();

  constexpr ::System::Action* const& __cordl_internal_get_initializationDidFinishEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_initializationDidFinishEvent();

  constexpr void __cordl_internal_set__graphQLClient(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* value);

  constexpr void __cordl_internal_set__graphQLClientEvents(::BeatSaber::GraphQL::GraphQLClientEvents* value);

  constexpr void __cordl_internal_set__initializationCancellationToken(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__initializationState_k__BackingField(::BeatSaber::GraphQL::BSClientProviderInitializationState value);

  constexpr void __cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value);

  constexpr void __cordl_internal_set__settings(::BeatSaber::GraphQL::GraphQLClientProvider_Settings* value);

  constexpr void __cordl_internal_set_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value);

  constexpr void __cordl_internal_set_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value);

  constexpr void __cordl_internal_set_initializationDidFinishEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x31fef68, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_globalRequestFailureEvent, addr 0x31fedd0, size 0xc0, virtual true, abstract: false, final true
  inline void add_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value);

  /// @brief Method add_globalRequestSucceededEvent, addr 0x31fec50, size 0xc0, virtual true, abstract: false, final true
  inline void add_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value);

  /// @brief Method add_initializationDidFinishEvent, addr 0x31feaf8, size 0xac, virtual true, abstract: false, final true
  inline void add_initializationDidFinishEvent(::System::Action* value);

  /// @brief Method get_graphQLClient, addr 0x31fef50, size 0x8, virtual true, abstract: false, final true
  inline ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* get_graphQLClient();

  /// @brief Method get_initializationState, addr 0x31fef58, size 0x8, virtual true, abstract: false, final true
  inline ::BeatSaber::GraphQL::BSClientProviderInitializationState get_initializationState();

  /// @brief Convert to "::BeatSaber::GraphQL::IGraphQLClientProvider"
  constexpr ::BeatSaber::GraphQL::IGraphQLClientProvider* i___BeatSaber__GraphQL__IGraphQLClientProvider() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

  /// @brief Method remove_globalRequestFailureEvent, addr 0x31fee90, size 0xc0, virtual true, abstract: false, final true
  inline void remove_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value);

  /// @brief Method remove_globalRequestSucceededEvent, addr 0x31fed10, size 0xc0, virtual true, abstract: false, final true
  inline void remove_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value);

  /// @brief Method remove_initializationDidFinishEvent, addr 0x31feba4, size 0xac, virtual true, abstract: false, final true
  inline void remove_initializationDidFinishEvent(::System::Action* value);

  /// @brief Method set_initializationState, addr 0x31fef60, size 0x8, virtual false, abstract: false, final false
  inline void set_initializationState(::BeatSaber::GraphQL::BSClientProviderInitializationState value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClientProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClientProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLClientProvider(GraphQLClientProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClientProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLClientProvider(GraphQLClientProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22413 };

  /// @brief Field _settings, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::GraphQL::GraphQLClientProvider_Settings* ____settings;

  /// @brief Field _platform, offset: 0x18, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatform* ____platform;

  /// @brief Field initializationDidFinishEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___initializationDidFinishEvent;

  /// @brief Field globalRequestSucceededEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* ___globalRequestSucceededEvent;

  /// @brief Field globalRequestFailureEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* ___globalRequestFailureEvent;

  /// @brief Field _graphQLClientEvents, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::GraphQL::GraphQLClientEvents* ____graphQLClientEvents;

  /// @brief Field _initializationCancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____initializationCancellationToken;

  /// @brief Field <initializationState>k__BackingField, offset: 0x48, size: 0x4, def value: None
  ::BeatSaber::GraphQL::BSClientProviderInitializationState ____initializationState_k__BackingField;

  /// @brief Field _graphQLClient, offset: 0x50, size: 0x8, def value: None
  ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* ____graphQLClient;

  /// @brief Field _initializationTask, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____initializationTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider, ____settings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider, ____platform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider, ___initializationDidFinishEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider, ___globalRequestSucceededEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider, ___globalRequestFailureEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider, ____graphQLClientEvents) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider, ____initializationCancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider, ____initializationState_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider, ____graphQLClient) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProvider, ____initializationTask) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GraphQL::GraphQLClientProvider, 0x60>, "Size mismatch!");

} // namespace BeatSaber::GraphQL
NEED_NO_BOX(::BeatSaber::GraphQL::GraphQLClientProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GraphQL::GraphQLClientProvider*, "BeatSaber.GraphQL", "GraphQLClientProvider");
NEED_NO_BOX(::BeatSaber::GraphQL::GraphQLClientProvider_Settings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GraphQL::GraphQLClientProvider_Settings*, "BeatSaber.GraphQL", "GraphQLClientProvider/Settings");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24, "BeatSaber.GraphQL", "GraphQLClientProvider/<InitializationTask>d__24");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23, "BeatSaber.GraphQL", "GraphQLClientProvider/<InitializeAsync>d__23");
