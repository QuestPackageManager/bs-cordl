#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/ModDetectionCodePacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
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
// Dependencies Org.BouncyCastle.Bcpg.ContainedPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.ModDetectionCodePacket
class CORDL_TYPE ModDetectionCodePacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest)) ::ArrayW<uint8_t, ::Array<uint8_t>*> digest;

  /// @brief Method Encode, addr 0x2648cfc, size 0x28, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetDigest, addr 0x2648c84, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDigest();

  static inline ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> digest);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_digest() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_digest();

  constexpr void __cordl_internal_set_digest(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x26460f8, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x2648b88, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> digest);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ModDetectionCodePacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ModDetectionCodePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ModDetectionCodePacket(ModDetectionCodePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ModDetectionCodePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ModDetectionCodePacket(ModDetectionCodePacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 575 };

  /// @brief Field digest, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___digest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::ModDetectionCodePacket, ___digest) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ModDetectionCodePacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*, "Org.BouncyCastle.Bcpg", "ModDetectionCodePacket");
