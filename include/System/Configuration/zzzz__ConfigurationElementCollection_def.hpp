#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(ConfigurationElementCollection)
// Forward declare root types
namespace System::Configuration {
class ConfigurationElementCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Configuration::ConfigurationElementCollection);
// Type: System.Configuration::ConfigurationElementCollection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Configuration {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(16432))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16436))
// CS Name: ::System.Configuration::ConfigurationElementCollection*
class CORDL_TYPE ConfigurationElementCollection : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationElementCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigurationElementCollection(ConfigurationElementCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationElementCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigurationElementCollection(ConfigurationElementCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurationElementCollection();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::ConfigurationElementCollection, 0x10>, "Size mismatch!");

} // namespace System::Configuration
NEED_NO_BOX(::System::Configuration::ConfigurationElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationElementCollection*, "System.Configuration", "ConfigurationElementCollection");
