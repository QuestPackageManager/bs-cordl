#pragma once
// IWYU pragma private; include "System/Net/Configuration/BypassElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(BypassElement)
// Forward declare root types
namespace System::Net::Configuration {
class BypassElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::BypassElement);
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.BypassElement
class CORDL_TYPE BypassElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BypassElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BypassElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BypassElement(BypassElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BypassElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BypassElement(BypassElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9913 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::BypassElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::BypassElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::BypassElement*, "System.Net.Configuration", "BypassElement");
