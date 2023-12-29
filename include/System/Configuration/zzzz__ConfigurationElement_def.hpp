#pragma once
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
// Type: System.Configuration::ConfigurationElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16080))
// CS Name: ::System.Configuration::ConfigurationElement*
class CORDL_TYPE ConfigurationElement : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  /// @brief Method get_Properties addr 0x2691cf8 size 0x38 virtual true final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

  /// @brief Method IsModified addr 0x2691d30 size 0x38 virtual true final false
  inline bool IsModified();

  /// @brief Method Reset addr 0x2691d68 size 0x38 virtual true final false
  inline void Reset(::System::Configuration::ConfigurationElement* parentElement);

  /// @brief Method ResetModified addr 0x2691da0 size 0x38 virtual true final false
  inline void ResetModified();

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigurationElement(ConfigurationElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigurationElement(ConfigurationElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurationElement();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::ConfigurationElement, 0x10>, "Size mismatch!");

} // namespace System::Configuration
NEED_NO_BOX(::System::Configuration::ConfigurationElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationElement*, "System.Configuration", "ConfigurationElement");
