#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Misc\VerisignCzagExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VerisignCzagExtension)
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Misc {
class VerisignCzagExtension;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension*, "Org.BouncyCastle.Asn1.Misc", "VerisignCzagExtension");
// Dependencies Org.BouncyCastle.Asn1.DerIA5String
namespace Org::BouncyCastle::Asn1::Misc {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Misc.VerisignCzagExtension
class CORDL_TYPE VerisignCzagExtension : public ::Org::BouncyCastle::Asn1::DerIA5String {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension* New_ctor(::Org::BouncyCastle::Asn1::DerIA5String* str);

  /// @brief Method ToString, addr 0x3457a9c, size 0x64, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x3457a64, size 0x38, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 201 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Misc
