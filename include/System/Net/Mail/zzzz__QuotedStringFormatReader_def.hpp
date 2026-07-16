#pragma once
// IWYU pragma private; include "System/Net/Mail/QuotedStringFormatReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QuotedStringFormatReader)
// Forward declare root types
namespace System::Net::Mail {
class QuotedStringFormatReader;
}
// Write type traits
MARK_REF_T(::System::Net::Mail::QuotedStringFormatReader*);
DEFINE_IL2CPP_CLASS(::System::Net::Mail::QuotedStringFormatReader*, "System.Net.Mail", "QuotedStringFormatReader");
// Dependencies System.Object
namespace System::Net::Mail {
// Is value type: false
// CS Name: System.Net.Mail.QuotedStringFormatReader
class CORDL_TYPE QuotedStringFormatReader : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsValidQtext, addr 0x636a34c, size 0xbc, virtual false, abstract: false, final false
  static inline bool IsValidQtext(bool allowUnicode, char16_t ch);

  /// @brief Method ReadReverseQuoted, addr 0x6369f28, size 0x1bc, virtual false, abstract: false, final false
  static inline int32_t ReadReverseQuoted(::StringW data, int32_t index, bool permitUnicode);

  /// @brief Method ReadReverseUnQuoted, addr 0x636a0e4, size 0x19c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11767 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Mail::QuotedStringFormatReader) == 0x10, "Size mismatch!");

} // namespace System::Net::Mail
