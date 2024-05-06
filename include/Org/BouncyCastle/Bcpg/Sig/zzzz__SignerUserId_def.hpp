#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignerUserId)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class SignerUserId;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Sig::SignerUserId);
// Type: Org.BouncyCastle.Bcpg.Sig::SignerUserId
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.Sig::SignerUserId*
class CORDL_TYPE SignerUserId : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  /// @brief Method GetId, addr 0x142c91c, size 0xb4, virtual false, abstract: false, final false
  inline ::StringW GetId();

  static inline ::Org::BouncyCastle::Bcpg::Sig::SignerUserId* New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Org::BouncyCastle::Bcpg::Sig::SignerUserId* New_ctor(bool critical, ::StringW userId);

  /// @brief Method UserIdToBytes, addr 0x142c7e4, size 0xa4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UserIdToBytes(::StringW id);

  /// @brief Method .ctor, addr 0x142c888, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x142c8d0, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(bool critical, ::StringW userId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerUserId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignerUserId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerUserId(SignerUserId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerUserId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerUserId(SignerUserId const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Sig::SignerUserId, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::SignerUserId);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::SignerUserId*, "Org.BouncyCastle.Bcpg.Sig", "SignerUserId");
