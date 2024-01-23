#pragma once
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
// Type: Org.BouncyCastle.Ocsp::CertificateStatus
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1611))
// CS Name: ::Org.BouncyCastle.Ocsp::CertificateStatus*
class CORDL_TYPE CertificateStatus : public ::System::Object {
public:
  // Declarations
  /// @brief Field Good, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Good, put = setStaticF_Good))::Org::BouncyCastle::Ocsp::CertificateStatus* Good;

  static inline void setStaticF_Good(::Org::BouncyCastle::Ocsp::CertificateStatus* value);

  static inline ::Org::BouncyCastle::Ocsp::CertificateStatus* getStaticF_Good();

  static inline ::Org::BouncyCastle::Ocsp::CertificateStatus* New_ctor();

  /// @brief Method .ctor, addr 0x109f57c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateStatus(CertificateStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateStatus(CertificateStatus const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateStatus();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::CertificateStatus, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::CertificateStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::CertificateStatus*, "Org.BouncyCastle.Ocsp", "CertificateStatus");
