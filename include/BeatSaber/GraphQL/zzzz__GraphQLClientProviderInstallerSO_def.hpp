#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/GraphQLClientProviderInstallerSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GraphQLClientProviderInstallerSO)
// Forward declare root types
namespace BeatSaber::GraphQL {
class GraphQLClientProviderInstallerSO;
}
// Write type traits
MARK_REF_T(::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*);
DEFINE_IL2CPP_CLASS(::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*, "BeatSaber.GraphQL", "GraphQLClientProviderInstallerSO");
// Dependencies Zenject.ScriptableObjectInstaller
namespace BeatSaber::GraphQL {
// Is value type: false
// CS Name: BeatSaber.GraphQL.GraphQLClientProviderInstallerSO
class CORDL_TYPE GraphQLClientProviderInstallerSO : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Field _autoInitialize, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__autoInitialize, put = __cordl_internal_set__autoInitialize)) bool _autoInitialize;

  /// @brief Field _endpoint, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__endpoint, put = __cordl_internal_set__endpoint)) ::StringW _endpoint;

  /// @brief Field _isDevServer, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isDevServer, put = __cordl_internal_set__isDevServer)) bool _isDevServer;

  /// @brief Method InstallBindings, addr 0x351da00, size 0xa4, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO* New_ctor();

  /// @brief Method SetEndpoint, addr 0x351d9f4, size 0xc, virtual false, abstract: false, final false
  inline void SetEndpoint(::StringW endpoint, bool isDevServer);

  constexpr bool const& __cordl_internal_get__autoInitialize() const;

  constexpr bool& __cordl_internal_get__autoInitialize();

  constexpr ::StringW const& __cordl_internal_get__endpoint() const;

  constexpr ::StringW& __cordl_internal_get__endpoint();

  constexpr bool const& __cordl_internal_get__isDevServer() const;

  constexpr bool& __cordl_internal_get__isDevServer();

  constexpr void __cordl_internal_set__autoInitialize(bool value);

  constexpr void __cordl_internal_set__endpoint(::StringW value);

  constexpr void __cordl_internal_set__isDevServer(bool value);

  /// @brief Method .ctor, addr 0x351daa4, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClientProviderInstallerSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClientProviderInstallerSO", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLClientProviderInstallerSO(GraphQLClientProviderInstallerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClientProviderInstallerSO", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLClientProviderInstallerSO(GraphQLClientProviderInstallerSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23428 };

  /// [SerializeField]
  /// @brief Field _autoInitialize, offset: 0x20, size: 0x1, def value: None
  bool ____autoInitialize;

  /// @brief Field _endpoint, offset: 0x28, size: 0x8, def value: None
  ::StringW ____endpoint;

  /// @brief Field _isDevServer, offset: 0x30, size: 0x1, def value: None
  bool ____isDevServer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO, ____autoInitialize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO, ____endpoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO, ____isDevServer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO) == 0x38, "Size mismatch!");

} // namespace BeatSaber::GraphQL
