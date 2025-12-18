#pragma once
// IWYU pragma private; include "TMPro/MarkupElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.MarkupElement
struct CORDL_TYPE MarkupElement {
public:
  // Declarations
  __declspec(property(get = get_Attributes, put = set_Attributes)) ::ArrayW<::TMPro::MarkupAttribute, ::Array<::TMPro::MarkupAttribute>*> Attributes;

  __declspec(property(get = get_NameHashCode, put = set_NameHashCode)) int32_t NameHashCode;

  __declspec(property(get = get_ValueHashCode, put = set_ValueHashCode)) int32_t ValueHashCode;

  __declspec(property(get = get_ValueLength, put = set_ValueLength)) int32_t ValueLength;

  __declspec(property(get = get_ValueStartIndex, put = set_ValueStartIndex)) int32_t ValueStartIndex;

  /// @brief Method .ctor, addr 0x67ee744, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t nameHashCode, int32_t startIndex, int32_t length);

  /// @brief Method get_Attributes, addr 0x67ee734, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::TMPro::MarkupAttribute, ::Array<::TMPro::MarkupAttribute>*> get_Attributes();

  /// @brief Method get_NameHashCode, addr 0x67ee59c, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_NameHashCode();

  /// @brief Method get_ValueHashCode, addr 0x67ee644, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_ValueHashCode();

  /// @brief Method get_ValueLength, addr 0x67ee6e4, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_ValueLength();

  /// @brief Method get_ValueStartIndex, addr 0x67ee694, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_ValueStartIndex();

  /// @brief Method set_Attributes, addr 0x67ee73c, size 0x8, virtual false, abstract: false, final false
  inline void set_Attributes(::ArrayW<::TMPro::MarkupAttribute, ::Array<::TMPro::MarkupAttribute>*> value);

  /// @brief Method set_NameHashCode, addr 0x67ee5c4, size 0x80, virtual false, abstract: false, final false
  inline void set_NameHashCode(int32_t value);

  /// @brief Method set_ValueHashCode, addr 0x67ee66c, size 0x28, virtual false, abstract: false, final false
  inline void set_ValueHashCode(int32_t value);

  /// @brief Method set_ValueLength, addr 0x67ee70c, size 0x28, virtual false, abstract: false, final false
  inline void set_ValueLength(int32_t value);

  /// @brief Method set_ValueStartIndex, addr 0x67ee6bc, size 0x28, virtual false, abstract: false, final false
  inline void set_ValueStartIndex(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkupElement();

  // Ctor Parameters [CppParam { name: "m_Attributes", ty: "::ArrayW<::TMPro::MarkupAttribute,::Array<::TMPro::MarkupAttribute>*>", modifiers: "", def_value: None }]
  constexpr MarkupElement(::ArrayW<::TMPro::MarkupAttribute, ::Array<::TMPro::MarkupAttribute>*> m_Attributes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15986 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Attributes, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::TMPro::MarkupAttribute, ::Array<::TMPro::MarkupAttribute>*> m_Attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::MarkupElement, m_Attributes) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::MarkupElement, 0x8>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MarkupElement, "TMPro", "MarkupElement");
