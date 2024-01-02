#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsn1Convertible)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IAsn1Convertible);
// Type: Org.BouncyCastle.Asn1::IAsn1Convertible
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6))
// CS Name: ::Org.BouncyCastle.Asn1::IAsn1Convertible*
class CORDL_TYPE IAsn1Convertible {
public:
  // Declarations
  /// @brief Method ToAsn1Object, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "IAsn1Convertible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsn1Convertible(IAsn1Convertible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsn1Convertible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsn1Convertible(IAsn1Convertible const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IAsn1Convertible);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IAsn1Convertible*, "Org.BouncyCastle.Asn1", "IAsn1Convertible");
