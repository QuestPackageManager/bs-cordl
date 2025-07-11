#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/ResponseBytes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(ResponseBytes)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponseBytes;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ocsp.ResponseBytes
class CORDL_TYPE ResponseBytes : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Response)) ::Org::BouncyCastle::Asn1::Asn1OctetString* Response;

  __declspec(property(get = get_ResponseType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ResponseType;

  /// @brief Field response, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_response, put = __cordl_internal_set_response)) ::Org::BouncyCastle::Asn1::Asn1OctetString* response;

  /// @brief Field responseType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_responseType, put = __cordl_internal_set_responseType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* responseType;

  /// @brief Method GetInstance, addr 0x2407290, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x24086c0, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* responseType, ::Org::BouncyCastle::Asn1::Asn1OctetString* response);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2408a14, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_response() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_response();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_responseType() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_responseType();

  constexpr void __cordl_internal_set_response(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_responseType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method .ctor, addr 0x2408968, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* responseType, ::Org::BouncyCastle::Asn1::Asn1OctetString* response);

  /// @brief Method .ctor, addr 0x240883c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Response, addr 0x2408a0c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Response();

  /// @brief Method get_ResponseType, addr 0x2408a04, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ResponseType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponseBytes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResponseBytes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResponseBytes(ResponseBytes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResponseBytes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResponseBytes(ResponseBytes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 217 };

  /// @brief Field responseType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___responseType;

  /// @brief Field response, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___response;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes, ___responseType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes, ___response) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes*, "Org.BouncyCastle.Asn1.Ocsp", "ResponseBytes");
