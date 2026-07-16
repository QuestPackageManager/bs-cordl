#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationElementCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(ConfigurationElementCollection)
// Forward declare root types
namespace System::Configuration {
class ConfigurationElementCollection;
}
// Write type traits
MARK_REF_T(::System::Configuration::ConfigurationElementCollection*);
DEFINE_IL2CPP_CLASS(::System::Configuration::ConfigurationElementCollection*, "System.Configuration", "ConfigurationElementCollection");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ConfigurationElementCollection
class CORDL_TYPE ConfigurationElementCollection : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurationElementCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationElementCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigurationElementCollection(ConfigurationElementCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationElementCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigurationElementCollection(ConfigurationElementCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23722 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::ConfigurationElementCollection) == 0x10, "Size mismatch!");

} // namespace System::Configuration
