#pragma once
// IWYU pragma private; include "System/Net/IPAddress_ReadOnlyIPAddress.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__IPAddress_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPAddress_ReadOnlyIPAddress)
// Forward declare root types
namespace GlobalNamespace {
class IPAddress_ReadOnlyIPAddress;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IPAddress_ReadOnlyIPAddress);
// Dependencies System.Net.IPAddress
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Net.IPAddress/ReadOnlyIPAddress
class CORDL_TYPE IPAddress_ReadOnlyIPAddress : public ::System::Net::IPAddress {
public:
  // Declarations
  static inline ::GlobalNamespace::IPAddress_ReadOnlyIPAddress* New_ctor(int64_t newAddress);

  /// @brief Method .ctor, addr 0x61ddd04, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int64_t newAddress);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPAddress_ReadOnlyIPAddress();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IPAddress_ReadOnlyIPAddress", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPAddress_ReadOnlyIPAddress(IPAddress_ReadOnlyIPAddress&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPAddress_ReadOnlyIPAddress", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPAddress_ReadOnlyIPAddress(IPAddress_ReadOnlyIPAddress const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11424 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IPAddress_ReadOnlyIPAddress, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IPAddress_ReadOnlyIPAddress);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPAddress_ReadOnlyIPAddress*, "System.Net", "IPAddress/ReadOnlyIPAddress");
