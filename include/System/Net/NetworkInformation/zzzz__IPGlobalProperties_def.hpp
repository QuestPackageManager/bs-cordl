#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IPGlobalProperties)
// Forward declare root types
namespace System::Net::NetworkInformation {
class IPGlobalProperties;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::IPGlobalProperties);
// Type: System.Net.NetworkInformation::IPGlobalProperties
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::IPGlobalProperties*
class CORDL_TYPE IPGlobalProperties : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DomainName))::StringW DomainName;

  /// @brief Method GetIPGlobalProperties, addr 0x2b37a5c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Net::NetworkInformation::IPGlobalProperties* GetIPGlobalProperties();

  /// @brief Method InternalGetIPGlobalProperties, addr 0x2b37ab0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Net::NetworkInformation::IPGlobalProperties* InternalGetIPGlobalProperties();

  static inline ::System::Net::NetworkInformation::IPGlobalProperties* New_ctor();

  /// @brief Method .ctor, addr 0x2b37ab4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DomainName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_DomainName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPGlobalProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IPGlobalProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPGlobalProperties(IPGlobalProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPGlobalProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPGlobalProperties(IPGlobalProperties const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::IPGlobalProperties, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::IPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::IPGlobalProperties*, "System.Net.NetworkInformation", "IPGlobalProperties");
