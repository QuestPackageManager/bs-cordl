#pragma once
// IWYU pragma private; include "System/Net/Configuration/WebProxyScriptElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(WebProxyScriptElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class WebProxyScriptElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::WebProxyScriptElement);
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.WebProxyScriptElement
class CORDL_TYPE WebProxyScriptElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_Properties)) ::System::Configuration::ConfigurationPropertyCollection* Properties;

  static inline ::System::Net::Configuration::WebProxyScriptElement* New_ctor();

  /// @brief Method .ctor, addr 0x440bf10, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Properties, addr 0x440bf48, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebProxyScriptElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebProxyScriptElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebProxyScriptElement(WebProxyScriptElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebProxyScriptElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebProxyScriptElement(WebProxyScriptElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9928 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::WebProxyScriptElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::WebProxyScriptElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::WebProxyScriptElement*, "System.Net.Configuration", "WebProxyScriptElement");
