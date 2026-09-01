#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\Sig\IssuerKeyId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IssuerKeyId)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class IssuerKeyId;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId*, "Org.BouncyCastle.Bcpg.Sig", "IssuerKeyId");
// Dependencies Org.BouncyCastle.Bcpg.SignatureSubpacket
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.Sig.IssuerKeyId
class CORDL_TYPE IssuerKeyId : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  __declspec(property(get = get_KeyId)) int64_t KeyId;

  /// @brief Method KeyIdToBytes, addr 0x36949d8, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> KeyIdToBytes(int64_t keyId);

  static inline ::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId* New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data);

  static inline ::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId* New_ctor(bool critical, int64_t keyId);

  /// @brief Method .ctor, addr 0x3694ab0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data);

  /// @brief Method .ctor, addr 0x3694ac8, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(bool critical, int64_t keyId);

  /// @brief Method get_KeyId, addr 0x3694b00, size 0x9c, virtual false, abstract: false, final false
  inline int64_t get_KeyId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IssuerKeyId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IssuerKeyId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IssuerKeyId(IssuerKeyId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IssuerKeyId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IssuerKeyId(IssuerKeyId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 535 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId) == 0x20, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Sig
