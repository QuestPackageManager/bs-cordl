#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Math.EC.Rfc7748::X448
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1554))
// CS Name: ::Org.BouncyCastle.Math.EC.Rfc7748::X448*
class CORDL_TYPE X448 : public ::System::Object {
public:
  // Declarations
  /// @brief Method CalculateAgreement addr 0xfcbaf4 size 0xb4 virtual false final false
  static inline bool CalculateAgreement(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> u, int32_t uOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r,
                                        int32_t rOff);

  /// @brief Method Decode32 addr 0xfcbea0 size 0x68 virtual false final false
  static inline uint32_t Decode32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method DecodeScalar addr 0xfcbf08 size 0x8c virtual false final false
  static inline void DecodeScalar(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> n);

  /// @brief Method GeneratePrivateKey addr 0xfcbf94 size 0x54 virtual false final false
  static inline void GeneratePrivateKey(::Org::BouncyCastle::Security::SecureRandom* random, ::ArrayW<uint8_t, ::Array<uint8_t>*> k);

  /// @brief Method GeneratePublicKey addr 0xfcbfe8 size 0x4 virtual false final false
  static inline void GeneratePublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff);

  /// @brief Method PointDouble addr 0xfcc0d0 size 0xb8 virtual false final false
  static inline void PointDouble(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Precompute addr 0xfcd65c size 0x50 virtual false final false
  static inline void Precompute();

  /// @brief Method ScalarMult addr 0xfcbba8 size 0x2f8 virtual false final false
  static inline void ScalarMult(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> u, int32_t uOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff);

  /// @brief Method ScalarMultBase addr 0xfcbfec size 0xe4 virtual false final false
  static inline void ScalarMultBase(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff);

  static inline ::Org::BouncyCastle::Math::EC::Rfc7748::X448* New_ctor();

  /// @brief Method .ctor addr 0xfcd960 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "X448", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X448(X448&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X448", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X448(X448 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X448();

public:
  /// @brief Field PointSize offset 0xffffffff size 0x4
  static constexpr int32_t PointSize{ static_cast<int32_t>(0x38) };

  /// @brief Field ScalarSize offset 0xffffffff size 0x4
  static constexpr int32_t ScalarSize{ static_cast<int32_t>(0x38) };

  /// @brief Field C_A offset 0xffffffff size 0x4
  static constexpr uint32_t C_A{ static_cast<uint32_t>(0xa66202c0u) };

  /// @brief Field C_A24 offset 0xffffffff size 0x4
  static constexpr uint32_t C_A24{ static_cast<uint32_t>(0xaa9800c0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Rfc7748::X448, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Rfc7748
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc7748::X448);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc7748::X448*, "Org.BouncyCastle.Math.EC.Rfc7748", "X448");
