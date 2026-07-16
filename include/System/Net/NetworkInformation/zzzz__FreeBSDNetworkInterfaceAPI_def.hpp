#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/FreeBSDNetworkInterfaceAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterfaceAPI_def.hpp"
CORDL_MODULE_EXPORT(FreeBSDNetworkInterfaceAPI)
// Forward declare root types
namespace System::Net::NetworkInformation {
class FreeBSDNetworkInterfaceAPI;
}
// Write type traits
MARK_REF_T(::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI*);
DEFINE_IL2CPP_CLASS(::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI*, "System.Net.NetworkInformation", "FreeBSDNetworkInterfaceAPI");
// Dependencies System.Net.NetworkInformation.MacOsNetworkInterfaceAPI
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.FreeBSDNetworkInterfaceAPI
class CORDL_TYPE FreeBSDNetworkInterfaceAPI : public ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI {
public:
  // Declarations
  static inline ::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI* New_ctor();

  /// @brief Method .ctor, addr 0x634ed1c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FreeBSDNetworkInterfaceAPI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FreeBSDNetworkInterfaceAPI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FreeBSDNetworkInterfaceAPI(FreeBSDNetworkInterfaceAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FreeBSDNetworkInterfaceAPI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FreeBSDNetworkInterfaceAPI(FreeBSDNetworkInterfaceAPI const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11662 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI) == 0x18, "Size mismatch!");

} // namespace System::Net::NetworkInformation
