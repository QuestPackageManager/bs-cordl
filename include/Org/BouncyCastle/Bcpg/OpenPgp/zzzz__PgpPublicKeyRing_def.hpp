#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpPublicKeyRing.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyRing_def.hpp"
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
// Dependencies Org.BouncyCastle.Bcpg.OpenPgp.PgpKeyRing
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpPublicKeyRing
class CORDL_TYPE PgpPublicKeyRing : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing {
public:
  // Declarations
  /// @brief Field keys, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys)) ::System::Collections::IList* keys;

  /// @brief Method Encode, addr 0x253a364, size 0x388, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* outStr);

  /// @brief Method GetEncoded, addr 0x253a2e4, size 0x80, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetPublicKey, addr 0x2539e44, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* GetPublicKey();

  /// @brief Method GetPublicKey, addr 0x2539f34, size 0x350, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* GetPublicKey(int64_t keyId);

  /// @brief Method GetPublicKeys, addr 0x253a284, size 0x60, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetPublicKeys();

  /// @brief Method InsertPublicKey, addr 0x253a6ec, size 0x3c8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* InsertPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* pubRing,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* New_ctor(::System::IO::Stream* inputStream);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* New_ctor(::System::Collections::IList* pubKeys);

  /// @brief Method ReadPublicKeyPacket, addr 0x2539cc8, size 0xe0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* ReadPublicKeyPacket(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method ReadSubkey, addr 0x2539da8, size 0x9c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* ReadSubkey(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method RemovePublicKey, addr 0x253aab4, size 0x278, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* RemovePublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* pubRing,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  constexpr ::System::Collections::IList* const& __cordl_internal_get_keys() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_keys();

  constexpr void __cordl_internal_set_keys(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x2539984, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method .ctor, addr 0x25399f4, size 0x2ac, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream);

  /// @brief Method .ctor, addr 0x2539ca0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* pubKeys);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpPublicKeyRing();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyRing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpPublicKeyRing(PgpPublicKeyRing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyRing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpPublicKeyRing(PgpPublicKeyRing const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1661 };

  /// @brief Field keys, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___keys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing, ___keys) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPublicKeyRing");
