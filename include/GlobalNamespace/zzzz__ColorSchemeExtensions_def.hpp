#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ColorSchemeExtensions)
namespace GlobalNamespace {
class ColorScheme;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorSchemeExtensions
class CORDL_TYPE ColorSchemeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ResolveColor, addr 0x26a62a8, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ResolveColor(::System::Nullable_1<::UnityEngine::Color> playerOverrideColor, bool usePlayerOverride, ::System::Nullable_1<bool> useBeatmapOverride,
                                                  ::System::Nullable_1<::UnityEngine::Color> beatmapOverrideColor, ::UnityEngine::Color environmentColor);

  /// @brief Method ResolveColorScheme, addr 0x26a586c, size 0xa3c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ColorScheme* ResolveColorScheme(::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors,
                                                                   ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme, ::GlobalNamespace::ColorScheme* environmentColorScheme);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemeExtensions(ColorSchemeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemeExtensions(ColorSchemeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18848 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeExtensions*, "", "ColorSchemeExtensions");
