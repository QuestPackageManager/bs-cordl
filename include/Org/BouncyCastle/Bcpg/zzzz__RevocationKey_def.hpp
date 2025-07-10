#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/RevocationKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RevocationKey)
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
struct RevocationKeyTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class RevocationKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::RevocationKey);
// Dependencies Org.BouncyCastle.Bcpg.SignatureSubpacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.RevocationKey
class CORDL_TYPE RevocationKey : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  __declspec(property(get = get_Algorithm)) ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Algorithm;

  __declspec(property(get = get_SignatureClass)) ::Org::BouncyCastle::Bcpg::RevocationKeyTag SignatureClass;

  /// @brief Method CreateData, addr 0x263f8a4, size 0xac, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateData(::Org::BouncyCastle::Bcpg::RevocationKeyTag signatureClass, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint);

  /// @brief Method GetFingerprint, addr 0x263f9a4, size 0x8c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetFingerprint();

  static inline ::Org::BouncyCastle::Bcpg::RevocationKey* New_ctor(bool isCritical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Org::BouncyCastle::Bcpg::RevocationKey* New_ctor(bool isCritical, ::Org::BouncyCastle::Bcpg::RevocationKeyTag signatureClass,
                                                                   ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint);

  /// @brief Method .ctor, addr 0x263f808, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool isCritical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x263f850, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(bool isCritical, ::Org::BouncyCastle::Bcpg::RevocationKeyTag signatureClass, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint);

  /// @brief Method get_Algorithm, addr 0x263f978, size 0x2c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_Algorithm();

  /// @brief Method get_SignatureClass, addr 0x263f950, size 0x28, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::RevocationKeyTag get_SignatureClass();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RevocationKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RevocationKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RevocationKey(RevocationKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RevocationKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RevocationKey(RevocationKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 542 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::RevocationKey, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::RevocationKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::RevocationKey*, "Org.BouncyCastle.Bcpg", "RevocationKey");
