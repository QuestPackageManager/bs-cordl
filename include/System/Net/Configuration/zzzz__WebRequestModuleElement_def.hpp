#pragma once
// IWYU pragma private; include "System/Net/Configuration/WebRequestModuleElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(WebRequestModuleElement)
// Forward declare root types
namespace System::Net::Configuration {
class WebRequestModuleElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::WebRequestModuleElement);
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.WebRequestModuleElement
class CORDL_TYPE WebRequestModuleElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestModuleElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequestModuleElement(WebRequestModuleElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequestModuleElement(WebRequestModuleElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9932 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::WebRequestModuleElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::WebRequestModuleElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::WebRequestModuleElement*, "System.Net.Configuration", "WebRequestModuleElement");
