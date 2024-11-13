#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextUtilities)
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::UIElements::UIR {
struct TextCoreSettings;
}
namespace UnityEngine::UIElements {
class PanelTextSettings;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct __VisualElement__MeasureMode;
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
// Type: UnityEngine.UIElements::TextUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TextUtilities*
class CORDL_TYPE TextUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertPixelUnitsToTextCoreRelativeUnits, addr 0x4a2eff0, size 0xb8, virtual false, abstract: false, final false
  static inline float_t ConvertPixelUnitsToTextCoreRelativeUnits(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method GetFontAsset, addr 0x4a2eba0, size 0x1bc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> GetFontAsset(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetTextCoreSettingsForElement, addr 0x4a2f334, size 0x3dc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::TextCoreSettings GetTextCoreSettingsForElement(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetTextSettingsFrom, addr 0x4a2eadc, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::UIElements::PanelTextSettings> GetTextSettingsFrom(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method IsFontAssigned, addr 0x4a2f270, size 0xc4, virtual false, abstract: false, final false
  static inline bool IsFontAssigned(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method MeasureVisualElementTextSize, addr 0x4a2f0f4, size 0x17c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MeasureVisualElementTextSize(::UnityEngine::UIElements::TextElement* te, ::StringW textToMeasure, float_t width,
                                                                    ::UnityEngine::UIElements::__VisualElement__MeasureMode widthMode, float_t height,
                                                                    ::UnityEngine::UIElements::__VisualElement__MeasureMode heightMode);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6172 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextUtilities*, "UnityEngine.UIElements", "TextUtilities");
