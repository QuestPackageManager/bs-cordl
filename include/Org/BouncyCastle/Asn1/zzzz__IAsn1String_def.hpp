#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IAsn1String.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAsn1String)
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class IAsn1String;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IAsn1String);
// Type: Org.BouncyCastle.Asn1::IAsn1String
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::IAsn1String*
class CORDL_TYPE IAsn1String {
public:
  // Declarations
  /// @brief Method GetString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetString();

  // Ctor Parameters [CppParam { name: "", ty: "IAsn1String", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsn1String(IAsn1String&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsn1String", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsn1String(IAsn1String const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IAsn1String);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IAsn1String*, "Org.BouncyCastle.Asn1", "IAsn1String");
