#pragma once
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7389))
// CS Name: ::System.Net.Mail::QuotedPairReader*
class CORDL_TYPE QuotedPairReader : public ::System::Object {
public:
  // Declarations
  /// @brief Method CountQuotedChars, addr 0x2906214, size 0x194, virtual false, abstract: false, final false
  static inline int32_t CountQuotedChars(::StringW data, int32_t index, bool permitUnicodeEscaping);

  /// @brief Method CountBackslashes, addr 0x290777c, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t CountBackslashes(::StringW data, int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "QuotedPairReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuotedPairReader(QuotedPairReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuotedPairReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuotedPairReader(QuotedPairReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuotedPairReader();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mail::QuotedPairReader, 0x10>, "Size mismatch!");

} // namespace System::Net::Mail
NEED_NO_BOX(::System::Net::Mail::QuotedPairReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mail::QuotedPairReader*, "System.Net.Mail", "QuotedPairReader");
