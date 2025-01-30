#pragma once
// IWYU pragma private; include "System/Configuration/IConfigurationSectionHandler.hpp"
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
// Dependencies
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.IConfigurationSectionHandler
class CORDL_TYPE IConfigurationSectionHandler {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IConfigurationSectionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConfigurationSectionHandler(IConfigurationSectionHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9912 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Configuration
NEED_NO_BOX(::System::Configuration::IConfigurationSectionHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::IConfigurationSectionHandler*, "System.Configuration", "IConfigurationSectionHandler");
