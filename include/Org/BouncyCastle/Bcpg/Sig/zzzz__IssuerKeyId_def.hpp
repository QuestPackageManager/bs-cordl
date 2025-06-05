#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/Sig/IssuerKeyId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IssuerKeyId)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class IssuerKeyId;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId);
// Dependencies Org.BouncyCastle.Bcpg.SignatureSubpacket
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.Sig.IssuerKeyId
class CORDL_TYPE IssuerKeyId : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  __declspec(property(get = get_KeyId)) int64_t KeyId;

  /// @brief Method KeyIdToBytes, addr 0x263e93c, size 0xd4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> KeyIdToBytes(int64_t keyId);

  static inline ::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId* New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId* New_ctor(bool critical, int64_t keyId);

  /// @brief Method .ctor, addr 0x263ea10, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x263ea58, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(bool critical, int64_t keyId);

  /// @brief Method get_KeyId, addr 0x263eaa4, size 0x9c, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId*, "Org.BouncyCastle.Bcpg.Sig", "IssuerKeyId");
