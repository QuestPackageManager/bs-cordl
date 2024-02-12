#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__NetworkCredential_def.hpp"
CORDL_MODULE_EXPORT(SystemNetworkCredential)
// Forward declare root types
namespace System::Net {
class SystemNetworkCredential;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::SystemNetworkCredential);
// Type: System.Net::SystemNetworkCredential
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7091))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7070))
// CS Name: ::System.Net::SystemNetworkCredential*
class CORDL_TYPE SystemNetworkCredential : public ::System::Net::NetworkCredential {
public:
  // Declarations
  /// @brief Field defaultCredential, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultCredential, put = setStaticF_defaultCredential))::System::Net::SystemNetworkCredential* defaultCredential;

  static inline void setStaticF_defaultCredential(::System::Net::SystemNetworkCredential* value);

  static inline ::System::Net::SystemNetworkCredential* getStaticF_defaultCredential();

  static inline ::System::Net::SystemNetworkCredential* New_ctor();

  /// @brief Method .ctor, addr 0x299f0bc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SystemNetworkCredential", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemNetworkCredential(SystemNetworkCredential&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemNetworkCredential", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemNetworkCredential(SystemNetworkCredential const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemNetworkCredential();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::SystemNetworkCredential, 0x28>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::SystemNetworkCredential);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::SystemNetworkCredential*, "System.Net", "SystemNetworkCredential");
