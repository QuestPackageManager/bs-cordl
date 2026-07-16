#pragma once
// IWYU pragma private; include "System/Net/Mail/MailAddressParser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::Net::Mail::MailAddressParser*);
DEFINE_IL2CPP_CLASS(::System::Net::Mail::MailAddressParser*, "System.Net.Mail", "MailAddressParser");
// Dependencies System.Object
namespace System::Net::Mail {
// Is value type: false
// CS Name: System.Net.Mail.MailAddressParser
class CORDL_TYPE MailAddressParser : public ::System::Object {
public:
  // Declarations
  /// @brief Method NormalizeOrThrow, addr 0x6369e3c, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW NormalizeOrThrow(::StringW input);

  /// @brief Method ParseAddress, addr 0x6369168, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Net::Mail::MailAddress* ParseAddress(::StringW data);

  /// @brief Method ParseAddress, addr 0x6369194, size 0x368, virtual false, abstract: false, final false
  static inline ::System::Net::Mail::MailAddress* ParseAddress(::StringW data, bool expectMultipleAddresses, ::by_ref<int32_t> index);

  /// @brief Method ParseDisplayName, addr 0x6369914, size 0x1f4, virtual false, abstract: false, final false
  static inline ::StringW ParseDisplayName(::StringW data, ::by_ref<int32_t> index, bool expectMultipleAddresses);

  /// @brief Method ParseDomain, addr 0x6369558, size 0xfc, virtual false, abstract: false, final false
  static inline ::StringW ParseDomain(::StringW data, ::by_ref<int32_t> index);

  /// @brief Method ParseLocalPart, addr 0x6369654, size 0x2c0, virtual false, abstract: false, final false
  static inline ::StringW ParseLocalPart(::StringW data, ::by_ref<int32_t> index, bool expectAngleBracket, bool expectMultipleAddresses);

  /// @brief Method ReadCfwsAndThrowIfIncomplete, addr 0x63694fc, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t ReadCfwsAndThrowIfIncomplete(::StringW data, int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MailAddressParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MailAddressParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MailAddressParser(MailAddressParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MailAddressParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MailAddressParser(MailAddressParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11765 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Mail::MailAddressParser) == 0x10, "Size mismatch!");

} // namespace System::Net::Mail
