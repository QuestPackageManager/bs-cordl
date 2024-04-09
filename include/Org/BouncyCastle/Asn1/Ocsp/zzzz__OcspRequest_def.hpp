#pragma once
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
// Type: Org.BouncyCastle.Asn1.Ocsp::OcspRequest
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::OcspRequest*
class CORDL_TYPE OcspRequest : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_OptionalSignature))::Org::BouncyCastle::Asn1::Ocsp::Signature* OptionalSignature;

  __declspec(property(get = get_TbsRequest))::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* TbsRequest;

  /// @brief Field optionalSignature, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_optionalSignature, put = __cordl_internal_set_optionalSignature))::Org::BouncyCastle::Asn1::Ocsp::Signature* optionalSignature;

  /// @brief Field tbsRequest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tbsRequest, put = __cordl_internal_set_tbsRequest))::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* tbsRequest;

  /// @brief Method GetInstance, addr 0x10ebb9c, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x10ebbb4, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* tbsRequest, ::Org::BouncyCastle::Asn1::Ocsp::Signature* optionalSignature);

  /// @brief Method ToAsn1Object, addr 0x10ec084, size 0x114, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::Signature*& __cordl_internal_get_optionalSignature();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::Signature*> const& __cordl_internal_get_optionalSignature() const;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*& __cordl_internal_get_tbsRequest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*> const& __cordl_internal_get_tbsRequest() const;

  constexpr void __cordl_internal_set_optionalSignature(::Org::BouncyCastle::Asn1::Ocsp::Signature* value);

  constexpr void __cordl_internal_set_tbsRequest(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* value);

  /// @brief Method .ctor, addr 0x10ebd3c, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x10ebe58, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* tbsRequest, ::Org::BouncyCastle::Asn1::Ocsp::Signature* optionalSignature);

  /// @brief Method get_OptionalSignature, addr 0x10ec07c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::Signature* get_OptionalSignature();

  /// @brief Method get_TbsRequest, addr 0x10ec074, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field tbsRequest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* ___tbsRequest;

  /// @brief Field optionalSignature, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::Signature* ___optionalSignature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest, ___tbsRequest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest, ___optionalSignature) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*, "Org.BouncyCastle.Asn1.Ocsp", "OcspRequest");
