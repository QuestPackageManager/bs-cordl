#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectGraphicsSettingsPresetsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
CORDL_MODULE_EXPORT(MainEffectGraphicsSettingsPresetsSO)
namespace GlobalNamespace {
class MainEffectGraphicsSettingsPresetsSO_Preset;
}
namespace GlobalNamespace {
class MainEffectSO;
}
namespace GlobalNamespace {
class NamedPreset;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class MainEffectGraphicsSettingsPresetsSO_Preset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO);
MARK_REF_PTR_T(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset);
// Dependencies NamedPreset
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectGraphicsSettingsPresetsSO/Preset
class CORDL_TYPE MainEffectGraphicsSettingsPresetsSO_Preset : public ::GlobalNamespace::NamedPreset {
public:
  // Declarations
  /// @brief Field mainEffect, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mainEffect, put = __cordl_internal_set_mainEffect)) ::UnityW<::GlobalNamespace::MainEffectSO> mainEffect;

  static inline ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO> const& __cordl_internal_get_mainEffect() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO>& __cordl_internal_get_mainEffect();

  constexpr void __cordl_internal_set_mainEffect(::UnityW<::GlobalNamespace::MainEffectSO> value);

  /// @brief Method .ctor, addr 0x26d656c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectGraphicsSettingsPresetsSO_Preset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectGraphicsSettingsPresetsSO_Preset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectGraphicsSettingsPresetsSO_Preset(MainEffectGraphicsSettingsPresetsSO_Preset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectGraphicsSettingsPresetsSO_Preset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectGraphicsSettingsPresetsSO_Preset(MainEffectGraphicsSettingsPresetsSO_Preset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13033 };

  /// @brief Field mainEffect, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectSO> ___mainEffect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset, ___mainEffect) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies NamedPresetsSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectGraphicsSettingsPresetsSO
class CORDL_TYPE MainEffectGraphicsSettingsPresetsSO : public ::GlobalNamespace::NamedPresetsSO {
public:
  // Declarations
  using Preset = ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset;

  /// @brief Field _presets, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__presets,
      put = __cordl_internal_set__presets)) ::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*, ::Array<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*>*>
      _presets;

  __declspec(property(get = get_namedPresets)) ::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> namedPresets;

  __declspec(property(get = get_presets)) ::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*, ::Array<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*>*> presets;

  static inline ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*, ::Array<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*>*> const&
  __cordl_internal_get__presets() const;

  constexpr ::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*, ::Array<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*>*>& __cordl_internal_get__presets();

  constexpr void
  __cordl_internal_set__presets(::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*, ::Array<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*>*> value);

  /// @brief Method .ctor, addr 0x26d6564, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_namedPresets, addr 0x26d655c, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> get_namedPresets();

  /// @brief Method get_presets, addr 0x26d6554, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*, ::Array<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*>*> get_presets();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectGraphicsSettingsPresetsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectGraphicsSettingsPresetsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectGraphicsSettingsPresetsSO(MainEffectGraphicsSettingsPresetsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectGraphicsSettingsPresetsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectGraphicsSettingsPresetsSO(MainEffectGraphicsSettingsPresetsSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13034 };

  /// @brief Field _presets, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*, ::Array<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*>*> ____presets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO, ____presets) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*, "", "MainEffectGraphicsSettingsPresetsSO");
NEED_NO_BOX(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*, "", "MainEffectGraphicsSettingsPresetsSO/Preset");
