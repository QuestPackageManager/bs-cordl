#pragma once
// IWYU pragma private; include "System/Net/IPAddressParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPAddressParser)
namespace System::Net {
class IPAddress;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Net {
class IPAddressParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::IPAddressParser);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.IPAddressParser
class CORDL_TYPE IPAddressParser : public ::System::Object {
public:
  // Declarations
  /// @brief Method AppendHex, addr 0x448eab8, size 0x68, virtual false, abstract: false, final false
  static inline void AppendHex(uint16_t value, ::System::Text::StringBuilder* buffer);

  /// @brief Method AppendSections, addr 0x448e8d0, size 0x1b4, virtual false, abstract: false, final false
  static inline void AppendSections(::ArrayW<uint16_t, ::Array<uint16_t>*> address, int32_t fromInclusive, int32_t toExclusive, ::System::Text::StringBuilder* buffer);

  /// @brief Method ExtractIPv4Address, addr 0x448ea84, size 0x34, virtual false, abstract: false, final false
  static inline uint32_t ExtractIPv4Address(::ArrayW<uint16_t, ::Array<uint16_t>*> address);

  /// @brief Method FormatIPv4AddressNumber, addr 0x448e6f8, size 0xb8, virtual false, abstract: false, final false
  static inline void FormatIPv4AddressNumber(int32_t number, ::cordl_internals::Ptr<char16_t> addressString, ::ByRef<int32_t> offset);

  /// @brief Method IPv4AddressToString, addr 0x448da6c, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW IPv4AddressToString(uint32_t address);

  /// @brief Method IPv4AddressToString, addr 0x448e688, size 0x70, virtual false, abstract: false, final false
  static inline void IPv4AddressToString(uint32_t address, ::System::Text::StringBuilder* destination);

  /// @brief Method IPv4AddressToStringHelper, addr 0x448e5ec, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t IPv4AddressToStringHelper(uint32_t address, ::cordl_internals::Ptr<char16_t> addressString);

  /// @brief Method IPv6AddressToString, addr 0x448da58, size 0x14, virtual false, abstract: false, final false
  static inline ::StringW IPv6AddressToString(::ArrayW<uint16_t, ::Array<uint16_t>*> address, uint32_t scopeId);

  /// @brief Method IPv6AddressToStringHelper, addr 0x448e7b0, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* IPv6AddressToStringHelper(::ArrayW<uint16_t, ::Array<uint16_t>*> address, uint32_t scopeId);

  /// @brief Method Ipv4StringToAddress, addr 0x448e53c, size 0xb0, virtual false, abstract: false, final false
  static inline bool Ipv4StringToAddress(::System::ReadOnlySpan_1<char16_t> ipSpan, ::ByRef<int64_t> address);

  /// @brief Method Ipv6StringToAddress, addr 0x448e3c8, size 0x174, virtual false, abstract: false, final false
  static inline bool Ipv6StringToAddress(::System::ReadOnlySpan_1<char16_t> ipSpan, ::cordl_internals::Ptr<uint16_t> numbers, int32_t numbersLength, ::ByRef<uint32_t> scope);

  /// @brief Method Parse, addr 0x448d3d0, size 0x1c4, virtual false, abstract: false, final false
  static inline ::System::Net::IPAddress* Parse(::System::ReadOnlySpan_1<char16_t> ipSpan, bool tryParse);

  /// @brief Method Reverse, addr 0x448eb20, size 0xc, virtual false, abstract: false, final false
  static inline uint16_t Reverse(uint16_t number);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPAddressParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IPAddressParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPAddressParser(IPAddressParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPAddressParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPAddressParser(IPAddressParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9552 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::IPAddressParser, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::IPAddressParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IPAddressParser*, "System.Net", "IPAddressParser");
