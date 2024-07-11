#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/UnixNoLibCIPGlobalProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixIPGlobalProperties_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnixNoLibCIPGlobalProperties)
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixNoLibCIPGlobalProperties;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties);
// Type: System.Net.NetworkInformation::UnixNoLibCIPGlobalProperties
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::UnixNoLibCIPGlobalProperties*
class CORDL_TYPE UnixNoLibCIPGlobalProperties : public ::System::Net::NetworkInformation::UnixIPGlobalProperties {
public:
  // Declarations
  __declspec(property(get = get_DomainName))::StringW DomainName;

  static inline ::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties* New_ctor();

  /// @brief Method .ctor, addr 0x30538a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DomainName, addr 0x3053858, size 0x48, virtual true, abstract: false, final false
  inline ::StringW get_DomainName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnixNoLibCIPGlobalProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnixNoLibCIPGlobalProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnixNoLibCIPGlobalProperties(UnixNoLibCIPGlobalProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnixNoLibCIPGlobalProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnixNoLibCIPGlobalProperties(UnixNoLibCIPGlobalProperties const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*, "System.Net.NetworkInformation", "UnixNoLibCIPGlobalProperties");
