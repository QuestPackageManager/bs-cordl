#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConfigurationSection)
namespace System::Xml {
class XmlReader;
}
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Configuration {
struct ConfigurationSaveMode;
}
// Forward declare root types
namespace System::Configuration {
class ConfigurationSection;
}
// Write type traits
MARK_REF_PTR_T(::System::Configuration::ConfigurationSection);
// Type: System.Configuration::ConfigurationSection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16081))
// CS Name: ::System.Configuration::ConfigurationSection*
class CORDL_TYPE ConfigurationSection : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  /// @brief Method DeserializeSection addr 0x2691dd8 size 0x38 virtual true final false
  inline void DeserializeSection(::System::Xml::XmlReader* reader);

  /// @brief Method IsModified addr 0x2691e10 size 0x38 virtual true final false
  inline bool IsModified();

  /// @brief Method ResetModified addr 0x2691e48 size 0x38 virtual true final false
  inline void ResetModified();

  /// @brief Method SerializeSection addr 0x2691e80 size 0x38 virtual true final false
  inline ::StringW SerializeSection(::System::Configuration::ConfigurationElement* parentElement, ::StringW name, ::System::Configuration::ConfigurationSaveMode saveMode);

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationSection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigurationSection(ConfigurationSection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationSection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigurationSection(ConfigurationSection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurationSection();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::ConfigurationSection, 0x10>, "Size mismatch!");

} // namespace System::Configuration
NEED_NO_BOX(::System::Configuration::ConfigurationSection);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationSection*, "System.Configuration", "ConfigurationSection");
