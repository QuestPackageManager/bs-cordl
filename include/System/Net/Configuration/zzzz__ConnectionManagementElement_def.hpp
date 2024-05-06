#pragma once
// IWYU pragma private; include "System/Net/Configuration/ConnectionManagementElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(ConnectionManagementElement)
// Forward declare root types
namespace System::Net::Configuration {
class ConnectionManagementElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::ConnectionManagementElement);
// Type: System.Net.Configuration::ConnectionManagementElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::ConnectionManagementElement*
class CORDL_TYPE ConnectionManagementElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionManagementElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectionManagementElement(ConnectionManagementElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectionManagementElement(ConnectionManagementElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::ConnectionManagementElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::ConnectionManagementElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::ConnectionManagementElement*, "System.Net.Configuration", "ConnectionManagementElement");
