#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/in6_addr.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(in6_addr)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct in6_addr;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::in6_addr);
// Dependencies
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: System.Net.NetworkInformation.in6_addr
struct CORDL_TYPE in6_addr {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr in6_addr();

  // Ctor Parameters [CppParam { name: "u6_addr8", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
  constexpr in6_addr(::ArrayW<uint8_t, ::Array<uint8_t>*> u6_addr8) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11669 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field u6_addr8, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> u6_addr8;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::in6_addr, u6_addr8) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::in6_addr, 0x8>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::in6_addr, "System.Net.NetworkInformation", "in6_addr");
