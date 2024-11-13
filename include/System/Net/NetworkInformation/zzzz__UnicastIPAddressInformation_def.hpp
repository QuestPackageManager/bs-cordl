#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/UnicastIPAddressInformation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__IPAddressInformation_def.hpp"
CORDL_MODULE_EXPORT(UnicastIPAddressInformation)
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnicastIPAddressInformation;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::UnicastIPAddressInformation);
// Type: System.Net.NetworkInformation::UnicastIPAddressInformation
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::UnicastIPAddressInformation*
class CORDL_TYPE UnicastIPAddressInformation : public ::System::Net::NetworkInformation::IPAddressInformation {
public:
  // Declarations
  static inline ::System::Net::NetworkInformation::UnicastIPAddressInformation* New_ctor();

  /// @brief Method .ctor, addr 0x43873ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnicastIPAddressInformation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnicastIPAddressInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnicastIPAddressInformation(UnicastIPAddressInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnicastIPAddressInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnicastIPAddressInformation(UnicastIPAddressInformation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9747 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnicastIPAddressInformation, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnicastIPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnicastIPAddressInformation*, "System.Net.NetworkInformation", "UnicastIPAddressInformation");
