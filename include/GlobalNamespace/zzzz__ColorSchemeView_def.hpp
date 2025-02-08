#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemeView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ColorSchemeView)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeView);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorSchemeView
class CORDL_TYPE ColorSchemeView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _environment0ColorImage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__environment0ColorImage, put = __cordl_internal_set__environment0ColorImage)) ::UnityW<::UnityEngine::UI::Image> _environment0ColorImage;

  /// @brief Field _environment1ColorImage, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__environment1ColorImage, put = __cordl_internal_set__environment1ColorImage)) ::UnityW<::UnityEngine::UI::Image> _environment1ColorImage;

  /// @brief Field _environmentColor0BoostImage, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentColor0BoostImage, put = __cordl_internal_set__environmentColor0BoostImage)) ::UnityW<::UnityEngine::UI::Image>
      _environmentColor0BoostImage;

  /// @brief Field _environmentColor1BoostImage, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentColor1BoostImage, put = __cordl_internal_set__environmentColor1BoostImage)) ::UnityW<::UnityEngine::UI::Image>
      _environmentColor1BoostImage;

  /// @brief Field _obstacleColorImage, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleColorImage, put = __cordl_internal_set__obstacleColorImage)) ::UnityW<::UnityEngine::UI::Image> _obstacleColorImage;

  /// @brief Field _saberAColorImage, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__saberAColorImage, put = __cordl_internal_set__saberAColorImage)) ::UnityW<::UnityEngine::UI::Image> _saberAColorImage;

  /// @brief Field _saberBColorImage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__saberBColorImage, put = __cordl_internal_set__saberBColorImage)) ::UnityW<::UnityEngine::UI::Image> _saberBColorImage;

  static inline ::GlobalNamespace::ColorSchemeView* New_ctor();

  /// @brief Method SetColors, addr 0x3c2a884, size 0x1b8, virtual false, abstract: false, final false
  inline void SetColors(::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environment0Color, ::UnityEngine::Color environment1Color,
                        ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost, ::UnityEngine::Color obstacleColor);

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__environment0ColorImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__environment0ColorImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__environment1ColorImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__environment1ColorImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__environmentColor0BoostImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__environmentColor0BoostImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__environmentColor1BoostImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__environmentColor1BoostImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__obstacleColorImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__obstacleColorImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__saberAColorImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__saberAColorImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__saberBColorImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__saberBColorImage();

  constexpr void __cordl_internal_set__environment0ColorImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__environment1ColorImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__environmentColor0BoostImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__environmentColor1BoostImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__obstacleColorImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__saberAColorImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__saberBColorImage(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0x3c2aa3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemeView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemeView(ColorSchemeView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemeView(ColorSchemeView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18994 };

  /// @brief Field _saberAColorImage, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____saberAColorImage;

  /// @brief Field _saberBColorImage, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____saberBColorImage;

  /// @brief Field _environment0ColorImage, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____environment0ColorImage;

  /// @brief Field _environment1ColorImage, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____environment1ColorImage;

  /// @brief Field _environmentColor0BoostImage, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____environmentColor0BoostImage;

  /// @brief Field _environmentColor1BoostImage, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____environmentColor1BoostImage;

  /// @brief Field _obstacleColorImage, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____obstacleColorImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorSchemeView, ____saberAColorImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeView, ____saberBColorImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeView, ____environment0ColorImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeView, ____environment1ColorImage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeView, ____environmentColor0BoostImage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeView, ____environmentColor1BoostImage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeView, ____obstacleColorImage) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeView, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeView*, "", "ColorSchemeView");
