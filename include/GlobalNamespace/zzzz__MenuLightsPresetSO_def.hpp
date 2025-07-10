#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuLightsPresetSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(MenuLightsPresetSO)
namespace GlobalNamespace {
class LightIdColorPair;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuLightsPresetSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuLightsPresetSO
class CORDL_TYPE MenuLightsPresetSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _lightIdColorPairs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightIdColorPairs,
                      put = __cordl_internal_set__lightIdColorPairs)) ::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*>
      _lightIdColorPairs;

  __declspec(property(get = get_lightIdColorPairs, put = set_lightIdColorPairs)) ::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*> lightIdColorPairs;

  static inline ::GlobalNamespace::MenuLightsPresetSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*> const& __cordl_internal_get__lightIdColorPairs() const;

  constexpr ::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*>& __cordl_internal_get__lightIdColorPairs();

  constexpr void __cordl_internal_set__lightIdColorPairs(::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*> value);

  /// @brief Method .ctor, addr 0x3c2892c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lightIdColorPairs, addr 0x3c2891c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*> get_lightIdColorPairs();

  /// @brief Method set_lightIdColorPairs, addr 0x3c28924, size 0x8, virtual false, abstract: false, final false
  inline void set_lightIdColorPairs(::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19244 };

  /// @brief Field _lightIdColorPairs, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*> ____lightIdColorPairs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuLightsPresetSO, ____lightIdColorPairs) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuLightsPresetSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuLightsPresetSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuLightsPresetSO*, "", "MenuLightsPresetSO");
