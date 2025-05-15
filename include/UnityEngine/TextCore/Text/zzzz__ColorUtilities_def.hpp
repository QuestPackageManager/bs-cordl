#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/ColorUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ColorUtilities)
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class ColorUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::ColorUtilities);
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.ColorUtilities
class CORDL_TYPE ColorUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method CompareColors, addr 0x4923aa4, size 0x10, virtual false, abstract: false, final false
  static inline bool CompareColors(::UnityEngine::Color32 a, ::UnityEngine::Color32 b);

  /// @brief Method MultiplyColors, addr 0x4923ab4, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color32 MultiplyColors(::UnityEngine::Color32 c1, ::UnityEngine::Color32 c2);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorUtilities(ColorUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorUtilities(ColorUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15236 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::ColorUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::ColorUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::ColorUtilities*, "UnityEngine.TextCore.Text", "ColorUtilities");
