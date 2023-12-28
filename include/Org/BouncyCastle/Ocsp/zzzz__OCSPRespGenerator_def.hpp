#pragma once
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
// Type: Org.BouncyCastle.Ocsp::OCSPRespGenerator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1617))
// CS Name: ::Org.BouncyCastle.Ocsp::OCSPRespGenerator*
class CORDL_TYPE OCSPRespGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Method Generate addr 0x10a2248 size 0x318 virtual false final false
  inline ::Org::BouncyCastle::Ocsp::OcspResp* Generate(int32_t status, ::System::Object* response);

  static inline ::Org::BouncyCastle::Ocsp::OCSPRespGenerator* New_ctor();

  /// @brief Method .ctor addr 0x10a2560 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OCSPRespGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OCSPRespGenerator(OCSPRespGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OCSPRespGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OCSPRespGenerator(OCSPRespGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OCSPRespGenerator();

public:
  /// @brief Field Successful offset 0xffffffff size 0x4
  static constexpr int32_t Successful{ static_cast<int32_t>(0x0) };

  /// @brief Field MalformedRequest offset 0xffffffff size 0x4
  static constexpr int32_t MalformedRequest{ static_cast<int32_t>(0x1) };

  /// @brief Field InternalError offset 0xffffffff size 0x4
  static constexpr int32_t InternalError{ static_cast<int32_t>(0x2) };

  /// @brief Field TryLater offset 0xffffffff size 0x4
  static constexpr int32_t TryLater{ static_cast<int32_t>(0x3) };

  /// @brief Field SigRequired offset 0xffffffff size 0x4
  static constexpr int32_t SigRequired{ static_cast<int32_t>(0x5) };

  /// @brief Field Unauthorized offset 0xffffffff size 0x4
  static constexpr int32_t Unauthorized{ static_cast<int32_t>(0x6) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::OCSPRespGenerator, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::OCSPRespGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::OCSPRespGenerator*, "Org.BouncyCastle.Ocsp", "OCSPRespGenerator");
