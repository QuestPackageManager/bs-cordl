#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextUtilities)
namespace UnityEngine::UIElements {
struct __VisualElement__MeasureMode;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements::UIR {
struct TextCoreSettings;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::UIElements {
class PanelTextSettings;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7147))
// CS Name: ::UnityEngine.UIElements::TextUtilities*
class CORDL_TYPE TextUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method ComputeTextScaling addr 0x2e468dc size 0xfc virtual false final false
  static inline float_t ComputeTextScaling(::UnityEngine::Matrix4x4 worldMatrix, float_t pixelsPerPoint);

  /// @brief Method MeasureVisualElementTextSize addr 0x2e469d8 size 0x464 virtual false final false
  static inline ::UnityEngine::Vector2 MeasureVisualElementTextSize(::UnityEngine::UIElements::VisualElement* ve, ::StringW textToMeasure, float_t width,
                                                                    ::UnityEngine::UIElements::__VisualElement__MeasureMode widthMode, float_t height,
                                                                    ::UnityEngine::UIElements::__VisualElement__MeasureMode heightMode, ::UnityEngine::UIElements::ITextHandle* textHandle);

  /// @brief Method GetFontAsset addr 0x2e46220 size 0x128 virtual false final false
  static inline ::UnityEngine::TextCore::Text::FontAsset* GetFontAsset(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParam);

  /// @brief Method GetFontAsset addr 0x2e46f0c size 0x16c virtual false final false
  static inline ::UnityEngine::TextCore::Text::FontAsset* GetFontAsset(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetFont addr 0x2e4713c size 0xf0 virtual false final false
  static inline ::UnityEngine::Font* GetFont(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParam);

  /// @brief Method GetFont addr 0x2e4722c size 0x15c virtual false final false
  static inline ::UnityEngine::Font* GetFont(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method IsFontAssigned addr 0x2e46e3c size 0xc8 virtual false final false
  static inline bool IsFontAssigned(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method IsFontAssigned addr 0x2e47388 size 0x84 virtual false final false
  static inline bool IsFontAssigned(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams);

  /// @brief Method GetTextSettingsFrom addr 0x2e47078 size 0xc4 virtual false final false
  static inline ::UnityEngine::UIElements::PanelTextSettings* GetTextSettingsFrom(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetTextSettingsFrom addr 0x2e46168 size 0xb8 virtual false final false
  static inline ::UnityEngine::UIElements::PanelTextSettings* GetTextSettingsFrom(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParam);

  /// @brief Method GetTextCoreSettingsForElement addr 0x2e47540 size 0x3b4 virtual false final false
  static inline ::UnityEngine::UIElements::UIR::TextCoreSettings GetTextCoreSettingsForElement(::UnityEngine::UIElements::VisualElement* ve);

  // Ctor Parameters [CppParam { name: "", ty: "TextUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextUtilities(TextUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextUtilities(TextUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextUtilities*, "UnityEngine.UIElements", "TextUtilities");
