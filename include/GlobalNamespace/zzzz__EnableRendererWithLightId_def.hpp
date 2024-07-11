#pragma once
// IWYU pragma private; include "GlobalNamespace/EnableRendererWithLightId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnableRendererWithLightId)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class EnableRendererWithLightId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnableRendererWithLightId);
// Type: ::EnableRendererWithLightId
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnableRendererWithLightId*
class CORDL_TYPE EnableRendererWithLightId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _hideAlphaRangeMax, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__hideAlphaRangeMax, put = __cordl_internal_set__hideAlphaRangeMax)) float_t _hideAlphaRangeMax;

  /// @brief Field _hideAlphaRangeMin, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__hideAlphaRangeMin, put = __cordl_internal_set__hideAlphaRangeMin)) float_t _hideAlphaRangeMin;

  /// @brief Field _renderer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__renderer, put = __cordl_internal_set__renderer))::UnityW<::UnityEngine::Renderer> _renderer;

  /// @brief Method ColorWasSet, addr 0x25200d4, size 0x44, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::EnableRendererWithLightId* New_ctor();

  constexpr float_t const& __cordl_internal_get__hideAlphaRangeMax() const;

  constexpr float_t& __cordl_internal_get__hideAlphaRangeMax();

  constexpr float_t const& __cordl_internal_get__hideAlphaRangeMin() const;

  constexpr float_t& __cordl_internal_get__hideAlphaRangeMin();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer();

  constexpr void __cordl_internal_set__hideAlphaRangeMax(float_t value);

  constexpr void __cordl_internal_set__hideAlphaRangeMin(float_t value);

  constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value);

  /// @brief Method .ctor, addr 0x2520118, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnableRendererWithLightId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnableRendererWithLightId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnableRendererWithLightId(EnableRendererWithLightId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnableRendererWithLightId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnableRendererWithLightId(EnableRendererWithLightId const&) = delete;

  /// @brief Field _renderer, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ____renderer;

  /// @brief Field _hideAlphaRangeMin, offset: 0x38, size: 0x4, def value: None
  float_t ____hideAlphaRangeMin;

  /// @brief Field _hideAlphaRangeMax, offset: 0x3c, size: 0x4, def value: None
  float_t ____hideAlphaRangeMax;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnableRendererWithLightId, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableRendererWithLightId, ____renderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableRendererWithLightId, ____hideAlphaRangeMin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableRendererWithLightId, ____hideAlphaRangeMax) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnableRendererWithLightId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnableRendererWithLightId*, "", "EnableRendererWithLightId");
