#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SmallXmlParserException)
// Forward declare root types
namespace Mono::Xml {
class SmallXmlParserException;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Xml::SmallXmlParserException);
// Type: Mono.Xml::SmallXmlParserException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Xml {
// Is value type: false
// CS Name: ::Mono.Xml::SmallXmlParserException*
class CORDL_TYPE SmallXmlParserException : public ::System::SystemException {
public:
  // Declarations
  /// @brief Field column, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_column, put = __cordl_internal_set_column)) int32_t column;

  /// @brief Field line, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_line, put = __cordl_internal_set_line)) int32_t line;

  static inline ::Mono::Xml::SmallXmlParserException* New_ctor(::StringW msg, int32_t line, int32_t column);

  constexpr int32_t const& __cordl_internal_get_column() const;

  constexpr int32_t& __cordl_internal_get_column();

  constexpr int32_t const& __cordl_internal_get_line() const;

  constexpr int32_t& __cordl_internal_get_line();

  constexpr void __cordl_internal_set_column(int32_t value);

  constexpr void __cordl_internal_set_line(int32_t value);

  /// @brief Method .ctor, addr 0x2504388, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::StringW msg, int32_t line, int32_t column);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmallXmlParserException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmallXmlParserException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmallXmlParserException(SmallXmlParserException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmallXmlParserException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmallXmlParserException(SmallXmlParserException const&) = delete;

  /// @brief Field line, offset: 0x8c, size: 0x4, def value: None
  int32_t ___line;

  /// @brief Field column, offset: 0x90, size: 0x4, def value: None
  int32_t ___column;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Xml::SmallXmlParserException, 0x98>, "Size mismatch!");

static_assert(offsetof(::Mono::Xml::SmallXmlParserException, ___line) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::SmallXmlParserException, ___column) == 0x90, "Offset mismatch!");

} // namespace Mono::Xml
NEED_NO_BOX(::Mono::Xml::SmallXmlParserException);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Xml::SmallXmlParserException*, "Mono.Xml", "SmallXmlParserException");
