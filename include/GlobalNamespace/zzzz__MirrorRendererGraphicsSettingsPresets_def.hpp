#pragma once
// IWYU pragma private; include "GlobalNamespace\MirrorRendererGraphicsSettingsPresets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MirrorType_def.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MirrorRendererGraphicsSettingsPresets)
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets_Preset;
}
namespace GlobalNamespace {
class NamedPreset;
}
// Forward declare root types
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets_Preset;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*);
MARK_REF_T(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*, "", "MirrorRendererGraphicsSettingsPresets");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*, "", "MirrorRendererGraphicsSettingsPresets/Preset");
// Dependencies MirrorType, NamedPreset, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorRendererGraphicsSettingsPresets/Preset
class CORDL_TYPE MirrorRendererGraphicsSettingsPresets_Preset : public ::GlobalNamespace::NamedPreset {
public:
  // Declarations
  /// @brief Field maxAntiAliasing, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_maxAntiAliasing, put = __cordl_internal_set_maxAntiAliasing)) int32_t maxAntiAliasing;

  /// @brief Field mirrorType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_mirrorType, put = __cordl_internal_set_mirrorType)) ::GlobalNamespace::MirrorType mirrorType;

  /// @brief Field monoTextureHeight, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_monoTextureHeight, put = __cordl_internal_set_monoTextureHeight)) int32_t monoTextureHeight;

  /// @brief Field monoTextureWidth, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_monoTextureWidth, put = __cordl_internal_set_monoTextureWidth)) int32_t monoTextureWidth;

  /// @brief Field reflectLayers, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_reflectLayers, put = __cordl_internal_set_reflectLayers)) ::UnityEngine::LayerMask reflectLayers;

  /// @brief Field stereoTextureHeight, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_stereoTextureHeight, put = __cordl_internal_set_stereoTextureHeight)) int32_t stereoTextureHeight;

  /// @brief Field stereoTextureWidth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_stereoTextureWidth, put = __cordl_internal_set_stereoTextureWidth)) int32_t stereoTextureWidth;

  static inline ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset* New_ctor();

  constexpr int32_t const& __cordl_internal_get_maxAntiAliasing() const;

  constexpr int32_t& __cordl_internal_get_maxAntiAliasing();

  constexpr ::GlobalNamespace::MirrorType const& __cordl_internal_get_mirrorType() const;

  constexpr ::GlobalNamespace::MirrorType& __cordl_internal_get_mirrorType();

  constexpr int32_t const& __cordl_internal_get_monoTextureHeight() const;

  constexpr int32_t& __cordl_internal_get_monoTextureHeight();

  constexpr int32_t const& __cordl_internal_get_monoTextureWidth() const;

  constexpr int32_t& __cordl_internal_get_monoTextureWidth();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_reflectLayers() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_reflectLayers();

  constexpr int32_t const& __cordl_internal_get_stereoTextureHeight() const;

  constexpr int32_t& __cordl_internal_get_stereoTextureHeight();

  constexpr int32_t const& __cordl_internal_get_stereoTextureWidth() const;

  constexpr int32_t& __cordl_internal_get_stereoTextureWidth();

  constexpr void __cordl_internal_set_maxAntiAliasing(int32_t value);

  constexpr void __cordl_internal_set_mirrorType(::GlobalNamespace::MirrorType value);

  constexpr void __cordl_internal_set_monoTextureHeight(int32_t value);

  constexpr void __cordl_internal_set_monoTextureWidth(int32_t value);

  constexpr void __cordl_internal_set_reflectLayers(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_stereoTextureHeight(int32_t value);

  constexpr void __cordl_internal_set_stereoTextureWidth(int32_t value);

  /// @brief Method .ctor, addr 0x37316ec, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorRendererGraphicsSettingsPresets_Preset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererGraphicsSettingsPresets_Preset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirrorRendererGraphicsSettingsPresets_Preset(MirrorRendererGraphicsSettingsPresets_Preset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererGraphicsSettingsPresets_Preset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirrorRendererGraphicsSettingsPresets_Preset(MirrorRendererGraphicsSettingsPresets_Preset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15055 };

  /// @brief Field mirrorType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::MirrorType ___mirrorType;

  /// @brief Field reflectLayers, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___reflectLayers;

  /// @brief Field stereoTextureWidth, offset: 0x20, size: 0x4, def value: None
  int32_t ___stereoTextureWidth;

  /// @brief Field stereoTextureHeight, offset: 0x24, size: 0x4, def value: None
  int32_t ___stereoTextureHeight;

  /// @brief Field monoTextureWidth, offset: 0x28, size: 0x4, def value: None
  int32_t ___monoTextureWidth;

  /// @brief Field monoTextureHeight, offset: 0x2c, size: 0x4, def value: None
  int32_t ___monoTextureHeight;

  /// @brief Field maxAntiAliasing, offset: 0x30, size: 0x4, def value: None
  int32_t ___maxAntiAliasing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset, ___mirrorType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset, ___reflectLayers) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset, ___stereoTextureWidth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset, ___stereoTextureHeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset, ___monoTextureWidth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset, ___monoTextureHeight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset, ___maxAntiAliasing) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MirrorRendererGraphicsSettingsPresets::Preset, NamedPresetsSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorRendererGraphicsSettingsPresets
class CORDL_TYPE MirrorRendererGraphicsSettingsPresets : public ::GlobalNamespace::NamedPresetsSO {
public:
  // Declarations
  using Preset = ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset;

  /// @brief Field _presets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__presets, put = __cordl_internal_set__presets)) ::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*> _presets;

  __declspec(property(get = get_namedPresets)) ::ArrayW<::GlobalNamespace::NamedPreset*> namedPresets;

  __declspec(property(get = get_presets)) ::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*> presets;

  static inline ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*> const& __cordl_internal_get__presets() const;

  constexpr ::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*>& __cordl_internal_get__presets();

  constexpr void __cordl_internal_set__presets(::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*> value);

  /// @brief Method .ctor, addr 0x37316e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_namedPresets, addr 0x37316dc, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::NamedPreset*> get_namedPresets();

  /// @brief Method get_presets, addr 0x37316d4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*> get_presets();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorRendererGraphicsSettingsPresets();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererGraphicsSettingsPresets", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirrorRendererGraphicsSettingsPresets(MirrorRendererGraphicsSettingsPresets&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererGraphicsSettingsPresets", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirrorRendererGraphicsSettingsPresets(MirrorRendererGraphicsSettingsPresets const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15056 };

  /// @brief Field _presets, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*> ____presets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets, ____presets) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
