#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixStructs/sockaddr.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(sockaddr)
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct sockaddr;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::sockaddr);
// Type: System.Net.NetworkInformation.AixStructs::sockaddr
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 1, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// CS Name: ::System.Net.NetworkInformation.AixStructs::sockaddr
struct CORDL_TYPE sockaddr {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr sockaddr();

  // Ctor Parameters [CppParam { name: "sa_len", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sa_family", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr sockaddr(uint8_t sa_len, uint8_t sa_family) noexcept;

  /// @brief Field sa_len, offset: 0x0, size: 0x1, def value: None
  uint8_t sa_len;

  /// @brief Field sa_family, offset: 0x1, size: 0x1, def value: None
  uint8_t sa_family;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9798 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::sockaddr, 0x2>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr, sa_len) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr, sa_family) == 0x1, "Offset mismatch!");

} // namespace System::Net::NetworkInformation::AixStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::sockaddr, "System.Net.NetworkInformation.AixStructs", "sockaddr");
