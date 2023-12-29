#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModDetectionCodePacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ModDetectionCodePacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::ModDetectionCodePacket);
// Type: Org.BouncyCastle.Bcpg::ModDetectionCodePacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(575))
// CS Name: ::Org.BouncyCastle.Bcpg::ModDetectionCodePacket*
class CORDL_TYPE ModDetectionCodePacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::ArrayW<uint8_t, ::Array<uint8_t>*> digest;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_digest();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_digest() const;

  constexpr void __set_digest(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor addr 0x115df90 size 0xb8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> digest);

  /// @brief Method .ctor addr 0x1160adc size 0x100 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> digest);

  /// @brief Method GetDigest addr 0x1160bdc size 0x78 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDigest();

  /// @brief Method Encode addr 0x1160c54 size 0x28 virtual true final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  // Ctor Parameters [CppParam { name: "", ty: "ModDetectionCodePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ModDetectionCodePacket(ModDetectionCodePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ModDetectionCodePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ModDetectionCodePacket(ModDetectionCodePacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ModDetectionCodePacket();

public:
  /// @brief Field digest, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___digest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ModDetectionCodePacket, ___digest) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ModDetectionCodePacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*, "Org.BouncyCastle.Bcpg", "ModDetectionCodePacket");
