#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ProofOfPossessionSigningKeyBuilder)
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoSigningKey;
}
namespace Org::BouncyCastle::Crmf {
class PKMacBuilder;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertRequest;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PKMacValue;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class ProofOfPossessionSigningKeyBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder);
// Type: Org.BouncyCastle.Crmf::ProofOfPossessionSigningKeyBuilder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(712))
// CS Name: ::Org.BouncyCastle.Crmf::ProofOfPossessionSigningKeyBuilder*
class CORDL_TYPE ProofOfPossessionSigningKeyBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _certRequest, offset 0x10, size 0x8
  __declspec(property(get = __get__certRequest, put = __set__certRequest))::Org::BouncyCastle::Asn1::Crmf::CertRequest* _certRequest;

  /// @brief Field _pubKeyInfo, offset 0x18, size 0x8
  __declspec(property(get = __get__pubKeyInfo, put = __set__pubKeyInfo))::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* _pubKeyInfo;

  /// @brief Field _name, offset 0x20, size 0x8
  __declspec(property(get = __get__name, put = __set__name))::Org::BouncyCastle::Asn1::X509::GeneralName* _name;

  /// @brief Field _publicKeyMAC, offset 0x28, size 0x8
  __declspec(property(get = __get__publicKeyMAC, put = __set__publicKeyMAC))::Org::BouncyCastle::Asn1::Crmf::PKMacValue* _publicKeyMAC;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertRequest*& __get__certRequest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::CertRequest*> const& __get__certRequest() const;

  constexpr void __set__certRequest(::Org::BouncyCastle::Asn1::Crmf::CertRequest* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& __get__pubKeyInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*> const& __get__pubKeyInfo() const;

  constexpr void __set__pubKeyInfo(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get__name();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get__name() const;

  constexpr void __set__name(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PKMacValue*& __get__publicKeyMAC();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::PKMacValue*> const& __get__publicKeyMAC() const;

  constexpr void __set__publicKeyMAC(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* value);

  static inline ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertRequest* certRequest);

  /// @brief Method .ctor addr 0x1210674 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::CertRequest* certRequest);

  static inline ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* New_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* pubKeyInfo);

  /// @brief Method .ctor addr 0x120fbac size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* pubKeyInfo);

  /// @brief Method SetSender addr 0x120fbd4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* SetSender(::Org::BouncyCastle::Asn1::X509::GeneralName* name);

  /// @brief Method SetPublicKeyMac addr 0x120fbdc size 0x4ac virtual false final false
  inline ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* SetPublicKeyMac(::Org::BouncyCastle::Crmf::PKMacBuilder* generator, ::ArrayW<char16_t, ::Array<char16_t>*> password);

  /// @brief Method Build addr 0x1210088 size 0x5ec virtual false final false
  inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* Build(::Org::BouncyCastle::Crypto::ISignatureFactory* signer);

  // Ctor Parameters [CppParam { name: "", ty: "ProofOfPossessionSigningKeyBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProofOfPossessionSigningKeyBuilder(ProofOfPossessionSigningKeyBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProofOfPossessionSigningKeyBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProofOfPossessionSigningKeyBuilder(ProofOfPossessionSigningKeyBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProofOfPossessionSigningKeyBuilder();

public:
  /// @brief Field _certRequest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::CertRequest* ____certRequest;

  /// @brief Field _pubKeyInfo, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* ____pubKeyInfo;

  /// @brief Field _name, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ____name;

  /// @brief Field _publicKeyMAC, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* ____publicKeyMAC;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*, "Org.BouncyCastle.Crmf", "ProofOfPossessionSigningKeyBuilder");
