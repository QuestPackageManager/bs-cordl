#pragma once
// IWYU pragma private; include "System\Net\Configuration\SocketElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(SocketElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class SocketElement;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::SocketElement*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::SocketElement*, "System.Net.Configuration", "SocketElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.SocketElement
class CORDL_TYPE SocketElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_Properties)) ::System::Configuration::ConfigurationPropertyCollection* Properties;

  static inline ::System::Net::Configuration::SocketElement* New_ctor();

  /// @brief Method .ctor, addr 0x6371ffc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Properties, addr 0x6372038, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SocketElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SocketElement(SocketElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SocketElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SocketElement(SocketElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11834 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::SocketElement) == 0x10, "Size mismatch!");

} // namespace System::Net::Configuration
