#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509V2AttributeCertificate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509Extension_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509V2AttributeCertificate)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateHolder;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateIssuer;
}
namespace Org::BouncyCastle::X509 {
class X509Attribute;
}
namespace System::IO {
class Stream;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509V2AttributeCertificate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509V2AttributeCertificate);
// Dependencies Org.BouncyCastle.X509.IX509AttributeCertificate, Org.BouncyCastle.X509.IX509Extension, Org.BouncyCastle.X509.X509ExtensionBase, System.DateTime
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.X509V2AttributeCertificate
class CORDL_TYPE X509V2AttributeCertificate : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
  // Declarations
  __declspec(property(get = get_Holder)) ::Org::BouncyCastle::X509::AttributeCertificateHolder* Holder;

  __declspec(property(get = get_IsValidNow)) bool IsValidNow;

  __declspec(property(get = get_Issuer)) ::Org::BouncyCastle::X509::AttributeCertificateIssuer* Issuer;

  __declspec(property(get = get_NotAfter)) ::System::DateTime NotAfter;

  __declspec(property(get = get_NotBefore)) ::System::DateTime NotBefore;

  __declspec(property(get = get_SerialNumber)) ::Org::BouncyCastle::Math::BigInteger* SerialNumber;

  __declspec(property(get = get_SignatureAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SignatureAlgorithm;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field cert, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cert, put = __cordl_internal_set_cert)) ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert;

  /// @brief Field notAfter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_notAfter, put = __cordl_internal_set_notAfter)) ::System::DateTime notAfter;

  /// @brief Field notBefore, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_notBefore, put = __cordl_internal_set_notBefore)) ::System::DateTime notBefore;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::IX509AttributeCertificate"
  constexpr operator ::Org::BouncyCastle::X509::IX509AttributeCertificate*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::IX509Extension"
  constexpr operator ::Org::BouncyCastle::X509::IX509Extension*() noexcept;

  /// @brief Method CheckSignature, addr 0x25f9da4, size 0x4b0, virtual true, abstract: false, final false
  inline void CheckSignature(::Org::BouncyCastle::Crypto::IVerifierFactory* verifier);

  /// @brief Method CheckValidity, addr 0x25f99c4, size 0x6c, virtual true, abstract: false, final false
  inline void CheckValidity();

  /// @brief Method CheckValidity, addr 0x25f9a30, size 0x1e8, virtual true, abstract: false, final false
  inline void CheckValidity(::System::DateTime date);

  /// @brief Method Equals, addr 0x25fa828, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetAttributes, addr 0x25fa294, size 0x164, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::X509::X509Attribute*, ::Array<::Org::BouncyCastle::X509::X509Attribute*>*> GetAttributes();

  /// @brief Method GetAttributes, addr 0x25fa3f8, size 0x430, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::X509::X509Attribute*, ::Array<::Org::BouncyCastle::X509::X509Attribute*>*> GetAttributes(::StringW oid);

  /// @brief Method GetEncoded, addr 0x25fa254, size 0x1c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetHashCode, addr 0x25fa8d8, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetIssuerUniqueID, addr 0x25f9750, size 0x108, virtual true, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> GetIssuerUniqueID();

  /// @brief Method GetObject, addr 0x25f93d8, size 0x120, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* GetObject(::System::IO::Stream* input);

  /// @brief Method GetSignature, addr 0x25f9c34, size 0x1c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignature();

  /// @brief Method GetX509Extensions, addr 0x25fa270, size 0x24, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  /// @brief Method IsValid, addr 0x25f98c4, size 0x100, virtual true, abstract: false, final false
  inline bool IsValid(::System::DateTime date);

  static inline ::Org::BouncyCastle::X509::X509V2AttributeCertificate* New_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert);

  static inline ::Org::BouncyCastle::X509::X509V2AttributeCertificate* New_ctor(::System::IO::Stream* encIn);

  static inline ::Org::BouncyCastle::X509::X509V2AttributeCertificate* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  /// @brief Method Verify, addr 0x25f9c50, size 0x8c, virtual true, abstract: false, final false
  inline void Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method Verify, addr 0x25f9cdc, size 0xc8, virtual true, abstract: false, final false
  inline void Verify(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider);

  constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* const& __cordl_internal_get_cert() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate*& __cordl_internal_get_cert();

  constexpr ::System::DateTime const& __cordl_internal_get_notAfter() const;

  constexpr ::System::DateTime& __cordl_internal_get_notAfter();

  constexpr ::System::DateTime const& __cordl_internal_get_notBefore() const;

  constexpr ::System::DateTime& __cordl_internal_get_notBefore();

  constexpr void __cordl_internal_set_cert(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* value);

  constexpr void __cordl_internal_set_notAfter(::System::DateTime value);

  constexpr void __cordl_internal_set_notBefore(::System::DateTime value);

  /// @brief Method .ctor, addr 0x25ecc1c, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert);

  /// @brief Method .ctor, addr 0x25f94f8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* encIn);

  /// @brief Method .ctor, addr 0x25f9518, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  /// @brief Method get_Holder, addr 0x25f95f0, size 0xdc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* get_Holder();

  /// @brief Method get_IsValidNow, addr 0x25f9858, size 0x6c, virtual true, abstract: false, final false
  inline bool get_IsValidNow();

  /// @brief Method get_Issuer, addr 0x25f96cc, size 0x74, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::X509::AttributeCertificateIssuer* get_Issuer();

  /// @brief Method get_NotAfter, addr 0x25f9748, size 0x8, virtual true, abstract: false, final false
  inline ::System::DateTime get_NotAfter();

  /// @brief Method get_NotBefore, addr 0x25f9740, size 0x8, virtual true, abstract: false, final false
  inline ::System::DateTime get_NotBefore();

  /// @brief Method get_SerialNumber, addr 0x25f95c4, size 0x2c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Method get_SignatureAlgorithm, addr 0x25f9c18, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();

  /// @brief Method get_Version, addr 0x25f9590, size 0x34, virtual true, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Convert to "::Org::BouncyCastle::X509::IX509AttributeCertificate"
  constexpr ::Org::BouncyCastle::X509::IX509AttributeCertificate* i___Org__BouncyCastle__X509__IX509AttributeCertificate() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::X509::IX509Extension"
  constexpr ::Org::BouncyCastle::X509::IX509Extension* i___Org__BouncyCastle__X509__IX509Extension() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509V2AttributeCertificate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509V2AttributeCertificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509V2AttributeCertificate(X509V2AttributeCertificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509V2AttributeCertificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509V2AttributeCertificate(X509V2AttributeCertificate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1871 };

  /// @brief Field cert, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* ___cert;

  /// @brief Field notBefore, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ___notBefore;

  /// @brief Field notAfter, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ___notAfter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::X509::X509V2AttributeCertificate, ___cert) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V2AttributeCertificate, ___notBefore) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V2AttributeCertificate, ___notAfter) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509V2AttributeCertificate, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509V2AttributeCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509V2AttributeCertificate*, "Org.BouncyCastle.X509", "X509V2AttributeCertificate");
