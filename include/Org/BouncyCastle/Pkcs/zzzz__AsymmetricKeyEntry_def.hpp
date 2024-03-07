#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs12Entry_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsymmetricKeyEntry)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class AsymmetricKeyEntry;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry);
// Type: Org.BouncyCastle.Pkcs::AsymmetricKeyEntry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Pkcs::AsymmetricKeyEntry*
class CORDL_TYPE AsymmetricKeyEntry : public ::Org::BouncyCastle::Pkcs::Pkcs12Entry {
public:
  // Declarations
  __declspec(property(get = get_Key))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Key;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key;

  /// @brief Method Equals, addr 0x116c528, size 0xa4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x116c5cc, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  static inline ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::System::Collections::Hashtable* attributes);

  static inline ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::System::Collections::IDictionary* attributes);

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  /// @brief Method .ctor, addr 0x116c45c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method .ctor, addr 0x116c4d0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::System::Collections::Hashtable* attributes);

  /// @brief Method .ctor, addr 0x116c4f8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::System::Collections::IDictionary* attributes);

  /// @brief Method get_Key, addr 0x116c520, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* get_Key();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsymmetricKeyEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsymmetricKeyEntry(AsymmetricKeyEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsymmetricKeyEntry(AsymmetricKeyEntry const&) = delete;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry, ___key) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*, "Org.BouncyCastle.Pkcs", "AsymmetricKeyEntry");
