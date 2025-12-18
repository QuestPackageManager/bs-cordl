#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/PkiFailureInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkiFailureInfo)
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFailureInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo);
// Dependencies Org.BouncyCastle.Asn1.DerBitString
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiFailureInfo
class CORDL_TYPE PkiFailureInfo : public ::Org::BouncyCastle::Asn1::DerBitString {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* New_ctor(::Org::BouncyCastle::Asn1::DerBitString* info);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* New_ctor(int32_t info);

  /// @brief Method ToString, addr 0x3252374, size 0x9c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x32522d8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerBitString* info);

  /// @brief Method .ctor, addr 0x3252270, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t info);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiFailureInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkiFailureInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiFailureInfo(PkiFailureInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiFailureInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiFailureInfo(PkiFailureInfo const&) = delete;

  /// @brief Field AddInfoNotAvailable offset 0xffffffff size 0x4
  static constexpr int32_t AddInfoNotAvailable{ static_cast<int32_t>(0x400000) };

  /// @brief Field BadAlg offset 0xffffffff size 0x4
  static constexpr int32_t BadAlg{ static_cast<int32_t>(0x80) };

  /// @brief Field BadCertId offset 0xffffffff size 0x4
  static constexpr int32_t BadCertId{ static_cast<int32_t>(0x8) };

  /// @brief Field BadCertTemplate offset 0xffffffff size 0x4
  static constexpr int32_t BadCertTemplate{ static_cast<int32_t>(0x100000) };

  /// @brief Field BadDataFormat offset 0xffffffff size 0x4
  static constexpr int32_t BadDataFormat{ static_cast<int32_t>(0x4) };

  /// @brief Field BadMessageCheck offset 0xffffffff size 0x4
  static constexpr int32_t BadMessageCheck{ static_cast<int32_t>(0x40) };

  /// @brief Field BadPop offset 0xffffffff size 0x4
  static constexpr int32_t BadPop{ static_cast<int32_t>(0x4000) };

  /// @brief Field BadRecipientNonce offset 0xffffffff size 0x4
  static constexpr int32_t BadRecipientNonce{ static_cast<int32_t>(0x400) };

  /// @brief Field BadRequest offset 0xffffffff size 0x4
  static constexpr int32_t BadRequest{ static_cast<int32_t>(0x20) };

  /// @brief Field BadSenderNonce offset 0xffffffff size 0x4
  static constexpr int32_t BadSenderNonce{ static_cast<int32_t>(0x200000) };

  /// @brief Field BadTime offset 0xffffffff size 0x4
  static constexpr int32_t BadTime{ static_cast<int32_t>(0x10) };

  /// @brief Field CertConfirmed offset 0xffffffff size 0x4
  static constexpr int32_t CertConfirmed{ static_cast<int32_t>(0x1000) };

  /// @brief Field CertRevoked offset 0xffffffff size 0x4
  static constexpr int32_t CertRevoked{ static_cast<int32_t>(0x2000) };

  /// @brief Field DuplicateCertReq offset 0xffffffff size 0x4
  static constexpr int32_t DuplicateCertReq{ static_cast<int32_t>(0x20000000) };

  /// @brief Field IncorrectData offset 0xffffffff size 0x4
  static constexpr int32_t IncorrectData{ static_cast<int32_t>(0x1) };

  /// @brief Field MissingTimeStamp offset 0xffffffff size 0x4
  static constexpr int32_t MissingTimeStamp{ static_cast<int32_t>(0x8000) };

  /// @brief Field NotAuthorized offset 0xffffffff size 0x4
  static constexpr int32_t NotAuthorized{ static_cast<int32_t>(0x10000) };

  /// @brief Field SignerNotTrusted offset 0xffffffff size 0x4
  static constexpr int32_t SignerNotTrusted{ static_cast<int32_t>(0x80000) };

  /// @brief Field SystemFailure offset 0xffffffff size 0x4
  static constexpr int32_t SystemFailure{ static_cast<int32_t>(0x40000000) };

  /// @brief Field SystemUnavail offset 0xffffffff size 0x4
  static constexpr int32_t SystemUnavail{ static_cast<int32_t>(0x80000000) };

  /// @brief Field TimeNotAvailable offset 0xffffffff size 0x4
  static constexpr int32_t TimeNotAvailable{ static_cast<int32_t>(0x200) };

  /// @brief Field TransactionIdInUse offset 0xffffffff size 0x4
  static constexpr int32_t TransactionIdInUse{ static_cast<int32_t>(0x40000) };

  /// @brief Field UnacceptedExtension offset 0xffffffff size 0x4
  static constexpr int32_t UnacceptedExtension{ static_cast<int32_t>(0x800000) };

  /// @brief Field UnacceptedPolicy offset 0xffffffff size 0x4
  static constexpr int32_t UnacceptedPolicy{ static_cast<int32_t>(0x100) };

  /// @brief Field UnsupportedVersion offset 0xffffffff size 0x4
  static constexpr int32_t UnsupportedVersion{ static_cast<int32_t>(0x20000) };

  /// @brief Field WrongAuthority offset 0xffffffff size 0x4
  static constexpr int32_t WrongAuthority{ static_cast<int32_t>(0x2) };

  /// @brief Field WrongIntegrity offset 0xffffffff size 0x4
  static constexpr int32_t WrongIntegrity{ static_cast<int32_t>(0x800) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 35 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo*, "Org.BouncyCastle.Asn1.Cmp", "PkiFailureInfo");
