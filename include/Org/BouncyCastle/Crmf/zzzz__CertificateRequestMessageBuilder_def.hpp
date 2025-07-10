#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/CertificateRequestMessageBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateRequestMessageBuilder)
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplateBuilder;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PKMacValue;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoPrivKey;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class SubsequentMessage;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509ExtensionsGenerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Null;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crmf {
class CertificateRequestMessage;
}
namespace Org::BouncyCastle::Crmf {
class IControl;
}
namespace Org::BouncyCastle::Crmf {
class PKMacBuilder;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class CertificateRequestMessageBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder);
// Dependencies System.Object
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Crmf.CertificateRequestMessageBuilder
class CORDL_TYPE CertificateRequestMessageBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _agreeMac, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__agreeMac, put = __cordl_internal_set__agreeMac)) ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* _agreeMac;

  /// @brief Field _certReqId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__certReqId, put = __cordl_internal_set__certReqId)) ::Org::BouncyCastle::Math::BigInteger* _certReqId;

  /// @brief Field _controls, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__controls, put = __cordl_internal_set__controls)) ::System::Collections::IList* _controls;

  /// @brief Field _extGenerator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__extGenerator, put = __cordl_internal_set__extGenerator)) ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* _extGenerator;

  /// @brief Field _password, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__password, put = __cordl_internal_set__password)) ::ArrayW<char16_t, ::Array<char16_t>*> _password;

  /// @brief Field _pkMacBuilder, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__pkMacBuilder, put = __cordl_internal_set__pkMacBuilder)) ::Org::BouncyCastle::Crmf::PKMacBuilder* _pkMacBuilder;

  /// @brief Field _popRaVerified, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__popRaVerified, put = __cordl_internal_set__popRaVerified)) ::Org::BouncyCastle::Asn1::Asn1Null* _popRaVerified;

  /// @brief Field _popSigner, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__popSigner, put = __cordl_internal_set__popSigner)) ::Org::BouncyCastle::Crypto::ISignatureFactory* _popSigner;

  /// @brief Field _popoPrivKey, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__popoPrivKey, put = __cordl_internal_set__popoPrivKey)) ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* _popoPrivKey;

  /// @brief Field _popoType, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__popoType, put = __cordl_internal_set__popoType)) int32_t _popoType;

  /// @brief Field _sender, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__sender, put = __cordl_internal_set__sender)) ::Org::BouncyCastle::Asn1::X509::GeneralName* _sender;

  /// @brief Field _templateBuilder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__templateBuilder, put = __cordl_internal_set__templateBuilder)) ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* _templateBuilder;

  /// @brief Method AddControl, addr 0x26832a0, size 0xb4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* AddControl(::Org::BouncyCastle::Crmf::IControl* control);

  /// @brief Method AddExtension, addr 0x2683274, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method AddExtension, addr 0x2683248, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method Build, addr 0x268374c, size 0x96c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessage* Build();

  static inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* New_ctor(::Org::BouncyCastle::Math::BigInteger* certReqId);

  /// @brief Method SetAuthInfoPKMAC, addr 0x26836d0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetAuthInfoPKMAC(::Org::BouncyCastle::Crmf::PKMacBuilder* pkmacFactory, ::ArrayW<char16_t, ::Array<char16_t>*> password);

  /// @brief Method SetAuthInfoSender, addr 0x2683744, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetAuthInfoSender(::Org::BouncyCastle::Asn1::X509::GeneralName* sender);

  /// @brief Method SetAuthInfoSender, addr 0x26836d8, size 0x6c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetAuthInfoSender(::Org::BouncyCastle::Asn1::X509::X509Name* sender);

  /// @brief Method SetIssuer, addr 0x26830cc, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* issuer);

  /// @brief Method SetProofOfPossessionAgreeMac, addr 0x26835a4, size 0x70, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetProofOfPossessionAgreeMac(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* macValue);

  /// @brief Method SetProofOfPossessionRaVerified, addr 0x2683614, size 0xbc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetProofOfPossessionRaVerified();

  /// @brief Method SetProofOfPossessionSignKeySigner, addr 0x2683354, size 0x70, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetProofOfPossessionSignKeySigner(::Org::BouncyCastle::Crypto::ISignatureFactory* popoSignatureFactory);

  /// @brief Method SetProofOfPossessionSubsequentMessage, addr 0x26833c4, size 0xcc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetProofOfPossessionSubsequentMessage(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* msg);

  /// @brief Method SetProofOfPossessionSubsequentMessage, addr 0x2683490, size 0x114, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetProofOfPossessionSubsequentMessage(int32_t type, ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* msg);

  /// @brief Method SetPublicKey, addr 0x268309c, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* publicKeyInfo);

  /// @brief Method SetSerialNumber, addr 0x268312c, size 0x8c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetSerialNumber(::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method SetSubject, addr 0x26830fc, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetSubject(::Org::BouncyCastle::Asn1::X509::X509Name* subject);

  /// @brief Method SetValidity, addr 0x26831b8, size 0x90, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetValidity(::Org::BouncyCastle::Asn1::X509::Time* notBefore, ::Org::BouncyCastle::Asn1::X509::Time* notAfter);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* const& __cordl_internal_get__agreeMac() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PKMacValue*& __cordl_internal_get__agreeMac();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get__certReqId() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get__certReqId();

  constexpr ::System::Collections::IList* const& __cordl_internal_get__controls() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get__controls();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* const& __cordl_internal_get__extGenerator() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*& __cordl_internal_get__extGenerator();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__password() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__password();

  constexpr ::Org::BouncyCastle::Crmf::PKMacBuilder* const& __cordl_internal_get__pkMacBuilder() const;

  constexpr ::Org::BouncyCastle::Crmf::PKMacBuilder*& __cordl_internal_get__pkMacBuilder();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Null* const& __cordl_internal_get__popRaVerified() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Null*& __cordl_internal_get__popRaVerified();

  constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory* const& __cordl_internal_get__popSigner() const;

  constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory*& __cordl_internal_get__popSigner();

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* const& __cordl_internal_get__popoPrivKey() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey*& __cordl_internal_get__popoPrivKey();

  constexpr int32_t const& __cordl_internal_get__popoType() const;

  constexpr int32_t& __cordl_internal_get__popoType();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& __cordl_internal_get__sender() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get__sender();

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* const& __cordl_internal_get__templateBuilder() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*& __cordl_internal_get__templateBuilder();

  constexpr void __cordl_internal_set__agreeMac(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* value);

  constexpr void __cordl_internal_set__certReqId(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set__controls(::System::Collections::IList* value);

  constexpr void __cordl_internal_set__extGenerator(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* value);

  constexpr void __cordl_internal_set__password(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set__pkMacBuilder(::Org::BouncyCastle::Crmf::PKMacBuilder* value);

  constexpr void __cordl_internal_set__popRaVerified(::Org::BouncyCastle::Asn1::Asn1Null* value);

  constexpr void __cordl_internal_set__popSigner(::Org::BouncyCastle::Crypto::ISignatureFactory* value);

  constexpr void __cordl_internal_set__popoPrivKey(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* value);

  constexpr void __cordl_internal_set__popoType(int32_t value);

  constexpr void __cordl_internal_set__sender(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr void __cordl_internal_set__templateBuilder(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* value);

  /// @brief Method .ctor, addr 0x2682fc4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* certReqId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateRequestMessageBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateRequestMessageBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateRequestMessageBuilder(CertificateRequestMessageBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateRequestMessageBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateRequestMessageBuilder(CertificateRequestMessageBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 697 };

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

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, 0x70>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, "Org.BouncyCastle.Crmf", "CertificateRequestMessageBuilder");
