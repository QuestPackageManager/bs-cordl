#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/GraphQLDummyClientProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GraphQLDummyClientProvider)
namespace BeatSaber::GraphQL {
struct BSClientProviderInitializationState;
}
namespace BeatSaber::GraphQL {
class DummyGraphQLClient;
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
class IDisposable;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace BeatSaber::GraphQL {
class GraphQLDummyClientProvider;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GraphQL::GraphQLDummyClientProvider);
// Dependencies System.Object
namespace BeatSaber::GraphQL {
// Is value type: false
// CS Name: BeatSaber.GraphQL.GraphQLDummyClientProvider
class CORDL_TYPE GraphQLDummyClientProvider : public ::System::Object {
public:
// Declarations
/// @brief Field _graphQLClient, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__graphQLClient, put=__cordl_internal_set__graphQLClient)) ::BeatSaber::GraphQL::DummyGraphQLClient*  _graphQLClient;

/// @brief Field globalRequestFailureEvent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalRequestFailureEvent, put=__cordl_internal_set_globalRequestFailureEvent)) ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  globalRequestFailureEvent;

/// @brief Field globalRequestSucceededEvent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalRequestSucceededEvent, put=__cordl_internal_set_globalRequestSucceededEvent)) ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  globalRequestSucceededEvent;

 __declspec(property(get=get_graphQLClient)) ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*  graphQLClient;

/// @brief Field initializationDidFinishEvent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_initializationDidFinishEvent, put=__cordl_internal_set_initializationDidFinishEvent)) ::System::Action*  initializationDidFinishEvent;

 __declspec(property(get=get_initializationState)) ::BeatSaber::GraphQL::BSClientProviderInitializationState  initializationState;

/// @brief Convert operator to "::BeatSaber::GraphQL::IGraphQLClientProvider"
constexpr operator  ::BeatSaber::GraphQL::IGraphQLClientProvider*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::Zenject::IInitializable"
constexpr operator  ::Zenject::IInitializable*() noexcept;

/// @brief Method BeatSaber.GraphQL.IGraphQLClientProvider.InitializeAsync, addr 0x32014bc, size 0x170, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* BeatSaber_GraphQL_IGraphQLClientProvider_InitializeAsync(::System::Threading::CancellationToken  ctx) ;

static inline ::BeatSaber::GraphQL::GraphQLDummyClientProvider* New_ctor() ;

/// @brief Method System.IDisposable.Dispose, addr 0x3201630, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method Zenject.IInitializable.Initialize, addr 0x320162c, size 0x4, virtual true, abstract: false, final true
inline void Zenject_IInitializable_Initialize() ;

constexpr ::BeatSaber::GraphQL::DummyGraphQLClient* const& __cordl_internal_get__graphQLClient() const;

constexpr ::BeatSaber::GraphQL::DummyGraphQLClient*& __cordl_internal_get__graphQLClient() ;

constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& __cordl_internal_get_globalRequestFailureEvent() const;

constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& __cordl_internal_get_globalRequestFailureEvent() ;

constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& __cordl_internal_get_globalRequestSucceededEvent() const;

constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& __cordl_internal_get_globalRequestSucceededEvent() ;

constexpr ::System::Action* const& __cordl_internal_get_initializationDidFinishEvent() const;

constexpr ::System::Action*& __cordl_internal_get_initializationDidFinishEvent() ;

constexpr void __cordl_internal_set__graphQLClient(::BeatSaber::GraphQL::DummyGraphQLClient*  value) ;

constexpr void __cordl_internal_set_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

constexpr void __cordl_internal_set_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

constexpr void __cordl_internal_set_initializationDidFinishEvent(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x3201634, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_globalRequestFailureEvent, addr 0x320133c, size 0xc0, virtual true, abstract: false, final true
inline void add_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

/// @brief Method add_globalRequestSucceededEvent, addr 0x32011bc, size 0xc0, virtual true, abstract: false, final true
inline void add_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

/// @brief Method add_initializationDidFinishEvent, addr 0x3201064, size 0xac, virtual true, abstract: false, final true
inline void add_initializationDidFinishEvent(::System::Action*  value) ;

/// @brief Method get_graphQLClient, addr 0x320105c, size 0x8, virtual true, abstract: false, final true
inline ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* get_graphQLClient() ;

/// @brief Method get_initializationState, addr 0x3201054, size 0x8, virtual true, abstract: false, final true
inline ::BeatSaber::GraphQL::BSClientProviderInitializationState get_initializationState() ;

/// @brief Convert to "::BeatSaber::GraphQL::IGraphQLClientProvider"
constexpr ::BeatSaber::GraphQL::IGraphQLClientProvider* i___BeatSaber__GraphQL__IGraphQLClientProvider() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

/// @brief Method remove_globalRequestFailureEvent, addr 0x32013fc, size 0xc0, virtual true, abstract: false, final true
inline void remove_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

/// @brief Method remove_globalRequestSucceededEvent, addr 0x320127c, size 0xc0, virtual true, abstract: false, final true
inline void remove_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

/// @brief Method remove_initializationDidFinishEvent, addr 0x3201110, size 0xac, virtual true, abstract: false, final true
inline void remove_initializationDidFinishEvent(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphQLDummyClientProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphQLDummyClientProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphQLDummyClientProvider(GraphQLDummyClientProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphQLDummyClientProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphQLDummyClientProvider(GraphQLDummyClientProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22420};

/// @brief Field initializationDidFinishEvent, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___initializationDidFinishEvent;

/// @brief Field globalRequestSucceededEvent, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  ___globalRequestSucceededEvent;

/// @brief Field globalRequestFailureEvent, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  ___globalRequestFailureEvent;

/// @brief Field _graphQLClient, offset: 0x28, size: 0x8, def value: None
 ::BeatSaber::GraphQL::DummyGraphQLClient*  ____graphQLClient;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GraphQL::GraphQLDummyClientProvider, ___initializationDidFinishEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLDummyClientProvider, ___globalRequestSucceededEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLDummyClientProvider, ___globalRequestFailureEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLDummyClientProvider, ____graphQLClient) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GraphQL::GraphQLDummyClientProvider, 0x30>, "Size mismatch!");

} // namespace end def BeatSaber::GraphQL
NEED_NO_BOX(::BeatSaber::GraphQL::GraphQLDummyClientProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GraphQL::GraphQLDummyClientProvider*, "BeatSaber.GraphQL", "GraphQLDummyClientProvider");
