#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/GraphQLClientEvents.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GraphQLClientEvents)
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLClientEvents;
}
namespace OculusStudios::GraphQL::ClientInterface {
class Request;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace BeatSaber::GraphQL {
class GraphQLClientEvents;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GraphQL::GraphQLClientEvents);
// Dependencies System.Object
namespace BeatSaber::GraphQL {
// Is value type: false
// CS Name: BeatSaber.GraphQL.GraphQLClientEvents
class CORDL_TYPE GraphQLClientEvents : public ::System::Object {
public:
// Declarations
/// @brief Field onRequestFailed, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRequestFailed, put=__cordl_internal_set_onRequestFailed)) ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  onRequestFailed;

/// @brief Field onRequestSucceeded, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRequestSucceeded, put=__cordl_internal_set_onRequestSucceeded)) ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  onRequestSucceeded;

/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents"
constexpr operator  ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*() noexcept;

/// @brief Method LogError, addr 0x31ff56c, size 0xac, virtual true, abstract: false, final true
inline void LogError(::System::Exception*  exception) ;

/// @brief Method LogError, addr 0x31ff4e0, size 0x8c, virtual true, abstract: false, final true
inline void LogError(::StringW  message) ;

/// @brief Method LogInfo, addr 0x31ff6a4, size 0xac, virtual true, abstract: false, final true
inline void LogInfo(::System::Exception*  exception) ;

/// @brief Method LogInfo, addr 0x31ff618, size 0x8c, virtual true, abstract: false, final true
inline void LogInfo(::StringW  message) ;

/// @brief Method LogVerbose, addr 0x31ff750, size 0x4, virtual true, abstract: false, final true
inline void LogVerbose(::StringW  message) ;

/// @brief Method LogWarning, addr 0x31ff754, size 0x8c, virtual true, abstract: false, final true
inline void LogWarning(::StringW  message) ;

static inline ::BeatSaber::GraphQL::GraphQLClientEvents* New_ctor(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  onRequestSucceeded, ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  onRequestFailed) ;

/// @brief Method OnRequestFailed, addr 0x31ff7fc, size 0x1c, virtual true, abstract: false, final true
inline void OnRequestFailed(::OculusStudios::GraphQL::ClientInterface::Request*  request) ;

/// @brief Method OnRequestSucceeded, addr 0x31ff7e0, size 0x1c, virtual true, abstract: false, final true
inline void OnRequestSucceeded(::OculusStudios::GraphQL::ClientInterface::Request*  request) ;

constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& __cordl_internal_get_onRequestFailed() const;

constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& __cordl_internal_get_onRequestFailed() ;

constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& __cordl_internal_get_onRequestSucceeded() const;

constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& __cordl_internal_get_onRequestSucceeded() ;

constexpr void __cordl_internal_set_onRequestFailed(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

constexpr void __cordl_internal_set_onRequestSucceeded(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

/// @brief Method .ctor, addr 0x31ff4d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  onRequestSucceeded, ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  onRequestFailed) ;

/// @brief Method add_onRequestFailed, addr 0x31ff358, size 0xc0, virtual false, abstract: false, final false
inline void add_onRequestFailed(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

/// @brief Method add_onRequestSucceeded, addr 0x31ff1d8, size 0xc0, virtual false, abstract: false, final false
inline void add_onRequestSucceeded(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents"
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* i___OculusStudios__GraphQL__ClientInterface__IGraphQLClientEvents() noexcept;

/// @brief Method remove_onRequestFailed, addr 0x31ff418, size 0xc0, virtual false, abstract: false, final false
inline void remove_onRequestFailed(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

/// @brief Method remove_onRequestSucceeded, addr 0x31ff298, size 0xc0, virtual false, abstract: false, final false
inline void remove_onRequestSucceeded(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphQLClientEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphQLClientEvents", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphQLClientEvents(GraphQLClientEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphQLClientEvents", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphQLClientEvents(GraphQLClientEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22413};

/// @brief Field kPrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  kPrefix{u"[GraphQLClient] "};

/// @brief Field onRequestSucceeded, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  ___onRequestSucceeded;

/// @brief Field onRequestFailed, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  ___onRequestFailed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientEvents, ___onRequestSucceeded) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientEvents, ___onRequestFailed) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GraphQL::GraphQLClientEvents, 0x20>, "Size mismatch!");

} // namespace end def BeatSaber::GraphQL
NEED_NO_BOX(::BeatSaber::GraphQL::GraphQLClientEvents);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GraphQL::GraphQLClientEvents*, "BeatSaber.GraphQL", "GraphQLClientEvents");
