#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/OcspReq.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OcspReq)
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspRequest;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Ocsp {
class Req;
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
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OcspReq;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::OcspReq);
// Type: Org.BouncyCastle.Ocsp::OcspReq
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Ocsp::OcspReq*
class CORDL_TYPE OcspReq : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
  // Declarations
  __declspec(property(get = get_IsSigned)) bool IsSigned;

  __declspec(property(get = get_RequestExtensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* RequestExtensions;

  __declspec(property(get = get_RequestorName))::Org::BouncyCastle::Asn1::X509::GeneralName* RequestorName;

  __declspec(property(get = get_SignatureAlgOid))::StringW SignatureAlgOid;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field req, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_req, put = __cordl_internal_set_req))::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* req;

  /// @brief Method GetCertList, addr 0x1309ce4, size 0x4d8, virtual false, abstract: false, final false
  inline ::System::Collections::IList* GetCertList();

  /// @brief Method GetCertificates, addr 0x130a458, size 0x190, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates(::StringW type);

  /// @brief Method GetCerts, addr 0x130a1bc, size 0x29c, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> GetCerts();

  /// @brief Method GetEncoded, addr 0x130a930, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetRequestList, addr 0x1309a74, size 0x140, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Ocsp::Req*, ::Array<::Org::BouncyCastle::Ocsp::Req*>*> GetRequestList();

  /// @brief Method GetSignature, addr 0x1309cb8, size 0x2c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignature();

  /// @brief Method GetTbsRequest, addr 0x1309920, size 0xf8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetTbsRequest();

  /// @brief Method GetX509Extensions, addr 0x1309c4c, size 0x4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  static inline ::Org::BouncyCastle::Ocsp::OcspReq* New_ctor(::Org::BouncyCastle::Asn1::Asn1InputStream* aIn);

  static inline ::Org::BouncyCastle::Ocsp::OcspReq* New_ctor(::System::IO::Stream* inStr);

  static inline ::Org::BouncyCastle::Ocsp::OcspReq* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> req);

  static inline ::Org::BouncyCastle::Ocsp::OcspReq* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* req);

  /// @brief Method Verify, addr 0x130a5e8, size 0x348, virtual false, abstract: false, final false
  inline bool Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*& __cordl_internal_get_req();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*> const& __cordl_internal_get_req() const;

  constexpr void __cordl_internal_set_req(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* value);

  /// @brief Method .ctor, addr 0x130975c, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1InputStream* aIn);

  /// @brief Method .ctor, addr 0x13098ac, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inStr);

  /// @brief Method .ctor, addr 0x13096e8, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> req);

  /// @brief Method .ctor, addr 0x13096c0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* req);

  /// @brief Method get_IsSigned, addr 0x1309c94, size 0x24, virtual false, abstract: false, final false
  inline bool get_IsSigned();

  /// @brief Method get_RequestExtensions, addr 0x1309bdc, size 0x70, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_RequestExtensions();

  /// @brief Method get_RequestorName, addr 0x1309a4c, size 0x28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_RequestorName();

  /// @brief Method get_SignatureAlgOid, addr 0x1309c50, size 0x44, virtual false, abstract: false, final false
  inline ::StringW get_SignatureAlgOid();

  /// @brief Method get_Version, addr 0x1309a18, size 0x34, virtual false, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspReq();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcspReq", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspReq(OcspReq&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspReq", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspReq(OcspReq const&) = delete;

  /// @brief Field req, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* ___req;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::OcspReq, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::OcspReq, ___req) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::OcspReq);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::OcspReq*, "Org.BouncyCastle.Ocsp", "OcspReq");
