#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassGraphicsSettingsPresetsSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(BloomPrePassGraphicsSettingsPresetsSO)
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
namespace GlobalNamespace {
class BloomPrePassGraphicsSettingsPresetsSO_Preset;
}
namespace GlobalNamespace {
class NamedPreset;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class BloomPrePassGraphicsSettingsPresetsSO_Preset;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*);
MARK_REF_T(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*, "", "BloomPrePassGraphicsSettingsPresetsSO");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*, "", "BloomPrePassGraphicsSettingsPresetsSO/Preset");
// Dependencies NamedPreset
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassGraphicsSettingsPresetsSO/Preset
class CORDL_TYPE BloomPrePassGraphicsSettingsPresetsSO_Preset : public ::GlobalNamespace::NamedPreset {
public:
  // Declarations
  /// @brief Field bloomPrePassEffect, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_bloomPrePassEffect, put = __cordl_internal_set_bloomPrePassEffect)) ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> bloomPrePassEffect;

  static inline ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& __cordl_internal_get_bloomPrePassEffect() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& __cordl_internal_get_bloomPrePassEffect();

  constexpr void __cordl_internal_set_bloomPrePassEffect(::UnityW<::GlobalNamespace::BloomPrePassEffectSO> value);

  /// @brief Method .ctor, addr 0x372d00c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassGraphicsSettingsPresetsSO_Preset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassGraphicsSettingsPresetsSO_Preset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassGraphicsSettingsPresetsSO_Preset(BloomPrePassGraphicsSettingsPresetsSO_Preset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassGraphicsSettingsPresetsSO_Preset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassGraphicsSettingsPresetsSO_Preset(BloomPrePassGraphicsSettingsPresetsSO_Preset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15019 };

  /// @brief Field bloomPrePassEffect, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> ___bloomPrePassEffect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset, ___bloomPrePassEffect) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BloomPrePassGraphicsSettingsPresetsSO::Preset, NamedPresetsSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassGraphicsSettingsPresetsSO
class CORDL_TYPE BloomPrePassGraphicsSettingsPresetsSO : public ::GlobalNamespace::NamedPresetsSO {
public:
  // Declarations
  using Preset = ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset;

  /// @brief Field _presets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__presets, put = __cordl_internal_set__presets)) ::ArrayW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*> _presets;

  __declspec(property(get = get_namedPresets)) ::ArrayW<::GlobalNamespace::NamedPreset*> namedPresets;

  __declspec(property(get = get_presets)) ::ArrayW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*> presets;

  static inline ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*> const& __cordl_internal_get__presets() const;

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*>& __cordl_internal_get__presets();

  constexpr void __cordl_internal_set__presets(::ArrayW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*> value);

  /// @brief Method .ctor, addr 0x372cffc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_namedPresets, addr 0x372cff4, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::NamedPreset*> get_namedPresets();

  /// @brief Method get_presets, addr 0x372cfec, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*> get_presets();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassGraphicsSettingsPresetsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassGraphicsSettingsPresetsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassGraphicsSettingsPresetsSO(BloomPrePassGraphicsSettingsPresetsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassGraphicsSettingsPresetsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassGraphicsSettingsPresetsSO(BloomPrePassGraphicsSettingsPresetsSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15020 };

  /// @brief Field _presets, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*> ____presets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO, ____presets) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
