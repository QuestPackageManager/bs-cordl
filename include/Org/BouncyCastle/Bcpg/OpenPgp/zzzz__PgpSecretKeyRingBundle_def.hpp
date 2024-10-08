#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpSecretKeyRingBundle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpSecretKeyRingBundle)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKeyRing;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKey;
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
class PgpSecretKeyRingBundle;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpSecretKeyRingBundle
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpSecretKeyRingBundle*
class CORDL_TYPE PgpSecretKeyRingBundle : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Field order, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_order, put = __cordl_internal_set_order)) ::System::Collections::IList* order;

  /// @brief Field secretRings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_secretRings, put = __cordl_internal_set_secretRings)) ::System::Collections::IDictionary* secretRings;

  /// @brief Method AddSecretKeyRing, addr 0x2506be8, size 0x2d8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* AddSecretKeyRing(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* bundle,
                                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* secretKeyRing);

  /// @brief Method Contains, addr 0x2506718, size 0x18, virtual false, abstract: false, final false
  inline bool Contains(int64_t keyID);

  /// @brief Method Encode, addr 0x25067a8, size 0x440, virtual false, abstract: false, final false
  inline void Encode(::System::IO::Stream* outStr);

  /// @brief Method GetEncoded, addr 0x2506730, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetKeyRings, addr 0x2505548, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetKeyRings();

  /// @brief Method GetKeyRings, addr 0x2505628, size 0xc, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetKeyRings(::StringW userId);

  /// @brief Method GetKeyRings, addr 0x2505ee8, size 0xc, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetKeyRings(::StringW userId, bool matchPartial);

  /// @brief Method GetKeyRings, addr 0x2505634, size 0x8b4, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetKeyRings(::StringW userId, bool matchPartial, bool ignoreCase);

  /// @brief Method GetSecretKey, addr 0x2505ef4, size 0x358, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* GetSecretKey(int64_t keyId);

  /// @brief Method GetSecretKeyRing, addr 0x250624c, size 0x4cc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* GetSecretKeyRing(int64_t keyId);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* New_ctor(::System::Collections::IEnumerable* e);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* New_ctor(::System::IO::Stream* inputStream);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* New_ctor(::System::Collections::IDictionary* secretRings, ::System::Collections::IList* order);

  /// @brief Method RemoveSecretKeyRing, addr 0x2506ec0, size 0x2d4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* RemoveSecretKeyRing(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* bundle,
                                                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* secretKeyRing);

  constexpr ::System::Collections::IList*& __cordl_internal_get_order();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_order() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_secretRings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_secretRings() const;

  constexpr void __cordl_internal_set_order(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_secretRings(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x2504e64, size 0x59c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* e);

  /// @brief Method .ctor, addr 0x2504d74, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method .ctor, addr 0x2504de4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream);

  /// @brief Method .ctor, addr 0x2504d48, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* secretRings, ::System::Collections::IList* order);

  /// @brief Method get_Count, addr 0x25054a4, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Size, addr 0x2505400, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_Size();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpSecretKeyRingBundle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpSecretKeyRingBundle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpSecretKeyRingBundle(PgpSecretKeyRingBundle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpSecretKeyRingBundle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpSecretKeyRingBundle(PgpSecretKeyRingBundle const&) = delete;

  /// @brief Field secretRings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___secretRings;

  /// @brief Field order, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___order;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1665 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle, ___secretRings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle, ___order) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSecretKeyRingBundle");
