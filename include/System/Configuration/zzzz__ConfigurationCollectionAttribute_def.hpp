#pragma once
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
// Type: System.Configuration::ConfigurationCollectionAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Configuration {
// Is value type: false
// CS Name: ::System.Configuration::ConfigurationCollectionAttribute*
class CORDL_TYPE ConfigurationCollectionAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Configuration::ConfigurationCollectionAttribute* New_ctor(::System::Type* itemType);

  /// @brief Method .ctor, addr 0x2adb5c4, size 0x4, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::ConfigurationCollectionAttribute, 0x10>, "Size mismatch!");

} // namespace System::Configuration
NEED_NO_BOX(::System::Configuration::ConfigurationCollectionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationCollectionAttribute*, "System.Configuration", "ConfigurationCollectionAttribute");
