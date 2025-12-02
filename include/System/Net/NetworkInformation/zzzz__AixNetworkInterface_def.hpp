#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixNetworkInterface.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AixNetworkInterface)
namespace System::Net::NetworkInformation {
class IPInterfaceProperties;
}
namespace System::Net::NetworkInformation {
struct OperationalStatus;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class AixNetworkInterface;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::AixNetworkInterface);
// Dependencies System.Net.NetworkInformation.UnixNetworkInterface
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.AixNetworkInterface
class CORDL_TYPE AixNetworkInterface : public ::System::Net::NetworkInformation::UnixNetworkInterface {
public:
  // Declarations
  __declspec(property(get = get_OperationalStatus)) ::System::Net::NetworkInformation::OperationalStatus OperationalStatus;

  /// @brief Field _ifa_flags, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__ifa_flags, put = __cordl_internal_set__ifa_flags)) uint32_t _ifa_flags;

  /// @brief Field _ifru_mtu, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__ifru_mtu, put = __cordl_internal_set__ifru_mtu)) int32_t _ifru_mtu;

  /// @brief Method GetIPProperties, addr 0x6137dbc, size 0x80, virtual true, abstract: false, final false
  inline ::System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties();

  static inline ::System::Net::NetworkInformation::AixNetworkInterface* New_ctor(::StringW name, uint32_t ifa_flags, int32_t ifru_mtu);

  constexpr uint32_t const& __cordl_internal_get__ifa_flags() const;

  constexpr uint32_t& __cordl_internal_get__ifa_flags();

  constexpr int32_t const& __cordl_internal_get__ifru_mtu() const;

  constexpr int32_t& __cordl_internal_get__ifru_mtu();

  constexpr void __cordl_internal_set__ifa_flags(uint32_t value);

  constexpr void __cordl_internal_set__ifru_mtu(int32_t value);

  /// @brief Method .ctor, addr 0x6137c48, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, uint32_t ifa_flags, int32_t ifru_mtu);

  /// @brief Method get_OperationalStatus, addr 0x6137e3c, size 0x14, virtual true, abstract: false, final false
  inline ::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AixNetworkInterface();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AixNetworkInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AixNetworkInterface(AixNetworkInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AixNetworkInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AixNetworkInterface(AixNetworkInterface const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11656 };

  /// @brief Field _ifa_flags, offset: 0x34, size: 0x4, def value: None
  uint32_t ____ifa_flags;

  /// @brief Field _ifru_mtu, offset: 0x38, size: 0x4, def value: None
  int32_t ____ifru_mtu;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::AixNetworkInterface, ____ifa_flags) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixNetworkInterface, ____ifru_mtu) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixNetworkInterface, 0x40>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::AixNetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixNetworkInterface*, "System.Net.NetworkInformation", "AixNetworkInterface");
