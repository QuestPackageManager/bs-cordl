#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__IPAddress_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPAddress_ReadOnlyIPAddress)
// Forward declare root types
namespace System::Net {
class __IPAddress__ReadOnlyIPAddress;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::__IPAddress__ReadOnlyIPAddress);
// Type: ::ReadOnlyIPAddress
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7040))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7039))
// CS Name: ::IPAddress::ReadOnlyIPAddress*
class CORDL_TYPE __IPAddress__ReadOnlyIPAddress : public ::System::Net::IPAddress {
public:
  // Declarations
  static inline ::System::Net::__IPAddress__ReadOnlyIPAddress* New_ctor(int64_t newAddress);

  /// @brief Method .ctor, addr 0x298f8e0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(int64_t newAddress);

  // Ctor Parameters [CppParam { name: "", ty: "__IPAddress__ReadOnlyIPAddress", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IPAddress__ReadOnlyIPAddress(__IPAddress__ReadOnlyIPAddress&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IPAddress__ReadOnlyIPAddress", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IPAddress__ReadOnlyIPAddress(__IPAddress__ReadOnlyIPAddress const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IPAddress__ReadOnlyIPAddress();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__IPAddress__ReadOnlyIPAddress, 0x30>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::__IPAddress__ReadOnlyIPAddress);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__IPAddress__ReadOnlyIPAddress*, "System.Net", "IPAddress/ReadOnlyIPAddress");
