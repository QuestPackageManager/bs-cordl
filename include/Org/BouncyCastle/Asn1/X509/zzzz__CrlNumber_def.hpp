#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/CrlNumber.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CrlNumber)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CrlNumber;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::CrlNumber);
// Dependencies Org.BouncyCastle.Asn1.DerInteger
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.CrlNumber
class CORDL_TYPE CrlNumber : public ::Org::BouncyCastle::Asn1::DerInteger {
public:
  // Declarations
  __declspec(property(get = get_Number)) ::Org::BouncyCastle::Math::BigInteger* Number;

  static inline ::Org::BouncyCastle::Asn1::X509::CrlNumber* New_ctor(::Org::BouncyCastle::Math::BigInteger* number);

  /// @brief Method ToString, addr 0x2603e48, size 0x5c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2603e38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* number);

  /// @brief Method get_Number, addr 0x2603e40, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Number();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrlNumber();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrlNumber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrlNumber(CrlNumber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrlNumber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrlNumber(CrlNumber const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 353 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::CrlNumber, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CrlNumber);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CrlNumber*, "Org.BouncyCastle.Asn1.X509", "CrlNumber");
