#pragma once
// IWYU pragma private; include "System/Net/Configuration/ConnectionManagementElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(ConnectionManagementElement)
// Forward declare root types
namespace System::Net::Configuration {
class ConnectionManagementElement;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::ConnectionManagementElement*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::ConnectionManagementElement*, "System.Net.Configuration", "ConnectionManagementElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.ConnectionManagementElement
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11796 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::ConnectionManagementElement) == 0x10, "Size mismatch!");

} // namespace System::Net::Configuration
