#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/UnixIPGlobalProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__CommonUnixIPGlobalProperties_def.hpp"
CORDL_MODULE_EXPORT(UnixIPGlobalProperties)
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixIPGlobalProperties;
}
// Write type traits
MARK_REF_T(::System::Net::NetworkInformation::UnixIPGlobalProperties*);
DEFINE_IL2CPP_CLASS(::System::Net::NetworkInformation::UnixIPGlobalProperties*, "System.Net.NetworkInformation", "UnixIPGlobalProperties");
// Dependencies System.Net.NetworkInformation.CommonUnixIPGlobalProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.UnixIPGlobalProperties
class CORDL_TYPE UnixIPGlobalProperties : public ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties {
public:
  // Declarations
  static inline ::System::Net::NetworkInformation::UnixIPGlobalProperties* New_ctor();

  /// @brief Method .ctor, addr 0x6351658, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnixIPGlobalProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnixIPGlobalProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnixIPGlobalProperties(UnixIPGlobalProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnixIPGlobalProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnixIPGlobalProperties(UnixIPGlobalProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11683 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::NetworkInformation::UnixIPGlobalProperties) == 0x10, "Size mismatch!");

} // namespace System::Net::NetworkInformation
