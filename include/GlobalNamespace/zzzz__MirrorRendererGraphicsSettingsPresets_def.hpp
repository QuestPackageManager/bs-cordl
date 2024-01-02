#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MirrorRendererGraphicsSettingsPresets)
namespace GlobalNamespace {
class __MirrorRendererGraphicsSettingsPresets__Preset;
}
namespace GlobalNamespace {
class NamedPreset;
}
namespace GlobalNamespace {
struct __MirrorRendererGraphicsSettingsPresets__Preset__MirrorType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MirrorRendererGraphicsSettingsPresets__Preset__MirrorType;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets;
}
namespace GlobalNamespace {
class __MirrorRendererGraphicsSettingsPresets__Preset;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType);
MARK_REF_PTR_T(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets);
MARK_REF_PTR_T(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset);
// Type: ::MirrorType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4437))
// CS Name: ::MirrorRendererGraphicsSettingsPresets::Preset::MirrorType
struct CORDL_TYPE __MirrorRendererGraphicsSettingsPresets__Preset__MirrorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MirrorRendererGraphicsSettingsPresets__Preset__MirrorType_Unwrapped
  enum struct ____MirrorRendererGraphicsSettingsPresets__Preset__MirrorType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_FakeMirror = static_cast<int32_t>(0x1),
    __E_RenderedMirror = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MirrorRendererGraphicsSettingsPresets__Preset__MirrorType_Unwrapped() const noexcept {
    return static_cast<____MirrorRendererGraphicsSettingsPresets__Preset__MirrorType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MirrorRendererGraphicsSettingsPresets__Preset__MirrorType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MirrorRendererGraphicsSettingsPresets__Preset__MirrorType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType const None;

  /// @brief Field FakeMirror value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType const FakeMirror;

  /// @brief Field RenderedMirror value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType const RenderedMirror;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Preset
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 53, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4437)), TypeDefinitionIndex(TypeDefinitionIndex(4440)), TypeDefinitionIndex(TypeDefinitionIndex(10204))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4438))
// CS Name: ::MirrorRendererGraphicsSettingsPresets::Preset*
class CORDL_TYPE __MirrorRendererGraphicsSettingsPresets__Preset : public ::GlobalNamespace::NamedPreset {
public:
  // Declarations
  using MirrorType = ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType;

  /// @brief Field mirrorType, offset 0x18, size 0x4
  __declspec(property(get = __get_mirrorType, put = __set_mirrorType))::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType mirrorType;

  /// @brief Field reflectLayers, offset 0x1c, size 0x4
  __declspec(property(get = __get_reflectLayers, put = __set_reflectLayers))::UnityEngine::LayerMask reflectLayers;

  /// @brief Field stereoTextureWidth, offset 0x20, size 0x4
  __declspec(property(get = __get_stereoTextureWidth, put = __set_stereoTextureWidth)) int32_t stereoTextureWidth;

  /// @brief Field stereoTextureHeight, offset 0x24, size 0x4
  __declspec(property(get = __get_stereoTextureHeight, put = __set_stereoTextureHeight)) int32_t stereoTextureHeight;

  /// @brief Field monoTextureWidth, offset 0x28, size 0x4
  __declspec(property(get = __get_monoTextureWidth, put = __set_monoTextureWidth)) int32_t monoTextureWidth;

  /// @brief Field monoTextureHeight, offset 0x2c, size 0x4
  __declspec(property(get = __get_monoTextureHeight, put = __set_monoTextureHeight)) int32_t monoTextureHeight;

  /// @brief Field maxAntiAliasing, offset 0x30, size 0x4
  __declspec(property(get = __get_maxAntiAliasing, put = __set_maxAntiAliasing)) int32_t maxAntiAliasing;

  /// @brief Field enableBloomPrePassFog, offset 0x34, size 0x1
  __declspec(property(get = __get_enableBloomPrePassFog, put = __set_enableBloomPrePassFog)) bool enableBloomPrePassFog;

  constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType& __get_mirrorType();

  constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType const& __get_mirrorType() const;

  constexpr void __set_mirrorType(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType value);

  constexpr ::UnityEngine::LayerMask& __get_reflectLayers();

  constexpr ::UnityEngine::LayerMask const& __get_reflectLayers() const;

  constexpr void __set_reflectLayers(::UnityEngine::LayerMask value);

  constexpr int32_t& __get_stereoTextureWidth();

  constexpr int32_t const& __get_stereoTextureWidth() const;

  constexpr void __set_stereoTextureWidth(int32_t value);

  constexpr int32_t& __get_stereoTextureHeight();

  constexpr int32_t const& __get_stereoTextureHeight() const;

  constexpr void __set_stereoTextureHeight(int32_t value);

  constexpr int32_t& __get_monoTextureWidth();

  constexpr int32_t const& __get_monoTextureWidth() const;

  constexpr void __set_monoTextureWidth(int32_t value);

  constexpr int32_t& __get_monoTextureHeight();

  constexpr int32_t const& __get_monoTextureHeight() const;

  constexpr void __set_monoTextureHeight(int32_t value);

  constexpr int32_t& __get_maxAntiAliasing();

  constexpr int32_t const& __get_maxAntiAliasing() const;

  constexpr void __set_maxAntiAliasing(int32_t value);

  constexpr bool& __get_enableBloomPrePassFog();

  constexpr bool const& __get_enableBloomPrePassFog() const;

  constexpr void __set_enableBloomPrePassFog(bool value);

  static inline ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset* New_ctor();

  /// @brief Method .ctor, addr 0x235039c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MirrorRendererGraphicsSettingsPresets__Preset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MirrorRendererGraphicsSettingsPresets__Preset(__MirrorRendererGraphicsSettingsPresets__Preset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MirrorRendererGraphicsSettingsPresets__Preset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MirrorRendererGraphicsSettingsPresets__Preset(__MirrorRendererGraphicsSettingsPresets__Preset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MirrorRendererGraphicsSettingsPresets__Preset();

public:
  /// @brief Field mirrorType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType ___mirrorType;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset, ___mirrorType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset, ___reflectLayers) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset, ___stereoTextureWidth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset, ___stereoTextureHeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset, ___monoTextureWidth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset, ___monoTextureHeight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset, ___maxAntiAliasing) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset, ___enableBloomPrePassFog) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MirrorRendererGraphicsSettingsPresets
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4439))
// CS Name: ::MirrorRendererGraphicsSettingsPresets*
class CORDL_TYPE MirrorRendererGraphicsSettingsPresets : public ::GlobalNamespace::NamedPresetsSO {
public:
  // Declarations
  using Preset = ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset;

  /// @brief Field _presets, offset 0x18, size 0x8
  __declspec(property(
      get = __get__presets,
      put = __set__presets))::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*, ::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*> _presets;

  __declspec(
      property(get = get_presets))::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*, ::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*> presets;

  __declspec(property(get = get_namedPresets))::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> namedPresets;

  constexpr ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*, ::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*>& __get__presets();

  constexpr ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*, ::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*> const& __get__presets() const;

  constexpr void __set__presets(::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*, ::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*> value);

  /// @brief Method get_presets, addr 0x2350384, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*, ::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*> get_presets();

  /// @brief Method get_namedPresets, addr 0x235038c, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> get_namedPresets();

  static inline ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* New_ctor();

  /// @brief Method .ctor, addr 0x2350394, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererGraphicsSettingsPresets", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirrorRendererGraphicsSettingsPresets(MirrorRendererGraphicsSettingsPresets&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererGraphicsSettingsPresets", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirrorRendererGraphicsSettingsPresets(MirrorRendererGraphicsSettingsPresets const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorRendererGraphicsSettingsPresets();

public:
  /// @brief Field _presets, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*, ::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*> ____presets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets, ____presets) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType, "", "MirrorRendererGraphicsSettingsPresets/Preset/MirrorType");
NEED_NO_BOX(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*, "", "MirrorRendererGraphicsSettingsPresets");
NEED_NO_BOX(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*, "", "MirrorRendererGraphicsSettingsPresets/Preset");
