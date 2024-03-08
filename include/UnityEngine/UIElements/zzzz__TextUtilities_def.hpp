#pragma once
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
class ITextHandle;
}
namespace UnityEngine::UIElements {
class PanelTextSettings;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine::UIElements {
struct __VisualElement__MeasureMode;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct Matrix4x4;
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TextUtilities*
class CORDL_TYPE TextUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method ComputeTextScaling, addr 0x2fadc24, size 0xfc, virtual false, abstract: false, final false
  static inline float_t ComputeTextScaling(::UnityEngine::Matrix4x4 worldMatrix, float_t pixelsPerPoint);

  /// @brief Method GetFont, addr 0x2fae484, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Font> GetFont(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParam);

  /// @brief Method GetFont, addr 0x2fae574, size 0x15c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Font> GetFont(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetFontAsset, addr 0x2fad568, size 0x128, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> GetFontAsset(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParam);

  /// @brief Method GetFontAsset, addr 0x2fae254, size 0x16c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> GetFontAsset(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetTextCoreSettingsForElement, addr 0x2fae888, size 0x3b4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::TextCoreSettings GetTextCoreSettingsForElement(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetTextSettingsFrom, addr 0x2fad4b0, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::UIElements::PanelTextSettings> GetTextSettingsFrom(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParam);

  /// @brief Method GetTextSettingsFrom, addr 0x2fae3c0, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::UIElements::PanelTextSettings> GetTextSettingsFrom(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method IsFontAssigned, addr 0x2fae6d0, size 0x84, virtual false, abstract: false, final false
  static inline bool IsFontAssigned(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams);

  /// @brief Method IsFontAssigned, addr 0x2fae184, size 0xc8, virtual false, abstract: false, final false
  static inline bool IsFontAssigned(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method MeasureVisualElementTextSize, addr 0x2fadd20, size 0x464, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MeasureVisualElementTextSize(::UnityEngine::UIElements::VisualElement* ve, ::StringW textToMeasure, float_t width,
                                                                    ::UnityEngine::UIElements::__VisualElement__MeasureMode widthMode, float_t height,
                                                                    ::UnityEngine::UIElements::__VisualElement__MeasureMode heightMode, ::UnityEngine::UIElements::ITextHandle* textHandle);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextUtilities*, "UnityEngine.UIElements", "TextUtilities");
