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
namespace Mono::Security::X509 {
class X509ExtensionCollection;
}
namespace Mono::Security {
class ASN1;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System {
struct DateTime;
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
// CS Name: ::Mono.Security.X509::X509Certificate*
class CORDL_TYPE X509Certificate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DSA, put = set_DSA))::System::Security::Cryptography::DSA* DSA;

  __declspec(property(get = get_Extensions))::Mono::Security::X509::X509ExtensionCollection* Extensions;

  __declspec(property(get = get_Hash))::ArrayW<uint8_t, ::Array<uint8_t>*> Hash;

  __declspec(property(get = get_IsCurrent)) bool IsCurrent;

  __declspec(property(get = get_IsSelfSigned)) bool IsSelfSigned;

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

  /// @brief Field _dsa, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__dsa, put = __cordl_internal_set__dsa))::System::Security::Cryptography::DSA* _dsa;

  /// @brief Field _rsa, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__rsa, put = __cordl_internal_set__rsa))::System::Security::Cryptography::RSA* _rsa;

  /// @brief Field certhash, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_certhash, put = __cordl_internal_set_certhash))::ArrayW<uint8_t, ::Array<uint8_t>*> certhash;

  /// @brief Field decoder, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_decoder, put = __cordl_internal_set_decoder))::Mono::Security::ASN1* decoder;

  /// @brief Field encoding_error, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_encoding_error, put = setStaticF_encoding_error))::StringW encoding_error;

  /// @brief Field extensions, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions, put = __cordl_internal_set_extensions))::Mono::Security::X509::X509ExtensionCollection* extensions;

  /// @brief Field issuer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_issuer, put = __cordl_internal_set_issuer))::Mono::Security::ASN1* issuer;

  /// @brief Field issuerUniqueID, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_issuerUniqueID, put = __cordl_internal_set_issuerUniqueID))::ArrayW<uint8_t, ::Array<uint8_t>*> issuerUniqueID;

  /// @brief Field m_encodedcert, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_encodedcert, put = __cordl_internal_set_m_encodedcert))::ArrayW<uint8_t, ::Array<uint8_t>*> m_encodedcert;

  /// @brief Field m_from, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_from, put = __cordl_internal_set_m_from))::System::DateTime m_from;

  /// @brief Field m_issuername, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_issuername, put = __cordl_internal_set_m_issuername))::StringW m_issuername;

  /// @brief Field m_keyalgo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_keyalgo, put = __cordl_internal_set_m_keyalgo))::StringW m_keyalgo;

  /// @brief Field m_keyalgoparams, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_keyalgoparams, put = __cordl_internal_set_m_keyalgoparams))::ArrayW<uint8_t, ::Array<uint8_t>*> m_keyalgoparams;

  /// @brief Field m_publickey, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_publickey, put = __cordl_internal_set_m_publickey))::ArrayW<uint8_t, ::Array<uint8_t>*> m_publickey;

  /// @brief Field m_signaturealgo, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_signaturealgo, put = __cordl_internal_set_m_signaturealgo))::StringW m_signaturealgo;

  /// @brief Field m_signaturealgoparams, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_signaturealgoparams, put = __cordl_internal_set_m_signaturealgoparams))::ArrayW<uint8_t, ::Array<uint8_t>*> m_signaturealgoparams;

  /// @brief Field m_subject, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_subject, put = __cordl_internal_set_m_subject))::StringW m_subject;

  /// @brief Field m_until, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_until, put = __cordl_internal_set_m_until))::System::DateTime m_until;

  /// @brief Field serialnumber, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_serialnumber, put = __cordl_internal_set_serialnumber))::ArrayW<uint8_t, ::Array<uint8_t>*> serialnumber;

  /// @brief Field signature, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_signature, put = __cordl_internal_set_signature))::ArrayW<uint8_t, ::Array<uint8_t>*> signature;

  /// @brief Field subject, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_subject, put = __cordl_internal_set_subject))::Mono::Security::ASN1* subject;

  /// @brief Field subjectUniqueID, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_subjectUniqueID, put = __cordl_internal_set_subjectUniqueID))::ArrayW<uint8_t, ::Array<uint8_t>*> subjectUniqueID;

  /// @brief Field version, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method GetObjectData, addr 0x26745e4, size 0x5c, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetUnsignedBigInteger, addr 0x2673508, size 0x94, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetUnsignedBigInteger(::ArrayW<uint8_t, ::Array<uint8_t>*> integer);

  static inline ::Mono::Security::X509::X509Certificate* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method PEM, addr 0x26733d4, size 0x134, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PEM(::StringW type, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Parse, addr 0x2672acc, size 0x908, virtual false, abstract: false, final false
  inline void Parse(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method VerifySignature, addr 0x2674350, size 0x18c, virtual false, abstract: false, final false
  inline bool VerifySignature(::System::Security::Cryptography::AsymmetricAlgorithm* aa);

  /// @brief Method VerifySignature, addr 0x2674160, size 0xc8, virtual false, abstract: false, final false
  inline bool VerifySignature(::System::Security::Cryptography::DSA* dsa);

  /// @brief Method VerifySignature, addr 0x2674228, size 0x128, virtual false, abstract: false, final false
  inline bool VerifySignature(::System::Security::Cryptography::RSA* rsa);

  /// @brief Method WasCurrent, addr 0x2674088, size 0xd8, virtual false, abstract: false, final false
  inline bool WasCurrent(::System::DateTime instant);

  constexpr ::System::Security::Cryptography::DSA*& __cordl_internal_get__dsa();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DSA*> const& __cordl_internal_get__dsa() const;

  constexpr ::System::Security::Cryptography::RSA*& __cordl_internal_get__rsa();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RSA*> const& __cordl_internal_get__rsa() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_certhash() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_certhash();

  constexpr ::Mono::Security::ASN1*& __cordl_internal_get_decoder();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> const& __cordl_internal_get_decoder() const;

  constexpr ::Mono::Security::X509::X509ExtensionCollection*& __cordl_internal_get_extensions();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509ExtensionCollection*> const& __cordl_internal_get_extensions() const;

  constexpr ::Mono::Security::ASN1*& __cordl_internal_get_issuer();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> const& __cordl_internal_get_issuer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_issuerUniqueID() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_issuerUniqueID();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_encodedcert() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_encodedcert();

  constexpr ::System::DateTime const& __cordl_internal_get_m_from() const;

  constexpr ::System::DateTime& __cordl_internal_get_m_from();

  constexpr ::StringW const& __cordl_internal_get_m_issuername() const;

  constexpr ::StringW& __cordl_internal_get_m_issuername();

  constexpr ::StringW const& __cordl_internal_get_m_keyalgo() const;

  constexpr ::StringW& __cordl_internal_get_m_keyalgo();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_keyalgoparams() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_keyalgoparams();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_publickey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_publickey();

  constexpr ::StringW const& __cordl_internal_get_m_signaturealgo() const;

  constexpr ::StringW& __cordl_internal_get_m_signaturealgo();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_signaturealgoparams() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_signaturealgoparams();

  constexpr ::StringW const& __cordl_internal_get_m_subject() const;

  constexpr ::StringW& __cordl_internal_get_m_subject();

  constexpr ::System::DateTime const& __cordl_internal_get_m_until() const;

  constexpr ::System::DateTime& __cordl_internal_get_m_until();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_serialnumber() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_serialnumber();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_signature() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_signature();

  constexpr ::Mono::Security::ASN1*& __cordl_internal_get_subject();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> const& __cordl_internal_get_subject() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_subjectUniqueID() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_subjectUniqueID();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__dsa(::System::Security::Cryptography::DSA* value);

  constexpr void __cordl_internal_set__rsa(::System::Security::Cryptography::RSA* value);

  constexpr void __cordl_internal_set_certhash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_decoder(::Mono::Security::ASN1* value);

  constexpr void __cordl_internal_set_extensions(::Mono::Security::X509::X509ExtensionCollection* value);

  constexpr void __cordl_internal_set_issuer(::Mono::Security::ASN1* value);

  constexpr void __cordl_internal_set_issuerUniqueID(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_encodedcert(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_from(::System::DateTime value);

  constexpr void __cordl_internal_set_m_issuername(::StringW value);

  constexpr void __cordl_internal_set_m_keyalgo(::StringW value);

  constexpr void __cordl_internal_set_m_keyalgoparams(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_publickey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_signaturealgo(::StringW value);

  constexpr void __cordl_internal_set_m_signaturealgoparams(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_subject(::StringW value);

  constexpr void __cordl_internal_set_m_until(::System::DateTime value);

  constexpr void __cordl_internal_set_serialnumber(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_signature(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_subject(::Mono::Security::ASN1* value);

  constexpr void __cordl_internal_set_subjectUniqueID(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x2668944, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::StringW getStaticF_encoding_error();

  /// @brief Method get_DSA, addr 0x266c2cc, size 0x29c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::DSA* get_DSA();

  /// @brief Method get_Extensions, addr 0x26735ac, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509ExtensionCollection* get_Extensions();

  /// @brief Method get_Hash, addr 0x26735b4, size 0x294, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Hash();

  /// @brief Method get_IsCurrent, addr 0x2674028, size 0x60, virtual false, abstract: false, final false
  inline bool get_IsCurrent();

  /// @brief Method get_IsSelfSigned, addr 0x26744dc, size 0x108, virtual false, abstract: false, final false
  inline bool get_IsSelfSigned();

  /// @brief Method get_IssuerName, addr 0x2673848, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_IssuerName();

  /// @brief Method get_KeyAlgorithm, addr 0x2673850, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_KeyAlgorithm();

  /// @brief Method get_KeyAlgorithmParameters, addr 0x2673858, size 0x74, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_KeyAlgorithmParameters();

  /// @brief Method get_PublicKey, addr 0x26738d4, size 0x74, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_PublicKey();

  /// @brief Method get_RSA, addr 0x2673948, size 0x18c, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::RSA* get_RSA();

  /// @brief Method get_RawData, addr 0x2673ae4, size 0x74, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_RawData();

  /// @brief Method get_SerialNumber, addr 0x2673b58, size 0x74, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SerialNumber();

  /// @brief Method get_Signature, addr 0x2673bcc, size 0x43c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Signature();

  /// @brief Method get_SubjectName, addr 0x2674008, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_SubjectName();

  /// @brief Method get_ValidFrom, addr 0x2674010, size 0x8, virtual true, abstract: false, final false
  inline ::System::DateTime get_ValidFrom();

  /// @brief Method get_ValidUntil, addr 0x2674018, size 0x8, virtual true, abstract: false, final false
  inline ::System::DateTime get_ValidUntil();

  /// @brief Method get_Version, addr 0x2674020, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_encoding_error(::StringW value);

  /// @brief Method set_DSA, addr 0x267359c, size 0x10, virtual false, abstract: false, final false
  inline void set_DSA(::System::Security::Cryptography::DSA* value);

  /// @brief Method set_KeyAlgorithmParameters, addr 0x26738cc, size 0x8, virtual true, abstract: false, final false
  inline void set_KeyAlgorithmParameters(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_RSA, addr 0x2673ad4, size 0x10, virtual true, abstract: false, final false
  inline void set_RSA(::System::Security::Cryptography::RSA* value);

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

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___decoder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___m_encodedcert) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___m_from) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___m_until) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___issuer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___m_issuername) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___m_keyalgo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___m_keyalgoparams) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___subject) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___m_subject) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___m_publickey) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___signature) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___m_signaturealgo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___m_signaturealgoparams) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___certhash) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ____rsa) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ____dsa) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___version) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___serialnumber) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___issuerUniqueID) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___subjectUniqueID) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Certificate, ___extensions) == 0xb8, "Offset mismatch!");

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X509Certificate);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Certificate*, "Mono.Security.X509", "X509Certificate");
