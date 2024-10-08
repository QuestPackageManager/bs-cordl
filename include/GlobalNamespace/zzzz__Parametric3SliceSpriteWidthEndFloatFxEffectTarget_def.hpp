#pragma once
// IWYU pragma private; include "GlobalNamespace/Parametric3SliceSpriteWidthEndFloatFxEffectTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Parametric3SliceSpriteWidthEndFloatFxEffectTarget)
namespace GlobalNamespace {
class Parametric3SliceSpriteController;
}
// Forward declare root types
namespace GlobalNamespace {
class Parametric3SliceSpriteWidthEndFloatFxEffectTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget);
// Type: ::Parametric3SliceSpriteWidthEndFloatFxEffectTarget
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Parametric3SliceSpriteWidthEndFloatFxEffectTarget*
class CORDL_TYPE Parametric3SliceSpriteWidthEndFloatFxEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _parametric3SliceSpriteController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__parametric3SliceSpriteController,
                      put = __cordl_internal_set__parametric3SliceSpriteController)) ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController>
      _parametric3SliceSpriteController;

  /// @brief Field _valueBounds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__valueBounds, put = __cordl_internal_set__valueBounds)) ::UnityEngine::Vector2 _valueBounds;

  /// @brief Field _valueMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__valueMultiplier, put = __cordl_internal_set__valueMultiplier)) float_t _valueMultiplier;

  static inline ::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget* New_ctor();

  /// @brief Method SetValue, addr 0x3b13b9c, size 0xa0, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x3b13c3c, size 0xa0, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> const& __cordl_internal_get__parametric3SliceSpriteController() const;

  constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController>& __cordl_internal_get__parametric3SliceSpriteController();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__valueBounds() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__valueBounds();

  constexpr float_t const& __cordl_internal_get__valueMultiplier() const;

  constexpr float_t& __cordl_internal_get__valueMultiplier();

  constexpr void __cordl_internal_set__parametric3SliceSpriteController(::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> value);

  constexpr void __cordl_internal_set__valueBounds(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__valueMultiplier(float_t value);

  /// @brief Method .ctor, addr 0x3b13cdc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parametric3SliceSpriteWidthEndFloatFxEffectTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Parametric3SliceSpriteWidthEndFloatFxEffectTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parametric3SliceSpriteWidthEndFloatFxEffectTarget(Parametric3SliceSpriteWidthEndFloatFxEffectTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parametric3SliceSpriteWidthEndFloatFxEffectTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parametric3SliceSpriteWidthEndFloatFxEffectTarget(Parametric3SliceSpriteWidthEndFloatFxEffectTarget const&) = delete;

  /// @brief Field _parametric3SliceSpriteController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> ____parametric3SliceSpriteController;

  /// @brief Field _valueBounds, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____valueBounds;

  /// @brief Field _valueMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ____valueMultiplier;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4260 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget, ____parametric3SliceSpriteController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget, ____valueBounds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget, ____valueMultiplier) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget*, "", "Parametric3SliceSpriteWidthEndFloatFxEffectTarget");
