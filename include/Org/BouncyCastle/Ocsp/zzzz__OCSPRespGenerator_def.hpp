#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/OCSPRespGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OCSPRespGenerator)
namespace Org::BouncyCastle::Ocsp {
class OcspResp;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OCSPRespGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::OCSPRespGenerator);
// Dependencies System.Object
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Ocsp.OCSPRespGenerator
class CORDL_TYPE OCSPRespGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Method Generate, addr 0x2522714, size 0x2e4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Ocsp::OcspResp* Generate(int32_t status, ::System::Object* response);

  static inline ::Org::BouncyCastle::Ocsp::OCSPRespGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x25229f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OCSPRespGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OCSPRespGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OCSPRespGenerator(OCSPRespGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OCSPRespGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OCSPRespGenerator(OCSPRespGenerator const&) = delete;

  /// @brief Field InternalError offset 0xffffffff size 0x4
  static constexpr int32_t InternalError{ static_cast<int32_t>(0x2) };

  /// @brief Field MalformedRequest offset 0xffffffff size 0x4
  static constexpr int32_t MalformedRequest{ static_cast<int32_t>(0x1) };

  /// @brief Field SigRequired offset 0xffffffff size 0x4
  static constexpr int32_t SigRequired{ static_cast<int32_t>(0x5) };

  /// @brief Field Successful offset 0xffffffff size 0x4
  static constexpr int32_t Successful{ static_cast<int32_t>(0x0) };

  /// @brief Field TryLater offset 0xffffffff size 0x4
  static constexpr int32_t TryLater{ static_cast<int32_t>(0x3) };

  /// @brief Field Unauthorized offset 0xffffffff size 0x4
  static constexpr int32_t Unauthorized{ static_cast<int32_t>(0x6) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1617 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::OCSPRespGenerator, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::OCSPRespGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::OCSPRespGenerator*, "Org.BouncyCastle.Ocsp", "OCSPRespGenerator");
