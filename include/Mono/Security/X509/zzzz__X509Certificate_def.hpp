#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Certificate)
namespace Mono::Security {
class ASN1;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace Mono::Security::X509 {
class X509ExtensionCollection;
}
namespace System {
struct DateTime;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509Certificate;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::X509Certificate);
// Type: Mono.Security.X509::X509Certificate
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13751))
// CS Name: ::Mono.Security.X509::X509Certificate*
class CORDL_TYPE X509Certificate : public ::System::Object {
public:
  // Declarations
  /// @brief Field decoder, offset 0x10, size 0x8
  __declspec(property(get = __get_decoder, put = __set_decoder))::Mono::Security::ASN1* decoder;

  /// @brief Field m_encodedcert, offset 0x18, size 0x8
  __declspec(property(get = __get_m_encodedcert, put = __set_m_encodedcert))::ArrayW<uint8_t, ::Array<uint8_t>*> m_encodedcert;

  /// @brief Field m_from, offset 0x20, size 0x8
  __declspec(property(get = __get_m_from, put = __set_m_from))::System::DateTime m_from;

  /// @brief Field m_until, offset 0x28, size 0x8
  __declspec(property(get = __get_m_until, put = __set_m_until))::System::DateTime m_until;

  /// @brief Field issuer, offset 0x30, size 0x8
  __declspec(property(get = __get_issuer, put = __set_issuer))::Mono::Security::ASN1* issuer;

  /// @brief Field m_issuername, offset 0x38, size 0x8
  __declspec(property(get = __get_m_issuername, put = __set_m_issuername))::StringW m_issuername;

  /// @brief Field m_keyalgo, offset 0x40, size 0x8
  __declspec(property(get = __get_m_keyalgo, put = __set_m_keyalgo))::StringW m_keyalgo;

  /// @brief Field m_keyalgoparams, offset 0x48, size 0x8
  __declspec(property(get = __get_m_keyalgoparams, put = __set_m_keyalgoparams))::ArrayW<uint8_t, ::Array<uint8_t>*> m_keyalgoparams;

  /// @brief Field subject, offset 0x50, size 0x8
  __declspec(property(get = __get_subject, put = __set_subject))::Mono::Security::ASN1* subject;

  /// @brief Field m_subject, offset 0x58, size 0x8
  __declspec(property(get = __get_m_subject, put = __set_m_subject))::StringW m_subject;

  /// @brief Field m_publickey, offset 0x60, size 0x8
  __declspec(property(get = __get_m_publickey, put = __set_m_publickey))::ArrayW<uint8_t, ::Array<uint8_t>*> m_publickey;

  /// @brief Field signature, offset 0x68, size 0x8
  __declspec(property(get = __get_signature, put = __set_signature))::ArrayW<uint8_t, ::Array<uint8_t>*> signature;

  /// @brief Field m_signaturealgo, offset 0x70, size 0x8
  __declspec(property(get = __get_m_signaturealgo, put = __set_m_signaturealgo))::StringW m_signaturealgo;

  /// @brief Field m_signaturealgoparams, offset 0x78, size 0x8
  __declspec(property(get = __get_m_signaturealgoparams, put = __set_m_signaturealgoparams))::ArrayW<uint8_t, ::Array<uint8_t>*> m_signaturealgoparams;

  /// @brief Field certhash, offset 0x80, size 0x8
  __declspec(property(get = __get_certhash, put = __set_certhash))::ArrayW<uint8_t, ::Array<uint8_t>*> certhash;

  /// @brief Field _rsa, offset 0x88, size 0x8
  __declspec(property(get = __get__rsa, put = __set__rsa))::System::Security::Cryptography::RSA* _rsa;

  /// @brief Field _dsa, offset 0x90, size 0x8
  __declspec(property(get = __get__dsa, put = __set__dsa))::System::Security::Cryptography::DSA* _dsa;

  /// @brief Field version, offset 0x98, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) int32_t version;

  /// @brief Field serialnumber, offset 0xa0, size 0x8
  __declspec(property(get = __get_serialnumber, put = __set_serialnumber))::ArrayW<uint8_t, ::Array<uint8_t>*> serialnumber;

  /// @brief Field issuerUniqueID, offset 0xa8, size 0x8
  __declspec(property(get = __get_issuerUniqueID, put = __set_issuerUniqueID))::ArrayW<uint8_t, ::Array<uint8_t>*> issuerUniqueID;

  /// @brief Field subjectUniqueID, offset 0xb0, size 0x8
  __declspec(property(get = __get_subjectUniqueID, put = __set_subjectUniqueID))::ArrayW<uint8_t, ::Array<uint8_t>*> subjectUniqueID;

  /// @brief Field extensions, offset 0xb8, size 0x8
  __declspec(property(get = __get_extensions, put = __set_extensions))::Mono::Security::X509::X509ExtensionCollection* extensions;

  /// @brief Field encoding_error, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_encoding_error, put = setStaticF_encoding_error))::StringW encoding_error;

  __declspec(property(get = get_DSA, put = set_DSA))::System::Security::Cryptography::DSA* DSA;

  __declspec(property(get = get_Extensions))::Mono::Security::X509::X509ExtensionCollection* Extensions;

  __declspec(property(get = get_Hash))::ArrayW<uint8_t, ::Array<uint8_t>*> Hash;

  __declspec(property(get = get_IssuerName))::StringW IssuerName;

  __declspec(property(get = get_KeyAlgorithm))::StringW KeyAlgorithm;

  __declspec(property(get = get_KeyAlgorithmParameters, put = set_KeyAlgorithmParameters))::ArrayW<uint8_t, ::Array<uint8_t>*> KeyAlgorithmParameters;

  __declspec(property(get = get_PublicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> PublicKey;

  __declspec(property(get = get_RSA, put = set_RSA))::System::Security::Cryptography::RSA* RSA;

  __declspec(property(get = get_RawData))::ArrayW<uint8_t, ::Array<uint8_t>*> RawData;

  __declspec(property(get = get_SerialNumber))::ArrayW<uint8_t, ::Array<uint8_t>*> SerialNumber;

  __declspec(property(get = get_Signature))::ArrayW<uint8_t, ::Array<uint8_t>*> Signature;

  __declspec(property(get = get_SubjectName))::StringW SubjectName;

  __declspec(property(get = get_ValidFrom))::System::DateTime ValidFrom;

  __declspec(property(get = get_ValidUntil))::System::DateTime ValidUntil;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_IsCurrent)) bool IsCurrent;

  __declspec(property(get = get_IsSelfSigned)) bool IsSelfSigned;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr ::Mono::Security::ASN1*& __get_decoder();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> const& __get_decoder() const;

  constexpr void __set_decoder(::Mono::Security::ASN1* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_m_encodedcert();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_m_encodedcert() const;

  constexpr void __set_m_encodedcert(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::DateTime& __get_m_from();

  constexpr ::System::DateTime const& __get_m_from() const;

  constexpr void __set_m_from(::System::DateTime value);

  constexpr ::System::DateTime& __get_m_until();

  constexpr ::System::DateTime const& __get_m_until() const;

  constexpr void __set_m_until(::System::DateTime value);

  constexpr ::Mono::Security::ASN1*& __get_issuer();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> const& __get_issuer() const;

  constexpr void __set_issuer(::Mono::Security::ASN1* value);

  constexpr ::StringW& __get_m_issuername();

  constexpr ::StringW const& __get_m_issuername() const;

  constexpr void __set_m_issuername(::StringW value);

  constexpr ::StringW& __get_m_keyalgo();

  constexpr ::StringW const& __get_m_keyalgo() const;

  constexpr void __set_m_keyalgo(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_m_keyalgoparams();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_m_keyalgoparams() const;

  constexpr void __set_m_keyalgoparams(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Mono::Security::ASN1*& __get_subject();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> const& __get_subject() const;

  constexpr void __set_subject(::Mono::Security::ASN1* value);

  constexpr ::StringW& __get_m_subject();

  constexpr ::StringW const& __get_m_subject() const;

  constexpr void __set_m_subject(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_m_publickey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_m_publickey() const;

  constexpr void __set_m_publickey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_signature();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_signature() const;

  constexpr void __set_signature(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::StringW& __get_m_signaturealgo();

  constexpr ::StringW const& __get_m_signaturealgo() const;

  constexpr void __set_m_signaturealgo(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_m_signaturealgoparams();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_m_signaturealgoparams() const;

  constexpr void __set_m_signaturealgoparams(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_certhash();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_certhash() const;

  constexpr void __set_certhash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Security::Cryptography::RSA*& __get__rsa();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RSA*> const& __get__rsa() const;

  constexpr void __set__rsa(::System::Security::Cryptography::RSA* value);

  constexpr ::System::Security::Cryptography::DSA*& __get__dsa();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DSA*> const& __get__dsa() const;

  constexpr void __set__dsa(::System::Security::Cryptography::DSA* value);

  constexpr int32_t& __get_version();

  constexpr int32_t const& __get_version() const;

  constexpr void __set_version(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_serialnumber();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_serialnumber() const;

  constexpr void __set_serialnumber(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_issuerUniqueID();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_issuerUniqueID() const;

  constexpr void __set_issuerUniqueID(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_subjectUniqueID();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_subjectUniqueID() const;

  constexpr void __set_subjectUniqueID(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Mono::Security::X509::X509ExtensionCollection*& __get_extensions();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509ExtensionCollection*> const& __get_extensions() const;

  constexpr void __set_extensions(::Mono::Security::X509::X509ExtensionCollection* value);

  static inline void setStaticF_encoding_error(::StringW value);

  static inline ::StringW getStaticF_encoding_error();

  /// @brief Method Parse addr 0x23f9c8c size 0x908 virtual false final false
  inline void Parse(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Mono::Security::X509::X509Certificate* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor addr 0x23efb04 size 0x194 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method GetUnsignedBigInteger addr 0x23fa6c8 size 0x94 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetUnsignedBigInteger(::ArrayW<uint8_t, ::Array<uint8_t>*> integer);

  /// @brief Method get_DSA addr 0x23f348c size 0x29c virtual false final false
  inline ::System::Security::Cryptography::DSA* get_DSA();

  /// @brief Method set_DSA addr 0x23fa75c size 0x10 virtual false final false
  inline void set_DSA(::System::Security::Cryptography::DSA* value);

  /// @brief Method get_Extensions addr 0x23fa76c size 0x8 virtual false final false
  inline ::Mono::Security::X509::X509ExtensionCollection* get_Extensions();

  /// @brief Method get_Hash addr 0x23fa774 size 0x294 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Hash();

  /// @brief Method get_IssuerName addr 0x23faa08 size 0x8 virtual true final false
  inline ::StringW get_IssuerName();

  /// @brief Method get_KeyAlgorithm addr 0x23faa10 size 0x8 virtual true final false
  inline ::StringW get_KeyAlgorithm();

  /// @brief Method get_KeyAlgorithmParameters addr 0x23faa18 size 0x74 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_KeyAlgorithmParameters();

  /// @brief Method set_KeyAlgorithmParameters addr 0x23faa8c size 0x8 virtual true final false
  inline void set_KeyAlgorithmParameters(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_PublicKey addr 0x23faa94 size 0x74 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_PublicKey();

  /// @brief Method get_RSA addr 0x23fab08 size 0x18c virtual true final false
  inline ::System::Security::Cryptography::RSA* get_RSA();

  /// @brief Method set_RSA addr 0x23fac94 size 0x10 virtual true final false
  inline void set_RSA(::System::Security::Cryptography::RSA* value);

  /// @brief Method get_RawData addr 0x23faca4 size 0x74 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_RawData();

  /// @brief Method get_SerialNumber addr 0x23fad18 size 0x74 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SerialNumber();

  /// @brief Method get_Signature addr 0x23fad8c size 0x43c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Signature();

  /// @brief Method get_SubjectName addr 0x23fb1c8 size 0x8 virtual true final false
  inline ::StringW get_SubjectName();

  /// @brief Method get_ValidFrom addr 0x23fb1d0 size 0x8 virtual true final false
  inline ::System::DateTime get_ValidFrom();

  /// @brief Method get_ValidUntil addr 0x23fb1d8 size 0x8 virtual true final false
  inline ::System::DateTime get_ValidUntil();

  /// @brief Method get_Version addr 0x23fb1e0 size 0x8 virtual false final false
  inline int32_t get_Version();

  /// @brief Method get_IsCurrent addr 0x23fb1e8 size 0x60 virtual false final false
  inline bool get_IsCurrent();

  /// @brief Method WasCurrent addr 0x23fb248 size 0xd8 virtual false final false
  inline bool WasCurrent(::System::DateTime instant);

  /// @brief Method VerifySignature addr 0x23fb320 size 0xc8 virtual false final false
  inline bool VerifySignature(::System::Security::Cryptography::DSA* dsa);

  /// @brief Method VerifySignature addr 0x23fb3e8 size 0x128 virtual false final false
  inline bool VerifySignature(::System::Security::Cryptography::RSA* rsa);

  /// @brief Method VerifySignature addr 0x23fb510 size 0x18c virtual false final false
  inline bool VerifySignature(::System::Security::Cryptography::AsymmetricAlgorithm* aa);

  /// @brief Method get_IsSelfSigned addr 0x23fb69c size 0x108 virtual false final false
  inline bool get_IsSelfSigned();

  /// @brief Method GetObjectData addr 0x23fb7a4 size 0x5c virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method PEM addr 0x23fa594 size 0x134 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PEM(::StringW type, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

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
  /// @brief Field decoder, offset: 0x10, size: 0x8, def value: None
  ::Mono::Security::ASN1* ___decoder;

  /// @brief Field m_encodedcert, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_encodedcert;

  /// @brief Field m_from, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ___m_from;

  /// @brief Field m_until, offset: 0x28, size: 0x8, def value: None
  ::System::DateTime ___m_until;

  /// @brief Field issuer, offset: 0x30, size: 0x8, def value: None
  ::Mono::Security::ASN1* ___issuer;

  /// @brief Field m_issuername, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_issuername;

  /// @brief Field m_keyalgo, offset: 0x40, size: 0x8, def value: None
  ::StringW ___m_keyalgo;

  /// @brief Field m_keyalgoparams, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_keyalgoparams;

  /// @brief Field subject, offset: 0x50, size: 0x8, def value: None
  ::Mono::Security::ASN1* ___subject;

  /// @brief Field m_subject, offset: 0x58, size: 0x8, def value: None
  ::StringW ___m_subject;

  /// @brief Field m_publickey, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_publickey;

  /// @brief Field signature, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___signature;

  /// @brief Field m_signaturealgo, offset: 0x70, size: 0x8, def value: None
  ::StringW ___m_signaturealgo;

  /// @brief Field m_signaturealgoparams, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_signaturealgoparams;

  /// @brief Field certhash, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___certhash;

  /// @brief Field _rsa, offset: 0x88, size: 0x8, def value: None
  ::System::Security::Cryptography::RSA* ____rsa;

  /// @brief Field _dsa, offset: 0x90, size: 0x8, def value: None
  ::System::Security::Cryptography::DSA* ____dsa;

  /// @brief Field version, offset: 0x98, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field serialnumber, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___serialnumber;

  /// @brief Field issuerUniqueID, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___issuerUniqueID;

  /// @brief Field subjectUniqueID, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___subjectUniqueID;

  /// @brief Field extensions, offset: 0xb8, size: 0x8, def value: None
  ::Mono::Security::X509::X509ExtensionCollection* ___extensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X509Certificate, 0xc0>, "Size mismatch!");

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X509Certificate);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Certificate*, "Mono.Security.X509", "X509Certificate");
