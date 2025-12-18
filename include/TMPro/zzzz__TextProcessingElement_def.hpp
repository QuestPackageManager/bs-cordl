#pragma once
// IWYU pragma private; include "TMPro/TextProcessingElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__CharacterElement_def.hpp"
#include "TMPro/zzzz__MarkupElement_def.hpp"
#include "TMPro/zzzz__TextProcessingElementType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextProcessingElement)
namespace TMPro {
struct CharacterElement;
}
namespace TMPro {
struct MarkupElement;
}
namespace TMPro {
class TMP_TextElement;
}
namespace TMPro {
struct TextProcessingElementType;
}
// Forward declare root types
namespace TMPro {
struct TextProcessingElement;
}
// Write type traits
MARK_VAL_T(::TMPro::TextProcessingElement);
// Dependencies TMPro.CharacterElement, TMPro.MarkupElement, TMPro.TextProcessingElementType
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TextProcessingElement
struct CORDL_TYPE TextProcessingElement {
public:
  // Declarations
  __declspec(property(get = get_CharacterElement)) ::TMPro::CharacterElement CharacterElement;

  __declspec(property(get = get_ElementType, put = set_ElementType)) ::TMPro::TextProcessingElementType ElementType;

  __declspec(property(get = get_Length, put = set_Length)) int32_t Length;

  __declspec(property(get = get_MarkupElement, put = set_MarkupElement)) ::TMPro::MarkupElement MarkupElement;

  __declspec(property(get = get_StartIndex, put = set_StartIndex)) int32_t StartIndex;

  /// @brief Method DebuggerDisplay, addr 0x67ee8c0, size 0x13c, virtual false, abstract: false, final false
  inline ::StringW DebuggerDisplay();

  /// @brief Method .ctor, addr 0x67ee858, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::TMPro::CharacterElement characterElement, int32_t startIndex, int32_t length);

  /// @brief Method .ctor, addr 0x67ee81c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::TMPro::TextProcessingElementType elementType, int32_t startIndex, int32_t length);

  /// @brief Method .ctor, addr 0x67ee870, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::TMPro::MarkupElement markupElement);

  /// @brief Method .ctor, addr 0x67ee830, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::TMPro::TMP_TextElement* textElement, int32_t startIndex, int32_t length);

  /// @brief Method get_CharacterElement, addr 0x67ee800, size 0xc, virtual false, abstract: false, final false
  inline ::TMPro::CharacterElement get_CharacterElement();

  /// @brief Method get_ElementType, addr 0x67ee7d0, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TextProcessingElementType get_ElementType();

  /// @brief Method get_Length, addr 0x67ee7f0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_MarkupElement, addr 0x67ee80c, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::MarkupElement get_MarkupElement();

  /// @brief Method get_StartIndex, addr 0x67ee7e0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_StartIndex();

  /// @brief Method get_Undefined, addr 0x67ee8b0, size 0x10, virtual false, abstract: false, final false
  static inline ::TMPro::TextProcessingElement get_Undefined();

  /// @brief Method set_ElementType, addr 0x67ee7d8, size 0x8, virtual false, abstract: false, final false
  inline void set_ElementType(::TMPro::TextProcessingElementType value);

  /// @brief Method set_Length, addr 0x67ee7f8, size 0x8, virtual false, abstract: false, final false
  inline void set_Length(int32_t value);

  /// @brief Method set_MarkupElement, addr 0x67ee814, size 0x8, virtual false, abstract: false, final false
  inline void set_MarkupElement(::TMPro::MarkupElement value);

  /// @brief Method set_StartIndex, addr 0x67ee7e8, size 0x8, virtual false, abstract: false, final false
  inline void set_StartIndex(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextProcessingElement();

  // Ctor Parameters [CppParam { name: "m_ElementType", ty: "::TMPro::TextProcessingElementType", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CharacterElement", ty: "::TMPro::CharacterElement", modifiers: "", def_value:
  // None }, CppParam { name: "m_MarkupElement", ty: "::TMPro::MarkupElement", modifiers: "", def_value: None }]
  constexpr TextProcessingElement(::TMPro::TextProcessingElementType m_ElementType, int32_t m_StartIndex, int32_t m_Length, ::TMPro::CharacterElement m_CharacterElement,
                                  ::TMPro::MarkupElement m_MarkupElement) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15987 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field m_ElementType, offset: 0x0, size: 0x4, def value: None
  ::TMPro::TextProcessingElementType m_ElementType;

  /// @brief Field m_StartIndex, offset: 0x4, size: 0x4, def value: None
  int32_t m_StartIndex;

  /// @brief Field m_Length, offset: 0x8, size: 0x4, def value: None
  int32_t m_Length;

  /// @brief Field m_CharacterElement, offset: 0x10, size: 0x10, def value: None
  ::TMPro::CharacterElement m_CharacterElement;

  /// @brief Field m_MarkupElement, offset: 0x20, size: 0x8, def value: None
  ::TMPro::MarkupElement m_MarkupElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TextProcessingElement, m_ElementType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextProcessingElement, m_StartIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextProcessingElement, m_Length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextProcessingElement, m_CharacterElement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextProcessingElement, m_MarkupElement) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TextProcessingElement, 0x28>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextProcessingElement, "TMPro", "TextProcessingElement");
