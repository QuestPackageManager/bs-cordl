#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RSAParameters)
// Forward declare root types
namespace System::Security::Cryptography {
struct RSAParameters;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::RSAParameters);
// Type: System.Security.Cryptography::RSAParameters
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: ::System.Security.Cryptography::RSAParameters
struct CORDL_TYPE RSAParameters {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSAParameters();

  // Ctor Parameters [CppParam { name: "Exponent", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Modulus", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>",
  // modifiers: "", def_value: None }, CppParam { name: "P", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Q", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "DP", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "DQ",
  // ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "InverseQ", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam {
  // name: "D", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
  constexpr RSAParameters(::ArrayW<uint8_t, ::Array<uint8_t>*> Exponent, ::ArrayW<uint8_t, ::Array<uint8_t>*> Modulus, ::ArrayW<uint8_t, ::Array<uint8_t>*> P, ::ArrayW<uint8_t, ::Array<uint8_t>*> Q,
                          ::ArrayW<uint8_t, ::Array<uint8_t>*> DP, ::ArrayW<uint8_t, ::Array<uint8_t>*> DQ, ::ArrayW<uint8_t, ::Array<uint8_t>*> InverseQ,
                          ::ArrayW<uint8_t, ::Array<uint8_t>*> D) noexcept;

  /// @brief Field Exponent, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> Exponent;

  /// @brief Field Modulus, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> Modulus;

  /// @brief Field P, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> P;

  /// @brief Field Q, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> Q;

  /// @brief Field DP, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> DP;

  /// @brief Field DQ, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> DQ;

  /// @brief Field InverseQ, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> InverseQ;

  /// @brief Field D, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> D;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAParameters, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAParameters, Exponent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAParameters, Modulus) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAParameters, P) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAParameters, Q) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAParameters, DP) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAParameters, DQ) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAParameters, InverseQ) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAParameters, D) == 0x38, "Offset mismatch!");

} // namespace System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAParameters, "System.Security.Cryptography", "RSAParameters");
