#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpSecretKeyRing.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyRing_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpSecretKeyRing)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKeyRing;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKey;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKeyRing;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing);
// Dependencies Org.BouncyCastle.Bcpg.OpenPgp.PgpKeyRing
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpSecretKeyRing
class CORDL_TYPE PgpSecretKeyRing : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing {
public:
  // Declarations
  /// @brief Field extraPubKeys, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_extraPubKeys, put = __cordl_internal_set_extraPubKeys)) ::System::Collections::IList* extraPubKeys;

  /// @brief Field keys, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys)) ::System::Collections::IList* keys;

  /// @brief Method CopyWithNewPassword, addr 0x2544ecc, size 0x5b0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* CopyWithNewPassword(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* ring,
                                                                                          ::ArrayW<char16_t, ::Array<char16_t>*> oldPassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> newPassPhrase,
                                                                                          ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                          ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method Encode, addr 0x2544394, size 0x650, virtual false, abstract: false, final false
  inline void Encode(::System::IO::Stream* outStr);

  /// @brief Method GetEncoded, addr 0x254431c, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetExtraPublicKeys, addr 0x25442bc, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetExtraPublicKeys();

  /// @brief Method GetPublicKey, addr 0x2543d18, size 0xf4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* GetPublicKey();

  /// @brief Method GetSecretKey, addr 0x2543e0c, size 0xf0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* GetSecretKey();

  /// @brief Method GetSecretKey, addr 0x2543f5c, size 0x360, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* GetSecretKey(int64_t keyId);

  /// @brief Method GetSecretKeys, addr 0x2543efc, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetSecretKeys();

  /// @brief Method InsertSecretKey, addr 0x254547c, size 0x3e4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* InsertSecretKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* secRing,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* secKey);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* New_ctor(::System::IO::Stream* inputStream);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* New_ctor(::System::Collections::IList* keys);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* New_ctor(::System::Collections::IList* keys, ::System::Collections::IList* extraPubKeys);

  /// @brief Method RemoveSecretKey, addr 0x2545860, size 0x294, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* RemoveSecretKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* secRing,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* secKey);

  /// @brief Method ReplacePublicKeys, addr 0x25449e4, size 0x4e8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* ReplacePublicKeys(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* secretRing,
                                                                                        ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* publicRing);

  constexpr ::System::Collections::IList* const& __cordl_internal_get_extraPubKeys() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_extraPubKeys();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_keys() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_keys();

  constexpr void __cordl_internal_set_extraPubKeys(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_keys(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x2543770, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method .ctor, addr 0x25437dc, size 0x53c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream);

  /// @brief Method .ctor, addr 0x25436cc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* keys);

  /// @brief Method .ctor, addr 0x2543744, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* keys, ::System::Collections::IList* extraPubKeys);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpSecretKeyRing();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpSecretKeyRing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpSecretKeyRing(PgpSecretKeyRing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpSecretKeyRing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpSecretKeyRing(PgpSecretKeyRing const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1664 };

  /// @brief Field keys, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___keys;

  /// @brief Field extraPubKeys, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___extraPubKeys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing, ___keys) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing, ___extraPubKeys) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSecretKeyRing");
