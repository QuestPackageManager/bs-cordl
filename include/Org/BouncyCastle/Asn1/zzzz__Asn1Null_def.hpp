#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Asn1Null)
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Null;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1Null);
// Type: Org.BouncyCastle.Asn1::Asn1Null
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(454))
// CS Name: ::Org.BouncyCastle.Asn1::Asn1Null*
class CORDL_TYPE Asn1Null : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::Asn1Null* New_ctor();

  /// @brief Method .ctor addr 0x11462d4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method ToString addr 0x11462dc size 0x40 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Null", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Null(Asn1Null&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Null", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Null(Asn1Null const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Null();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Null, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Null);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Null*, "Org.BouncyCastle.Asn1", "Asn1Null");
