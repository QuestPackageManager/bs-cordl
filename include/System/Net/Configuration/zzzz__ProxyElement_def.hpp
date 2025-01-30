#pragma once
// IWYU pragma private; include "System/Net/Configuration/ProxyElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(ProxyElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class ProxyElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::ProxyElement);
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.ProxyElement
class CORDL_TYPE ProxyElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_Properties)) ::System::Configuration::ConfigurationPropertyCollection* Properties;

  static inline ::System::Net::Configuration::ProxyElement* New_ctor();

  /// @brief Method .ctor, addr 0x4408f70, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Properties, addr 0x4408fa8, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProxyElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProxyElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProxyElement(ProxyElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProxyElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProxyElement(ProxyElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9919 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::ProxyElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::ProxyElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::ProxyElement*, "System.Net.Configuration", "ProxyElement");
