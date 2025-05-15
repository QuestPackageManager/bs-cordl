#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConfigurationElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Configuration {
class ConfigurationElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Configuration::ConfigurationElement);
// Dependencies System.Object
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ConfigurationElement
class CORDL_TYPE ConfigurationElement : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Properties)) ::System::Configuration::ConfigurationPropertyCollection* Properties;

  /// @brief Method IsModified, addr 0x408b800, size 0x38, virtual true, abstract: false, final false
  inline bool IsModified();

  /// @brief Method Reset, addr 0x408b838, size 0x38, virtual true, abstract: false, final false
  inline void Reset(::System::Configuration::ConfigurationElement* parentElement);

  /// @brief Method ResetModified, addr 0x408b870, size 0x38, virtual true, abstract: false, final false
  inline void ResetModified();

  /// @brief Method get_Properties, addr 0x408b7c8, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurationElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigurationElement(ConfigurationElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigurationElement(ConfigurationElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19289 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::ConfigurationElement, 0x10>, "Size mismatch!");

} // namespace System::Configuration
NEED_NO_BOX(::System::Configuration::ConfigurationElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationElement*, "System.Configuration", "ConfigurationElement");
