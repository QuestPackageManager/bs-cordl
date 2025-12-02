#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/RevokedStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateStatus_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RevokedStatus)
namespace Org::BouncyCastle::Asn1::Ocsp {
class RevokedInfo;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class RevokedStatus;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::RevokedStatus);
// Dependencies Org.BouncyCastle.Ocsp.CertificateStatus
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Ocsp.RevokedStatus
class CORDL_TYPE RevokedStatus : public ::Org::BouncyCastle::Ocsp::CertificateStatus {
public:
  // Declarations
  __declspec(property(get = get_HasRevocationReason)) bool HasRevocationReason;

  __declspec(property(get = get_RevocationReason)) int32_t RevocationReason;

  __declspec(property(get = get_RevocationTime)) ::System::DateTime RevocationTime;

  /// @brief Field info, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_info, put = __cordl_internal_set_info)) ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* info;

  static inline ::Org::BouncyCastle::Ocsp::RevokedStatus* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* info);

  static inline ::Org::BouncyCastle::Ocsp::RevokedStatus* New_ctor(::System::DateTime revocationDate, int32_t reason);

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* const& __cordl_internal_get_info() const;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*& __cordl_internal_get_info();

  constexpr void __cordl_internal_set_info(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* value);

  /// @brief Method .ctor, addr 0x3454a94, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* info);

  /// @brief Method .ctor, addr 0x3454af8, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTime revocationDate, int32_t reason);

  /// @brief Method get_HasRevocationReason, addr 0x344ea58, size 0x20, virtual false, abstract: false, final false
  inline bool get_HasRevocationReason();

  /// @brief Method get_RevocationReason, addr 0x344ea78, size 0x6c, virtual false, abstract: false, final false
  inline int32_t get_RevocationReason();

  /// @brief Method get_RevocationTime, addr 0x344eae4, size 0x24, virtual false, abstract: false, final false
  inline ::System::DateTime get_RevocationTime();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RevokedStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RevokedStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RevokedStatus(RevokedStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RevokedStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RevokedStatus(RevokedStatus const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1624 };

  /// @brief Field info, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* ___info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Ocsp::RevokedStatus, ___info) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::RevokedStatus, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::RevokedStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::RevokedStatus*, "Org.BouncyCastle.Ocsp", "RevokedStatus");
