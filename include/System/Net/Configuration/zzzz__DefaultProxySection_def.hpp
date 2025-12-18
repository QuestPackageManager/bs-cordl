#pragma once
// IWYU pragma private; include "System/Net/Configuration/DefaultProxySection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
CORDL_MODULE_EXPORT(DefaultProxySection)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class DefaultProxySection;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::DefaultProxySection);
// Dependencies System.Configuration.ConfigurationSection
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.DefaultProxySection
class CORDL_TYPE DefaultProxySection : public ::System::Configuration::ConfigurationSection {
public:
  // Declarations
  __declspec(property(get = get_Properties)) ::System::Configuration::ConfigurationPropertyCollection* Properties;

  static inline ::System::Net::Configuration::DefaultProxySection* New_ctor();

  /// @brief Method Reset, addr 0x61bd15c, size 0x3c, virtual true, abstract: false, final false
  inline void Reset(::System::Configuration::ConfigurationElement* parentElement);

  /// @brief Method .ctor, addr 0x61bd0e4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Properties, addr 0x61bd120, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultProxySection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultProxySection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultProxySection(DefaultProxySection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultProxySection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultProxySection(DefaultProxySection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11801 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::DefaultProxySection, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::DefaultProxySection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::DefaultProxySection*, "System.Net.Configuration", "DefaultProxySection");
