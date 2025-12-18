#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixStructs/sockaddr_in.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(sockaddr_in)
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct sockaddr_in;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::sockaddr_in);
// Dependencies
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// CS Name: System.Net.NetworkInformation.AixStructs.sockaddr_in
struct CORDL_TYPE sockaddr_in {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr sockaddr_in();

  // Ctor Parameters [CppParam { name: "sin_len", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sin_family", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "sin_port", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sin_addr", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr sockaddr_in(uint8_t sin_len, uint8_t sin_family, uint16_t sin_port, uint32_t sin_addr) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11707 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field sin_len, offset: 0x0, size: 0x1, def value: None
  uint8_t sin_len;

  /// @brief Field sin_family, offset: 0x1, size: 0x1, def value: None
  uint8_t sin_family;

  /// @brief Field sin_port, offset: 0x2, size: 0x2, def value: None
  uint16_t sin_port;

  /// @brief Field sin_addr, offset: 0x4, size: 0x4, def value: None
  uint32_t sin_addr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_in, sin_len) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_in, sin_family) == 0x1, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_in, sin_port) == 0x2, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_in, sin_addr) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::sockaddr_in, 0x8>, "Size mismatch!");

} // namespace System::Net::NetworkInformation::AixStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::sockaddr_in, "System.Net.NetworkInformation.AixStructs", "sockaddr_in");
