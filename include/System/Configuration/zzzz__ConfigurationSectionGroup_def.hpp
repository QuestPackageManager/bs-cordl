#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConfigurationSectionGroup)
// Forward declare root types
namespace System::Configuration {
class ConfigurationSectionGroup;
}
// Write type traits
MARK_REF_PTR_T(::System::Configuration::ConfigurationSectionGroup);
// Type: System.Configuration::ConfigurationSectionGroup
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Configuration {
// Is value type: false
// CS Name: ::System.Configuration::ConfigurationSectionGroup*
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::ConfigurationSectionGroup, 0x10>, "Size mismatch!");

} // namespace System::Configuration
NEED_NO_BOX(::System::Configuration::ConfigurationSectionGroup);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationSectionGroup*, "System.Configuration", "ConfigurationSectionGroup");
