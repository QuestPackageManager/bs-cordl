#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FontDefinition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontDefinition)
namespace System {
class Object;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct FontDefinition;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::FontDefinition);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.FontDefinition
struct CORDL_TYPE FontDefinition {
public:
  // Declarations
  __declspec(property(get = get_font)) ::UnityW<::UnityEngine::Font> font;

  __declspec(property(get = get_fontAsset)) ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>*();

  /// @brief Method Equals, addr 0x4a6bd90, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a6bd48, size 0x48, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::FontDefinition other);

  /// @brief Method FromFont, addr 0x4a6baf4, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FontDefinition FromFont(::UnityEngine::Font* f);

  /// @brief Method FromObject, addr 0x4a6bb08, size 0x118, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FontDefinition FromObject(::System::Object* obj);

  /// @brief Method FromSDFFont, addr 0x4a6bafc, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FontDefinition FromSDFFont(::UnityEngine::TextCore::Text::FontAsset* f);

  /// @brief Method GetHashCode, addr 0x4a6be08, size 0xe0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsEmpty, addr 0x4a6bc20, size 0x98, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method ToString, addr 0x4a6bcb8, size 0x90, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_font, addr 0x4a6bae4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> get_font();

  /// @brief Method get_fontAsset, addr 0x4a6baec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> get_fontAsset();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>* i___System__IEquatable_1___UnityEngine__UIElements__FontDefinition_();

  /// @brief Method op_Equality, addr 0x4a6bee8, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::FontDefinition left, ::UnityEngine::UIElements::FontDefinition right);

  /// @brief Method op_Inequality, addr 0x4a6bf14, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::FontDefinition left, ::UnityEngine::UIElements::FontDefinition right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FontDefinition();

  // Ctor Parameters [CppParam { name: "m_Font", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: None }, CppParam { name: "m_FontAsset", ty:
  // "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: None }]
  constexpr FontDefinition(::UnityW<::UnityEngine::Font> m_Font, ::UnityW<::UnityEngine::TextCore::Text::FontAsset> m_FontAsset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6064 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Font, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Font> m_Font;

  /// @brief Field m_FontAsset, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> m_FontAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::FontDefinition, m_Font) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FontDefinition, m_FontAsset) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FontDefinition, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FontDefinition, "UnityEngine.UIElements", "FontDefinition");
