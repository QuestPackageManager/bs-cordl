#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicOcspResp)
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::Ocsp {
class RespData;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class BasicOcspResponse;
}
namespace Org::BouncyCastle::Ocsp {
class SingleResp;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponseData;
}
namespace Org::BouncyCastle::Ocsp {
class RespID;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class BasicOcspResp;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::BasicOcspResp);
// Type: Org.BouncyCastle.Ocsp::BasicOcspResp
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1607))
// CS Name: ::Org.BouncyCastle.Ocsp::BasicOcspResp*
class CORDL_TYPE BasicOcspResp : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
  // Declarations
  /// @brief Field resp, offset 0x10, size 0x8
  __declspec(property(get = __get_resp, put = __set_resp))::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* resp;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::Org::BouncyCastle::Asn1::Ocsp::ResponseData* data;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_ResponderId))::Org::BouncyCastle::Ocsp::RespID* ResponderId;

  __declspec(property(get = get_ProducedAt))::System::DateTime ProducedAt;

  __declspec(property(get = get_Responses))::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp*, ::Array<::Org::BouncyCastle::Ocsp::SingleResp*>*> Responses;

  __declspec(property(get = get_ResponseExtensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* ResponseExtensions;

  __declspec(property(get = get_SignatureAlgName))::StringW SignatureAlgName;

  __declspec(property(get = get_SignatureAlgOid))::StringW SignatureAlgOid;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*& __get_resp();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*> const& __get_resp() const;

  constexpr void __set_resp(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* value);

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData*& __get_data();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*> const& __get_data() const;

  constexpr void __set_data(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* value);

  static inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* resp);

  /// @brief Method .ctor, addr 0x109bcc0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* resp);

  /// @brief Method GetTbsResponseData, addr 0x109bcf8, size 0xe8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetTbsResponseData();

  /// @brief Method get_Version, addr 0x109be50, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method get_ResponderId, addr 0x109be7c, size 0x70, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Ocsp::RespID* get_ResponderId();

  /// @brief Method get_ProducedAt, addr 0x109bf14, size 0x24, virtual false, abstract: false, final false
  inline ::System::DateTime get_ProducedAt();

  /// @brief Method get_Responses, addr 0x109bf38, size 0x138, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp*, ::Array<::Org::BouncyCastle::Ocsp::SingleResp*>*> get_Responses();

  /// @brief Method get_ResponseExtensions, addr 0x109c098, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_ResponseExtensions();

  /// @brief Method GetX509Extensions, addr 0x109c0b4, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  /// @brief Method get_SignatureAlgName, addr 0x109c0d0, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW get_SignatureAlgName();

  /// @brief Method get_SignatureAlgOid, addr 0x109c2e4, size 0x34, virtual false, abstract: false, final false
  inline ::StringW get_SignatureAlgOid();

  /// @brief Method GetResponseData, addr 0x109c318, size 0x68, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Ocsp::RespData* GetResponseData();

  /// @brief Method GetSignature, addr 0x109c3a8, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignature();

  /// @brief Method GetCertList, addr 0x109c3c4, size 0x558, virtual false, abstract: false, final false
  inline ::System::Collections::IList* GetCertList();

  /// @brief Method GetCerts, addr 0x109c91c, size 0x284, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> GetCerts();

  /// @brief Method GetCertificates, addr 0x109cba0, size 0x17c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates(::StringW type);

  /// @brief Method Verify, addr 0x109cd1c, size 0x2e8, virtual false, abstract: false, final false
  inline bool Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method GetEncoded, addr 0x109d004, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method Equals, addr 0x109d020, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x109d0d0, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "BasicOcspResp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicOcspResp(BasicOcspResp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicOcspResp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicOcspResp(BasicOcspResp const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicOcspResp();

public:
  /// @brief Field resp, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* ___resp;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::BasicOcspResp, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::BasicOcspResp, ___resp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::BasicOcspResp, ___data) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::BasicOcspResp);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::BasicOcspResp*, "Org.BouncyCastle.Ocsp", "BasicOcspResp");
