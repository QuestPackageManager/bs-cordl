#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509V2AttributeCertificate)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
namespace Org::BouncyCastle::X509 {
class IX509Extension;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateIssuer;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificate;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateHolder;
}
namespace System {
struct DateTime;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::X509 {
class X509Attribute;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509V2AttributeCertificate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509V2AttributeCertificate);
// Type: Org.BouncyCastle.X509::X509V2AttributeCertificate
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1871))
// CS Name: ::Org.BouncyCastle.X509::X509V2AttributeCertificate*
class CORDL_TYPE X509V2AttributeCertificate : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
  // Declarations
  /// @brief Field cert, offset 0x10, size 0x8
  __declspec(property(get = __get_cert, put = __set_cert))::Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert;

  /// @brief Field notBefore, offset 0x18, size 0x8
  __declspec(property(get = __get_notBefore, put = __set_notBefore))::System::DateTime notBefore;

  /// @brief Field notAfter, offset 0x20, size 0x8
  __declspec(property(get = __get_notAfter, put = __set_notAfter))::System::DateTime notAfter;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_SerialNumber))::Org::BouncyCastle::Math::BigInteger* SerialNumber;

  __declspec(property(get = get_Holder))::Org::BouncyCastle::X509::AttributeCertificateHolder* Holder;

  __declspec(property(get = get_Issuer))::Org::BouncyCastle::X509::AttributeCertificateIssuer* Issuer;

  __declspec(property(get = get_NotBefore))::System::DateTime NotBefore;

  __declspec(property(get = get_NotAfter))::System::DateTime NotAfter;

  __declspec(property(get = get_IsValidNow)) bool IsValidNow;

  __declspec(property(get = get_SignatureAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SignatureAlgorithm;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::IX509AttributeCertificate"
  constexpr operator ::Org::BouncyCastle::X509::IX509AttributeCertificate*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::IX509Extension"
  constexpr operator ::Org::BouncyCastle::X509::IX509Extension*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate*& __get_cert();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*> const& __get_cert() const;

  constexpr void __set_cert(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* value);

  constexpr ::System::DateTime& __get_notBefore();

  constexpr ::System::DateTime const& __get_notBefore() const;

  constexpr void __set_notBefore(::System::DateTime value);

  constexpr ::System::DateTime& __get_notAfter();

  constexpr ::System::DateTime const& __get_notAfter() const;

  constexpr void __set_notAfter(::System::DateTime value);

  /// @brief Method GetObject addr 0x1112c60 size 0x124 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* GetObject(::System::IO::Stream* input);

  static inline ::Org::BouncyCastle::X509::X509V2AttributeCertificate* New_ctor(::System::IO::Stream* encIn);

  /// @brief Method .ctor addr 0x1112d84 size 0x20 virtual false final false
  inline void _ctor(::System::IO::Stream* encIn);

  static inline ::Org::BouncyCastle::X509::X509V2AttributeCertificate* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  /// @brief Method .ctor addr 0x1112da4 size 0x80 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  static inline ::Org::BouncyCastle::X509::X509V2AttributeCertificate* New_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert);

  /// @brief Method .ctor addr 0x1106284 size 0x170 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert);

  /// @brief Method get_Version addr 0x1112e24 size 0x34 virtual true final false
  inline int32_t get_Version();

  /// @brief Method get_SerialNumber addr 0x1112e58 size 0x2c virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Method get_Holder addr 0x1112e84 size 0xe0 virtual true final false
  inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* get_Holder();

  /// @brief Method get_Issuer addr 0x1112f64 size 0x78 virtual true final false
  inline ::Org::BouncyCastle::X509::AttributeCertificateIssuer* get_Issuer();

  /// @brief Method get_NotBefore addr 0x1112fdc size 0x8 virtual true final false
  inline ::System::DateTime get_NotBefore();

  /// @brief Method get_NotAfter addr 0x1112fe4 size 0x8 virtual true final false
  inline ::System::DateTime get_NotAfter();

  /// @brief Method GetIssuerUniqueID addr 0x1112fec size 0x110 virtual true final false
  inline ::ArrayW<bool, ::Array<bool>*> GetIssuerUniqueID();

  /// @brief Method get_IsValidNow addr 0x11130fc size 0x6c virtual true final false
  inline bool get_IsValidNow();

  /// @brief Method IsValid addr 0x1113168 size 0xd0 virtual true final false
  inline bool IsValid(::System::DateTime date);

  /// @brief Method CheckValidity addr 0x1113238 size 0x6c virtual true final false
  inline void CheckValidity();

  /// @brief Method CheckValidity addr 0x11132a4 size 0x1c8 virtual true final false
  inline void CheckValidity(::System::DateTime date);

  /// @brief Method get_SignatureAlgorithm addr 0x111346c size 0x1c virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();

  /// @brief Method GetSignature addr 0x1113488 size 0x1c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignature();

  /// @brief Method Verify addr 0x11134a4 size 0x90 virtual true final false
  inline void Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method Verify addr 0x1113534 size 0xc8 virtual true final false
  inline void Verify(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider);

  /// @brief Method CheckSignature addr 0x11135fc size 0x4bc virtual true final false
  inline void CheckSignature(::Org::BouncyCastle::Crypto::IVerifierFactory* verifier);

  /// @brief Method GetEncoded addr 0x1113ab8 size 0x1c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetX509Extensions addr 0x1113ad4 size 0x24 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  /// @brief Method GetAttributes addr 0x1113af8 size 0x168 virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::X509::X509Attribute*, ::Array<::Org::BouncyCastle::X509::X509Attribute*>*> GetAttributes();

  /// @brief Method GetAttributes addr 0x1113c60 size 0x438 virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::X509::X509Attribute*, ::Array<::Org::BouncyCastle::X509::X509Attribute*>*> GetAttributes(::StringW oid);

  /// @brief Method Equals addr 0x1114098 size 0xb0 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x1114148 size 0x1c virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "X509V2AttributeCertificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509V2AttributeCertificate(X509V2AttributeCertificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509V2AttributeCertificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509V2AttributeCertificate(X509V2AttributeCertificate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509V2AttributeCertificate();

public:
  /// @brief Field cert, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* ___cert;

  /// @brief Field notBefore, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ___notBefore;

  /// @brief Field notAfter, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ___notAfter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509V2AttributeCertificate, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V2AttributeCertificate, ___cert) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V2AttributeCertificate, ___notBefore) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V2AttributeCertificate, ___notAfter) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509V2AttributeCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509V2AttributeCertificate*, "Org.BouncyCastle.X509", "X509V2AttributeCertificate");
