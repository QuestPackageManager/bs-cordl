#pragma once
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
// Type: ::MaterialPropertyBlockFloatCurve
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14780))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14785))
// CS Name: ::MaterialPropertyBlockFloatCurve*
class CORDL_TYPE MaterialPropertyBlockFloatCurve : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
  // Declarations
  /// @brief Field _curve, offset 0x30, size 0x8
  __declspec(property(get = __get__curve, put = __set__curve))::UnityEngine::AnimationCurve* _curve;

  /// @brief Field _valueMultiplier, offset 0x38, size 0x4
  __declspec(property(get = __get__valueMultiplier, put = __set__valueMultiplier)) float_t _valueMultiplier;

  /// @brief Field _speedMultiplier, offset 0x3c, size 0x4
  __declspec(property(get = __get__speedMultiplier, put = __set__speedMultiplier)) float_t _speedMultiplier;

  constexpr ::UnityEngine::AnimationCurve*& __get__curve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__curve() const;

  constexpr void __set__curve(::UnityEngine::AnimationCurve* value);

  constexpr float_t& __get__valueMultiplier();

  constexpr float_t const& __get__valueMultiplier() const;

  constexpr void __set__valueMultiplier(float_t value);

  constexpr float_t& __get__speedMultiplier();

  constexpr float_t const& __get__speedMultiplier() const;

  constexpr void __set__speedMultiplier(float_t value);

  /// @brief Method SetProperty addr 0x1fbf520 size 0x98 virtual true final false
  inline void SetProperty();

  static inline ::GlobalNamespace::MaterialPropertyBlockFloatCurve* New_ctor();

  /// @brief Method .ctor addr 0x1fbf5b8 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockFloatCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockFloatCurve(MaterialPropertyBlockFloatCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockFloatCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockFloatCurve(MaterialPropertyBlockFloatCurve const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockFloatCurve();

public:
  /// @brief Field _curve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____curve;

  /// @brief Field _valueMultiplier, offset: 0x38, size: 0x4, def value: None
  float_t ____valueMultiplier;

  /// @brief Field _speedMultiplier, offset: 0x3c, size: 0x4, def value: None
  float_t ____speedMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockFloatCurve, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockFloatCurve, ____curve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockFloatCurve, ____valueMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockFloatCurve, ____speedMultiplier) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockFloatCurve);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockFloatCurve*, "", "MaterialPropertyBlockFloatCurve");
