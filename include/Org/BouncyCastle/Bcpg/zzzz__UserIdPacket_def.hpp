#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/UserIdPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
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
// Dependencies Org.BouncyCastle.Bcpg.ContainedPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.UserIdPacket
class CORDL_TYPE UserIdPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field idData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_idData, put = __cordl_internal_set_idData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> idData;

  /// @brief Method Encode, addr 0x35a5f08, size 0x20, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetId, addr 0x35a5ecc, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetId();

  static inline ::Org::BouncyCastle::Bcpg::UserIdPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::UserIdPacket* New_ctor(::StringW id);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_idData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_idData();

  constexpr void __cordl_internal_set_idData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x359ff0c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x35a5e88, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW id);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserIdPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserIdPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserIdPacket(UserIdPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserIdPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserIdPacket(UserIdPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 600 };

  /// @brief Field idData, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___idData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::UserIdPacket, ___idData) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::UserIdPacket, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::UserIdPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::UserIdPacket*, "Org.BouncyCastle.Bcpg", "UserIdPacket");
