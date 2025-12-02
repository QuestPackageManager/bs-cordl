#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/UnixIPGlobalPropertiesFactoryPal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnixIPGlobalPropertiesFactoryPal)
namespace System::Net::NetworkInformation {
class IPGlobalProperties;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixIPGlobalPropertiesFactoryPal;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal);
// Dependencies System.Object
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.UnixIPGlobalPropertiesFactoryPal
class CORDL_TYPE UnixIPGlobalPropertiesFactoryPal : public ::System::Object {
public:
  // Declarations
  /// @brief Field <PlatformNeedsLibCWorkaround>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__PlatformNeedsLibCWorkaround_k__BackingField, put = setStaticF__PlatformNeedsLibCWorkaround_k__BackingField)) bool _PlatformNeedsLibCWorkaround_k__BackingField;

  /// @brief Method Create, addr 0x6137e64, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Net::NetworkInformation::IPGlobalProperties* Create();

  static inline bool getStaticF__PlatformNeedsLibCWorkaround_k__BackingField();

  /// @brief Method get_PlatformNeedsLibCWorkaround, addr 0x613a9ac, size 0x4c, virtual false, abstract: false, final false
  static inline bool get_PlatformNeedsLibCWorkaround();

  static inline void setStaticF__PlatformNeedsLibCWorkaround_k__BackingField(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnixIPGlobalPropertiesFactoryPal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnixIPGlobalPropertiesFactoryPal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnixIPGlobalPropertiesFactoryPal(UnixIPGlobalPropertiesFactoryPal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnixIPGlobalPropertiesFactoryPal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnixIPGlobalPropertiesFactoryPal(UnixIPGlobalPropertiesFactoryPal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11684 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal*, "System.Net.NetworkInformation", "UnixIPGlobalPropertiesFactoryPal");
