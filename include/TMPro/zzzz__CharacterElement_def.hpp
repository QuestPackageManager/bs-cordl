#pragma once
// IWYU pragma private; include "TMPro/CharacterElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CharacterElement)
namespace TMPro {
class TMP_TextElement;
}
// Forward declare root types
namespace TMPro {
struct CharacterElement;
}
// Write type traits
MARK_VAL_T(::TMPro::CharacterElement);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.CharacterElement
struct CORDL_TYPE CharacterElement {
public:
  // Declarations
  __declspec(property(get = get_Unicode, put = set_Unicode)) uint32_t Unicode;

  /// @brief Method .ctor, addr 0x67ee540, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::TMPro::TMP_TextElement* textElement);

  /// @brief Method get_Unicode, addr 0x67ee530, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Unicode();

  /// @brief Method set_Unicode, addr 0x67ee538, size 0x8, virtual false, abstract: false, final false
  inline void set_Unicode(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CharacterElement();

  // Ctor Parameters [CppParam { name: "m_Unicode", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_TextElement", ty: "::TMPro::TMP_TextElement*", modifiers: "", def_value: None
  // }]
  constexpr CharacterElement(uint32_t m_Unicode, ::TMPro::TMP_TextElement* m_TextElement) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15984 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Unicode, offset: 0x0, size: 0x4, def value: None
  uint32_t m_Unicode;

  /// @brief Field m_TextElement, offset: 0x8, size: 0x8, def value: None
  ::TMPro::TMP_TextElement* m_TextElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::CharacterElement, m_Unicode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::CharacterElement, m_TextElement) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::CharacterElement, 0x10>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::CharacterElement, "TMPro", "CharacterElement");
