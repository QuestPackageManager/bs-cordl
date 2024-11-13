#pragma once
// IWYU pragma private; include "GlobalNamespace/MixedLightsColorSetterRuntimeLightWithIds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MixedLightsColorSetterRuntimeLightWithIds)
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MixedLightsColorSetterRuntimeLightWithIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds);
// Type: ::MixedLightsColorSetterRuntimeLightWithIds
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MixedLightsColorSetterRuntimeLightWithIds*
class CORDL_TYPE MixedLightsColorSetterRuntimeLightWithIds : public ::GlobalNamespace::RuntimeLightWithIds {
public:
  // Declarations
  /// @brief Field _lightMultiplier, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__lightMultiplier, put = __cordl_internal_set__lightMultiplier)) float_t _lightMultiplier;

  /// @brief Field _materialPropertyBlockColorSetter, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockColorSetter,
                      put = __cordl_internal_set__materialPropertyBlockColorSetter)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter>
      _materialPropertyBlockColorSetter;

  /// @brief Method ColorWasSet, addr 0x398e214, size 0x30, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds* New_ctor();

  constexpr float_t const& __cordl_internal_get__lightMultiplier() const;

  constexpr float_t& __cordl_internal_get__lightMultiplier();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> const& __cordl_internal_get__materialPropertyBlockColorSetter() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter>& __cordl_internal_get__materialPropertyBlockColorSetter();

  constexpr void __cordl_internal_set__lightMultiplier(float_t value);

  constexpr void __cordl_internal_set__materialPropertyBlockColorSetter(::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> value);

  /// @brief Method .ctor, addr 0x398e324, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MixedLightsColorSetterRuntimeLightWithIds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MixedLightsColorSetterRuntimeLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MixedLightsColorSetterRuntimeLightWithIds(MixedLightsColorSetterRuntimeLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MixedLightsColorSetterRuntimeLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MixedLightsColorSetterRuntimeLightWithIds(MixedLightsColorSetterRuntimeLightWithIds const&) = delete;

  /// @brief Field _materialPropertyBlockColorSetter, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> ____materialPropertyBlockColorSetter;

  /// @brief Field _lightMultiplier, offset: 0x58, size: 0x4, def value: None
  float_t ____lightMultiplier;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16293 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds, ____materialPropertyBlockColorSetter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds, ____lightMultiplier) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*, "", "MixedLightsColorSetterRuntimeLightWithIds");
