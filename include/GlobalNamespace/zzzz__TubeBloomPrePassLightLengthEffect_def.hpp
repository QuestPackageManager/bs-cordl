#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TubeBloomPrePassLightLengthEffect)
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeBloomPrePassLightLengthEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TubeBloomPrePassLightLengthEffect);
// Type: ::TubeBloomPrePassLightLengthEffect
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4909))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4916))
// CS Name: ::TubeBloomPrePassLightLengthEffect*
class CORDL_TYPE TubeBloomPrePassLightLengthEffect : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _tubeBloomPrePassLight, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tubeBloomPrePassLight, put = __cordl_internal_set__tubeBloomPrePassLight))::UnityW<::GlobalNamespace::TubeBloomPrePassLight> _tubeBloomPrePassLight;

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get__tubeBloomPrePassLight();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get__tubeBloomPrePassLight() const;

  constexpr void __cordl_internal_set__tubeBloomPrePassLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  /// @brief Method SetValue, addr 0x23a71f4, size 0x2c, virtual true, abstract: false, final false
  inline void SetValue(float_t value);

  /// @brief Method TriggerValue, addr 0x23a7220, size 0x2c, virtual true, abstract: false, final false
  inline void TriggerValue(float_t value);

  static inline ::GlobalNamespace::TubeBloomPrePassLightLengthEffect* New_ctor();

  /// @brief Method .ctor, addr 0x23a724c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightLengthEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeBloomPrePassLightLengthEffect(TubeBloomPrePassLightLengthEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightLengthEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeBloomPrePassLightLengthEffect(TubeBloomPrePassLightLengthEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeBloomPrePassLightLengthEffect();

public:
  /// @brief Field _tubeBloomPrePassLight, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> ____tubeBloomPrePassLight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeBloomPrePassLightLengthEffect, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightLengthEffect, ____tubeBloomPrePassLight) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeBloomPrePassLightLengthEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeBloomPrePassLightLengthEffect*, "", "TubeBloomPrePassLightLengthEffect");
