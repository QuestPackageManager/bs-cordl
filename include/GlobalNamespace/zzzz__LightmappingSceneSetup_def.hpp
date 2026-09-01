#pragma once
// IWYU pragma private; include "GlobalNamespace\LightmappingSceneSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(LightmappingSceneSetup)
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmappingSceneSetup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightmappingSceneSetup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightmappingSceneSetup*, "", "LightmappingSceneSetup");
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightmappingSceneSetup
class CORDL_TYPE LightmappingSceneSetup : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _colorScheme, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__colorScheme, put = __cordl_internal_set__colorScheme)) ::UnityW<::GlobalNamespace::ColorSchemeSO> _colorScheme;

  /// @brief Field _gameplayCoreSceneSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayCoreSceneSetupData,
                      put = __cordl_internal_set__gameplayCoreSceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* _gameplayCoreSceneSetupData;

  __declspec(property(get = get_colorScheme, put = set_colorScheme)) ::UnityW<::GlobalNamespace::ColorSchemeSO> colorScheme;

  /// @brief Method InstallBindings, addr 0x590be40, size 0xf98, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::LightmappingSceneSetup* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& __cordl_internal_get__colorScheme() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& __cordl_internal_get__colorScheme();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& __cordl_internal_get__gameplayCoreSceneSetupData() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__gameplayCoreSceneSetupData();

  constexpr void __cordl_internal_set__colorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO> value);

  constexpr void __cordl_internal_set__gameplayCoreSceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  /// @brief Method .ctor, addr 0x590cdd8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colorScheme, addr 0x590be30, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ColorSchemeSO> get_colorScheme();

  /// @brief Method set_colorScheme, addr 0x590be38, size 0x8, virtual false, abstract: false, final false
  inline void set_colorScheme(::GlobalNamespace::ColorSchemeSO* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmappingSceneSetup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmappingSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmappingSceneSetup(LightmappingSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmappingSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmappingSceneSetup(LightmappingSceneSetup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6717 };

  /// @brief Field _colorScheme, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSchemeSO> ____colorScheme;

  /// @brief Field _gameplayCoreSceneSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____gameplayCoreSceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightmappingSceneSetup, ____colorScheme) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmappingSceneSetup, ____gameplayCoreSceneSetupData) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightmappingSceneSetup) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
