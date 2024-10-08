#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassGraphicsSettingsPresetsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BloomPrePassGraphicsSettingsPresetsSO)
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
namespace GlobalNamespace {
class NamedPreset;
}
namespace GlobalNamespace {
class __BloomPrePassGraphicsSettingsPresetsSO__Preset;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class __BloomPrePassGraphicsSettingsPresetsSO__Preset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO);
MARK_REF_PTR_T(::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset);
// Type: ::Preset
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassGraphicsSettingsPresetsSO::Preset*
class CORDL_TYPE __BloomPrePassGraphicsSettingsPresetsSO__Preset : public ::GlobalNamespace::NamedPreset {
public:
  // Declarations
  /// @brief Field bloomPrePassEffect, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_bloomPrePassEffect, put = __cordl_internal_set_bloomPrePassEffect)) ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> bloomPrePassEffect;

  static inline ::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& __cordl_internal_get_bloomPrePassEffect() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& __cordl_internal_get_bloomPrePassEffect();

  constexpr void __cordl_internal_set_bloomPrePassEffect(::UnityW<::GlobalNamespace::BloomPrePassEffectSO> value);

  /// @brief Method .ctor, addr 0x2693254, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomPrePassGraphicsSettingsPresetsSO__Preset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassGraphicsSettingsPresetsSO__Preset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BloomPrePassGraphicsSettingsPresetsSO__Preset(__BloomPrePassGraphicsSettingsPresetsSO__Preset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassGraphicsSettingsPresetsSO__Preset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BloomPrePassGraphicsSettingsPresetsSO__Preset(__BloomPrePassGraphicsSettingsPresetsSO__Preset const&) = delete;

  /// @brief Field bloomPrePassEffect, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> ___bloomPrePassEffect;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12982 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset, ___bloomPrePassEffect) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BloomPrePassGraphicsSettingsPresetsSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassGraphicsSettingsPresetsSO*
class CORDL_TYPE BloomPrePassGraphicsSettingsPresetsSO : public ::GlobalNamespace::NamedPresetsSO {
public:
  // Declarations
  using Preset = ::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset;

  /// @brief Field _presets, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__presets,
      put = __cordl_internal_set__presets)) ::ArrayW<::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset*>*>
      _presets;

  __declspec(property(get = get_namedPresets)) ::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> namedPresets;

  __declspec(property(get = get_presets)) ::ArrayW<::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset*>*>
      presets;

  static inline ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset*>*> const&
  __cordl_internal_get__presets() const;

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset*>*>&
  __cordl_internal_get__presets();

  constexpr void
  __cordl_internal_set__presets(::ArrayW<::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset*>*> value);

  /// @brief Method .ctor, addr 0x2693244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_namedPresets, addr 0x269323c, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> get_namedPresets();

  /// @brief Method get_presets, addr 0x2693234, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset*>*> get_presets();

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

  /// @brief Field _presets, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset*>*> ____presets;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12983 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO, ____presets) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*, "", "BloomPrePassGraphicsSettingsPresetsSO");
NEED_NO_BOX(::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassGraphicsSettingsPresetsSO__Preset*, "", "BloomPrePassGraphicsSettingsPresetsSO/Preset");
