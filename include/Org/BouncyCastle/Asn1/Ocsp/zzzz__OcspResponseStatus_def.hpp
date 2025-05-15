#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/OcspResponseStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerEnumerated_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OcspResponseStatus)
namespace Org::BouncyCastle::Asn1 {
class DerEnumerated;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspResponseStatus;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus);
// Dependencies Org.BouncyCastle.Asn1.DerEnumerated
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ocsp.OcspResponseStatus
class CORDL_TYPE OcspResponseStatus : public ::Org::BouncyCastle::Asn1::DerEnumerated {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* New_ctor(::Org::BouncyCastle::Asn1::DerEnumerated* value);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* New_ctor(int32_t value);

  /// @brief Method .ctor, addr 0x24071d4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerEnumerated* value);

  /// @brief Method .ctor, addr 0x2407cd4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspResponseStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcspResponseStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspResponseStatus(OcspResponseStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspResponseStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspResponseStatus(OcspResponseStatus const&) = delete;

  /// @brief Field InternalError offset 0xffffffff size 0x4
  static constexpr int32_t InternalError{ static_cast<int32_t>(0x2) };

  /// @brief Field MalformedRequest offset 0xffffffff size 0x4
  static constexpr int32_t MalformedRequest{ static_cast<int32_t>(0x1) };

  /// @brief Field SignatureRequired offset 0xffffffff size 0x4
  static constexpr int32_t SignatureRequired{ static_cast<int32_t>(0x5) };

  /// @brief Field Successful offset 0xffffffff size 0x4
  static constexpr int32_t Successful{ static_cast<int32_t>(0x0) };

  /// @brief Field TryLater offset 0xffffffff size 0x4
  static constexpr int32_t TryLater{ static_cast<int32_t>(0x3) };

  /// @brief Field Unauthorized offset 0xffffffff size 0x4
  static constexpr int32_t Unauthorized{ static_cast<int32_t>(0x6) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 214 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*, "Org.BouncyCastle.Asn1.Ocsp", "OcspResponseStatus");
