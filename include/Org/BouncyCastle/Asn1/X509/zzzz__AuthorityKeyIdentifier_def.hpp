#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthorityKeyIdentifier)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AuthorityKeyIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier);
// Type: Org.BouncyCastle.Asn1.X509::AuthorityKeyIdentifier
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(345))
// CS Name: ::Org.BouncyCastle.Asn1.X509::AuthorityKeyIdentifier*
class CORDL_TYPE AuthorityKeyIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field keyidentifier, offset 0x10, size 0x8
  __declspec(property(get = __get_keyidentifier, put = __set_keyidentifier))::Org::BouncyCastle::Asn1::Asn1OctetString* keyidentifier;

  /// @brief Field certissuer, offset 0x18, size 0x8
  __declspec(property(get = __get_certissuer, put = __set_certissuer))::Org::BouncyCastle::Asn1::X509::GeneralNames* certissuer;

  /// @brief Field certserno, offset 0x20, size 0x8
  __declspec(property(get = __get_certserno, put = __set_certserno))::Org::BouncyCastle::Asn1::DerInteger* certserno;

  __declspec(property(get = get_AuthorityCertIssuer))::Org::BouncyCastle::Asn1::X509::GeneralNames* AuthorityCertIssuer;

  __declspec(property(get = get_AuthorityCertSerialNumber))::Org::BouncyCastle::Math::BigInteger* AuthorityCertSerialNumber;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_keyidentifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_keyidentifier() const;

  constexpr void __set_keyidentifier(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& __get_certissuer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralNames*> const& __get_certissuer() const;

  constexpr void __set_certissuer(::Org::BouncyCastle::Asn1::X509::GeneralNames* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_certserno();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_certserno() const;

  constexpr void __set_certserno(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method GetInstance addr 0x1085aac size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0x1085ac4 size 0xf0 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* GetInstance(::System::Object* obj);

  /// @brief Method FromExtensions addr 0x1085f5c size 0x68 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x1085bb4 size 0x3a8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  /// @brief Method .ctor addr 0x1085fc4 size 0xc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki, ::Org::BouncyCastle::Asn1::X509::GeneralNames* name,
                                                                                  ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method .ctor addr 0x1085fd0 size 0x288 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki, ::Org::BouncyCastle::Asn1::X509::GeneralNames* name, ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* name, ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method .ctor addr 0x1086258 size 0x10 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* name, ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier);

  /// @brief Method .ctor addr 0x1086340 size 0xc virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier);

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier, ::Org::BouncyCastle::Asn1::X509::GeneralNames* name,
                                                                                  ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method .ctor addr 0x1086268 size 0xd8 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier, ::Org::BouncyCastle::Asn1::X509::GeneralNames* name, ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method GetKeyIdentifier addr 0x108634c size 0x18 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetKeyIdentifier();

  /// @brief Method get_AuthorityCertIssuer addr 0x1086364 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* get_AuthorityCertIssuer();

  /// @brief Method get_AuthorityCertSerialNumber addr 0x108636c size 0x14 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_AuthorityCertSerialNumber();

  /// @brief Method ToAsn1Object addr 0x1086380 size 0xd8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString addr 0x1086458 size 0xcc virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthorityKeyIdentifier(AuthorityKeyIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthorityKeyIdentifier(AuthorityKeyIdentifier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthorityKeyIdentifier();

public:
  /// @brief Field keyidentifier, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___keyidentifier;

  /// @brief Field certissuer, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralNames* ___certissuer;

  /// @brief Field certserno, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___certserno;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*, "Org.BouncyCastle.Asn1.X509", "AuthorityKeyIdentifier");
