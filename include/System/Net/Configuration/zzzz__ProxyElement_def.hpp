#pragma once
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
// Type: System.Net.Configuration::ProxyElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16257))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9571))
// CS Name: ::System.Net.Configuration::ProxyElement*
class CORDL_TYPE ProxyElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  static inline ::System::Net::Configuration::ProxyElement* New_ctor();

  /// @brief Method .ctor, addr 0x2944dfc, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Properties, addr 0x2944e34, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

  // Ctor Parameters [CppParam { name: "", ty: "ProxyElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProxyElement(ProxyElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProxyElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProxyElement(ProxyElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProxyElement();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::ProxyElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::ProxyElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::ProxyElement*, "System.Net.Configuration", "ProxyElement");
