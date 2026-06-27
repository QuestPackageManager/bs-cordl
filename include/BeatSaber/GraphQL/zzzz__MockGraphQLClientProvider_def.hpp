#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/MockGraphQLClientProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/GraphQL/zzzz__BSClientProviderInitializationState_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockGraphQLClientProvider)
namespace BeatSaber::GraphQL {
struct BSClientProviderInitializationState;
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
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace BeatSaber::GraphQL {
class MockGraphQLClientProvider;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GraphQL::MockGraphQLClientProvider);
// Dependencies BeatSaber.GraphQL.BSClientProviderInitializationState, System.Object
namespace BeatSaber::GraphQL {
// Is value type: false
// CS Name: BeatSaber.GraphQL.MockGraphQLClientProvider
class CORDL_TYPE MockGraphQLClientProvider : public ::System::Object {
public:
// Declarations
/// @brief Field InitializeState, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_InitializeState, put=__cordl_internal_set_InitializeState)) ::BeatSaber::GraphQL::BSClientProviderInitializationState  InitializeState;

/// @brief Field InitializeTaskSource, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_InitializeTaskSource, put=__cordl_internal_set_InitializeTaskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  InitializeTaskSource;

/// @brief Field ThrowOnInitialize, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ThrowOnInitialize, put=__cordl_internal_set_ThrowOnInitialize)) ::System::Exception*  ThrowOnInitialize;

/// @brief Field <graphQLClient>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__graphQLClient_k__BackingField, put=__cordl_internal_set__graphQLClient_k__BackingField)) ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*  _graphQLClient_k__BackingField;

/// @brief Field globalRequestFailureEvent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalRequestFailureEvent, put=__cordl_internal_set_globalRequestFailureEvent)) ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  globalRequestFailureEvent;

/// @brief Field globalRequestSucceededEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalRequestSucceededEvent, put=__cordl_internal_set_globalRequestSucceededEvent)) ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  globalRequestSucceededEvent;

 __declspec(property(get=get_graphQLClient)) ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*  graphQLClient;

/// @brief Field initializationDidFinishEvent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_initializationDidFinishEvent, put=__cordl_internal_set_initializationDidFinishEvent)) ::System::Action*  initializationDidFinishEvent;

 __declspec(property(get=get_initializationState)) ::BeatSaber::GraphQL::BSClientProviderInitializationState  initializationState;

/// @brief Convert operator to "::BeatSaber::GraphQL::IGraphQLClientProvider"
constexpr operator  ::BeatSaber::GraphQL::IGraphQLClientProvider*() noexcept;

/// @brief Method InitializeAsync, addr 0x3201af4, size 0x164, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* InitializeAsync(::System::Threading::CancellationToken  ctx) ;

static inline ::BeatSaber::GraphQL::MockGraphQLClientProvider* New_ctor(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*  graphQLClient) ;

/// @brief Method <InitializeAsync>b__18_0, addr 0x3201c58, size 0xc, virtual false, abstract: false, final false
inline void _InitializeAsync_b__18_0(::System::Threading::Tasks::Task_1<bool>*  _) ;

constexpr ::BeatSaber::GraphQL::BSClientProviderInitializationState const& __cordl_internal_get_InitializeState() const;

constexpr ::BeatSaber::GraphQL::BSClientProviderInitializationState& __cordl_internal_get_InitializeState() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_InitializeTaskSource() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_InitializeTaskSource() ;

constexpr ::System::Exception* const& __cordl_internal_get_ThrowOnInitialize() const;

constexpr ::System::Exception*& __cordl_internal_get_ThrowOnInitialize() ;

constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* const& __cordl_internal_get__graphQLClient_k__BackingField() const;

constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*& __cordl_internal_get__graphQLClient_k__BackingField() ;

constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& __cordl_internal_get_globalRequestFailureEvent() const;

constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& __cordl_internal_get_globalRequestFailureEvent() ;

constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& __cordl_internal_get_globalRequestSucceededEvent() const;

constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& __cordl_internal_get_globalRequestSucceededEvent() ;

constexpr ::System::Action* const& __cordl_internal_get_initializationDidFinishEvent() const;

constexpr ::System::Action*& __cordl_internal_get_initializationDidFinishEvent() ;

constexpr void __cordl_internal_set_InitializeState(::BeatSaber::GraphQL::BSClientProviderInitializationState  value) ;

constexpr void __cordl_internal_set_InitializeTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set_ThrowOnInitialize(::System::Exception*  value) ;

constexpr void __cordl_internal_set__graphQLClient_k__BackingField(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*  value) ;

constexpr void __cordl_internal_set_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

constexpr void __cordl_internal_set_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

constexpr void __cordl_internal_set_initializationDidFinishEvent(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x3201aec, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*  graphQLClient) ;

/// @brief Method add_globalRequestFailureEvent, addr 0x320196c, size 0xc0, virtual true, abstract: false, final true
inline void add_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

/// @brief Method add_globalRequestSucceededEvent, addr 0x32017ec, size 0xc0, virtual true, abstract: false, final true
inline void add_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

/// @brief Method add_initializationDidFinishEvent, addr 0x3201694, size 0xac, virtual true, abstract: false, final true
inline void add_initializationDidFinishEvent(::System::Action*  value) ;

/// @brief Method get_graphQLClient, addr 0x320168c, size 0x8, virtual true, abstract: false, final true
inline ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* get_graphQLClient() ;

/// @brief Method get_initializationState, addr 0x3201684, size 0x8, virtual true, abstract: false, final true
inline ::BeatSaber::GraphQL::BSClientProviderInitializationState get_initializationState() ;

/// @brief Convert to "::BeatSaber::GraphQL::IGraphQLClientProvider"
constexpr ::BeatSaber::GraphQL::IGraphQLClientProvider* i___BeatSaber__GraphQL__IGraphQLClientProvider() noexcept;

/// @brief Method remove_globalRequestFailureEvent, addr 0x3201a2c, size 0xc0, virtual true, abstract: false, final true
inline void remove_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

/// @brief Method remove_globalRequestSucceededEvent, addr 0x32018ac, size 0xc0, virtual true, abstract: false, final true
inline void remove_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

/// @brief Method remove_initializationDidFinishEvent, addr 0x3201740, size 0xac, virtual true, abstract: false, final true
inline void remove_initializationDidFinishEvent(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockGraphQLClientProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockGraphQLClientProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockGraphQLClientProvider(MockGraphQLClientProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockGraphQLClientProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockGraphQLClientProvider(MockGraphQLClientProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22425};

/// @brief Field InitializeState, offset: 0x10, size: 0x4, def value: None
 ::BeatSaber::GraphQL::BSClientProviderInitializationState  ___InitializeState;

/// @brief Field InitializeTaskSource, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___InitializeTaskSource;

/// @brief Field ThrowOnInitialize, offset: 0x20, size: 0x8, def value: None
 ::System::Exception*  ___ThrowOnInitialize;

/// @brief Field <graphQLClient>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*  ____graphQLClient_k__BackingField;

/// @brief Field initializationDidFinishEvent, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___initializationDidFinishEvent;

/// @brief Field globalRequestSucceededEvent, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  ___globalRequestSucceededEvent;

/// @brief Field globalRequestFailureEvent, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  ___globalRequestFailureEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GraphQL::MockGraphQLClientProvider, ___InitializeState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::MockGraphQLClientProvider, ___InitializeTaskSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::MockGraphQLClientProvider, ___ThrowOnInitialize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::MockGraphQLClientProvider, ____graphQLClient_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::MockGraphQLClientProvider, ___initializationDidFinishEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::MockGraphQLClientProvider, ___globalRequestSucceededEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::MockGraphQLClientProvider, ___globalRequestFailureEvent) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GraphQL::MockGraphQLClientProvider, 0x48>, "Size mismatch!");

} // namespace end def BeatSaber::GraphQL
NEED_NO_BOX(::BeatSaber::GraphQL::MockGraphQLClientProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GraphQL::MockGraphQLClientProvider*, "BeatSaber.GraphQL", "MockGraphQLClientProvider");
