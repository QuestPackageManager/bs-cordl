#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\Sig\KeyExpirationTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyExpirationTime)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class KeyExpirationTime;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime*, "Org.BouncyCastle.Bcpg.Sig", "KeyExpirationTime");
// Dependencies Org.BouncyCastle.Bcpg.SignatureSubpacket
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.Sig.KeyExpirationTime
class CORDL_TYPE KeyExpirationTime : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  __declspec(property(get = get_Time)) int64_t Time;

  static inline ::Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime* New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data);

  static inline ::Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime* New_ctor(bool critical, int64_t seconds);

  /// @brief Method TimeToBytes, addr 0x3694b9c, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> TimeToBytes(int64_t t);

  /// @brief Method .ctor, addr 0x3694c34, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data);

  /// @brief Method .ctor, addr 0x3694c4c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(bool critical, int64_t seconds);

  /// @brief Method get_Time, addr 0x3694c84, size 0x5c, virtual false, abstract: false, final false
  inline int64_t get_Time();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyExpirationTime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyExpirationTime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyExpirationTime(KeyExpirationTime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyExpirationTime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyExpirationTime(KeyExpirationTime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 536 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime) == 0x20, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Sig
