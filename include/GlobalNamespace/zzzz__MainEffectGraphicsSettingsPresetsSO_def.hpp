#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MainEffectGraphicsSettingsPresetsSO)
namespace GlobalNamespace {
class __MainEffectGraphicsSettingsPresetsSO__Preset;
}
namespace GlobalNamespace {
class NamedPreset;
}
namespace GlobalNamespace {
class MainEffectSO;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4440))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4430))
// CS Name: ::MainEffectGraphicsSettingsPresetsSO::Preset*
class CORDL_TYPE __MainEffectGraphicsSettingsPresetsSO__Preset : public ::GlobalNamespace::NamedPreset {
public:
  // Declarations
  /// @brief Field mainEffect, offset 0x18, size 0x8
  __declspec(property(get = __get_mainEffect, put = __set_mainEffect))::GlobalNamespace::MainEffectSO* mainEffect;

  constexpr ::GlobalNamespace::MainEffectSO*& __get_mainEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainEffectSO*> const& __get_mainEffect() const;

  constexpr void __set_mainEffect(::GlobalNamespace::MainEffectSO* value);

  static inline ::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset* New_ctor();

  /// @brief Method .ctor, addr 0x234e724, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MainEffectGraphicsSettingsPresetsSO__Preset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MainEffectGraphicsSettingsPresetsSO__Preset(__MainEffectGraphicsSettingsPresetsSO__Preset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MainEffectGraphicsSettingsPresetsSO__Preset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MainEffectGraphicsSettingsPresetsSO__Preset(__MainEffectGraphicsSettingsPresetsSO__Preset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainEffectGraphicsSettingsPresetsSO__Preset();

public:
  /// @brief Field mainEffect, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MainEffectSO* ___mainEffect;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4431))
// CS Name: ::MainEffectGraphicsSettingsPresetsSO*
class CORDL_TYPE MainEffectGraphicsSettingsPresetsSO : public ::GlobalNamespace::NamedPresetsSO {
public:
  // Declarations
  using Preset = ::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset;

  /// @brief Field _presets, offset 0x18, size 0x8
  __declspec(
      property(get = __get__presets,
               put = __set__presets))::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*> _presets;

  __declspec(
      property(get = get_presets))::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*> presets;

  __declspec(property(get = get_namedPresets))::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> namedPresets;

  constexpr ::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*>& __get__presets();

  constexpr ::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*> const& __get__presets() const;

  constexpr void __set__presets(::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*> value);

  /// @brief Method get_presets, addr 0x234e70c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*> get_presets();

  /// @brief Method get_namedPresets, addr 0x234e714, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> get_namedPresets();

  static inline ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* New_ctor();

  /// @brief Method .ctor, addr 0x234e71c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectGraphicsSettingsPresetsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectGraphicsSettingsPresetsSO(MainEffectGraphicsSettingsPresetsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectGraphicsSettingsPresetsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectGraphicsSettingsPresetsSO(MainEffectGraphicsSettingsPresetsSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectGraphicsSettingsPresetsSO();

public:
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
