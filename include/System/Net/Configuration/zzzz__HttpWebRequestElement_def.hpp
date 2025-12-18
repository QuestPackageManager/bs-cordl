#pragma once
// IWYU pragma private; include "System/Net/Configuration/HttpWebRequestElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(HttpWebRequestElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class HttpWebRequestElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::HttpWebRequestElement);
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.HttpWebRequestElement
class CORDL_TYPE HttpWebRequestElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_Properties)) ::System::Configuration::ConfigurationPropertyCollection* Properties;

  static inline ::System::Net::Configuration::HttpWebRequestElement* New_ctor();

  /// @brief Method .ctor, addr 0x61bd210, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Properties, addr 0x61bd24c, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpWebRequestElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpWebRequestElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpWebRequestElement(HttpWebRequestElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpWebRequestElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpWebRequestElement(HttpWebRequestElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11803 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::HttpWebRequestElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::HttpWebRequestElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::HttpWebRequestElement*, "System.Net.Configuration", "HttpWebRequestElement");
