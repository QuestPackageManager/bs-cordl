#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QuotedStringFormatReader)
// Forward declare root types
namespace System::Net::Mail {
class QuotedStringFormatReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Mail::QuotedStringFormatReader);
// Type: System.Net.Mail::QuotedStringFormatReader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Mail {
// Is value type: false
// CS Name: ::System.Net.Mail::QuotedStringFormatReader*
class CORDL_TYPE QuotedStringFormatReader : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsValidQtext, addr 0x2e30c1c, size 0xb8, virtual false, abstract: false, final false
  static inline bool IsValidQtext(bool allowUnicode, char16_t ch);

  /// @brief Method ReadReverseQuoted, addr 0x2e3080c, size 0x1cc, virtual false, abstract: false, final false
  static inline int32_t ReadReverseQuoted(::StringW data, int32_t index, bool permitUnicode);

  /// @brief Method ReadReverseUnQuoted, addr 0x2e309d8, size 0x1a0, virtual false, abstract: false, final false
  static inline int32_t ReadReverseUnQuoted(::StringW data, int32_t index, bool permitUnicode, bool expectCommaDelimiter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuotedStringFormatReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuotedStringFormatReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuotedStringFormatReader(QuotedStringFormatReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuotedStringFormatReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuotedStringFormatReader(QuotedStringFormatReader const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mail::QuotedStringFormatReader, 0x10>, "Size mismatch!");

} // namespace System::Net::Mail
NEED_NO_BOX(::System::Net::Mail::QuotedStringFormatReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mail::QuotedStringFormatReader*, "System.Net.Mail", "QuotedStringFormatReader");
