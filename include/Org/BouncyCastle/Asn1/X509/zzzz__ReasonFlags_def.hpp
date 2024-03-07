#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReasonFlags)
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class ReasonFlags;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::ReasonFlags);
// Type: Org.BouncyCastle.Asn1.X509::ReasonFlags
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509::ReasonFlags*
class CORDL_TYPE ReasonFlags : public ::Org::BouncyCastle::Asn1::DerBitString {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::X509::ReasonFlags* New_ctor(::Org::BouncyCastle::Asn1::DerBitString* reasons);

  static inline ::Org::BouncyCastle::Asn1::X509::ReasonFlags* New_ctor(int32_t reasons);

  /// @brief Method .ctor, addr 0x1222518, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerBitString* reasons);

  /// @brief Method .ctor, addr 0x122bbac, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t reasons);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReasonFlags();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReasonFlags", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReasonFlags(ReasonFlags&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReasonFlags", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReasonFlags(ReasonFlags const&) = delete;

  /// @brief Field AACompromise offset 0xffffffff size 0x4
  static constexpr int32_t AACompromise{ static_cast<int32_t>(0x8000) };

  /// @brief Field AffiliationChanged offset 0xffffffff size 0x4
  static constexpr int32_t AffiliationChanged{ static_cast<int32_t>(0x10) };

  /// @brief Field CACompromise offset 0xffffffff size 0x4
  static constexpr int32_t CACompromise{ static_cast<int32_t>(0x20) };

  /// @brief Field CertificateHold offset 0xffffffff size 0x4
  static constexpr int32_t CertificateHold{ static_cast<int32_t>(0x2) };

  /// @brief Field CessationOfOperation offset 0xffffffff size 0x4
  static constexpr int32_t CessationOfOperation{ static_cast<int32_t>(0x4) };

  /// @brief Field KeyCompromise offset 0xffffffff size 0x4
  static constexpr int32_t KeyCompromise{ static_cast<int32_t>(0x40) };

  /// @brief Field PrivilegeWithdrawn offset 0xffffffff size 0x4
  static constexpr int32_t PrivilegeWithdrawn{ static_cast<int32_t>(0x1) };

  /// @brief Field Superseded offset 0xffffffff size 0x4
  static constexpr int32_t Superseded{ static_cast<int32_t>(0x8) };

  /// @brief Field Unused offset 0xffffffff size 0x4
  static constexpr int32_t Unused{ static_cast<int32_t>(0x80) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::ReasonFlags, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::ReasonFlags);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::ReasonFlags*, "Org.BouncyCastle.Asn1.X509", "ReasonFlags");
