#pragma once
// IWYU pragma private; include "TMPro\MarkupElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__MarkupAttribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MarkupElement)
namespace TMPro {
struct MarkupAttribute;
}
// Forward declare root types
namespace TMPro {
struct MarkupElement;
}
// Write type traits
MARK_VAL_T(::TMPro::MarkupElement);
DEFINE_IL2CPP_CLASS(::TMPro::MarkupElement, "TMPro", "MarkupElement");
// Dependencies TMPro.MarkupAttribute
namespace TMPro {
// Is value type: true
// CS Name: TMPro.MarkupElement
struct CORDL_TYPE MarkupElement {
public:
  // Declarations
  __declspec(property(get = get_Attributes, put = set_Attributes)) ::ArrayW<::TMPro::MarkupAttribute> Attributes;

  __declspec(property(get = get_NameHashCode, put = set_NameHashCode)) int32_t NameHashCode;

  __declspec(property(get = get_ValueHashCode, put = set_ValueHashCode)) int32_t ValueHashCode;

  __declspec(property(get = get_ValueLength, put = set_ValueLength)) int32_t ValueLength;

  __declspec(property(get = get_ValueStartIndex, put = set_ValueStartIndex)) int32_t ValueStartIndex;

  /// @brief Method .ctor, addr 0x69a6c84, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t nameHashCode, int32_t startIndex, int32_t length);

  /// @brief Method get_Attributes, addr 0x69a6c74, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::TMPro::MarkupAttribute> get_Attributes();

  /// @brief Method get_NameHashCode, addr 0x69a6adc, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_NameHashCode();

  /// @brief Method get_ValueHashCode, addr 0x69a6b84, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_ValueHashCode();

  /// @brief Method get_ValueLength, addr 0x69a6c24, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_ValueLength();

  /// @brief Method get_ValueStartIndex, addr 0x69a6bd4, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_ValueStartIndex();

  /// @brief Method set_Attributes, addr 0x69a6c7c, size 0x8, virtual false, abstract: false, final false
  inline void set_Attributes(::ArrayW<::TMPro::MarkupAttribute> value);

  /// @brief Method set_NameHashCode, addr 0x69a6b04, size 0x80, virtual false, abstract: false, final false
  inline void set_NameHashCode(int32_t value);

  /// @brief Method set_ValueHashCode, addr 0x69a6bac, size 0x28, virtual false, abstract: false, final false
  inline void set_ValueHashCode(int32_t value);

  /// @brief Method set_ValueLength, addr 0x69a6c4c, size 0x28, virtual false, abstract: false, final false
  inline void set_ValueLength(int32_t value);

  /// @brief Method set_ValueStartIndex, addr 0x69a6bfc, size 0x28, virtual false, abstract: false, final false
  inline void set_ValueStartIndex(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkupElement();

  // Ctor Parameters [CppParam { name: "m_Attributes", ty: "::ArrayW<::TMPro::MarkupAttribute>", modifiers: "", def_value: None }]
  constexpr MarkupElement(::ArrayW<::TMPro::MarkupAttribute> m_Attributes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16017 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Attributes, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::TMPro::MarkupAttribute> m_Attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::MarkupElement, m_Attributes) == 0x0, "Offset mismatch!");

static_assert(sizeof(::TMPro::MarkupElement) == 0x8, "Size mismatch!");

} // namespace TMPro
