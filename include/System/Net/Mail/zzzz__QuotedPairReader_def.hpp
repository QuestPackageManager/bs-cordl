#pragma once
// IWYU pragma private; include "System/Net/Mail/QuotedPairReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QuotedPairReader)
// Forward declare root types
namespace System::Net::Mail {
class QuotedPairReader;
}
// Write type traits
MARK_REF_T(::System::Net::Mail::QuotedPairReader*);
DEFINE_IL2CPP_CLASS(::System::Net::Mail::QuotedPairReader*, "System.Net.Mail", "QuotedPairReader");
// Dependencies System.Object
namespace System::Net::Mail {
// Is value type: false
// CS Name: System.Net.Mail.QuotedPairReader
class CORDL_TYPE QuotedPairReader : public ::System::Object {
public:
  // Declarations
  /// @brief Method CountBackslashes, addr 0x636a280, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t CountBackslashes(::StringW data, int32_t index);

  /// @brief Method CountQuotedChars, addr 0x6368dac, size 0x18c, virtual false, abstract: false, final false
  static inline int32_t CountQuotedChars(::StringW data, int32_t index, bool permitUnicodeEscaping);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuotedPairReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuotedPairReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuotedPairReader(QuotedPairReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuotedPairReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuotedPairReader(QuotedPairReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11766 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Mail::QuotedPairReader) == 0x10, "Size mismatch!");

} // namespace System::Net::Mail
