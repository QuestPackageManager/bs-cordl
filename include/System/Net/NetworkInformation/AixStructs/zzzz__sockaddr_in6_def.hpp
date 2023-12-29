#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/AixStructs/zzzz__in6_addr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(sockaddr_in6)
namespace System::Net::NetworkInformation::AixStructs {
struct in6_addr;
}
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct sockaddr_in6;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::sockaddr_in6);
// Type: System.Net.NetworkInformation.AixStructs::sockaddr_in6
// SizeInfo { instance_size: 24, native_size: 28, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8146))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8147))
// CS Name: ::System.Net.NetworkInformation.AixStructs::sockaddr_in6
struct CORDL_TYPE sockaddr_in6 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "sin6_len", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sin6_family", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "sin6_port", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sin6_flowinfo", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "sin6_addr", ty:
  // "::System::Net::NetworkInformation::AixStructs::in6_addr", modifiers: "", def_value: None }, CppParam { name: "sin6_scope_id", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr sockaddr_in6(uint8_t sin6_len, uint8_t sin6_family, uint16_t sin6_port, uint32_t sin6_flowinfo, ::System::Net::NetworkInformation::AixStructs::in6_addr sin6_addr,
                         uint32_t sin6_scope_id) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr sockaddr_in6();

  /// @brief Field sin6_len, offset: 0x0, size: 0x1, def value: None
  uint8_t sin6_len;

  /// @brief Field sin6_family, offset: 0x1, size: 0x1, def value: None
  uint8_t sin6_family;

  /// @brief Field sin6_port, offset: 0x2, size: 0x2, def value: None
  uint16_t sin6_port;

  /// @brief Field sin6_flowinfo, offset: 0x4, size: 0x4, def value: None
  uint32_t sin6_flowinfo;

  /// @brief Field sin6_addr, offset: 0x8, size: 0x8, def value: None
  ::System::Net::NetworkInformation::AixStructs::in6_addr sin6_addr;

  /// @brief Field sin6_scope_id, offset: 0x10, size: 0x4, def value: None
  uint32_t sin6_scope_id;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::sockaddr_in6, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_in6, sin6_len) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_in6, sin6_family) == 0x1, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_in6, sin6_port) == 0x2, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_in6, sin6_flowinfo) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_in6, sin6_addr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_in6, sin6_scope_id) == 0x10, "Offset mismatch!");

} // namespace System::Net::NetworkInformation::AixStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::sockaddr_in6, "System.Net.NetworkInformation.AixStructs", "sockaddr_in6");
