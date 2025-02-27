#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationPropertyCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConfigurationPropertyCollection)
// Forward declare root types
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Configuration::ConfigurationPropertyCollection);
// Dependencies System.Object
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ConfigurationPropertyCollection
class CORDL_TYPE ConfigurationPropertyCollection : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurationPropertyCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationPropertyCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigurationPropertyCollection(ConfigurationPropertyCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationPropertyCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigurationPropertyCollection(ConfigurationPropertyCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19287 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::ConfigurationPropertyCollection, 0x10>, "Size mismatch!");

} // namespace System::Configuration
NEED_NO_BOX(::System::Configuration::ConfigurationPropertyCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationPropertyCollection*, "System.Configuration", "ConfigurationPropertyCollection");
