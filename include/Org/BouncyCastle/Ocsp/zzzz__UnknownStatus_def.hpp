#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateStatus_def.hpp"
CORDL_MODULE_EXPORT(UnknownStatus)
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class UnknownStatus;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::UnknownStatus);
// Type: Org.BouncyCastle.Ocsp::UnknownStatus
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1626))
// CS Name: ::Org.BouncyCastle.Ocsp::UnknownStatus*
class CORDL_TYPE UnknownStatus : public ::Org::BouncyCastle::Ocsp::CertificateStatus {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Ocsp::UnknownStatus* New_ctor();

  /// @brief Method .ctor, addr 0x10a5164, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UnknownStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnknownStatus(UnknownStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnknownStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnknownStatus(UnknownStatus const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnknownStatus();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::UnknownStatus, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::UnknownStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::UnknownStatus*, "Org.BouncyCastle.Ocsp", "UnknownStatus");
