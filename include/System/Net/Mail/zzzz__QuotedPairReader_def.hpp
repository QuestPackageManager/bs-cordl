#pragma once
// IWYU pragma private; include "System/Net/Mail/QuotedPairReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QuotedPairReader)
// Forward declare root types
namespace System::Net::Mail {
class QuotedPairReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Mail::QuotedPairReader);
// Type: System.Net.Mail::QuotedPairReader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Mail {
// Is value type: false
// CS Name: ::System.Net.Mail::QuotedPairReader*
class CORDL_TYPE QuotedPairReader : public ::System::Object {
public:
  // Declarations
  /// @brief Method CountBackslashes, addr 0x2f5e578, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t CountBackslashes(::StringW data, int32_t index);

  /// @brief Method CountQuotedChars, addr 0x2f5d010, size 0x194, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mail::QuotedPairReader, 0x10>, "Size mismatch!");

} // namespace System::Net::Mail
NEED_NO_BOX(::System::Net::Mail::QuotedPairReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mail::QuotedPairReader*, "System.Net.Mail", "QuotedPairReader");
