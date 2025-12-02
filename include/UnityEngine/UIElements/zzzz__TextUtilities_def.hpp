#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextUtilities)
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct RenderedText;
}
namespace UnityEngine::TextCore::Text {
class TextSettings;
}
namespace UnityEngine::TextCore::Text {
struct TextWrappingMode;
}
namespace UnityEngine::TextCore {
struct TextOverflow;
}
namespace UnityEngine::TextCore {
struct WhiteSpace;
}
namespace UnityEngine::UIElements::UIR {
struct TextCoreSettings;
}
namespace UnityEngine::UIElements {
struct OverflowInternal;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
struct TextOverflow;
}
namespace UnityEngine::UIElements {
struct VisualElement_MeasureMode;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct WhiteSpace;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TextUtilities);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextUtilities
class CORDL_TYPE TextUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetFontAsset, addr 0x6a6d934, size 0x1c4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> GetFontAsset(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetTextCoreSettingsForElement, addr 0x6a72ed4, size 0x420, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::TextCoreSettings GetTextCoreSettingsForElement(::UnityEngine::UIElements::VisualElement* ve, bool ignoreColors);

  /// @brief Method GetTextSettingsFrom, addr 0x6a6ded4, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::TextSettings> GetTextSettingsFrom(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method IsAdvancedTextEnabledForElement, addr 0x6a6e544, size 0xf4, virtual false, abstract: false, final false
  static inline bool IsAdvancedTextEnabledForElement(::UnityEngine::UIElements::TextElement* te);

  /// @brief Method IsFontAssigned, addr 0x6a72e1c, size 0xb8, virtual false, abstract: false, final false
  static inline bool IsFontAssigned(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method MeasureVisualElementTextSize, addr 0x6a72c7c, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MeasureVisualElementTextSize(::UnityEngine::UIElements::TextElement* te, ::ByRef<::UnityEngine::TextCore::Text::RenderedText> textToMeasure, float_t width,
                                                                    ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t height,
                                                                    ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode);

  /// @brief Method toTextCore, addr 0x6a6dce8, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::TextOverflow toTextCore(::UnityEngine::UIElements::TextOverflow textOverflow, ::UnityEngine::UIElements::OverflowInternal overflow);

  /// @brief Method toTextCore, addr 0x6a6dcb4, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::WhiteSpace toTextCore(::UnityEngine::UIElements::WhiteSpace whiteSpace, bool isInputField);

  /// @brief Method toTextWrappingMode, addr 0x6a6f420, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::TextWrappingMode toTextWrappingMode(::UnityEngine::UIElements::WhiteSpace whiteSpace);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextUtilities(TextUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextUtilities(TextUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5094 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextUtilities*, "UnityEngine.UIElements", "TextUtilities");
