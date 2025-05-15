#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/MacOsNetworkInterfaceAPI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MacOsNetworkInterfaceAPI)
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class MacOsNetworkInterfaceAPI;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI);
// Dependencies System.Net.NetworkInformation.UnixNetworkInterfaceAPI
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.MacOsNetworkInterfaceAPI
class CORDL_TYPE MacOsNetworkInterfaceAPI : public ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI {
public:
  // Declarations
  /// @brief Field AF_INET6, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_AF_INET6, put = __cordl_internal_set_AF_INET6)) int32_t AF_INET6;

  /// @brief Method GetAllNetworkInterfaces, addr 0x43ed96c, size 0x9b4, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> GetAllNetworkInterfaces();

  static inline ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI* New_ctor();

  static inline ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI* New_ctor(int32_t AF_INET6);

  constexpr int32_t const& __cordl_internal_get_AF_INET6() const;

  constexpr int32_t& __cordl_internal_get_AF_INET6();

  constexpr void __cordl_internal_set_AF_INET6(int32_t value);

  /// @brief Method .ctor, addr 0x43ed94c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x43ebd0c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t AF_INET6);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MacOsNetworkInterfaceAPI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MacOsNetworkInterfaceAPI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MacOsNetworkInterfaceAPI(MacOsNetworkInterfaceAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MacOsNetworkInterfaceAPI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MacOsNetworkInterfaceAPI(MacOsNetworkInterfaceAPI const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9800 };

  /// @brief Field AF_INET6, offset: 0x10, size: 0x4, def value: None
  int32_t ___AF_INET6;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI, ___AF_INET6) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI, 0x18>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*, "System.Net.NetworkInformation", "MacOsNetworkInterfaceAPI");
