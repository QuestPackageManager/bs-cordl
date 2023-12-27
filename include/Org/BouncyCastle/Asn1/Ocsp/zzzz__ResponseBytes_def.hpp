#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(ResponseBytes)
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
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
// Type: Org.BouncyCastle.Asn1.Ocsp::ResponseBytes
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(217))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::ResponseBytes*
class CORDL_TYPE ResponseBytes : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field responseType, offset 0x10, size 0x8
  __declspec(property(get = __get_responseType, put = __set_responseType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* responseType;

  /// @brief Field response, offset 0x18, size 0x8
  __declspec(property(get = __get_response, put = __set_response))::Org::BouncyCastle::Asn1::Asn1OctetString* response;

  __declspec(property(get = get_ResponseType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ResponseType;

  __declspec(property(get = get_Response))::Org::BouncyCastle::Asn1::Asn1OctetString* Response;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_responseType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_responseType() const;

  constexpr void __set_responseType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_response();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_response() const;

  constexpr void __set_response(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method GetInstance addr 0xf81580 size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0xf82a20 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* responseType, ::Org::BouncyCastle::Asn1::Asn1OctetString* response);

  /// @brief Method .ctor addr 0xf82cd8 size 0xa4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* responseType, ::Org::BouncyCastle::Asn1::Asn1OctetString* response);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf82ba8 size 0x130 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_ResponseType addr 0xf82d7c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ResponseType();

  /// @brief Method get_Response addr 0xf82d84 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Response();

  /// @brief Method ToAsn1Object addr 0xf82d8c size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "ResponseBytes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResponseBytes(ResponseBytes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResponseBytes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResponseBytes(ResponseBytes const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponseBytes();

public:
  /// @brief Field responseType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___responseType;

  /// @brief Field response, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___response;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes*, "Org.BouncyCastle.Asn1.Ocsp", "ResponseBytes");
