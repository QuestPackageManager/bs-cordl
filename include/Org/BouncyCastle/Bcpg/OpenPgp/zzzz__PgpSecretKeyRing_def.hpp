#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyRing_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpSecretKeyRing)
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKeyRing;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKey;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKeyRing;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpSecretKeyRing
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1647))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1664))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpSecretKeyRing*
class CORDL_TYPE PgpSecretKeyRing : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing {
public:
  // Declarations
  /// @brief Field keys, offset 0x10, size 0x8
  __declspec(property(get = __get_keys, put = __set_keys))::System::Collections::IList* keys;

  /// @brief Field extraPubKeys, offset 0x18, size 0x8
  __declspec(property(get = __get_extraPubKeys, put = __set_extraPubKeys))::System::Collections::IList* extraPubKeys;

  constexpr ::System::Collections::IList*& __get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_keys() const;

  constexpr void __set_keys(::System::Collections::IList* value);

  constexpr ::System::Collections::IList*& __get_extraPubKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_extraPubKeys() const;

  constexpr void __set_extraPubKeys(::System::Collections::IList* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* New_ctor(::System::Collections::IList* keys);

  /// @brief Method .ctor, addr 0x10c381c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* keys);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* New_ctor(::System::Collections::IList* keys, ::System::Collections::IList* extraPubKeys);

  /// @brief Method .ctor, addr 0x10c3894, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* keys, ::System::Collections::IList* extraPubKeys);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method .ctor, addr 0x10c38c0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* New_ctor(::System::IO::Stream* inputStream);

  /// @brief Method .ctor, addr 0x10c3934, size 0x538, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream);

  /// @brief Method GetPublicKey, addr 0x10c3e6c, size 0xf4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* GetPublicKey();

  /// @brief Method GetSecretKey, addr 0x10c3f60, size 0xf0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* GetSecretKey();

  /// @brief Method GetSecretKeys, addr 0x10c4050, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetSecretKeys();

  /// @brief Method GetSecretKey, addr 0x10c40b8, size 0x374, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* GetSecretKey(int64_t keyId);

  /// @brief Method GetExtraPublicKeys, addr 0x10c442c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetExtraPublicKeys();

  /// @brief Method GetEncoded, addr 0x10c4494, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method Encode, addr 0x10c450c, size 0x658, virtual false, abstract: false, final false
  inline void Encode(::System::IO::Stream* outStr);

  /// @brief Method ReplacePublicKeys, addr 0x10c4b64, size 0x4ec, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* ReplacePublicKeys(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* secretRing,
                                                                                        ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* publicRing);

  /// @brief Method CopyWithNewPassword, addr 0x10c5050, size 0x5a4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* CopyWithNewPassword(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* ring,
                                                                                          ::ArrayW<char16_t, ::Array<char16_t>*> oldPassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> newPassPhrase,
                                                                                          ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                          ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method InsertSecretKey, addr 0x10c55f4, size 0x3ec, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* InsertSecretKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* secRing,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* secKey);

  /// @brief Method RemoveSecretKey, addr 0x10c59e0, size 0x298, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* RemoveSecretKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* secRing,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* secKey);

  // Ctor Parameters [CppParam { name: "", ty: "PgpSecretKeyRing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpSecretKeyRing(PgpSecretKeyRing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpSecretKeyRing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpSecretKeyRing(PgpSecretKeyRing const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpSecretKeyRing();

public:
  /// @brief Field keys, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___keys;

  /// @brief Field extraPubKeys, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___extraPubKeys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing, ___keys) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing, ___extraPubKeys) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSecretKeyRing");
