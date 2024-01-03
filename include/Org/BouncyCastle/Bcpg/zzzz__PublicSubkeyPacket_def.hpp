#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyPacket_def.hpp"
CORDL_MODULE_EXPORT(PublicSubkeyPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class PublicSubkeyPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::PublicSubkeyPacket);
// Type: Org.BouncyCastle.Bcpg::PublicSubkeyPacket
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(583))
// CS Name: ::Org.BouncyCastle.Bcpg::PublicSubkeyPacket*
class CORDL_TYPE PublicSubkeyPacket : public ::Org::BouncyCastle::Bcpg::PublicKeyPacket {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Bcpg::PublicSubkeyPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x11cf194, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::PublicSubkeyPacket* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::System::DateTime time, ::Org::BouncyCastle::Bcpg::IBcpgKey* key);

  /// @brief Method .ctor, addr 0x11d2864, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::System::DateTime time, ::Org::BouncyCastle::Bcpg::IBcpgKey* key);

  /// @brief Method Encode, addr 0x11d2868, size 0x38, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  // Ctor Parameters [CppParam { name: "", ty: "PublicSubkeyPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PublicSubkeyPacket(PublicSubkeyPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PublicSubkeyPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PublicSubkeyPacket(PublicSubkeyPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PublicSubkeyPacket();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::PublicSubkeyPacket, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::PublicSubkeyPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::PublicSubkeyPacket*, "Org.BouncyCastle.Bcpg", "PublicSubkeyPacket");
