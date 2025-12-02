#pragma once
// IWYU pragma private; include "System/Net/Configuration/BypassElementCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
CORDL_MODULE_EXPORT(BypassElementCollection)
// Forward declare root types
namespace System::Net::Configuration {
class BypassElementCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::BypassElementCollection);
// Dependencies System.Configuration.ConfigurationElementCollection
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.BypassElementCollection
class CORDL_TYPE BypassElementCollection : public ::System::Configuration::ConfigurationElementCollection {
public:
  // Declarations
  static inline ::System::Net::Configuration::BypassElementCollection* New_ctor();

  /// @brief Method .ctor, addr 0x6155468, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BypassElementCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BypassElementCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BypassElementCollection(BypassElementCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BypassElementCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BypassElementCollection(BypassElementCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11793 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::BypassElementCollection, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::BypassElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::BypassElementCollection*, "System.Net.Configuration", "BypassElementCollection");
