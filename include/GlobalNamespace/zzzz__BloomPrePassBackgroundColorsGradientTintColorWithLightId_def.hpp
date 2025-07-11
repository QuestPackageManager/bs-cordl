#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundColorsGradientTintColorWithLightId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundColorsGradientTintColorWithLightId)
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradientTintColorWithLightId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId);
// Dependencies RuntimeLightWithIds
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassBackgroundColorsGradientTintColorWithLightId
class CORDL_TYPE BloomPrePassBackgroundColorsGradientTintColorWithLightId : public ::GlobalNamespace::RuntimeLightWithIds {
public:
  // Declarations
  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassBackgroundColorsGradient,
                      put = __cordl_internal_set__bloomPrePassBackgroundColorsGradient)) ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>
      _bloomPrePassBackgroundColorsGradient;

  /// @brief Field _useGrayscale, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__useGrayscale, put = __cordl_internal_set__useGrayscale)) bool _useGrayscale;

  /// @brief Field grayscaleFactor, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_grayscaleFactor, put = __cordl_internal_set_grayscaleFactor)) float_t grayscaleFactor;

  /// @brief Method ColorWasSet, addr 0x39e099c, size 0x70, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> const& __cordl_internal_get__bloomPrePassBackgroundColorsGradient() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>& __cordl_internal_get__bloomPrePassBackgroundColorsGradient();

  constexpr bool const& __cordl_internal_get__useGrayscale() const;

  constexpr bool& __cordl_internal_get__useGrayscale();

  constexpr float_t const& __cordl_internal_get_grayscaleFactor() const;

  constexpr float_t& __cordl_internal_get_grayscaleFactor();

  constexpr void __cordl_internal_set__bloomPrePassBackgroundColorsGradient(::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> value);

  constexpr void __cordl_internal_set__useGrayscale(bool value);

  constexpr void __cordl_internal_set_grayscaleFactor(float_t value);

  /// @brief Method .ctor, addr 0x39e0a0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundColorsGradientTintColorWithLightId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientTintColorWithLightId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundColorsGradientTintColorWithLightId(BloomPrePassBackgroundColorsGradientTintColorWithLightId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientTintColorWithLightId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundColorsGradientTintColorWithLightId(BloomPrePassBackgroundColorsGradientTintColorWithLightId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16304 };

  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> ____bloomPrePassBackgroundColorsGradient;

  /// @brief Field _useGrayscale, offset: 0x58, size: 0x1, def value: None
  bool ____useGrayscale;

  /// @brief Field grayscaleFactor, offset: 0x5c, size: 0x4, def value: None
  float_t ___grayscaleFactor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId, ____bloomPrePassBackgroundColorsGradient) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId, ____useGrayscale) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId, ___grayscaleFactor) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*, "", "BloomPrePassBackgroundColorsGradientTintColorWithLightId");
