#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/Request.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(Request)
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertID;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class Request;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::Request);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ocsp.Request
class CORDL_TYPE Request : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_ReqCert)) ::Org::BouncyCastle::Asn1::Ocsp::CertID* ReqCert;

  __declspec(property(get = get_SingleRequestExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* SingleRequestExtensions;

  /// @brief Field reqCert, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reqCert, put = __cordl_internal_set_reqCert)) ::Org::BouncyCastle::Asn1::Ocsp::CertID* reqCert;

  /// @brief Field singleRequestExtensions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_singleRequestExtensions, put = __cordl_internal_set_singleRequestExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleRequestExtensions;

  /// @brief Method GetInstance, addr 0x2407d88, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::Request* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x2407da0, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::Request* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::Request* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID* reqCert, ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleRequestExtensions);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::Request* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x24080c8, size 0x108, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertID* const& __cordl_internal_get_reqCert() const;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertID*& __cordl_internal_get_reqCert();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_singleRequestExtensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_singleRequestExtensions();

  constexpr void __cordl_internal_set_reqCert(::Org::BouncyCastle::Asn1::Ocsp::CertID* value);

  constexpr void __cordl_internal_set_singleRequestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  /// @brief Method .ctor, addr 0x2408040, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID* reqCert, ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleRequestExtensions);

  /// @brief Method .ctor, addr 0x2407f1c, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_ReqCert, addr 0x24080b8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* get_ReqCert();

  /// @brief Method get_SingleRequestExtensions, addr 0x24080c0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_SingleRequestExtensions();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Request();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Request(Request&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Request(Request const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 215 };

  /// @brief Field reqCert, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::CertID* ___reqCert;

  /// @brief Field singleRequestExtensions, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___singleRequestExtensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::Request, ___reqCert) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::Request, ___singleRequestExtensions) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::Request, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::Request);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::Request*, "Org.BouncyCastle.Asn1.Ocsp", "Request");
