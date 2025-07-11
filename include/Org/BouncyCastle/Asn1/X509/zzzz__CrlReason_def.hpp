#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/CrlReason.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerEnumerated_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrlReason)
namespace Org::BouncyCastle::Asn1 {
class DerEnumerated;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CrlReason;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::CrlReason);
// Dependencies Org.BouncyCastle.Asn1.DerEnumerated
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.CrlReason
class CORDL_TYPE CrlReason : public ::Org::BouncyCastle::Asn1::DerEnumerated {
public:
  // Declarations
  /// @brief Field ReasonString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ReasonString, put = setStaticF_ReasonString)) ::ArrayW<::StringW, ::Array<::StringW>*> ReasonString;

  static inline ::Org::BouncyCastle::Asn1::X509::CrlReason* New_ctor(::Org::BouncyCastle::Asn1::DerEnumerated* reason);

  static inline ::Org::BouncyCastle::Asn1::X509::CrlReason* New_ctor(int32_t reason);

  /// @brief Method ToString, addr 0x2604010, size 0xcc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2603f9c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerEnumerated* reason);

  /// @brief Method .ctor, addr 0x2603f34, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t reason);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_ReasonString();

  static inline void setStaticF_ReasonString(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrlReason();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrlReason", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrlReason(CrlReason&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrlReason", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrlReason(CrlReason const&) = delete;

  /// @brief Field AACompromise offset 0xffffffff size 0x4
  static constexpr int32_t AACompromise{ static_cast<int32_t>(0xa) };

  /// @brief Field AffiliationChanged offset 0xffffffff size 0x4
  static constexpr int32_t AffiliationChanged{ static_cast<int32_t>(0x3) };

  /// @brief Field CACompromise offset 0xffffffff size 0x4
  static constexpr int32_t CACompromise{ static_cast<int32_t>(0x2) };

  /// @brief Field CertificateHold offset 0xffffffff size 0x4
  static constexpr int32_t CertificateHold{ static_cast<int32_t>(0x6) };

  /// @brief Field CessationOfOperation offset 0xffffffff size 0x4
  static constexpr int32_t CessationOfOperation{ static_cast<int32_t>(0x5) };

  /// @brief Field KeyCompromise offset 0xffffffff size 0x4
  static constexpr int32_t KeyCompromise{ static_cast<int32_t>(0x1) };

  /// @brief Field PrivilegeWithdrawn offset 0xffffffff size 0x4
  static constexpr int32_t PrivilegeWithdrawn{ static_cast<int32_t>(0x9) };

  /// @brief Field RemoveFromCrl offset 0xffffffff size 0x4
  static constexpr int32_t RemoveFromCrl{ static_cast<int32_t>(0x8) };

  /// @brief Field Superseded offset 0xffffffff size 0x4
  static constexpr int32_t Superseded{ static_cast<int32_t>(0x4) };

  /// @brief Field Unspecified offset 0xffffffff size 0x4
  static constexpr int32_t Unspecified{ static_cast<int32_t>(0x0) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 354 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::CrlReason, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CrlReason);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CrlReason*, "Org.BouncyCastle.Asn1.X509", "CrlReason");
