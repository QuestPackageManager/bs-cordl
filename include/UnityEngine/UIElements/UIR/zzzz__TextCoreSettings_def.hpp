#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TextCoreSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextCoreSettings)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct TextCoreSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::TextCoreSettings);
// Type: UnityEngine.UIElements.UIR::TextCoreSettings
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::UnityEngine.UIElements.UIR::TextCoreSettings
struct CORDL_TYPE TextCoreSettings {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>*();

  /// @brief Method Equals, addr 0x4948428, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x49484b8, size 0xf4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::UIR::TextCoreSettings other);

  /// @brief Method GetHashCode, addr 0x49485ac, size 0x198, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>* i___System__IEquatable_1___UnityEngine__UIElements__UIR__TextCoreSettings_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextCoreSettings();

  // Ctor Parameters [CppParam { name: "faceColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "outlineColor", ty: "::UnityEngine::Color", modifiers: "", def_value:
  // None }, CppParam { name: "outlineWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "underlayColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam
  // { name: "underlayOffset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "underlaySoftness", ty: "float_t", modifiers: "", def_value: None }]
  constexpr TextCoreSettings(::UnityEngine::Color faceColor, ::UnityEngine::Color outlineColor, float_t outlineWidth, ::UnityEngine::Color underlayColor, ::UnityEngine::Vector2 underlayOffset,
                             float_t underlaySoftness) noexcept;

  /// @brief Field faceColor, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color faceColor;

  /// @brief Field outlineColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color outlineColor;

  /// @brief Field outlineWidth, offset: 0x20, size: 0x4, def value: None
  float_t outlineWidth;

  /// @brief Field underlayColor, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Color underlayColor;

  /// @brief Field underlayOffset, offset: 0x34, size: 0x8, def value: None
  ::UnityEngine::Vector2 underlayOffset;

  /// @brief Field underlaySoftness, offset: 0x3c, size: 0x4, def value: None
  float_t underlaySoftness;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6369 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::TextCoreSettings, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextCoreSettings, faceColor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextCoreSettings, outlineColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextCoreSettings, outlineWidth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextCoreSettings, underlayColor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextCoreSettings, underlayOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextCoreSettings, underlaySoftness) == 0x3c, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::TextCoreSettings, "UnityEngine.UIElements.UIR", "TextCoreSettings");
