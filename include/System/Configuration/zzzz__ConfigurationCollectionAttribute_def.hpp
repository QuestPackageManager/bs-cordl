#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationCollectionAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ConfigurationCollectionAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Configuration {
class ConfigurationCollectionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Configuration::ConfigurationCollectionAttribute);
// Dependencies System.Attribute
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ConfigurationCollectionAttribute
class CORDL_TYPE ConfigurationCollectionAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Configuration::ConfigurationCollectionAttribute* New_ctor(::System::Type* itemType);

  /// @brief Method .ctor, addr 0x408b5a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* itemType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurationCollectionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationCollectionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigurationCollectionAttribute(ConfigurationCollectionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationCollectionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigurationCollectionAttribute(ConfigurationCollectionAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19296 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::ConfigurationCollectionAttribute, 0x10>, "Size mismatch!");

} // namespace System::Configuration
NEED_NO_BOX(::System::Configuration::ConfigurationCollectionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationCollectionAttribute*, "System.Configuration", "ConfigurationCollectionAttribute");
