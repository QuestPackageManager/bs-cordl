#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateRequestMessageBuilder)
namespace Org::BouncyCastle::Crmf {
class PKMacBuilder;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplateBuilder;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509ExtensionsGenerator;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoPrivKey;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class SubsequentMessage;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PKMacValue;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Crmf {
class IControl;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Null;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Crmf {
class CertificateRequestMessage;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class CertificateRequestMessageBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder);
// Type: Org.BouncyCastle.Crmf::CertificateRequestMessageBuilder
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(697))
// CS Name: ::Org.BouncyCastle.Crmf::CertificateRequestMessageBuilder*
class CORDL_TYPE CertificateRequestMessageBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _certReqId, offset 0x10, size 0x8
  __declspec(property(get = __get__certReqId, put = __set__certReqId))::Org::BouncyCastle::Math::BigInteger* _certReqId;

  /// @brief Field _extGenerator, offset 0x18, size 0x8
  __declspec(property(get = __get__extGenerator, put = __set__extGenerator))::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* _extGenerator;

  /// @brief Field _templateBuilder, offset 0x20, size 0x8
  __declspec(property(get = __get__templateBuilder, put = __set__templateBuilder))::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* _templateBuilder;

  /// @brief Field _controls, offset 0x28, size 0x8
  __declspec(property(get = __get__controls, put = __set__controls))::System::Collections::IList* _controls;

  /// @brief Field _popSigner, offset 0x30, size 0x8
  __declspec(property(get = __get__popSigner, put = __set__popSigner))::Org::BouncyCastle::Crypto::ISignatureFactory* _popSigner;

  /// @brief Field _pkMacBuilder, offset 0x38, size 0x8
  __declspec(property(get = __get__pkMacBuilder, put = __set__pkMacBuilder))::Org::BouncyCastle::Crmf::PKMacBuilder* _pkMacBuilder;

  /// @brief Field _password, offset 0x40, size 0x8
  __declspec(property(get = __get__password, put = __set__password))::ArrayW<char16_t, ::Array<char16_t>*> _password;

  /// @brief Field _sender, offset 0x48, size 0x8
  __declspec(property(get = __get__sender, put = __set__sender))::Org::BouncyCastle::Asn1::X509::GeneralName* _sender;

  /// @brief Field _popoType, offset 0x50, size 0x4
  __declspec(property(get = __get__popoType, put = __set__popoType)) int32_t _popoType;

  /// @brief Field _popoPrivKey, offset 0x58, size 0x8
  __declspec(property(get = __get__popoPrivKey, put = __set__popoPrivKey))::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* _popoPrivKey;

  /// @brief Field _popRaVerified, offset 0x60, size 0x8
  __declspec(property(get = __get__popRaVerified, put = __set__popRaVerified))::Org::BouncyCastle::Asn1::Asn1Null* _popRaVerified;

  /// @brief Field _agreeMac, offset 0x68, size 0x8
  __declspec(property(get = __get__agreeMac, put = __set__agreeMac))::Org::BouncyCastle::Asn1::Crmf::PKMacValue* _agreeMac;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get__certReqId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get__certReqId() const;

  constexpr void __set__certReqId(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*& __get__extGenerator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*> const& __get__extGenerator() const;

  constexpr void __set__extGenerator(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* value);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*& __get__templateBuilder();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*> const& __get__templateBuilder() const;

  constexpr void __set__templateBuilder(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* value);

  constexpr ::System::Collections::IList*& __get__controls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get__controls() const;

  constexpr void __set__controls(::System::Collections::IList* value);

  constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory*& __get__popSigner();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISignatureFactory*> const& __get__popSigner() const;

  constexpr void __set__popSigner(::Org::BouncyCastle::Crypto::ISignatureFactory* value);

  constexpr ::Org::BouncyCastle::Crmf::PKMacBuilder*& __get__pkMacBuilder();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crmf::PKMacBuilder*> const& __get__pkMacBuilder() const;

  constexpr void __set__pkMacBuilder(::Org::BouncyCastle::Crmf::PKMacBuilder* value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get__password();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get__password() const;

  constexpr void __set__password(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get__sender();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get__sender() const;

  constexpr void __set__sender(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr int32_t& __get__popoType();

  constexpr int32_t const& __get__popoType() const;

  constexpr void __set__popoType(int32_t value);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey*& __get__popoPrivKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey*> const& __get__popoPrivKey() const;

  constexpr void __set__popoPrivKey(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Null*& __get__popRaVerified();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Null*> const& __get__popRaVerified() const;

  constexpr void __set__popRaVerified(::Org::BouncyCastle::Asn1::Asn1Null* value);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PKMacValue*& __get__agreeMac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::PKMacValue*> const& __get__agreeMac() const;

  constexpr void __set__agreeMac(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* value);

  static inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* New_ctor(::Org::BouncyCastle::Math::BigInteger* certReqId);

  /// @brief Method .ctor, addr 0x120ea84, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* certReqId);

  /// @brief Method SetPublicKey, addr 0x120eb68, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* publicKeyInfo);

  /// @brief Method SetIssuer, addr 0x120eb98, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* issuer);

  /// @brief Method SetSubject, addr 0x120ebc8, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetSubject(::Org::BouncyCastle::Asn1::X509::X509Name* subject);

  /// @brief Method SetSerialNumber, addr 0x120ebf8, size 0x90, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetSerialNumber(::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method SetValidity, addr 0x120ec88, size 0x94, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetValidity(::Org::BouncyCastle::Asn1::X509::Time* notBefore, ::Org::BouncyCastle::Asn1::X509::Time* notAfter);

  /// @brief Method AddExtension, addr 0x120ed1c, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method AddExtension, addr 0x120ed48, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method AddControl, addr 0x120ed74, size 0xb4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* AddControl(::Org::BouncyCastle::Crmf::IControl* control);

  /// @brief Method SetProofOfPossessionSignKeySigner, addr 0x120ee28, size 0x74, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetProofOfPossessionSignKeySigner(::Org::BouncyCastle::Crypto::ISignatureFactory* popoSignatureFactory);

  /// @brief Method SetProofOfPossessionSubsequentMessage, addr 0x120ee9c, size 0xd8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetProofOfPossessionSubsequentMessage(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* msg);

  /// @brief Method SetProofOfPossessionSubsequentMessage, addr 0x120ef74, size 0x124, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetProofOfPossessionSubsequentMessage(int32_t type, ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* msg);

  /// @brief Method SetProofOfPossessionAgreeMac, addr 0x120f098, size 0x74, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetProofOfPossessionAgreeMac(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* macValue);

  /// @brief Method SetProofOfPossessionRaVerified, addr 0x120f10c, size 0xc0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetProofOfPossessionRaVerified();

  /// @brief Method SetAuthInfoPKMAC, addr 0x120f1cc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetAuthInfoPKMAC(::Org::BouncyCastle::Crmf::PKMacBuilder* pkmacFactory, ::ArrayW<char16_t, ::Array<char16_t>*> password);

  /// @brief Method SetAuthInfoSender, addr 0x120f1d4, size 0x74, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetAuthInfoSender(::Org::BouncyCastle::Asn1::X509::X509Name* sender);

  /// @brief Method SetAuthInfoSender, addr 0x120f248, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetAuthInfoSender(::Org::BouncyCastle::Asn1::X509::GeneralName* sender);

  /// @brief Method Build, addr 0x120f250, size 0x95c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessage* Build();

  // Ctor Parameters [CppParam { name: "", ty: "CertificateRequestMessageBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateRequestMessageBuilder(CertificateRequestMessageBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateRequestMessageBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateRequestMessageBuilder(CertificateRequestMessageBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateRequestMessageBuilder();

public:
  /// @brief Field _certReqId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ____certReqId;

  /// @brief Field _extGenerator, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* ____extGenerator;

  /// @brief Field _templateBuilder, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* ____templateBuilder;

  /// @brief Field _controls, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IList* ____controls;

  /// @brief Field _popSigner, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISignatureFactory* ____popSigner;

  /// @brief Field _pkMacBuilder, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crmf::PKMacBuilder* ____pkMacBuilder;

  /// @brief Field _password, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____password;

  /// @brief Field _sender, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ____sender;

  /// @brief Field _popoType, offset: 0x50, size: 0x4, def value: None
  int32_t ____popoType;

  /// @brief Field _popoPrivKey, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* ____popoPrivKey;

  /// @brief Field _popRaVerified, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Null* ____popRaVerified;

  /// @brief Field _agreeMac, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* ____agreeMac;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, 0x70>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, ____certReqId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, ____extGenerator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, ____templateBuilder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, ____controls) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, ____popSigner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, ____pkMacBuilder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, ____password) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, ____sender) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, ____popoType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, ____popoPrivKey) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, ____popRaVerified) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, ____agreeMac) == 0x68, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, "Org.BouncyCastle.Crmf", "CertificateRequestMessageBuilder");
