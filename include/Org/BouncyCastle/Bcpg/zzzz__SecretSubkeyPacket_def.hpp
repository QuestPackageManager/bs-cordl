#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SecretKeyPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecretSubkeyPacket)
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SecretSubkeyPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::SecretSubkeyPacket);
// Type: Org.BouncyCastle.Bcpg::SecretSubkeyPacket
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(587))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(588))
// CS Name: ::Org.BouncyCastle.Bcpg::SecretSubkeyPacket*
class CORDL_TYPE SecretSubkeyPacket : public ::Org::BouncyCastle::Bcpg::SecretKeyPacket {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Bcpg::SecretSubkeyPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor addr 0x11cea8c size 0x4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::SecretSubkeyPacket* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                        ::Org::BouncyCastle::Bcpg::S2k* s2k, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv, ::ArrayW<uint8_t, ::Array<uint8_t>*> secKeyData);

  /// @brief Method .ctor addr 0x11d38a0 size 0x4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> iv, ::ArrayW<uint8_t, ::Array<uint8_t>*> secKeyData);

  static inline ::Org::BouncyCastle::Bcpg::SecretSubkeyPacket* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                        int32_t s2kUsage, ::Org::BouncyCastle::Bcpg::S2k* s2k, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv,
                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> secKeyData);

  /// @brief Method .ctor addr 0x11d38a4 size 0x4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, int32_t s2kUsage, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> iv, ::ArrayW<uint8_t, ::Array<uint8_t>*> secKeyData);

  /// @brief Method Encode addr 0x11d38a8 size 0x2c virtual true final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  // Ctor Parameters [CppParam { name: "", ty: "SecretSubkeyPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecretSubkeyPacket(SecretSubkeyPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecretSubkeyPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecretSubkeyPacket(SecretSubkeyPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecretSubkeyPacket();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SecretSubkeyPacket, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SecretSubkeyPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SecretSubkeyPacket*, "Org.BouncyCastle.Bcpg", "SecretSubkeyPacket");
