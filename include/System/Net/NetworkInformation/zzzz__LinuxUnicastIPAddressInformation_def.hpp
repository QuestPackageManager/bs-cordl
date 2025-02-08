#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/LinuxUnicastIPAddressInformation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnicastIPAddressInformation_def.hpp"
CORDL_MODULE_EXPORT(LinuxUnicastIPAddressInformation)
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class LinuxUnicastIPAddressInformation;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation);
// Dependencies System.Net.NetworkInformation.UnicastIPAddressInformation
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.LinuxUnicastIPAddressInformation
class CORDL_TYPE LinuxUnicastIPAddressInformation : public ::System::Net::NetworkInformation::UnicastIPAddressInformation {
public:
  // Declarations
  __declspec(property(get = get_Address)) ::System::Net::IPAddress* Address;

  /// @brief Field address, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_address, put = __cordl_internal_set_address)) ::System::Net::IPAddress* address;

  static inline ::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation* New_ctor(::System::Net::IPAddress* address);

  constexpr ::System::Net::IPAddress* const& __cordl_internal_get_address() const;

  constexpr ::System::Net::IPAddress*& __cordl_internal_get_address();

  constexpr void __cordl_internal_set_address(::System::Net::IPAddress* value);

  /// @brief Method .ctor, addr 0x43f1b10, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::IPAddress* address);

  /// @brief Method get_Address, addr 0x43f1b38, size 0x8, virtual true, abstract: false, final false
  inline ::System::Net::IPAddress* get_Address();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinuxUnicastIPAddressInformation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinuxUnicastIPAddressInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinuxUnicastIPAddressInformation(LinuxUnicastIPAddressInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinuxUnicastIPAddressInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinuxUnicastIPAddressInformation(LinuxUnicastIPAddressInformation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9797 };

  /// @brief Field address, offset: 0x10, size: 0x8, def value: None
  ::System::Net::IPAddress* ___address;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation, ___address) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation, 0x18>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*, "System.Net.NetworkInformation", "LinuxUnicastIPAddressInformation");
