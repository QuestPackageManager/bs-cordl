#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserIdPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class UserIdPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::UserIdPacket);
// Type: Org.BouncyCastle.Bcpg::UserIdPacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(560))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(600))
// CS Name: ::Org.BouncyCastle.Bcpg::UserIdPacket*
class CORDL_TYPE UserIdPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field idData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_idData, put = __cordl_internal_set_idData))::ArrayW<uint8_t, ::Array<uint8_t>*> idData;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_idData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_idData() const;

  constexpr void __cordl_internal_set_idData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Bcpg::UserIdPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x11fccc4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::UserIdPacket* New_ctor(::StringW id);

  /// @brief Method .ctor, addr 0x1203168, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::StringW id);

  /// @brief Method GetId, addr 0x12031b4, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetId();

  /// @brief Method Encode, addr 0x12031f0, size 0x28, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  // Ctor Parameters [CppParam { name: "", ty: "UserIdPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserIdPacket(UserIdPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserIdPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserIdPacket(UserIdPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserIdPacket();

public:
  /// @brief Field idData, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___idData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::UserIdPacket, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::UserIdPacket, ___idData) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::UserIdPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::UserIdPacket*, "Org.BouncyCastle.Bcpg", "UserIdPacket");
