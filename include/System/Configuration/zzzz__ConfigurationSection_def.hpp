#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationSection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConfigurationSection)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Configuration {
struct ConfigurationSaveMode;
}
namespace System::Xml {
class XmlReader;
}
// Forward declare root types
namespace System::Configuration {
class ConfigurationSection;
}
// Write type traits
MARK_REF_PTR_T(::System::Configuration::ConfigurationSection);
// Dependencies System.Configuration.ConfigurationElement
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ConfigurationSection
class CORDL_TYPE ConfigurationSection : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  /// @brief Method DeserializeSection, addr 0x4098d74, size 0x38, virtual true, abstract: false, final false
  inline void DeserializeSection(::System::Xml::XmlReader* reader);

  /// @brief Method IsModified, addr 0x4098dac, size 0x38, virtual true, abstract: false, final false
  inline bool IsModified();

  /// @brief Method ResetModified, addr 0x4098de4, size 0x38, virtual true, abstract: false, final false
  inline void ResetModified();

  /// @brief Method SerializeSection, addr 0x4098e1c, size 0x38, virtual true, abstract: false, final false
  inline ::StringW SerializeSection(::System::Configuration::ConfigurationElement* parentElement, ::StringW name, ::System::Configuration::ConfigurationSaveMode saveMode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurationSection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationSection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigurationSection(ConfigurationSection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationSection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigurationSection(ConfigurationSection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19285 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::ConfigurationSection, 0x10>, "Size mismatch!");

} // namespace System::Configuration
NEED_NO_BOX(::System::Configuration::ConfigurationSection);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationSection*, "System.Configuration", "ConfigurationSection");
