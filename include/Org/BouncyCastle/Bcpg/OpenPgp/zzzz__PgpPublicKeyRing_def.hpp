#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyRing_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpPublicKeyRing)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
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
class PgpPublicKeyRing;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpPublicKeyRing
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1647))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1661))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpPublicKeyRing*
class CORDL_TYPE PgpPublicKeyRing : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing {
public:
  // Declarations
  /// @brief Field keys, offset 0x10, size 0x8
  __declspec(property(get = __get_keys, put = __set_keys))::System::Collections::IList* keys;

  constexpr ::System::Collections::IList*& __get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_keys() const;

  constexpr void __set_keys(::System::Collections::IList* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method .ctor, addr 0x10b9ee8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* New_ctor(::System::Collections::IList* pubKeys);

  /// @brief Method .ctor, addr 0x10ba218, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* pubKeys);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* New_ctor(::System::IO::Stream* inputStream);

  /// @brief Method .ctor, addr 0x10b9f60, size 0x2b8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream);

  /// @brief Method GetPublicKey, addr 0x10ba3cc, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* GetPublicKey();

  /// @brief Method GetPublicKey, addr 0x10ba4bc, size 0x364, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* GetPublicKey(int64_t keyId);

  /// @brief Method GetPublicKeys, addr 0x10ba820, size 0x68, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetPublicKeys();

  /// @brief Method GetEncoded, addr 0x10ba888, size 0x80, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method Encode, addr 0x10ba908, size 0x38c, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* outStr);

  /// @brief Method InsertPublicKey, addr 0x10bac94, size 0x3d0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* InsertPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* pubRing,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method RemovePublicKey, addr 0x10bb064, size 0x284, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* RemovePublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* pubRing,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method ReadPublicKeyPacket, addr 0x10ba240, size 0xe8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* ReadPublicKeyPacket(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method ReadSubkey, addr 0x10ba328, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* ReadSubkey(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyRing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpPublicKeyRing(PgpPublicKeyRing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyRing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpPublicKeyRing(PgpPublicKeyRing const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpPublicKeyRing();

public:
  /// @brief Field keys, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___keys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing, ___keys) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPublicKeyRing");
