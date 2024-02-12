#pragma once
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
// Type: System.Net.NetworkInformation::UnixIPGlobalPropertiesFactoryPal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7299))
// CS Name: ::System.Net.NetworkInformation::UnixIPGlobalPropertiesFactoryPal*
class CORDL_TYPE UnixIPGlobalPropertiesFactoryPal : public ::System::Object {
public:
  // Declarations
  /// @brief Field <PlatformNeedsLibCWorkaround>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__PlatformNeedsLibCWorkaround_k__BackingField,
                             put = setStaticF__PlatformNeedsLibCWorkaround_k__BackingField)) bool _PlatformNeedsLibCWorkaround_k__BackingField;

  static inline void setStaticF__PlatformNeedsLibCWorkaround_k__BackingField(bool value);

  static inline bool getStaticF__PlatformNeedsLibCWorkaround_k__BackingField();

  /// @brief Method get_PlatformNeedsLibCWorkaround, addr 0x29f52e8, size 0x48, virtual false, abstract: false, final false
  static inline bool get_PlatformNeedsLibCWorkaround();

  /// @brief Method Create, addr 0x29f2478, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Net::NetworkInformation::IPGlobalProperties* Create();

  // Ctor Parameters [CppParam { name: "", ty: "UnixIPGlobalPropertiesFactoryPal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnixIPGlobalPropertiesFactoryPal(UnixIPGlobalPropertiesFactoryPal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnixIPGlobalPropertiesFactoryPal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnixIPGlobalPropertiesFactoryPal(UnixIPGlobalPropertiesFactoryPal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnixIPGlobalPropertiesFactoryPal();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal*, "System.Net.NetworkInformation", "UnixIPGlobalPropertiesFactoryPal");
