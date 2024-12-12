#pragma once
// IWYU pragma private; include "GlobalNamespace/MirrorRendererGraphicsSettingsPresets.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MirrorRendererGraphicsSettingsPresets)
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets_Preset;
}
namespace GlobalNamespace {
class NamedPreset;
}
namespace GlobalNamespace {
struct Preset_MirrorRendererGraphicsSettingsPresets_MirrorType;
}
// Forward declare root types
namespace GlobalNamespace {
struct Preset_MirrorRendererGraphicsSettingsPresets_MirrorType;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets_Preset;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType);
MARK_REF_PTR_T(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets);
MARK_REF_PTR_T(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MirrorRendererGraphicsSettingsPresets/Preset/MirrorType
struct CORDL_TYPE Preset_MirrorRendererGraphicsSettingsPresets_MirrorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Preset_MirrorRendererGraphicsSettingsPresets_MirrorType_Unwrapped
  enum struct __Preset_MirrorRendererGraphicsSettingsPresets_MirrorType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_FakeMirror = static_cast<int32_t>(0x1),
    __E_RenderedMirror = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Preset_MirrorRendererGraphicsSettingsPresets_MirrorType_Unwrapped() const noexcept {
    return static_cast<__Preset_MirrorRendererGraphicsSettingsPresets_MirrorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Preset_MirrorRendererGraphicsSettingsPresets_MirrorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Preset_MirrorRendererGraphicsSettingsPresets_MirrorType(int32_t value__) noexcept;

  /// @brief Field FakeMirror value: I32(1)
  static ::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType const FakeMirror;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType const None;

  /// @brief Field RenderedMirror value: I32(2)
  static ::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType const RenderedMirror;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13030 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MirrorRendererGraphicsSettingsPresets::Preset::MirrorType, NamedPreset, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorRendererGraphicsSettingsPresets/Preset
class CORDL_TYPE MirrorRendererGraphicsSettingsPresets_Preset : public ::GlobalNamespace::NamedPreset {
public:
  // Declarations
  using MirrorType = ::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType;

  /// @brief Field enableBloomPrePassFog, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_enableBloomPrePassFog, put = __cordl_internal_set_enableBloomPrePassFog)) bool enableBloomPrePassFog;

  /// @brief Field maxAntiAliasing, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_maxAntiAliasing, put = __cordl_internal_set_maxAntiAliasing)) int32_t maxAntiAliasing;

  /// @brief Field mirrorType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_mirrorType, put = __cordl_internal_set_mirrorType)) ::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType mirrorType;

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

  constexpr bool const& __cordl_internal_get_enableBloomPrePassFog() const;

  constexpr bool& __cordl_internal_get_enableBloomPrePassFog();

  constexpr int32_t const& __cordl_internal_get_maxAntiAliasing() const;

  constexpr int32_t& __cordl_internal_get_maxAntiAliasing();

  constexpr ::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType const& __cordl_internal_get_mirrorType() const;

  constexpr ::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType& __cordl_internal_get_mirrorType();

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

  constexpr void __cordl_internal_set_enableBloomPrePassFog(bool value);

  constexpr void __cordl_internal_set_maxAntiAliasing(int32_t value);

  constexpr void __cordl_internal_set_mirrorType(::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType value);

  constexpr void __cordl_internal_set_monoTextureHeight(int32_t value);

  constexpr void __cordl_internal_set_monoTextureWidth(int32_t value);

  constexpr void __cordl_internal_set_reflectLayers(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_stereoTextureHeight(int32_t value);

  constexpr void __cordl_internal_set_stereoTextureWidth(int32_t value);

  /// @brief Method .ctor, addr 0x26d3bf0, size 0x44, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13031 };

  /// @brief Field mirrorType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType ___mirrorType;

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

  /// @brief Field enableBloomPrePassFog, offset: 0x34, size: 0x1, def value: None
  bool ___enableBloomPrePassFog;

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

static_assert(offsetof(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset, ___enableBloomPrePassFog) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies NamedPresetsSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorRendererGraphicsSettingsPresets
class CORDL_TYPE MirrorRendererGraphicsSettingsPresets : public ::GlobalNamespace::NamedPresetsSO {
public:
  // Declarations
  using Preset = ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset;

  /// @brief Field _presets, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__presets,
      put = __cordl_internal_set__presets)) ::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*, ::Array<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*>*>
      _presets;

  __declspec(property(get = get_namedPresets)) ::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> namedPresets;

  __declspec(property(get = get_presets)) ::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*, ::Array<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*>*>
      presets;

  static inline ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*, ::Array<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*>*> const&
  __cordl_internal_get__presets() const;

  constexpr ::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*, ::Array<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*>*>& __cordl_internal_get__presets();

  constexpr void
  __cordl_internal_set__presets(::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*, ::Array<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*>*> value);

  /// @brief Method .ctor, addr 0x26d3be8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_namedPresets, addr 0x26d3be0, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> get_namedPresets();

  /// @brief Method get_presets, addr 0x26d3bd8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*, ::Array<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*>*> get_presets();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13032 };

  /// @brief Field _presets, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*, ::Array<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*>*> ____presets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets, ____presets) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType, "", "MirrorRendererGraphicsSettingsPresets/Preset/MirrorType");
NEED_NO_BOX(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*, "", "MirrorRendererGraphicsSettingsPresets");
NEED_NO_BOX(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*, "", "MirrorRendererGraphicsSettingsPresets/Preset");
