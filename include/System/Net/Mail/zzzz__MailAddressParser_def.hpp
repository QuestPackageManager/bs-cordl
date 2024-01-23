#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MailAddressParser)
namespace System::Net::Mail {
class MailAddress;
}
// Forward declare root types
namespace System::Net::Mail {
class MailAddressParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Mail::MailAddressParser);
// Type: System.Net.Mail::MailAddressParser
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Mail {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9378))
// CS Name: ::System.Net.Mail::MailAddressParser*
class CORDL_TYPE MailAddressParser : public ::System::Object {
public:
  // Declarations
  /// @brief Method ParseAddress, addr 0x2901f94, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Net::Mail::MailAddress* ParseAddress(::StringW data);

  /// @brief Method ParseAddress, addr 0x2901fc4, size 0x378, virtual false, abstract: false, final false
  static inline ::System::Net::Mail::MailAddress* ParseAddress(::StringW data, bool expectMultipleAddresses, ByRef<int32_t> index);

  /// @brief Method ReadCfwsAndThrowIfIncomplete, addr 0x290233c, size 0x60, virtual false, abstract: false, final false
  static inline int32_t ReadCfwsAndThrowIfIncomplete(::StringW data, int32_t index);

  /// @brief Method ParseDomain, addr 0x290239c, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW ParseDomain(::StringW data, ByRef<int32_t> index);

  /// @brief Method ParseLocalPart, addr 0x2902484, size 0x2d4, virtual false, abstract: false, final false
  static inline ::StringW ParseLocalPart(::StringW data, ByRef<int32_t> index, bool expectAngleBracket, bool expectMultipleAddresses);

  /// @brief Method ParseDisplayName, addr 0x2902758, size 0x204, virtual false, abstract: false, final false
  static inline ::StringW ParseDisplayName(::StringW data, ByRef<int32_t> index, bool expectMultipleAddresses);

  /// @brief Method NormalizeOrThrow, addr 0x2902cbc, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW NormalizeOrThrow(::StringW input);

  // Ctor Parameters [CppParam { name: "", ty: "MailAddressParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MailAddressParser(MailAddressParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MailAddressParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MailAddressParser(MailAddressParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MailAddressParser();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mail::MailAddressParser, 0x10>, "Size mismatch!");

} // namespace System::Net::Mail
NEED_NO_BOX(::System::Net::Mail::MailAddressParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mail::MailAddressParser*, "System.Net.Mail", "MailAddressParser");
