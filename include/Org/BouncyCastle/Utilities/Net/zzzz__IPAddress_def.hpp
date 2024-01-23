#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPAddress)
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Net {
class IPAddress;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Net::IPAddress);
// Type: Org.BouncyCastle.Utilities.Net::IPAddress
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1816))
// CS Name: ::Org.BouncyCastle.Utilities.Net::IPAddress*
class CORDL_TYPE IPAddress : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsValid, addr 0x1160568, size 0x28, virtual false, abstract: false, final false
  static inline bool IsValid(::StringW address);

  /// @brief Method IsValidWithNetMask, addr 0x11606d8, size 0x28, virtual false, abstract: false, final false
  static inline bool IsValidWithNetMask(::StringW address);

  /// @brief Method IsValidIPv4, addr 0x1160590, size 0xa4, virtual false, abstract: false, final false
  static inline bool IsValidIPv4(::StringW address);

  /// @brief Method unsafeIsValidIPv4, addr 0x1160840, size 0xf8, virtual false, abstract: false, final false
  static inline bool unsafeIsValidIPv4(::StringW address);

  /// @brief Method IsValidIPv4WithNetmask, addr 0x1160700, size 0xa0, virtual false, abstract: false, final false
  static inline bool IsValidIPv4WithNetmask(::StringW address);

  /// @brief Method IsValidIPv6WithNetmask, addr 0x11607a0, size 0xa0, virtual false, abstract: false, final false
  static inline bool IsValidIPv6WithNetmask(::StringW address);

  /// @brief Method IsMaskValue, addr 0x1160938, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsMaskValue(::StringW component, int32_t size);

  /// @brief Method IsValidIPv6, addr 0x1160634, size 0xa4, virtual false, abstract: false, final false
  static inline bool IsValidIPv6(::StringW address);

  /// @brief Method unsafeIsValidIPv6, addr 0x1160964, size 0x1a8, virtual false, abstract: false, final false
  static inline bool unsafeIsValidIPv6(::StringW address);

  static inline ::Org::BouncyCastle::Utilities::Net::IPAddress* New_ctor();

  /// @brief Method .ctor, addr 0x1160b0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IPAddress", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPAddress(IPAddress&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPAddress", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPAddress(IPAddress const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPAddress();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Net::IPAddress, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Net
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Net::IPAddress);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Net::IPAddress*, "Org.BouncyCastle.Utilities.Net", "IPAddress");
