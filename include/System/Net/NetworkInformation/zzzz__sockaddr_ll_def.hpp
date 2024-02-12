#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(sockaddr_ll)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct sockaddr_ll;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::sockaddr_ll);
// Type: System.Net.NetworkInformation::sockaddr_ll
// SizeInfo { instance_size: 24, native_size: 20, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7285))
// CS Name: ::System.Net.NetworkInformation::sockaddr_ll
struct CORDL_TYPE sockaddr_ll {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "sll_family", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sll_protocol", ty: "uint16_t", modifiers: "", def_value: None }, CppParam {
  // name: "sll_ifindex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sll_hatype", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sll_pkttype", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sll_halen", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sll_addr", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>",
  // modifiers: "", def_value: None }]
  constexpr sockaddr_ll(uint16_t sll_family, uint16_t sll_protocol, int32_t sll_ifindex, uint16_t sll_hatype, uint8_t sll_pkttype, uint8_t sll_halen,
                        ::ArrayW<uint8_t, ::Array<uint8_t>*> sll_addr) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr sockaddr_ll();

  /// @brief Field sll_family, offset: 0x0, size: 0x2, def value: None
  uint16_t sll_family;

  /// @brief Field sll_protocol, offset: 0x2, size: 0x2, def value: None
  uint16_t sll_protocol;

  /// @brief Field sll_ifindex, offset: 0x4, size: 0x4, def value: None
  int32_t sll_ifindex;

  /// @brief Field sll_hatype, offset: 0x8, size: 0x2, def value: None
  uint16_t sll_hatype;

  /// @brief Field sll_pkttype, offset: 0xa, size: 0x1, def value: None
  uint8_t sll_pkttype;

  /// @brief Field sll_halen, offset: 0xb, size: 0x1, def value: None
  uint8_t sll_halen;

  /// @brief Field sll_addr, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> sll_addr;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::sockaddr_ll, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::sockaddr_ll, sll_family) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::sockaddr_ll, sll_protocol) == 0x2, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::sockaddr_ll, sll_ifindex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::sockaddr_ll, sll_hatype) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::sockaddr_ll, sll_pkttype) == 0xa, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::sockaddr_ll, sll_halen) == 0xb, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::sockaddr_ll, sll_addr) == 0x10, "Offset mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::sockaddr_ll, "System.Net.NetworkInformation", "sockaddr_ll");
