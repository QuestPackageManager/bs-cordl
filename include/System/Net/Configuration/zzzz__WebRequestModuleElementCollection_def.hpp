#pragma once
// IWYU pragma private; include "System/Net/Configuration/WebRequestModuleElementCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
CORDL_MODULE_EXPORT(WebRequestModuleElementCollection)
// Forward declare root types
namespace System::Net::Configuration {
class WebRequestModuleElementCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::WebRequestModuleElementCollection);
// Dependencies System.Configuration.ConfigurationElementCollection
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.WebRequestModuleElementCollection
class CORDL_TYPE WebRequestModuleElementCollection : public ::System::Configuration::ConfigurationElementCollection {
public:
  // Declarations
  static inline ::System::Net::Configuration::WebRequestModuleElementCollection* New_ctor();

  /// @brief Method .ctor, addr 0x4407774, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestModuleElementCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElementCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequestModuleElementCollection(WebRequestModuleElementCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElementCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequestModuleElementCollection(WebRequestModuleElementCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9931 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::WebRequestModuleElementCollection, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::WebRequestModuleElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::WebRequestModuleElementCollection*, "System.Net.Configuration", "WebRequestModuleElementCollection");
