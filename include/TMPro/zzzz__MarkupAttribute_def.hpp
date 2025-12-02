#pragma once
// IWYU pragma private; include "TMPro/MarkupAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MarkupAttribute)
// Forward declare root types
namespace TMPro {
struct MarkupAttribute;
}
// Write type traits
MARK_VAL_T(::TMPro::MarkupAttribute);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.MarkupAttribute
struct CORDL_TYPE MarkupAttribute {
public:
  // Declarations
  __declspec(property(get = get_NameHashCode, put = set_NameHashCode)) int32_t NameHashCode;

  __declspec(property(get = get_ValueHashCode, put = set_ValueHashCode)) int32_t ValueHashCode;

  __declspec(property(get = get_ValueLength, put = set_ValueLength)) int32_t ValueLength;

  __declspec(property(get = get_ValueStartIndex, put = set_ValueStartIndex)) int32_t ValueStartIndex;

  /// @brief Method get_NameHashCode, addr 0x67869e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_NameHashCode();

  /// @brief Method get_ValueHashCode, addr 0x67869f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ValueHashCode();

  /// @brief Method get_ValueLength, addr 0x6786a14, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ValueLength();

  /// @brief Method get_ValueStartIndex, addr 0x6786a04, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ValueStartIndex();

  /// @brief Method set_NameHashCode, addr 0x67869ec, size 0x8, virtual false, abstract: false, final false
  inline void set_NameHashCode(int32_t value);

  /// @brief Method set_ValueHashCode, addr 0x67869fc, size 0x8, virtual false, abstract: false, final false
  inline void set_ValueHashCode(int32_t value);

  /// @brief Method set_ValueLength, addr 0x6786a1c, size 0x8, virtual false, abstract: false, final false
  inline void set_ValueLength(int32_t value);

  /// @brief Method set_ValueStartIndex, addr 0x6786a0c, size 0x8, virtual false, abstract: false, final false
  inline void set_ValueStartIndex(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkupAttribute();

  // Ctor Parameters [CppParam { name: "m_NameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ValueHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "m_ValueStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ValueLength", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MarkupAttribute(int32_t m_NameHashCode, int32_t m_ValueHashCode, int32_t m_ValueStartIndex, int32_t m_ValueLength) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15971 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_NameHashCode, offset: 0x0, size: 0x4, def value: None
  int32_t m_NameHashCode;

  /// @brief Field m_ValueHashCode, offset: 0x4, size: 0x4, def value: None
  int32_t m_ValueHashCode;

  /// @brief Field m_ValueStartIndex, offset: 0x8, size: 0x4, def value: None
  int32_t m_ValueStartIndex;

  /// @brief Field m_ValueLength, offset: 0xc, size: 0x4, def value: None
  int32_t m_ValueLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::MarkupAttribute, m_NameHashCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::MarkupAttribute, m_ValueHashCode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::MarkupAttribute, m_ValueStartIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::MarkupAttribute, m_ValueLength) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::MarkupAttribute, 0x10>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MarkupAttribute, "TMPro", "MarkupAttribute");
