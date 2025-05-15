#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/MacOsNetworkInterface.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MacOsNetworkInterface)
namespace System::Net::NetworkInformation {
class IPInterfaceProperties;
}
namespace System::Net::NetworkInformation {
struct OperationalStatus;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class MacOsNetworkInterface;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::MacOsNetworkInterface);
// Dependencies System.Net.NetworkInformation.UnixNetworkInterface
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.MacOsNetworkInterface
class CORDL_TYPE MacOsNetworkInterface : public ::System::Net::NetworkInformation::UnixNetworkInterface {
public:
  // Declarations
  __declspec(property(get = get_OperationalStatus)) ::System::Net::NetworkInformation::OperationalStatus OperationalStatus;

  /// @brief Field _ifa_flags, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__ifa_flags, put = __cordl_internal_set__ifa_flags)) uint32_t _ifa_flags;

  /// @brief Method GetIPProperties, addr 0x43ee4d4, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties();

  static inline ::System::Net::NetworkInformation::MacOsNetworkInterface* New_ctor(::StringW name, uint32_t ifa_flags);

  constexpr uint32_t const& __cordl_internal_get__ifa_flags() const;

  constexpr uint32_t& __cordl_internal_get__ifa_flags();

  constexpr void __cordl_internal_set__ifa_flags(uint32_t value);

  /// @brief Method .ctor, addr 0x43ee4b0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, uint32_t ifa_flags);

  /// @brief Method get_OperationalStatus, addr 0x43ee540, size 0x14, virtual true, abstract: false, final false
  inline ::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MacOsNetworkInterface();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MacOsNetworkInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MacOsNetworkInterface(MacOsNetworkInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MacOsNetworkInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MacOsNetworkInterface(MacOsNetworkInterface const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9801 };

  /// @brief Field _ifa_flags, offset: 0x34, size: 0x4, def value: None
  uint32_t ____ifa_flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::MacOsNetworkInterface, ____ifa_flags) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::MacOsNetworkInterface, 0x38>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::MacOsNetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsNetworkInterface*, "System.Net.NetworkInformation", "MacOsNetworkInterface");
