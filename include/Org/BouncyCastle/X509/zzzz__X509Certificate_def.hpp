#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509Certificate.hpp"
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
// Type: Org.BouncyCastle.X509::X509Certificate
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509::X509Certificate*
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

  /// @brief Method CheckSignature, addr 0x25be2ec, size 0x3dc, virtual true, abstract: false, final false
  inline void CheckSignature(::Org::BouncyCastle::Crypto::IVerifierFactory* verifier);

  /// @brief Method CheckValidity, addr 0x25bc4c4, size 0x6c, virtual true, abstract: false, final false
  inline void CheckValidity();

  /// @brief Method CheckValidity, addr 0x25bc530, size 0x1ec, virtual true, abstract: false, final false
  inline void CheckValidity(::System::DateTime time);

  /// @brief Method Equals, addr 0x25bd300, size 0x118, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetAlternativeNames, addr 0x25bcf34, size 0x2d8, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* GetAlternativeNames(::StringW oid);

  /// @brief Method GetBasicConstraints, addr 0x25bce24, size 0x68, virtual true, abstract: false, final false
  inline int32_t GetBasicConstraints();

  /// @brief Method GetEncoded, addr 0x25bd2e4, size 0x1c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetExtendedKeyUsage, addr 0x25bc964, size 0x4c0, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetExtendedKeyUsage();

  /// @brief Method GetHashCode, addr 0x25bd418, size 0x5c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetIssuerAlternativeNames, addr 0x25bcee0, size 0x54, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* GetIssuerAlternativeNames();

  /// @brief Method GetKeyUsage, addr 0x25bc908, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> GetKeyUsage();

  /// @brief Method GetPublicKey, addr 0x25bd250, size 0x94, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetPublicKey();

  /// @brief Method GetSigAlgParams, addr 0x25bc864, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSigAlgParams();

  /// @brief Method GetSignature, addr 0x25bc80c, size 0x1c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignature();

  /// @brief Method GetSubjectAlternativeNames, addr 0x25bce8c, size 0x54, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* GetSubjectAlternativeNames();

  /// @brief Method GetTbsCertificate, addr 0x25bc7e8, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetTbsCertificate();

  /// @brief Method GetX509Extensions, addr 0x25bd20c, size 0x44, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  /// @brief Method IsAlgIDEqual, addr 0x25be6c8, size 0x14c, virtual false, abstract: false, final false
  static inline bool IsAlgIDEqual(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* id1, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* id2);

  /// @brief Method IsValid, addr 0x25bc3c4, size 0x100, virtual true, abstract: false, final false
  inline bool IsValid(::System::DateTime time);

  static inline ::Org::BouncyCastle::X509::X509Certificate* New_ctor();

  static inline ::Org::BouncyCastle::X509::X509Certificate* New_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c);

  /// @brief Method ToString, addr 0x25bd474, size 0xd24, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Verify, addr 0x25be198, size 0x8c, virtual true, abstract: false, final false
  inline void Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method Verify, addr 0x25be224, size 0xc8, virtual true, abstract: false, final false
  inline void Verify(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider);

  constexpr ::Org::BouncyCastle::Asn1::X509::BasicConstraints*& __cordl_internal_get_basicConstraints();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::BasicConstraints*> const& __cordl_internal_get_basicConstraints() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& __cordl_internal_get_c();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> const& __cordl_internal_get_c() const;

  constexpr ::System::Object*& __cordl_internal_get_cacheLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_cacheLock() const;

  constexpr int32_t const& __cordl_internal_get_hashValue() const;

  constexpr int32_t& __cordl_internal_get_hashValue();

  constexpr bool const& __cordl_internal_get_hashValueSet() const;

  constexpr bool& __cordl_internal_get_hashValueSet();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_keyUsage() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_keyUsage();

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_publicKeyValue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __cordl_internal_get_publicKeyValue() const;

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

  /// @brief Method .ctor, addr 0x25bbb0c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25bbb6c, size 0x4f8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c);

  /// @brief Method get_CertificateStructure, addr 0x25bc350, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* get_CertificateStructure();

  /// @brief Method get_IsValidNow, addr 0x25bc358, size 0x6c, virtual true, abstract: false, final false
  inline bool get_IsValidNow();

  /// @brief Method get_IssuerDN, addr 0x25bc760, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_IssuerDN();

  /// @brief Method get_IssuerUniqueID, addr 0x25bc8c0, size 0x24, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_IssuerUniqueID();

  /// @brief Method get_NotAfter, addr 0x25bc7c0, size 0x28, virtual true, abstract: false, final false
  inline ::System::DateTime get_NotAfter();

  /// @brief Method get_NotBefore, addr 0x25bc798, size 0x28, virtual true, abstract: false, final false
  inline ::System::DateTime get_NotBefore();

  /// @brief Method get_SerialNumber, addr 0x25bc738, size 0x28, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Method get_SigAlgName, addr 0x25bc828, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_SigAlgName();

  /// @brief Method get_SigAlgOid, addr 0x25bc830, size 0x34, virtual true, abstract: false, final false
  inline ::StringW get_SigAlgOid();

  /// @brief Method get_SubjectDN, addr 0x25bc77c, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_SubjectDN();

  /// @brief Method get_SubjectUniqueID, addr 0x25bc8e4, size 0x24, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_SubjectUniqueID();

  /// @brief Method get_Version, addr 0x25bc71c, size 0x1c, virtual true, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1860 };

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
