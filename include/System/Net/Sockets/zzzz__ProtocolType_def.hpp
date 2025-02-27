#pragma once
// IWYU pragma private; include "System/Net/Sockets/ProtocolType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProtocolType)
// Forward declare root types
namespace System::Net::Sockets {
struct ProtocolType;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::ProtocolType);
// Dependencies
namespace System::Net::Sockets {
// Is value type: true
// CS Name: System.Net.Sockets.ProtocolType
struct CORDL_TYPE ProtocolType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProtocolType_Unwrapped
  enum struct __ProtocolType_Unwrapped : int32_t {
    __E_IP = static_cast<int32_t>(0x0),
    __E_IPv6HopByHopOptions = static_cast<int32_t>(0x0),
    __E_Icmp = static_cast<int32_t>(0x1),
    __E_Igmp = static_cast<int32_t>(0x2),
    __E_Ggp = static_cast<int32_t>(0x3),
    __E_IPv4 = static_cast<int32_t>(0x4),
    __E_Tcp = static_cast<int32_t>(0x6),
    __E_Pup = static_cast<int32_t>(0xc),
    __E_Udp = static_cast<int32_t>(0x11),
    __E_Idp = static_cast<int32_t>(0x16),
    __E_IPv6 = static_cast<int32_t>(0x29),
    __E_IPv6RoutingHeader = static_cast<int32_t>(0x2b),
    __E_IPv6FragmentHeader = static_cast<int32_t>(0x2c),
    __E_IPSecEncapsulatingSecurityPayload = static_cast<int32_t>(0x32),
    __E_IPSecAuthenticationHeader = static_cast<int32_t>(0x33),
    __E_IcmpV6 = static_cast<int32_t>(0x3a),
    __E_IPv6NoNextHeader = static_cast<int32_t>(0x3b),
    __E_IPv6DestinationOptions = static_cast<int32_t>(0x3c),
    __E_ND = static_cast<int32_t>(0x4d),
    __E_Raw = static_cast<int32_t>(0xff),
    __E_Unspecified = static_cast<int32_t>(0x0),
    __E_Ipx = static_cast<int32_t>(0x3e8),
    __E_Spx = static_cast<int32_t>(0x4e8),
    __E_SpxII = static_cast<int32_t>(0x4e9),
    __E_Unknown = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProtocolType_Unwrapped() const noexcept {
    return static_cast<__ProtocolType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProtocolType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProtocolType(int32_t value__) noexcept;

  /// @brief Field Ggp value: I32(3)
  static ::System::Net::Sockets::ProtocolType const Ggp;

  /// @brief Field IP value: I32(0)
  static ::System::Net::Sockets::ProtocolType const IP;

  /// @brief Field IPSecAuthenticationHeader value: I32(51)
  static ::System::Net::Sockets::ProtocolType const IPSecAuthenticationHeader;

  /// @brief Field IPSecEncapsulatingSecurityPayload value: I32(50)
  static ::System::Net::Sockets::ProtocolType const IPSecEncapsulatingSecurityPayload;

  /// @brief Field IPv4 value: I32(4)
  static ::System::Net::Sockets::ProtocolType const IPv4;

  /// @brief Field IPv6 value: I32(41)
  static ::System::Net::Sockets::ProtocolType const IPv6;

  /// @brief Field IPv6DestinationOptions value: I32(60)
  static ::System::Net::Sockets::ProtocolType const IPv6DestinationOptions;

  /// @brief Field IPv6FragmentHeader value: I32(44)
  static ::System::Net::Sockets::ProtocolType const IPv6FragmentHeader;

  /// @brief Field IPv6HopByHopOptions value: I32(0)
  static ::System::Net::Sockets::ProtocolType const IPv6HopByHopOptions;

  /// @brief Field IPv6NoNextHeader value: I32(59)
  static ::System::Net::Sockets::ProtocolType const IPv6NoNextHeader;

  /// @brief Field IPv6RoutingHeader value: I32(43)
  static ::System::Net::Sockets::ProtocolType const IPv6RoutingHeader;

  /// @brief Field Icmp value: I32(1)
  static ::System::Net::Sockets::ProtocolType const Icmp;

  /// @brief Field IcmpV6 value: I32(58)
  static ::System::Net::Sockets::ProtocolType const IcmpV6;

  /// @brief Field Idp value: I32(22)
  static ::System::Net::Sockets::ProtocolType const Idp;

  /// @brief Field Igmp value: I32(2)
  static ::System::Net::Sockets::ProtocolType const Igmp;

  /// @brief Field Ipx value: I32(1000)
  static ::System::Net::Sockets::ProtocolType const Ipx;

  /// @brief Field ND value: I32(77)
  static ::System::Net::Sockets::ProtocolType const ND;

  /// @brief Field Pup value: I32(12)
  static ::System::Net::Sockets::ProtocolType const Pup;

  /// @brief Field Raw value: I32(255)
  static ::System::Net::Sockets::ProtocolType const Raw;

  /// @brief Field Spx value: I32(1256)
  static ::System::Net::Sockets::ProtocolType const Spx;

  /// @brief Field SpxII value: I32(1257)
  static ::System::Net::Sockets::ProtocolType const SpxII;

  /// @brief Field Tcp value: I32(6)
  static ::System::Net::Sockets::ProtocolType const Tcp;

  /// @brief Field Udp value: I32(17)
  static ::System::Net::Sockets::ProtocolType const Udp;

  /// @brief Field Unknown value: I32(-1)
  static ::System::Net::Sockets::ProtocolType const Unknown;

  /// @brief Field Unspecified value: I32(0)
  static ::System::Net::Sockets::ProtocolType const Unspecified;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9864 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::ProtocolType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::ProtocolType, 0x4>, "Size mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::ProtocolType, "System.Net.Sockets", "ProtocolType");
