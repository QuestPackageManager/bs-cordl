#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Rfc7748/X25519.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X25519)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
class X25519;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Rfc7748::X25519);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Rfc7748.X25519
class CORDL_TYPE X25519 : public ::System::Object {
public:
  // Declarations
  /// @brief Method CalculateAgreement, addr 0x24b9668, size 0xb4, virtual false, abstract: false, final false
  static inline bool CalculateAgreement(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> u, int32_t uOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r,
                                        int32_t rOff);

  /// @brief Method Decode32, addr 0x24b9a44, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t Decode32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method DecodeScalar, addr 0x24b9aac, size 0x90, virtual false, abstract: false, final false
  static inline void DecodeScalar(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> n);

  /// @brief Method GeneratePrivateKey, addr 0x24b9b3c, size 0x58, virtual false, abstract: false, final false
  static inline void GeneratePrivateKey(::Org::BouncyCastle::Security::SecureRandom* random, ::ArrayW<uint8_t, ::Array<uint8_t>*> k);

  /// @brief Method GeneratePublicKey, addr 0x24b9b94, size 0x4, virtual false, abstract: false, final false
  static inline void GeneratePublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff);

  static inline ::Org::BouncyCastle::Math::EC::Rfc7748::X25519* New_ctor();

  /// @brief Method PointDouble, addr 0x24b9c94, size 0xe8, virtual false, abstract: false, final false
  static inline void PointDouble(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Precompute, addr 0x24ba928, size 0x4c, virtual false, abstract: false, final false
  static inline void Precompute();

  /// @brief Method ScalarMult, addr 0x24b971c, size 0x328, virtual false, abstract: false, final false
  static inline void ScalarMult(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> u, int32_t uOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff);

  /// @brief Method ScalarMultBase, addr 0x24b9b98, size 0xfc, virtual false, abstract: false, final false
  static inline void ScalarMultBase(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff);

  /// @brief Method .ctor, addr 0x24bb590, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X25519();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X25519", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X25519(X25519&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X25519", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X25519(X25519 const&) = delete;

  /// @brief Field C_A offset 0xffffffff size 0x4
  static constexpr int32_t C_A{ static_cast<int32_t>(0x76d06) };

  /// @brief Field C_A24 offset 0xffffffff size 0x4
  static constexpr int32_t C_A24{ static_cast<int32_t>(0x1db42) };

  /// @brief Field PointSize offset 0xffffffff size 0x4
  static constexpr int32_t PointSize{ static_cast<int32_t>(0x20) };

  /// @brief Field ScalarSize offset 0xffffffff size 0x4
  static constexpr int32_t ScalarSize{ static_cast<int32_t>(0x20) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1552 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Rfc7748::X25519, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Rfc7748
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc7748::X25519);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc7748::X25519*, "Org.BouncyCastle.Math.EC.Rfc7748", "X25519");
