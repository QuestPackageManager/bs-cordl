#pragma once
// IWYU pragma private; include "System/Net/Configuration/ConnectionManagementSection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::System::Net::Configuration::ConnectionManagementSection);
// Type: System.Net.Configuration::ConnectionManagementSection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::ConnectionManagementSection*
class CORDL_TYPE ConnectionManagementSection : public ::System::Configuration::ConfigurationSection {
public:
  // Declarations
  __declspec(property(get = get_Properties)) ::System::Configuration::ConfigurationPropertyCollection* Properties;

  static inline ::System::Net::Configuration::ConnectionManagementSection* New_ctor();

  /// @brief Method .ctor, addr 0x43901c8, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Properties, addr 0x4390200, size 0x38, virtual true, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9884 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::ConnectionManagementSection, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::ConnectionManagementSection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::ConnectionManagementSection*, "System.Net.Configuration", "ConnectionManagementSection");
