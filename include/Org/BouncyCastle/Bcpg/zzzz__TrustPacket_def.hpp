#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/TrustPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrustPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class TrustPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::TrustPacket);
// Type: Org.BouncyCastle.Bcpg::TrustPacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::TrustPacket*
class CORDL_TYPE TrustPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field levelAndTrustAmount, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelAndTrustAmount, put = __cordl_internal_set_levelAndTrustAmount)) ::ArrayW<uint8_t, ::Array<uint8_t>*> levelAndTrustAmount;

  /// @brief Method Encode, addr 0x260b4e8, size 0x28, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetLevelAndTrustAmount, addr 0x260b470, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetLevelAndTrustAmount();

  static inline ::Org::BouncyCastle::Bcpg::TrustPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::TrustPacket* New_ctor(int32_t trustCode);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_levelAndTrustAmount() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_levelAndTrustAmount();

  constexpr void __cordl_internal_set_levelAndTrustAmount(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x26054f4, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x260b3f0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int32_t trustCode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrustPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrustPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrustPacket(TrustPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrustPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrustPacket(TrustPacket const&) = delete;

  /// @brief Field levelAndTrustAmount, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___levelAndTrustAmount;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 596 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::TrustPacket, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::TrustPacket, ___levelAndTrustAmount) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::TrustPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::TrustPacket*, "Org.BouncyCastle.Bcpg", "TrustPacket");
