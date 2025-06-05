#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/CertificateStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CertificateStatus)
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class CertificateStatus;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::CertificateStatus);
// Dependencies System.Object
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Ocsp.CertificateStatus
class CORDL_TYPE CertificateStatus : public ::System::Object {
public:
  // Declarations
  /// @brief Field Good, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Good, put = setStaticF_Good)) ::Org::BouncyCastle::Ocsp::CertificateStatus* Good;

  static inline ::Org::BouncyCastle::Ocsp::CertificateStatus* New_ctor();

  /// @brief Method .ctor, addr 0x251f410, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Ocsp::CertificateStatus* getStaticF_Good();

  static inline void setStaticF_Good(::Org::BouncyCastle::Ocsp::CertificateStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateStatus(CertificateStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateStatus(CertificateStatus const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1611 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::CertificateStatus, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::CertificateStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::CertificateStatus*, "Org.BouncyCastle.Ocsp", "CertificateStatus");
