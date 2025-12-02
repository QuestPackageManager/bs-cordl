#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Rfc7748/X448.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X448)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
class X448;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Rfc7748::X448);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Rfc7748.X448
class CORDL_TYPE X448 : public ::System::Object {
public:
  // Declarations
  /// @brief Method CalculateAgreement, addr 0x33eee18, size 0xb8, virtual false, abstract: false, final false
  static inline bool CalculateAgreement(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> u, int32_t uOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r,
                                        int32_t rOff);

  /// @brief Method Decode32, addr 0x33ef1cc, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t Decode32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method DecodeScalar, addr 0x33ef234, size 0x8c, virtual false, abstract: false, final false
  static inline void DecodeScalar(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> n);

  /// @brief Method GeneratePrivateKey, addr 0x33ef2c0, size 0x54, virtual false, abstract: false, final false
  static inline void GeneratePrivateKey(::Org::BouncyCastle::Security::SecureRandom* random, ::ArrayW<uint8_t, ::Array<uint8_t>*> k);

  /// @brief Method GeneratePublicKey, addr 0x33ef314, size 0x4, virtual false, abstract: false, final false
  static inline void GeneratePublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff);

  static inline ::Org::BouncyCastle::Math::EC::Rfc7748::X448* New_ctor();

  /// @brief Method PointDouble, addr 0x33ef400, size 0xb8, virtual false, abstract: false, final false
  static inline void PointDouble(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Precompute, addr 0x33f0a50, size 0x54, virtual false, abstract: false, final false
  static inline void Precompute();

  /// @brief Method ScalarMult, addr 0x33eeed0, size 0x2fc, virtual false, abstract: false, final false
  static inline void ScalarMult(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> u, int32_t uOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff);

  /// @brief Method ScalarMultBase, addr 0x33ef318, size 0xe8, virtual false, abstract: false, final false
  static inline void ScalarMultBase(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff);

  /// @brief Method .ctor, addr 0x33f0d60, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X448();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X448", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X448(X448&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X448", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X448(X448 const&) = delete;

  /// @brief Field C_A offset 0xffffffff size 0x4
  static constexpr uint32_t C_A{ static_cast<uint32_t>(0x262a6u) };

  /// @brief Field C_A24 offset 0xffffffff size 0x4
  static constexpr uint32_t C_A24{ static_cast<uint32_t>(0x98aau) };

  /// @brief Field PointSize offset 0xffffffff size 0x4
  static constexpr int32_t PointSize{ static_cast<int32_t>(0x38) };

  /// @brief Field ScalarSize offset 0xffffffff size 0x4
  static constexpr int32_t ScalarSize{ static_cast<int32_t>(0x38) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1554 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Rfc7748::X448, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Rfc7748
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc7748::X448);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc7748::X448*, "Org.BouncyCastle.Math.EC.Rfc7748", "X448");
