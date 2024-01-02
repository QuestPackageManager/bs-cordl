#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14529))
// CS Name: ::EnableRendererWithLightId*
class CORDL_TYPE EnableRendererWithLightId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _renderer, offset 0x30, size 0x8
  __declspec(property(get = __get__renderer, put = __set__renderer))::UnityEngine::Renderer* _renderer;

  /// @brief Field _hideAlphaRangeMin, offset 0x38, size 0x4
  __declspec(property(get = __get__hideAlphaRangeMin, put = __set__hideAlphaRangeMin)) float_t _hideAlphaRangeMin;

  /// @brief Field _hideAlphaRangeMax, offset 0x3c, size 0x4
  __declspec(property(get = __get__hideAlphaRangeMax, put = __set__hideAlphaRangeMax)) float_t _hideAlphaRangeMax;

  constexpr ::UnityEngine::Renderer*& __get__renderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& __get__renderer() const;

  constexpr void __set__renderer(::UnityEngine::Renderer* value);

  constexpr float_t& __get__hideAlphaRangeMin();

  constexpr float_t const& __get__hideAlphaRangeMin() const;

  constexpr void __set__hideAlphaRangeMin(float_t value);

  constexpr float_t& __get__hideAlphaRangeMax();

  constexpr float_t const& __get__hideAlphaRangeMax() const;

  constexpr void __set__hideAlphaRangeMax(float_t value);

  /// @brief Method ColorWasSet, addr 0x210f21c, size 0x44, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::EnableRendererWithLightId* New_ctor();

  /// @brief Method .ctor, addr 0x210f260, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnableRendererWithLightId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnableRendererWithLightId(EnableRendererWithLightId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnableRendererWithLightId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnableRendererWithLightId(EnableRendererWithLightId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnableRendererWithLightId();

public:
  /// @brief Field _renderer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Renderer* ____renderer;

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
