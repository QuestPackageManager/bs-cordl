#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/SubjectKeyIdentifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubjectKeyIdentifier)
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectKeyIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.SubjectKeyIdentifier
class CORDL_TYPE SubjectKeyIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field keyIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyIdentifier, put = __cordl_internal_set_keyIdentifier)) ::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier;

  /// @brief Method CreateSha1KeyIdentifier, addr 0x356a65c, size 0x64, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* CreateSha1KeyIdentifier(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* keyInfo);

  /// @brief Method CreateTruncatedSha1KeyIdentifier, addr 0x356a6c0, size 0xdc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* CreateTruncatedSha1KeyIdentifier(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* keyInfo);

  /// @brief Method FromExtensions, addr 0x356a260, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method GetDigest, addr 0x356a394, size 0x1fc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDigest(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  /// @brief Method GetInstance, addr 0x356a060, size 0x14, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x356a074, size 0x19c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* GetInstance(::System::Object* obj);

  /// @brief Method GetKeyIdentifier, addr 0x356a590, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetKeyIdentifier();

  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyID);

  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* keyID);

  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  /// @brief Method ToAsn1Object, addr 0x356a5f0, size 0x6c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_keyIdentifier() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_keyIdentifier();

  constexpr void __cordl_internal_set_keyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x356a2d8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyID);

  /// @brief Method .ctor, addr 0x356a22c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* keyID);

  /// @brief Method .ctor, addr 0x356a210, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubjectKeyIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubjectKeyIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubjectKeyIdentifier(SubjectKeyIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubjectKeyIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubjectKeyIdentifier(SubjectKeyIdentifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 383 };

  /// @brief Field keyIdentifier, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___keyIdentifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier, ___keyIdentifier) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*, "Org.BouncyCastle.Asn1.X509", "SubjectKeyIdentifier");
