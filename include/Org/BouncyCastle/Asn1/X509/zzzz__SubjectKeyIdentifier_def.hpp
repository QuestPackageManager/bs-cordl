#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubjectKeyIdentifier)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectKeyIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier);
// Type: Org.BouncyCastle.Asn1.X509::SubjectKeyIdentifier
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(383))
// CS Name: ::Org.BouncyCastle.Asn1.X509::SubjectKeyIdentifier*
class CORDL_TYPE SubjectKeyIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field keyIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __get_keyIdentifier, put = __set_keyIdentifier))::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_keyIdentifier();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_keyIdentifier() const;

  constexpr void __set_keyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method GetInstance addr 0x1196f1c size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0x1196f34 size 0x184 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* GetInstance(::System::Object* obj);

  /// @brief Method FromExtensions addr 0x119711c size 0x74 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyID);

  /// @brief Method .ctor addr 0x1197190 size 0xc0 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyID);

  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* keyID);

  /// @brief Method .ctor addr 0x11970e8 size 0x34 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* keyID);

  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  /// @brief Method .ctor addr 0x11970b8 size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  /// @brief Method GetKeyIdentifier addr 0x1197440 size 0x5c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetKeyIdentifier();

  /// @brief Method ToAsn1Object addr 0x119749c size 0x74 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method CreateSha1KeyIdentifier addr 0x1197510 size 0x6c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* CreateSha1KeyIdentifier(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* keyInfo);

  /// @brief Method CreateTruncatedSha1KeyIdentifier addr 0x119757c size 0xd8 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* CreateTruncatedSha1KeyIdentifier(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* keyInfo);

  /// @brief Method GetDigest addr 0x1197250 size 0x1f0 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDigest(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  // Ctor Parameters [CppParam { name: "", ty: "SubjectKeyIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubjectKeyIdentifier(SubjectKeyIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubjectKeyIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubjectKeyIdentifier(SubjectKeyIdentifier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubjectKeyIdentifier();

public:
  /// @brief Field keyIdentifier, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___keyIdentifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*, "Org.BouncyCastle.Asn1.X509", "SubjectKeyIdentifier");
