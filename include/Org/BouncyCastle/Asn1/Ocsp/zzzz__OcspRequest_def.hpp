#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/OcspRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OcspRequest)
namespace Org::BouncyCastle::Asn1::Ocsp {
class Signature;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class TbsRequest;
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
class OcspRequest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ocsp.OcspRequest
class CORDL_TYPE OcspRequest : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_OptionalSignature)) ::Org::BouncyCastle::Asn1::Ocsp::Signature* OptionalSignature;

  __declspec(property(get = get_TbsRequest)) ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* TbsRequest;

  /// @brief Field optionalSignature, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_optionalSignature, put = __cordl_internal_set_optionalSignature)) ::Org::BouncyCastle::Asn1::Ocsp::Signature* optionalSignature;

  /// @brief Field tbsRequest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tbsRequest, put = __cordl_internal_set_tbsRequest)) ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* tbsRequest;

  /// @brief Method GetInstance, addr 0x2406778, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x2406790, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* tbsRequest, ::Org::BouncyCastle::Asn1::Ocsp::Signature* optionalSignature);

  /// @brief Method ToAsn1Object, addr 0x2406c44, size 0x108, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::Signature* const& __cordl_internal_get_optionalSignature() const;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::Signature*& __cordl_internal_get_optionalSignature();

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* const& __cordl_internal_get_tbsRequest() const;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*& __cordl_internal_get_tbsRequest();

  constexpr void __cordl_internal_set_optionalSignature(::Org::BouncyCastle::Asn1::Ocsp::Signature* value);

  constexpr void __cordl_internal_set_tbsRequest(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* value);

  /// @brief Method .ctor, addr 0x240690c, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x2406a28, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* tbsRequest, ::Org::BouncyCastle::Asn1::Ocsp::Signature* optionalSignature);

  /// @brief Method get_OptionalSignature, addr 0x2406c3c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::Signature* get_OptionalSignature();

  /// @brief Method get_TbsRequest, addr 0x2406c34, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* get_TbsRequest();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcspRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspRequest(OcspRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspRequest(OcspRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 211 };

  /// @brief Field tbsRequest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* ___tbsRequest;

  /// @brief Field optionalSignature, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::Signature* ___optionalSignature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest, ___tbsRequest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest, ___optionalSignature) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*, "Org.BouncyCastle.Asn1.Ocsp", "OcspRequest");
