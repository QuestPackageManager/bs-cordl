#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/GraphQLClientProviderInstallerSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GraphQLClientProviderInstallerSO)
// Forward declare root types
namespace BeatSaber::GraphQL {
class GraphQLClientProviderInstallerSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO);
// Dependencies Zenject.ScriptableObjectInstaller
namespace BeatSaber::GraphQL {
// Is value type: false
// CS Name: BeatSaber.GraphQL.GraphQLClientProviderInstallerSO
class CORDL_TYPE GraphQLClientProviderInstallerSO : public ::Zenject::ScriptableObjectInstaller {
public:
// Declarations
/// @brief Field _autoInitialize, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoInitialize, put=__cordl_internal_set__autoInitialize)) bool  _autoInitialize;

/// @brief Field _devServerPath, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__devServerPath, put=__cordl_internal_set__devServerPath)) ::StringW  _devServerPath;

/// @brief Field _endpointPattern, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__endpointPattern, put=__cordl_internal_set__endpointPattern)) ::StringW  _endpointPattern;

 __declspec(property(get=get_devServerPath)) ::StringW  devServerPath;

/// @brief Method InstallBindings, addr 0x3200d7c, size 0xc0, virtual true, abstract: false, final false
inline void InstallBindings() ;

static inline ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO* New_ctor() ;

constexpr bool const& __cordl_internal_get__autoInitialize() const;

constexpr bool& __cordl_internal_get__autoInitialize() ;

constexpr ::StringW const& __cordl_internal_get__devServerPath() const;

constexpr ::StringW& __cordl_internal_get__devServerPath() ;

constexpr ::StringW const& __cordl_internal_get__endpointPattern() const;

constexpr ::StringW& __cordl_internal_get__endpointPattern() ;

constexpr void __cordl_internal_set__autoInitialize(bool  value) ;

constexpr void __cordl_internal_set__devServerPath(::StringW  value) ;

constexpr void __cordl_internal_set__endpointPattern(::StringW  value) ;

/// @brief Method .ctor, addr 0x3200e3c, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_devServerPath, addr 0x3200d74, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_devServerPath() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphQLClientProviderInstallerSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphQLClientProviderInstallerSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphQLClientProviderInstallerSO(GraphQLClientProviderInstallerSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphQLClientProviderInstallerSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphQLClientProviderInstallerSO(GraphQLClientProviderInstallerSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22418};

/// @brief Field _endpointPattern, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____endpointPattern;

/// @brief Field _devServerPath, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____devServerPath;

/// @brief Field _autoInitialize, offset: 0x30, size: 0x1, def value: None
 bool  ____autoInitialize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO, ____endpointPattern) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO, ____devServerPath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO, ____autoInitialize) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO, 0x38>, "Size mismatch!");

} // namespace end def BeatSaber::GraphQL
NEED_NO_BOX(::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*, "BeatSaber.GraphQL", "GraphQLClientProviderInstallerSO");
