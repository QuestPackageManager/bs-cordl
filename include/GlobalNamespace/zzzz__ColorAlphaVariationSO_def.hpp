#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorAlphaVariationSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
CORDL_MODULE_EXPORT(ColorAlphaVariationSO)
namespace GlobalNamespace {
class AlphaSO;
}
namespace GlobalNamespace {
class NoAlphaColorSO;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorAlphaVariationSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorAlphaVariationSO);
// Dependencies ColorSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorAlphaVariationSO
class CORDL_TYPE ColorAlphaVariationSO : public ::GlobalNamespace::ColorSO {
public:
  // Declarations
  /// @brief Field _alpha, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__alpha, put = __cordl_internal_set__alpha)) ::UnityW<::GlobalNamespace::AlphaSO> _alpha;

  /// @brief Field _baseColor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__baseColor, put = __cordl_internal_set__baseColor)) ::UnityW<::GlobalNamespace::NoAlphaColorSO> _baseColor;

  __declspec(property(get = get_alpha)) ::UnityW<::GlobalNamespace::AlphaSO> alpha;

  __declspec(property(get = get_baseColor)) ::UnityW<::GlobalNamespace::NoAlphaColorSO> baseColor;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  static inline ::GlobalNamespace::ColorAlphaVariationSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AlphaSO> const& __cordl_internal_get__alpha() const;

  constexpr ::UnityW<::GlobalNamespace::AlphaSO>& __cordl_internal_get__alpha();

  constexpr ::UnityW<::GlobalNamespace::NoAlphaColorSO> const& __cordl_internal_get__baseColor() const;

  constexpr ::UnityW<::GlobalNamespace::NoAlphaColorSO>& __cordl_internal_get__baseColor();

  constexpr void __cordl_internal_set__alpha(::UnityW<::GlobalNamespace::AlphaSO> value);

  constexpr void __cordl_internal_set__baseColor(::UnityW<::GlobalNamespace::NoAlphaColorSO> value);

  /// @brief Method .ctor, addr 0x269ec9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alpha, addr 0x269ec94, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::AlphaSO> get_alpha();

  /// @brief Method get_baseColor, addr 0x269ec8c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::NoAlphaColorSO> get_baseColor();

  /// @brief Method get_color, addr 0x269ec58, size 0x34, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_color();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorAlphaVariationSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorAlphaVariationSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorAlphaVariationSO(ColorAlphaVariationSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorAlphaVariationSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorAlphaVariationSO(ColorAlphaVariationSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18825 };

  /// @brief Field _baseColor, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoAlphaColorSO> ____baseColor;

  /// @brief Field _alpha, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AlphaSO> ____alpha;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorAlphaVariationSO, ____baseColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorAlphaVariationSO, ____alpha) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorAlphaVariationSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorAlphaVariationSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorAlphaVariationSO*, "", "ColorAlphaVariationSO");
