#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/CommonUnixIPGlobalProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__IPGlobalProperties_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommonUnixIPGlobalProperties)
// Forward declare root types
namespace System::Net::NetworkInformation {
class CommonUnixIPGlobalProperties;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::CommonUnixIPGlobalProperties);
// Dependencies System.Net.NetworkInformation.IPGlobalProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.CommonUnixIPGlobalProperties
class CORDL_TYPE CommonUnixIPGlobalProperties : public ::System::Net::NetworkInformation::IPGlobalProperties {
public:
  // Declarations
  __declspec(property(get = get_DomainName)) ::StringW DomainName;

  static inline ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties* New_ctor();

  /// @brief Method .ctor, addr 0x43ee518, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DomainName, addr 0x43ee38c, size 0x18c, virtual true, abstract: false, final false
  inline ::StringW get_DomainName();

  /// @brief Method getdomainname, addr 0x43ee300, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t getdomainname(::ArrayW<uint8_t, ::Array<uint8_t>*> name, int32_t len);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommonUnixIPGlobalProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommonUnixIPGlobalProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommonUnixIPGlobalProperties(CommonUnixIPGlobalProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommonUnixIPGlobalProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommonUnixIPGlobalProperties(CommonUnixIPGlobalProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9806 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::CommonUnixIPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*, "System.Net.NetworkInformation", "CommonUnixIPGlobalProperties");
