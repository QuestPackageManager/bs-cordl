#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/OcspResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OcspResponse)
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspResponseStatus;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponseBytes;
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
class OcspResponse;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::OcspResponse);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ocsp.OcspResponse
class CORDL_TYPE OcspResponse : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_ResponseBytes)) ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* ResponseBytes;

  __declspec(property(get = get_ResponseStatus)) ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* ResponseStatus;

  /// @brief Field responseBytes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_responseBytes, put = __cordl_internal_set_responseBytes)) ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* responseBytes;

  /// @brief Field responseStatus, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_responseStatus, put = __cordl_internal_set_responseStatus)) ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* responseStatus;

  /// @brief Method GetInstance, addr 0x2405a18, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x2405a30, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* responseStatus,
                                                                        ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* responseBytes);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2405ef4, size 0x108, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* const& __cordl_internal_get_responseBytes() const;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes*& __cordl_internal_get_responseBytes();

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* const& __cordl_internal_get_responseStatus() const;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*& __cordl_internal_get_responseStatus();

  constexpr void __cordl_internal_set_responseBytes(::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* value);

  constexpr void __cordl_internal_set_responseStatus(::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* value);

  /// @brief Method .ctor, addr 0x2405d00, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* responseStatus, ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* responseBytes);

  /// @brief Method .ctor, addr 0x2405bac, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_ResponseBytes, addr 0x2405eec, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* get_ResponseBytes();

  /// @brief Method get_ResponseStatus, addr 0x2405ee4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* get_ResponseStatus();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcspResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspResponse(OcspResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspResponse(OcspResponse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 212 };

  /// @brief Field responseStatus, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* ___responseStatus;

  /// @brief Field responseBytes, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* ___responseBytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::OcspResponse, ___responseStatus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::OcspResponse, ___responseBytes) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::OcspResponse);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*, "Org.BouncyCastle.Asn1.Ocsp", "OcspResponse");
