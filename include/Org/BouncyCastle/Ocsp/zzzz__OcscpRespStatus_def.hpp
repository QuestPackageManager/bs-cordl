#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/OcscpRespStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Ocsp/zzzz__OcspRespStatus_def.hpp"
CORDL_MODULE_EXPORT(OcscpRespStatus)
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OcscpRespStatus;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::OcscpRespStatus);
// Dependencies Org.BouncyCastle.Ocsp.OcspRespStatus
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Ocsp.OcscpRespStatus
class CORDL_TYPE OcscpRespStatus : public ::Org::BouncyCastle::Ocsp::OcspRespStatus {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Ocsp::OcscpRespStatus* New_ctor();

  /// @brief Method .ctor, addr 0x2526740, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcscpRespStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcscpRespStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcscpRespStatus(OcscpRespStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcscpRespStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcscpRespStatus(OcscpRespStatus const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::OcscpRespStatus, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::OcscpRespStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::OcscpRespStatus*, "Org.BouncyCastle.Ocsp", "OcscpRespStatus");
