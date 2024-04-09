#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VerisignCzagExtension)
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Misc {
class VerisignCzagExtension;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension);
// Type: Org.BouncyCastle.Asn1.Misc::VerisignCzagExtension
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Misc {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Misc::VerisignCzagExtension*
class CORDL_TYPE VerisignCzagExtension : public ::Org::BouncyCastle::Asn1::DerIA5String {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension* New_ctor(::Org::BouncyCastle::Asn1::DerIA5String* str);

  /// @brief Method ToString, addr 0x10e85b8, size 0x60, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x10e8580, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerIA5String* str);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VerisignCzagExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VerisignCzagExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VerisignCzagExtension(VerisignCzagExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VerisignCzagExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VerisignCzagExtension(VerisignCzagExtension const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Misc
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension*, "Org.BouncyCastle.Asn1.Misc", "VerisignCzagExtension");
