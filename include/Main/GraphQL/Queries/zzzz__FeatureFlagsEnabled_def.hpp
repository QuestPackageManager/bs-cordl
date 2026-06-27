#pragma once
// IWYU pragma private; include "Main/GraphQL/Queries/FeatureFlagsEnabled.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLQueryOperation_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FeatureFlagsEnabled)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Main::GraphQL::Queries {
class FeatureFlagsEnabled;
}
// Write type traits
MARK_REF_PTR_T(::Main::GraphQL::Queries::FeatureFlagsEnabled);
// Dependencies OculusStudios.GraphQL.Client.GraphQLQueryOperation
namespace Main::GraphQL::Queries {
// Is value type: false
// CS Name: Main.GraphQL.Queries.FeatureFlagsEnabled
class CORDL_TYPE FeatureFlagsEnabled : public ::OculusStudios::GraphQL::Client::GraphQLQueryOperation {
public:
// Declarations
 __declspec(property(get=get_Features, put=set_Features)) ::System::Collections::Generic::List_1<::StringW>*  Features;

/// @brief Method GetPersistedQueryID, addr 0x31f5b30, size 0x14, virtual true, abstract: false, final false
inline uint64_t GetPersistedQueryID() ;

/// @brief Method GetVariableNames, addr 0x31f58f4, size 0xfc, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetVariableNames() ;

static inline ::Main::GraphQL::Queries::FeatureFlagsEnabled* New_ctor() ;

/// @brief Method .ctor, addr 0x31f5b44, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Features, addr 0x31f5a70, size 0xc0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_Features() ;

/// @brief Method set_Features, addr 0x31f59f0, size 0x80, virtual false, abstract: false, final false
inline void set_Features(::System::Collections::Generic::List_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureFlagsEnabled() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureFlagsEnabled", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureFlagsEnabled(FeatureFlagsEnabled && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureFlagsEnabled", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureFlagsEnabled(FeatureFlagsEnabled const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22634};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Main::GraphQL::Queries::FeatureFlagsEnabled, 0x18>, "Size mismatch!");

} // namespace end def Main::GraphQL::Queries
NEED_NO_BOX(::Main::GraphQL::Queries::FeatureFlagsEnabled);
DEFINE_IL2CPP_ARG_TYPE(::Main::GraphQL::Queries::FeatureFlagsEnabled*, "Main.GraphQL.Queries", "FeatureFlagsEnabled");
