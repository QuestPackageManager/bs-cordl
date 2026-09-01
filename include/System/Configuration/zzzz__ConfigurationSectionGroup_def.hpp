#pragma once
// IWYU pragma private; include "System\Configuration\ConfigurationSectionGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConfigurationSectionGroup)
// Forward declare root types
namespace System::Configuration {
class ConfigurationSectionGroup;
}
// Write type traits
MARK_REF_T(::System::Configuration::ConfigurationSectionGroup*);
DEFINE_IL2CPP_CLASS(::System::Configuration::ConfigurationSectionGroup*, "System.Configuration", "ConfigurationSectionGroup");
// Dependencies System.Object
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ConfigurationSectionGroup
class CORDL_TYPE ConfigurationSectionGroup : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurationSectionGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationSectionGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigurationSectionGroup(ConfigurationSectionGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationSectionGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigurationSectionGroup(ConfigurationSectionGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23777 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::ConfigurationSectionGroup) == 0x10, "Size mismatch!");

} // namespace System::Configuration
