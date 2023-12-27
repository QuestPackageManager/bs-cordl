#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpSecretKeyRingBundle)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKey;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKeyRing;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IDictionary;
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1665))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpSecretKeyRingBundle*
class CORDL_TYPE PgpSecretKeyRingBundle : public ::System::Object {
public:
  // Declarations
  /// @brief Field secretRings, offset 0x10, size 0x8
  __declspec(property(get = __get_secretRings, put = __set_secretRings))::System::Collections::IDictionary* secretRings;

  /// @brief Field order, offset 0x18, size 0x8
  __declspec(property(get = __get_order, put = __set_order))::System::Collections::IList* order;

  __declspec(property(get = get_Size)) int32_t Size;

  __declspec(property(get = get_Count)) int32_t Count;

  constexpr ::System::Collections::IDictionary*& __get_secretRings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_secretRings() const;

  constexpr void __set_secretRings(::System::Collections::IDictionary* value);

  constexpr ::System::Collections::IList*& __get_order();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_order() const;

  constexpr void __set_order(::System::Collections::IList* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* New_ctor(::System::Collections::IDictionary* secretRings, ::System::Collections::IList* order);

  /// @brief Method .ctor addr 0x10c5c78 size 0x2c virtual false final false
  inline void _ctor(::System::Collections::IDictionary* secretRings, ::System::Collections::IList* order);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method .ctor addr 0x10c5ca4 size 0x78 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* New_ctor(::System::IO::Stream* inputStream);

  /// @brief Method .ctor addr 0x10c5d1c size 0x80 virtual false final false
  inline void _ctor(::System::IO::Stream* inputStream);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* New_ctor(::System::Collections::IEnumerable* e);

  /// @brief Method .ctor addr 0x10c5d9c size 0x59c virtual false final false
  inline void _ctor(::System::Collections::IEnumerable* e);

  /// @brief Method get_Size addr 0x10c6338 size 0xa4 virtual false final false
  inline int32_t get_Size();

  /// @brief Method get_Count addr 0x10c63dc size 0xa4 virtual false final false
  inline int32_t get_Count();

  /// @brief Method GetKeyRings addr 0x10c6480 size 0xe4 virtual false final false
  inline ::System::Collections::IEnumerable* GetKeyRings();

  /// @brief Method GetKeyRings addr 0x10c6564 size 0xc virtual false final false
  inline ::System::Collections::IEnumerable* GetKeyRings(::StringW userId);

  /// @brief Method GetKeyRings addr 0x10c6e24 size 0xc virtual false final false
  inline ::System::Collections::IEnumerable* GetKeyRings(::StringW userId, bool matchPartial);

  /// @brief Method GetKeyRings addr 0x10c6570 size 0x8b4 virtual false final false
  inline ::System::Collections::IEnumerable* GetKeyRings(::StringW userId, bool matchPartial, bool ignoreCase);

  /// @brief Method GetSecretKey addr 0x10c6e30 size 0x36c virtual false final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* GetSecretKey(int64_t keyId);

  /// @brief Method GetSecretKeyRing addr 0x10c719c size 0x4d0 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* GetSecretKeyRing(int64_t keyId);

  /// @brief Method Contains addr 0x10c766c size 0x18 virtual false final false
  inline bool Contains(int64_t keyID);

  /// @brief Method GetEncoded addr 0x10c7684 size 0x78 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method Encode addr 0x10c76fc size 0x444 virtual false final false
  inline void Encode(::System::IO::Stream* outStr);

  /// @brief Method AddSecretKeyRing addr 0x10c7b40 size 0x2e0 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* AddSecretKeyRing(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* bundle,
                                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* secretKeyRing);

  /// @brief Method RemoveSecretKeyRing addr 0x10c7e20 size 0x2dc virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* RemoveSecretKeyRing(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle* bundle,
                                                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* secretKeyRing);

  // Ctor Parameters [CppParam { name: "", ty: "PgpSecretKeyRingBundle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpSecretKeyRingBundle(PgpSecretKeyRingBundle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpSecretKeyRingBundle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpSecretKeyRingBundle(PgpSecretKeyRingBundle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpSecretKeyRingBundle();

public:
  /// @brief Field secretRings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___secretRings;

  /// @brief Field order, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___order;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSecretKeyRingBundle");
