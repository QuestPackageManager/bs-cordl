#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/ScvpReqRes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(ScvpReqRes)
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class ScvpReqRes;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::ScvpReqRes);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.ScvpReqRes
class CORDL_TYPE ScvpReqRes : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Request)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Request;

  __declspec(property(get = get_Response)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Response;

  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo* request;

  /// @brief Field response, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_response, put = __cordl_internal_set_response)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo* response;

  /// @brief Method GetInstance, addr 0x230b154, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes* New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* request, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* response);

  static inline ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes* New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* response);

  static inline ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x230b358, size 0xb4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* const& __cordl_internal_get_request() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __cordl_internal_get_request();

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* const& __cordl_internal_get_response() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __cordl_internal_get_response();

  constexpr void __cordl_internal_set_request(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  constexpr void __cordl_internal_set_response(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  /// @brief Method .ctor, addr 0x230b31c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* request, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* response);

  /// @brief Method .ctor, addr 0x230b2f4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* response);

  /// @brief Method .ctor, addr 0x230b1f8, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Request, addr 0x230b348, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_Request();

  /// @brief Method get_Response, addr 0x230b350, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_Response();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScvpReqRes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScvpReqRes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScvpReqRes(ScvpReqRes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScvpReqRes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScvpReqRes(ScvpReqRes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 92 };

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ___request;

  /// @brief Field response, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ___response;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::ScvpReqRes, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::ScvpReqRes, ___response) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::ScvpReqRes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*, "Org.BouncyCastle.Asn1.Cms", "ScvpReqRes");
