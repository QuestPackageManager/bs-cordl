#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/AuthorityKeyIdentifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthorityKeyIdentifier)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
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
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AuthorityKeyIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.AuthorityKeyIdentifier
class CORDL_TYPE AuthorityKeyIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_AuthorityCertIssuer)) ::Org::BouncyCastle::Asn1::X509::GeneralNames* AuthorityCertIssuer;

  __declspec(property(get = get_AuthorityCertSerialNumber)) ::Org::BouncyCastle::Math::BigInteger* AuthorityCertSerialNumber;

  /// @brief Field certissuer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certissuer, put = __cordl_internal_set_certissuer)) ::Org::BouncyCastle::Asn1::X509::GeneralNames* certissuer;

  /// @brief Field certserno, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_certserno, put = __cordl_internal_set_certserno)) ::Org::BouncyCastle::Asn1::DerInteger* certserno;

  /// @brief Field keyidentifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyidentifier, put = __cordl_internal_set_keyidentifier)) ::Org::BouncyCastle::Asn1::Asn1OctetString* keyidentifier;

  /// @brief Method FromExtensions, addr 0x250752c, size 0x68, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method GetInstance, addr 0x2507084, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x250709c, size 0xf0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* GetInstance(::System::Object* obj);

  /// @brief Method GetKeyIdentifier, addr 0x2507908, size 0x18, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetKeyIdentifier();

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier);

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier, ::Org::BouncyCastle::Asn1::X509::GeneralNames* name,
                                                                                  ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* name, ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki, ::Org::BouncyCastle::Asn1::X509::GeneralNames* name,
                                                                                  ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method ToAsn1Object, addr 0x250793c, size 0xd4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString, addr 0x2507a10, size 0xcc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames* const& __cordl_internal_get_certissuer() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& __cordl_internal_get_certissuer();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_certserno() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_certserno();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_keyidentifier() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_keyidentifier();

  constexpr void __cordl_internal_set_certissuer(::Org::BouncyCastle::Asn1::X509::GeneralNames* value);

  constexpr void __cordl_internal_set_certserno(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_keyidentifier(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method .ctor, addr 0x25078fc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier);

  /// @brief Method .ctor, addr 0x2507830, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier, ::Org::BouncyCastle::Asn1::X509::GeneralNames* name, ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method .ctor, addr 0x2507820, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* name, ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method .ctor, addr 0x250718c, size 0x3a0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x2507594, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  /// @brief Method .ctor, addr 0x25075a0, size 0x280, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki, ::Org::BouncyCastle::Asn1::X509::GeneralNames* name, ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method get_AuthorityCertIssuer, addr 0x2507920, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* get_AuthorityCertIssuer();

  /// @brief Method get_AuthorityCertSerialNumber, addr 0x2507928, size 0x14, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_AuthorityCertSerialNumber();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthorityKeyIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthorityKeyIdentifier(AuthorityKeyIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthorityKeyIdentifier(AuthorityKeyIdentifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 345 };

  /// @brief Field keyidentifier, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___keyidentifier;

  /// @brief Field certissuer, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralNames* ___certissuer;

  /// @brief Field certserno, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___certserno;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier, ___keyidentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier, ___certissuer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier, ___certserno) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*, "Org.BouncyCastle.Asn1.X509", "AuthorityKeyIdentifier");
