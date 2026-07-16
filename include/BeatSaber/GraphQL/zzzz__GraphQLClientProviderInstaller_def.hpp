#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/GraphQLClientProviderInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Installer_2_def.hpp"
CORDL_MODULE_EXPORT(GraphQLClientProviderInstaller)
namespace BeatSaber::GraphQL {
class GraphQLClientProvider_Settings;
}
// Forward declare root types
namespace BeatSaber::GraphQL {
class GraphQLClientProviderInstaller;
}
// Write type traits
MARK_REF_T(::BeatSaber::GraphQL::GraphQLClientProviderInstaller*);
DEFINE_IL2CPP_CLASS(::BeatSaber::GraphQL::GraphQLClientProviderInstaller*, "BeatSaber.GraphQL", "GraphQLClientProviderInstaller");
// Dependencies Zenject.Installer`2<TParam1, TDerived>
namespace BeatSaber::GraphQL {
// Is value type: false
// CS Name: BeatSaber.GraphQL.GraphQLClientProviderInstaller
class CORDL_TYPE GraphQLClientProviderInstaller : public ::Zenject::Installer_2<::BeatSaber::GraphQL::GraphQLClientProvider_Settings*, ::BeatSaber::GraphQL::GraphQLClientProviderInstaller*> {
public:
  // Declarations
  /// @brief Field _graphQlClientProviderSettings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__graphQlClientProviderSettings,
                      put = __cordl_internal_set__graphQlClientProviderSettings)) ::BeatSaber::GraphQL::GraphQLClientProvider_Settings* _graphQlClientProviderSettings;

  /// @brief Method InstallBindings, addr 0x3295da4, size 0xf0, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::BeatSaber::GraphQL::GraphQLClientProviderInstaller* New_ctor(::BeatSaber::GraphQL::GraphQLClientProvider_Settings* graphQlClientProviderSettings);

  constexpr ::BeatSaber::GraphQL::GraphQLClientProvider_Settings* const& __cordl_internal_get__graphQlClientProviderSettings() const;

  constexpr ::BeatSaber::GraphQL::GraphQLClientProvider_Settings*& __cordl_internal_get__graphQlClientProviderSettings();

  constexpr void __cordl_internal_set__graphQlClientProviderSettings(::BeatSaber::GraphQL::GraphQLClientProvider_Settings* value);

  /// @brief Method .ctor, addr 0x3295d54, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::GraphQL::GraphQLClientProvider_Settings* graphQlClientProviderSettings);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClientProviderInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClientProviderInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLClientProviderInstaller(GraphQLClientProviderInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClientProviderInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLClientProviderInstaller(GraphQLClientProviderInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22615 };

  /// @brief Field _graphQlClientProviderSettings, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::GraphQL::GraphQLClientProvider_Settings* ____graphQlClientProviderSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GraphQL::GraphQLClientProviderInstaller, ____graphQlClientProviderSettings) == 0x18, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::GraphQL::GraphQLClientProviderInstaller) == 0x20, "Size mismatch!");

} // namespace BeatSaber::GraphQL
