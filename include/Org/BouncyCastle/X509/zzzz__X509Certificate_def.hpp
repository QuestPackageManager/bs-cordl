#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509Certificate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Certificate)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class BasicConstraints;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
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
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IList;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509Certificate);
// Dependencies Org.BouncyCastle.X509.X509ExtensionBase
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.X509Certificate
class CORDL_TYPE X509Certificate : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
  // Declarations
  __declspec(property(get = get_CertificateStructure)) ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* CertificateStructure;

  __declspec(property(get = get_IsValidNow)) bool IsValidNow;

  __declspec(property(get = get_IssuerDN)) ::Org::BouncyCastle::Asn1::X509::X509Name* IssuerDN;

  __declspec(property(get = get_IssuerUniqueID)) ::Org::BouncyCastle::Asn1::DerBitString* IssuerUniqueID;

  __declspec(property(get = get_NotAfter)) ::System::DateTime NotAfter;

  __declspec(property(get = get_NotBefore)) ::System::DateTime NotBefore;

  __declspec(property(get = get_SerialNumber)) ::Org::BouncyCastle::Math::BigInteger* SerialNumber;

  __declspec(property(get = get_SigAlgName)) ::StringW SigAlgName;

  __declspec(property(get = get_SigAlgOid)) ::StringW SigAlgOid;

  __declspec(property(get = get_SubjectDN)) ::Org::BouncyCastle::Asn1::X509::X509Name* SubjectDN;

  __declspec(property(get = get_SubjectUniqueID)) ::Org::BouncyCastle::Asn1::DerBitString* SubjectUniqueID;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field basicConstraints, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_basicConstraints, put = __cordl_internal_set_basicConstraints)) ::Org::BouncyCastle::Asn1::X509::BasicConstraints* basicConstraints;

  /// @brief Field c, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c;

  /// @brief Field cacheLock, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_cacheLock, put = __cordl_internal_set_cacheLock)) ::System::Object* cacheLock;

  /// @brief Field hashValue, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_hashValue, put = __cordl_internal_set_hashValue)) int32_t hashValue;

  /// @brief Field hashValueSet, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_hashValueSet, put = __cordl_internal_set_hashValueSet)) bool hashValueSet;

  /// @brief Field keyUsage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_keyUsage, put = __cordl_internal_set_keyUsage)) ::ArrayW<bool, ::Array<bool>*> keyUsage;

  /// @brief Field publicKeyValue, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKeyValue, put = __cordl_internal_set_publicKeyValue)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKeyValue;

  /// @brief Field sigAlgName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sigAlgName, put = __cordl_internal_set_sigAlgName)) ::StringW sigAlgName;

  /// @brief Field sigAlgParams, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sigAlgParams, put = __cordl_internal_set_sigAlgParams)) ::ArrayW<uint8_t, ::Array<uint8_t>*> sigAlgParams;

  /// @brief Method CheckSignature, addr 0x354dec0, size 0x3f8, virtual true, abstract: false, final false
  inline void CheckSignature(::Org::BouncyCastle::Crypto::IVerifierFactory* verifier);

  /// @brief Method CheckValidity, addr 0x354c020, size 0x70, virtual true, abstract: false, final false
  inline void CheckValidity();

  /// @brief Method CheckValidity, addr 0x354c090, size 0x1f0, virtual true, abstract: false, final false
  inline void CheckValidity(::System::DateTime time);

  /// @brief Method Equals, addr 0x354ce84, size 0x114, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetAlternativeNames, addr 0x354cabc, size 0x2dc, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* GetAlternativeNames(::StringW oid);

  /// @brief Method GetBasicConstraints, addr 0x354c998, size 0x74, virtual true, abstract: false, final false
  inline int32_t GetBasicConstraints();

  /// @brief Method GetEncoded, addr 0x354ce6c, size 0x18, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetExtendedKeyUsage, addr 0x354c4fc, size 0x49c, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetExtendedKeyUsage();

  /// @brief Method GetHashCode, addr 0x354cf98, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetIssuerAlternativeNames, addr 0x354ca64, size 0x58, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* GetIssuerAlternativeNames();

  /// @brief Method GetKeyUsage, addr 0x354c49c, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> GetKeyUsage();

  /// @brief Method GetPublicKey, addr 0x354cde4, size 0x88, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetPublicKey();

  /// @brief Method GetSigAlgParams, addr 0x354c3f4, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSigAlgParams();

  /// @brief Method GetSignature, addr 0x354c390, size 0x28, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignature();

  /// @brief Method GetSubjectAlternativeNames, addr 0x354ca0c, size 0x58, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* GetSubjectAlternativeNames();

  /// @brief Method GetTbsCertificate, addr 0x354c36c, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetTbsCertificate();

  /// @brief Method GetX509Extensions, addr 0x354cd98, size 0x4c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  /// @brief Method IsAlgIDEqual, addr 0x354e2b8, size 0x17c, virtual false, abstract: false, final false
  static inline bool IsAlgIDEqual(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* id1, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* id2);

  /// @brief Method IsValid, addr 0x354bf1c, size 0x104, virtual true, abstract: false, final false
  inline bool IsValid(::System::DateTime time);

  static inline ::Org::BouncyCastle::X509::X509Certificate* New_ctor();

  static inline ::Org::BouncyCastle::X509::X509Certificate* New_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c);

  /// @brief Method ToString, addr 0x354cfe4, size 0xd88, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Verify, addr 0x354dd6c, size 0x80, virtual true, abstract: false, final false
  inline void Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method Verify, addr 0x354ddec, size 0xd4, virtual true, abstract: false, final false
  inline void Verify(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider);

  constexpr ::Org::BouncyCastle::Asn1::X509::BasicConstraints* const& __cordl_internal_get_basicConstraints() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::BasicConstraints*& __cordl_internal_get_basicConstraints();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* const& __cordl_internal_get_c() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& __cordl_internal_get_c();

  constexpr ::System::Object* const& __cordl_internal_get_cacheLock() const;

  constexpr ::System::Object*& __cordl_internal_get_cacheLock();

  constexpr int32_t const& __cordl_internal_get_hashValue() const;

  constexpr int32_t& __cordl_internal_get_hashValue();

  constexpr bool const& __cordl_internal_get_hashValueSet() const;

  constexpr bool& __cordl_internal_get_hashValueSet();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_keyUsage() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_keyUsage();

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& __cordl_internal_get_publicKeyValue() const;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_publicKeyValue();

  constexpr ::StringW const& __cordl_internal_get_sigAlgName() const;

  constexpr ::StringW& __cordl_internal_get_sigAlgName();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_sigAlgParams() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_sigAlgParams();

  constexpr void __cordl_internal_set_basicConstraints(::Org::BouncyCastle::Asn1::X509::BasicConstraints* value);

  constexpr void __cordl_internal_set_c(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value);

  constexpr void __cordl_internal_set_cacheLock(::System::Object* value);

  constexpr void __cordl_internal_set_hashValue(int32_t value);

  constexpr void __cordl_internal_set_hashValueSet(bool value);

  constexpr void __cordl_internal_set_keyUsage(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_publicKeyValue(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr void __cordl_internal_set_sigAlgName(::StringW value);

  constexpr void __cordl_internal_set_sigAlgParams(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x354b618, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x354b668, size 0x52c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c);

  /// @brief Method get_CertificateStructure, addr 0x354bea4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* get_CertificateStructure();

  /// @brief Method get_IsValidNow, addr 0x354beac, size 0x70, virtual true, abstract: false, final false
  inline bool get_IsValidNow();

  /// @brief Method get_IssuerDN, addr 0x354c2cc, size 0x24, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_IssuerDN();

  /// @brief Method get_IssuerUniqueID, addr 0x354c454, size 0x24, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_IssuerUniqueID();

  /// @brief Method get_NotAfter, addr 0x354c340, size 0x2c, virtual true, abstract: false, final false
  inline ::System::DateTime get_NotAfter();

  /// @brief Method get_NotBefore, addr 0x354c314, size 0x2c, virtual true, abstract: false, final false
  inline ::System::DateTime get_NotBefore();

  /// @brief Method get_SerialNumber, addr 0x354c2a0, size 0x2c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Method get_SigAlgName, addr 0x354c3b8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_SigAlgName();

  /// @brief Method get_SigAlgOid, addr 0x354c3c0, size 0x34, virtual true, abstract: false, final false
  inline ::StringW get_SigAlgOid();

  /// @brief Method get_SubjectDN, addr 0x354c2f0, size 0x24, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_SubjectDN();

  /// @brief Method get_SubjectUniqueID, addr 0x354c478, size 0x24, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_SubjectUniqueID();

  /// @brief Method get_Version, addr 0x354c280, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Certificate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Certificate(X509Certificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Certificate(X509Certificate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1860 };

  /// @brief Field c, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* ___c;

  /// @brief Field sigAlgName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___sigAlgName;

  /// @brief Field sigAlgParams, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___sigAlgParams;

  /// @brief Field basicConstraints, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::BasicConstraints* ___basicConstraints;

  /// @brief Field keyUsage, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___keyUsage;

  /// @brief Field cacheLock, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ___cacheLock;

  /// @brief Field publicKeyValue, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___publicKeyValue;

  /// @brief Field hashValueSet, offset: 0x48, size: 0x1, def value: None
  bool ___hashValueSet;

  /// @brief Field hashValue, offset: 0x4c, size: 0x4, def value: None
  int32_t ___hashValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___c) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___sigAlgName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___sigAlgParams) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___basicConstraints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___keyUsage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___cacheLock) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___publicKeyValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___hashValueSet) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___hashValue) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509Certificate, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509Certificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509Certificate*, "Org.BouncyCastle.X509", "X509Certificate");
