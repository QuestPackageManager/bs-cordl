#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialPropertyBlockFloatCurve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MaterialPropertyBlockFloatCurve)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockFloatCurve;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockFloatCurve);
// Dependencies MaterialPropertyBlockAnimator
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialPropertyBlockFloatCurve
class CORDL_TYPE MaterialPropertyBlockFloatCurve : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
  // Declarations
  /// @brief Field _curve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__curve, put = __cordl_internal_set__curve)) ::UnityEngine::AnimationCurve* _curve;

  /// @brief Field _speedMultiplier, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__speedMultiplier, put = __cordl_internal_set__speedMultiplier)) float_t _speedMultiplier;

  /// @brief Field _valueMultiplier, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__valueMultiplier, put = __cordl_internal_set__valueMultiplier)) float_t _valueMultiplier;

  static inline ::GlobalNamespace::MaterialPropertyBlockFloatCurve* New_ctor();

  /// @brief Method SetProperty, addr 0x39e6b68, size 0x98, virtual true, abstract: false, final false
  inline void SetProperty();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve();

  constexpr float_t const& __cordl_internal_get__speedMultiplier() const;

  constexpr float_t& __cordl_internal_get__speedMultiplier();

  constexpr float_t const& __cordl_internal_get__valueMultiplier() const;

  constexpr float_t& __cordl_internal_get__valueMultiplier();

  constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__speedMultiplier(float_t value);

  constexpr void __cordl_internal_set__valueMultiplier(float_t value);

  /// @brief Method .ctor, addr 0x39e6c00, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockFloatCurve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockFloatCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockFloatCurve(MaterialPropertyBlockFloatCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockFloatCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockFloatCurve(MaterialPropertyBlockFloatCurve const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16351 };

  /// @brief Field _curve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____curve;

  /// @brief Field _valueMultiplier, offset: 0x40, size: 0x4, def value: None
  float_t ____valueMultiplier;

  /// @brief Field _speedMultiplier, offset: 0x44, size: 0x4, def value: None
  float_t ____speedMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockFloatCurve, ____curve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockFloatCurve, ____valueMultiplier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockFloatCurve, ____speedMultiplier) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockFloatCurve, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockFloatCurve);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockFloatCurve*, "", "MaterialPropertyBlockFloatCurve");
