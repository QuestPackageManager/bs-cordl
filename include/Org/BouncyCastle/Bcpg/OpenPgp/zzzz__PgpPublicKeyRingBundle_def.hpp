#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpPublicKeyRingBundle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpPublicKeyRingBundle)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKeyRing;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace System::Collections {
class IDictionary;
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
class PgpPublicKeyRingBundle;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpPublicKeyRingBundle
class CORDL_TYPE PgpPublicKeyRingBundle : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Field order, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_order, put = __cordl_internal_set_order)) ::System::Collections::IList* order;

  /// @brief Field pubRings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pubRings, put = __cordl_internal_set_pubRings)) ::System::Collections::IDictionary* pubRings;

  /// @brief Method AddPublicKeyRing, addr 0x253cbd4, size 0x2e0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* AddPublicKeyRing(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* bundle,
                                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* publicKeyRing);

  /// @brief Method Contains, addr 0x253c700, size 0x18, virtual false, abstract: false, final false
  inline bool Contains(int64_t keyID);

  /// @brief Method Encode, addr 0x253c790, size 0x444, virtual false, abstract: false, final false
  inline void Encode(::System::IO::Stream* outStr);

  /// @brief Method GetEncoded, addr 0x253c718, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetKeyRings, addr 0x253b530, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetKeyRings();

  /// @brief Method GetKeyRings, addr 0x253b610, size 0xc, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetKeyRings(::StringW userId);

  /// @brief Method GetKeyRings, addr 0x253bec8, size 0xc, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetKeyRings(::StringW userId, bool matchPartial);

  /// @brief Method GetKeyRings, addr 0x253b61c, size 0x8ac, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetKeyRings(::StringW userId, bool matchPartial, bool ignoreCase);

  /// @brief Method GetPublicKey, addr 0x253bed4, size 0x35c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* GetPublicKey(int64_t keyId);

  /// @brief Method GetPublicKeyRing, addr 0x253c230, size 0x4d0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* GetPublicKeyRing(int64_t keyId);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* New_ctor(::System::Collections::IEnumerable* e);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* New_ctor(::System::IO::Stream* inputStream);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* New_ctor(::System::Collections::IDictionary* pubRings, ::System::Collections::IList* order);

  /// @brief Method RemovePublicKeyRing, addr 0x253ceb4, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* RemovePublicKeyRing(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* bundle,
                                                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* publicKeyRing);

  constexpr ::System::Collections::IList* const& __cordl_internal_get_order() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_order();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_pubRings() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_pubRings();

  constexpr void __cordl_internal_set_order(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_pubRings(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x253ae48, size 0x5a0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* e);

  /// @brief Method .ctor, addr 0x253ad58, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method .ctor, addr 0x253adc8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream);

  /// @brief Method .ctor, addr 0x253ad2c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* pubRings, ::System::Collections::IList* order);

  /// @brief Method get_Count, addr 0x253b48c, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Size, addr 0x253b3e8, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_Size();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpPublicKeyRingBundle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyRingBundle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpPublicKeyRingBundle(PgpPublicKeyRingBundle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyRingBundle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpPublicKeyRingBundle(PgpPublicKeyRingBundle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1662 };

  /// @brief Field pubRings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___pubRings;

  /// @brief Field order, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___order;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle, ___pubRings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle, ___order) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPublicKeyRingBundle");
