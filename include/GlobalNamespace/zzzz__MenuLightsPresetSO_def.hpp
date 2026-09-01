#pragma once
// IWYU pragma private; include "GlobalNamespace\MenuLightsPresetSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightIdColorPair_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MenuLightsPresetSO)
namespace GlobalNamespace {
class LightIdColorPair;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MenuLightsPresetSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenuLightsPresetSO*, "", "MenuLightsPresetSO");
// Dependencies LightIdColorPair, PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuLightsPresetSO
class CORDL_TYPE MenuLightsPresetSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _lightIdColorPairs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightIdColorPairs, put = __cordl_internal_set__lightIdColorPairs)) ::ArrayW<::GlobalNamespace::LightIdColorPair*> _lightIdColorPairs;

  __declspec(property(get = get_lightIdColorPairs, put = set_lightIdColorPairs)) ::ArrayW<::GlobalNamespace::LightIdColorPair*> lightIdColorPairs;

  static inline ::GlobalNamespace::MenuLightsPresetSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::LightIdColorPair*> const& __cordl_internal_get__lightIdColorPairs() const;

  constexpr ::ArrayW<::GlobalNamespace::LightIdColorPair*>& __cordl_internal_get__lightIdColorPairs();

  constexpr void __cordl_internal_set__lightIdColorPairs(::ArrayW<::GlobalNamespace::LightIdColorPair*> value);

  /// @brief Method .ctor, addr 0x5a30954, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lightIdColorPairs, addr 0x5a30944, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::LightIdColorPair*> get_lightIdColorPairs();

  /// @brief Method set_lightIdColorPairs, addr 0x5a3094c, size 0x8, virtual false, abstract: false, final false
  inline void set_lightIdColorPairs(::ArrayW<::GlobalNamespace::LightIdColorPair*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuLightsPresetSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuLightsPresetSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuLightsPresetSO(MenuLightsPresetSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuLightsPresetSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuLightsPresetSO(MenuLightsPresetSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23706 };

  /// @brief Field _lightIdColorPairs, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LightIdColorPair*> ____lightIdColorPairs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuLightsPresetSO, ____lightIdColorPairs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenuLightsPresetSO) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
