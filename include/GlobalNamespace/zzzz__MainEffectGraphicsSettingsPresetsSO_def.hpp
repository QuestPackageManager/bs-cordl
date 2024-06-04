#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectGraphicsSettingsPresetsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MainEffectGraphicsSettingsPresetsSO)
namespace GlobalNamespace {
class MainEffectSO;
}
namespace GlobalNamespace {
class NamedPreset;
}
namespace GlobalNamespace {
class __MainEffectGraphicsSettingsPresetsSO__Preset;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class __MainEffectGraphicsSettingsPresetsSO__Preset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO);
MARK_REF_PTR_T(::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset);
// Type: ::Preset
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainEffectGraphicsSettingsPresetsSO::Preset*
class CORDL_TYPE __MainEffectGraphicsSettingsPresetsSO__Preset : public ::GlobalNamespace::NamedPreset {
public:
  // Declarations
  /// @brief Field mainEffect, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mainEffect, put = __cordl_internal_set_mainEffect))::UnityW<::GlobalNamespace::MainEffectSO> mainEffect;

  static inline ::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO> const& __cordl_internal_get_mainEffect() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO>& __cordl_internal_get_mainEffect();

  constexpr void __cordl_internal_set_mainEffect(::UnityW<::GlobalNamespace::MainEffectSO> value);

  /// @brief Method .ctor, addr 0x14cfe5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainEffectGraphicsSettingsPresetsSO__Preset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MainEffectGraphicsSettingsPresetsSO__Preset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MainEffectGraphicsSettingsPresetsSO__Preset(__MainEffectGraphicsSettingsPresetsSO__Preset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MainEffectGraphicsSettingsPresetsSO__Preset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MainEffectGraphicsSettingsPresetsSO__Preset(__MainEffectGraphicsSettingsPresetsSO__Preset const&) = delete;

  /// @brief Field mainEffect, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectSO> ___mainEffect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset, ___mainEffect) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MainEffectGraphicsSettingsPresetsSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainEffectGraphicsSettingsPresetsSO*
class CORDL_TYPE MainEffectGraphicsSettingsPresetsSO : public ::GlobalNamespace::NamedPresetsSO {
public:
  // Declarations
  using Preset = ::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset;

  /// @brief Field _presets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__presets, put = __cordl_internal_set__presets))::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*,
                                                                                                         ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*> _presets;

  __declspec(property(get = get_namedPresets))::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> namedPresets;

  __declspec(
      property(get = get_presets))::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*> presets;

  static inline ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*> const&
  __cordl_internal_get__presets() const;

  constexpr ::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*>& __cordl_internal_get__presets();

  constexpr void
  __cordl_internal_set__presets(::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*> value);

  /// @brief Method .ctor, addr 0x14cfe54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_namedPresets, addr 0x14cfe4c, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> get_namedPresets();

  /// @brief Method get_presets, addr 0x14cfe44, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*> get_presets();

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

  /// @brief Field _presets, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*> ____presets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO, ____presets) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*, "", "MainEffectGraphicsSettingsPresetsSO");
NEED_NO_BOX(::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, "", "MainEffectGraphicsSettingsPresetsSO/Preset");
