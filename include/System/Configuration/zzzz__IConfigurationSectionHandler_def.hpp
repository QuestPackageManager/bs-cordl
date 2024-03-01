#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IConfigurationSectionHandler)
// Forward declare root types
namespace System::Configuration {
class IConfigurationSectionHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Configuration::IConfigurationSectionHandler);
// Type: System.Configuration::IConfigurationSectionHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Configuration {
// Is value type: false
// CS Name: ::System.Configuration::IConfigurationSectionHandler*
class CORDL_TYPE IConfigurationSectionHandler {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IConfigurationSectionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IConfigurationSectionHandler(IConfigurationSectionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IConfigurationSectionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConfigurationSectionHandler(IConfigurationSectionHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Configuration
NEED_NO_BOX(::System::Configuration::IConfigurationSectionHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::IConfigurationSectionHandler*, "System.Configuration", "IConfigurationSectionHandler");
