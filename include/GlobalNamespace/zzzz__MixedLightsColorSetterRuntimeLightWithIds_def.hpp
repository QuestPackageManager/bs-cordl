#pragma once
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
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14552))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14547))
// CS Name: ::MixedLightsColorSetterRuntimeLightWithIds*
class CORDL_TYPE MixedLightsColorSetterRuntimeLightWithIds : public ::GlobalNamespace::RuntimeLightWithIds {
public:
  // Declarations
  /// @brief Field _materialPropertyBlockColorSetter, offset 0x48, size 0x8
  __declspec(property(get = __get__materialPropertyBlockColorSetter,
                      put = __set__materialPropertyBlockColorSetter))::GlobalNamespace::MaterialPropertyBlockColorSetter* _materialPropertyBlockColorSetter;

  /// @brief Field _lightMultiplier, offset 0x50, size 0x4
  __declspec(property(get = __get__lightMultiplier, put = __set__lightMultiplier)) float_t _lightMultiplier;

  constexpr ::GlobalNamespace::MaterialPropertyBlockColorSetter*& __get__materialPropertyBlockColorSetter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockColorSetter*> const& __get__materialPropertyBlockColorSetter() const;

  constexpr void __set__materialPropertyBlockColorSetter(::GlobalNamespace::MaterialPropertyBlockColorSetter* value);

  constexpr float_t& __get__lightMultiplier();

  constexpr float_t const& __get__lightMultiplier() const;

  constexpr void __set__lightMultiplier(float_t value);

  /// @brief Method ColorWasSet, addr 0x2111e74, size 0x34, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds* New_ctor();

  /// @brief Method .ctor, addr 0x2111ea8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MixedLightsColorSetterRuntimeLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MixedLightsColorSetterRuntimeLightWithIds(MixedLightsColorSetterRuntimeLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MixedLightsColorSetterRuntimeLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MixedLightsColorSetterRuntimeLightWithIds(MixedLightsColorSetterRuntimeLightWithIds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MixedLightsColorSetterRuntimeLightWithIds();

public:
  /// @brief Field _materialPropertyBlockColorSetter, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockColorSetter* ____materialPropertyBlockColorSetter;

  /// @brief Field _lightMultiplier, offset: 0x50, size: 0x4, def value: None
  float_t ____lightMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds, ____materialPropertyBlockColorSetter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds, ____lightMultiplier) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*, "", "MixedLightsColorSetterRuntimeLightWithIds");
