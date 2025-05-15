#pragma once
// IWYU pragma private; include "System/Net/Configuration/NetSectionGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSectionGroup_def.hpp"
CORDL_MODULE_EXPORT(NetSectionGroup)
// Forward declare root types
namespace System::Net::Configuration {
class NetSectionGroup;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::NetSectionGroup);
// Dependencies System.Configuration.ConfigurationSectionGroup
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.NetSectionGroup
class CORDL_TYPE NetSectionGroup : public ::System::Configuration::ConfigurationSectionGroup {
public:
  // Declarations
  static inline ::System::Net::Configuration::NetSectionGroup* New_ctor();

  /// @brief Method .ctor, addr 0x440787c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetSectionGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetSectionGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetSectionGroup(NetSectionGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetSectionGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetSectionGroup(NetSectionGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9924 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::NetSectionGroup, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::NetSectionGroup);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::NetSectionGroup*, "System.Net.Configuration", "NetSectionGroup");
