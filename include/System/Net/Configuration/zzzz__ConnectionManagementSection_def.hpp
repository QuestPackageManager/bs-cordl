#pragma once
// IWYU pragma private; include "System\Net\Configuration\ConnectionManagementSection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
CORDL_MODULE_EXPORT(ConnectionManagementSection)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class ConnectionManagementSection;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::ConnectionManagementSection*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::ConnectionManagementSection*, "System.Net.Configuration", "ConnectionManagementSection");
// Dependencies System.Configuration.ConfigurationSection
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.ConnectionManagementSection
class CORDL_TYPE ConnectionManagementSection : public ::System::Configuration::ConfigurationSection {
public:
  // Declarations
  __declspec(property(get = get_Properties)) ::System::Configuration::ConfigurationPropertyCollection* Properties;

  static inline ::System::Net::Configuration::ConnectionManagementSection* New_ctor();

  /// @brief Method .ctor, addr 0x6371bc4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Properties, addr 0x6371c00, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionManagementSection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementSection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectionManagementSection(ConnectionManagementSection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementSection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectionManagementSection(ConnectionManagementSection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11825 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::ConnectionManagementSection) == 0x10, "Size mismatch!");

} // namespace System::Net::Configuration
