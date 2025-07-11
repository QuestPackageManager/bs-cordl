#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/CertRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertRequest)
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplate;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class Controls;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CertRequest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::CertRequest);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Crmf.CertRequest
class CORDL_TYPE CertRequest : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CertReqID)) ::Org::BouncyCastle::Asn1::DerInteger* CertReqID;

  __declspec(property(get = get_CertTemplate)) ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* CertTemplate;

  __declspec(property(get = get_Controls)) ::Org::BouncyCastle::Asn1::Crmf::Controls* Controls;

  /// @brief Field certReqId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certReqId, put = __cordl_internal_set_certReqId)) ::Org::BouncyCastle::Asn1::DerInteger* certReqId;

  /// @brief Field certTemplate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certTemplate, put = __cordl_internal_set_certTemplate)) ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certTemplate;

  /// @brief Field controls, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_controls, put = __cordl_internal_set_controls)) ::Org::BouncyCastle::Asn1::Crmf::Controls* controls;

  /// @brief Method GetInstance, addr 0x23120a0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certTemplate,
                                                                       ::Org::BouncyCastle::Asn1::Crmf::Controls* controls);

  static inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* New_ctor(int32_t certReqId, ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certTemplate,
                                                                       ::Org::BouncyCastle::Asn1::Crmf::Controls* controls);

  static inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x23129bc, size 0x170, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_certReqId() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_certReqId();

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* const& __cordl_internal_get_certTemplate() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplate*& __cordl_internal_get_certTemplate();

  constexpr ::Org::BouncyCastle::Asn1::Crmf::Controls* const& __cordl_internal_get_controls() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::Controls*& __cordl_internal_get_controls();

  constexpr void __cordl_internal_set_certReqId(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_certTemplate(::Org::BouncyCastle::Asn1::Crmf::CertTemplate* value);

  constexpr void __cordl_internal_set_controls(::Org::BouncyCastle::Asn1::Crmf::Controls* value);

  /// @brief Method .ctor, addr 0x2312968, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certTemplate, ::Org::BouncyCastle::Asn1::Crmf::Controls* controls);

  /// @brief Method .ctor, addr 0x23128e4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(int32_t certReqId, ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certTemplate, ::Org::BouncyCastle::Asn1::Crmf::Controls* controls);

  /// @brief Method .ctor, addr 0x2312624, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CertReqID, addr 0x23129a4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_CertReqID();

  /// @brief Method get_CertTemplate, addr 0x23129ac, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* get_CertTemplate();

  /// @brief Method get_Controls, addr 0x23129b4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::Controls* get_Controls();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertRequest(CertRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertRequest(CertRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 106 };

  /// @brief Field certReqId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___certReqId;

  /// @brief Field certTemplate, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* ___certTemplate;

  /// @brief Field controls, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::Controls* ___controls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertRequest, ___certReqId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertRequest, ___certTemplate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertRequest, ___controls) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::CertRequest, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::CertRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::CertRequest*, "Org.BouncyCastle.Asn1.Crmf", "CertRequest");
