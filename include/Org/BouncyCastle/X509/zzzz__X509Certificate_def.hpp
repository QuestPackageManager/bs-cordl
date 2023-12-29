#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Certificate)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class BasicConstraints;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509Certificate);
// Type: Org.BouncyCastle.X509::X509Certificate
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1860))
// CS Name: ::Org.BouncyCastle.X509::X509Certificate*
class CORDL_TYPE X509Certificate : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
  // Declarations
  /// @brief Field c, offset 0x10, size 0x8
  __declspec(property(get = __get_c, put = __set_c))::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c;

  /// @brief Field sigAlgName, offset 0x18, size 0x8
  __declspec(property(get = __get_sigAlgName, put = __set_sigAlgName))::StringW sigAlgName;

  /// @brief Field sigAlgParams, offset 0x20, size 0x8
  __declspec(property(get = __get_sigAlgParams, put = __set_sigAlgParams))::ArrayW<uint8_t, ::Array<uint8_t>*> sigAlgParams;

  /// @brief Field basicConstraints, offset 0x28, size 0x8
  __declspec(property(get = __get_basicConstraints, put = __set_basicConstraints))::Org::BouncyCastle::Asn1::X509::BasicConstraints* basicConstraints;

  /// @brief Field keyUsage, offset 0x30, size 0x8
  __declspec(property(get = __get_keyUsage, put = __set_keyUsage))::ArrayW<bool, ::Array<bool>*> keyUsage;

  /// @brief Field cacheLock, offset 0x38, size 0x8
  __declspec(property(get = __get_cacheLock, put = __set_cacheLock))::System::Object* cacheLock;

  /// @brief Field publicKeyValue, offset 0x40, size 0x8
  __declspec(property(get = __get_publicKeyValue, put = __set_publicKeyValue))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKeyValue;

  /// @brief Field hashValueSet, offset 0x48, size 0x1
  __declspec(property(get = __get_hashValueSet, put = __set_hashValueSet)) bool hashValueSet;

  /// @brief Field hashValue, offset 0x4c, size 0x4
  __declspec(property(get = __get_hashValue, put = __set_hashValue)) int32_t hashValue;

  __declspec(property(get = get_CertificateStructure))::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* CertificateStructure;

  __declspec(property(get = get_IsValidNow)) bool IsValidNow;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_SerialNumber))::Org::BouncyCastle::Math::BigInteger* SerialNumber;

  __declspec(property(get = get_IssuerDN))::Org::BouncyCastle::Asn1::X509::X509Name* IssuerDN;

  __declspec(property(get = get_SubjectDN))::Org::BouncyCastle::Asn1::X509::X509Name* SubjectDN;

  __declspec(property(get = get_NotBefore))::System::DateTime NotBefore;

  __declspec(property(get = get_NotAfter))::System::DateTime NotAfter;

  __declspec(property(get = get_SigAlgName))::StringW SigAlgName;

  __declspec(property(get = get_SigAlgOid))::StringW SigAlgOid;

  __declspec(property(get = get_IssuerUniqueID))::Org::BouncyCastle::Asn1::DerBitString* IssuerUniqueID;

  __declspec(property(get = get_SubjectUniqueID))::Org::BouncyCastle::Asn1::DerBitString* SubjectUniqueID;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& __get_c();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> const& __get_c() const;

  constexpr void __set_c(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value);

  constexpr ::StringW& __get_sigAlgName();

  constexpr ::StringW const& __get_sigAlgName() const;

  constexpr void __set_sigAlgName(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_sigAlgParams();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_sigAlgParams() const;

  constexpr void __set_sigAlgParams(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Asn1::X509::BasicConstraints*& __get_basicConstraints();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::BasicConstraints*> const& __get_basicConstraints() const;

  constexpr void __set_basicConstraints(::Org::BouncyCastle::Asn1::X509::BasicConstraints* value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get_keyUsage();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get_keyUsage() const;

  constexpr void __set_keyUsage(::ArrayW<bool, ::Array<bool>*> value);

  constexpr ::System::Object*& __get_cacheLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_cacheLock() const;

  constexpr void __set_cacheLock(::System::Object* value);

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __get_publicKeyValue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __get_publicKeyValue() const;

  constexpr void __set_publicKeyValue(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr bool& __get_hashValueSet();

  constexpr bool const& __get_hashValueSet() const;

  constexpr void __set_hashValueSet(bool value);

  constexpr int32_t& __get_hashValue();

  constexpr int32_t const& __get_hashValue() const;

  constexpr void __set_hashValue(int32_t value);

  static inline ::Org::BouncyCastle::X509::X509Certificate* New_ctor();

  /// @brief Method .ctor addr 0x1106d84 size 0x68 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::X509::X509Certificate* New_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c);

  /// @brief Method .ctor addr 0x1106dec size 0x530 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c);

  /// @brief Method get_CertificateStructure addr 0x1107600 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* get_CertificateStructure();

  /// @brief Method get_IsValidNow addr 0x1107608 size 0x6c virtual true final false
  inline bool get_IsValidNow();

  /// @brief Method IsValid addr 0x1107674 size 0xd0 virtual true final false
  inline bool IsValid(::System::DateTime time);

  /// @brief Method CheckValidity addr 0x1107744 size 0x6c virtual true final false
  inline void CheckValidity();

  /// @brief Method CheckValidity addr 0x11077b0 size 0x1cc virtual true final false
  inline void CheckValidity(::System::DateTime time);

  /// @brief Method get_Version addr 0x110797c size 0x1c virtual true final false
  inline int32_t get_Version();

  /// @brief Method get_SerialNumber addr 0x1107998 size 0x28 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Method get_IssuerDN addr 0x11079c0 size 0x1c virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_IssuerDN();

  /// @brief Method get_SubjectDN addr 0x11079dc size 0x1c virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_SubjectDN();

  /// @brief Method get_NotBefore addr 0x11079f8 size 0x28 virtual true final false
  inline ::System::DateTime get_NotBefore();

  /// @brief Method get_NotAfter addr 0x1107a20 size 0x28 virtual true final false
  inline ::System::DateTime get_NotAfter();

  /// @brief Method GetTbsCertificate addr 0x1107a48 size 0x24 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetTbsCertificate();

  /// @brief Method GetSignature addr 0x1107a6c size 0x1c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignature();

  /// @brief Method get_SigAlgName addr 0x1107a88 size 0x8 virtual true final false
  inline ::StringW get_SigAlgName();

  /// @brief Method get_SigAlgOid addr 0x1107a90 size 0x34 virtual true final false
  inline ::StringW get_SigAlgOid();

  /// @brief Method GetSigAlgParams addr 0x1107ac4 size 0x5c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSigAlgParams();

  /// @brief Method get_IssuerUniqueID addr 0x1107b20 size 0x24 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_IssuerUniqueID();

  /// @brief Method get_SubjectUniqueID addr 0x1107b44 size 0x24 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_SubjectUniqueID();

  /// @brief Method GetKeyUsage addr 0x1107b68 size 0x5c virtual true final false
  inline ::ArrayW<bool, ::Array<bool>*> GetKeyUsage();

  /// @brief Method GetExtendedKeyUsage addr 0x1107bc4 size 0x4d4 virtual true final false
  inline ::System::Collections::IList* GetExtendedKeyUsage();

  /// @brief Method GetBasicConstraints addr 0x1108098 size 0x68 virtual true final false
  inline int32_t GetBasicConstraints();

  /// @brief Method GetSubjectAlternativeNames addr 0x1108100 size 0x54 virtual true final false
  inline ::System::Collections::ICollection* GetSubjectAlternativeNames();

  /// @brief Method GetIssuerAlternativeNames addr 0x1108154 size 0x54 virtual true final false
  inline ::System::Collections::ICollection* GetIssuerAlternativeNames();

  /// @brief Method GetAlternativeNames addr 0x11081a8 size 0x2dc virtual true final false
  inline ::System::Collections::ICollection* GetAlternativeNames(::StringW oid);

  /// @brief Method GetX509Extensions addr 0x1108484 size 0x44 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  /// @brief Method GetPublicKey addr 0x11084c8 size 0x94 virtual true final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetPublicKey();

  /// @brief Method GetEncoded addr 0x110855c size 0x1c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method Equals addr 0x1108578 size 0x118 virtual true final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode addr 0x1108690 size 0x5c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x11086ec size 0xd48 virtual true final false
  inline ::StringW ToString();

  /// @brief Method Verify addr 0x1109434 size 0x90 virtual true final false
  inline void Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method Verify addr 0x11094c4 size 0xc8 virtual true final false
  inline void Verify(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider);

  /// @brief Method CheckSignature addr 0x110958c size 0x3e4 virtual true final false
  inline void CheckSignature(::Org::BouncyCastle::Crypto::IVerifierFactory* verifier);

  /// @brief Method IsAlgIDEqual addr 0x1109970 size 0x14c virtual false final false
  static inline bool IsAlgIDEqual(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* id1, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* id2);

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Certificate(X509Certificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Certificate(X509Certificate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Certificate();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509Certificate, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___c) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___sigAlgName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___sigAlgParams) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___basicConstraints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___keyUsage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___cacheLock) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___publicKeyValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___hashValueSet) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Certificate, ___hashValue) == 0x4c, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509Certificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509Certificate*, "Org.BouncyCastle.X509", "X509Certificate");
