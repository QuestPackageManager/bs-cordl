#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/BasicOcspResp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicOcspResp)
namespace Org::BouncyCastle::Asn1::Ocsp {
class BasicOcspResponse;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponseData;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Ocsp {
class RespData;
}
namespace Org::BouncyCastle::Ocsp {
class RespID;
}
namespace Org::BouncyCastle::Ocsp {
class SingleResp;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
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
namespace Org::BouncyCastle::Ocsp {
class BasicOcspResp;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::BasicOcspResp);
// Dependencies Org.BouncyCastle.X509.X509ExtensionBase
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Ocsp.BasicOcspResp
class CORDL_TYPE BasicOcspResp : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
  // Declarations
  __declspec(property(get = get_ProducedAt)) ::System::DateTime ProducedAt;

  __declspec(property(get = get_ResponderId)) ::Org::BouncyCastle::Ocsp::RespID* ResponderId;

  __declspec(property(get = get_ResponseExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* ResponseExtensions;

  __declspec(property(get = get_Responses)) ::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp*, ::Array<::Org::BouncyCastle::Ocsp::SingleResp*>*> Responses;

  __declspec(property(get = get_SignatureAlgName)) ::StringW SignatureAlgName;

  __declspec(property(get = get_SignatureAlgOid)) ::StringW SignatureAlgOid;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* data;

  /// @brief Field resp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resp, put = __cordl_internal_set_resp)) ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* resp;

  /// @brief Method Equals, addr 0x251ac4c, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetCertList, addr 0x251a01c, size 0x544, virtual false, abstract: false, final false
  inline ::System::Collections::IList* GetCertList();

  /// @brief Method GetCertificates, addr 0x251a7e4, size 0x16c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates(::StringW type);

  /// @brief Method GetCerts, addr 0x251a560, size 0x284, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> GetCerts();

  /// @brief Method GetEncoded, addr 0x251ac30, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetHashCode, addr 0x251acfc, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetResponseData, addr 0x2519f78, size 0x60, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Ocsp::RespData* GetResponseData();

  /// @brief Method GetSignature, addr 0x251a000, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignature();

  /// @brief Method GetTbsResponseData, addr 0x2519964, size 0xe4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetTbsResponseData();

  /// @brief Method GetX509Extensions, addr 0x2519d14, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  static inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* resp);

  /// @brief Method Verify, addr 0x251a950, size 0x2e0, virtual false, abstract: false, final false
  inline bool Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* const& __cordl_internal_get_data() const;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData*& __cordl_internal_get_data();

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* const& __cordl_internal_get_resp() const;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*& __cordl_internal_get_resp();

  constexpr void __cordl_internal_set_data(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* value);

  constexpr void __cordl_internal_set_resp(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* value);

  /// @brief Method .ctor, addr 0x251992c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* resp);

  /// @brief Method get_ProducedAt, addr 0x2519b78, size 0x24, virtual false, abstract: false, final false
  inline ::System::DateTime get_ProducedAt();

  /// @brief Method get_ResponderId, addr 0x2519ae4, size 0x6c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Ocsp::RespID* get_ResponderId();

  /// @brief Method get_ResponseExtensions, addr 0x2519cf8, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_ResponseExtensions();

  /// @brief Method get_Responses, addr 0x2519b9c, size 0x134, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp*, ::Array<::Org::BouncyCastle::Ocsp::SingleResp*>*> get_Responses();

  /// @brief Method get_SignatureAlgName, addr 0x2519d30, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW get_SignatureAlgName();

  /// @brief Method get_SignatureAlgOid, addr 0x2519f44, size 0x34, virtual false, abstract: false, final false
  inline ::StringW get_SignatureAlgOid();

  /// @brief Method get_Version, addr 0x2519ab8, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicOcspResp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicOcspResp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicOcspResp(BasicOcspResp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicOcspResp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicOcspResp(BasicOcspResp const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1607 };

  /// @brief Field resp, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* ___resp;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Ocsp::BasicOcspResp, ___resp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::BasicOcspResp, ___data) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::BasicOcspResp, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::BasicOcspResp);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::BasicOcspResp*, "Org.BouncyCastle.Ocsp", "BasicOcspResp");
