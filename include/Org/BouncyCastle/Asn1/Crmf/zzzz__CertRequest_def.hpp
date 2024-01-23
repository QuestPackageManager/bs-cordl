#pragma once
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
// Type: Org.BouncyCastle.Asn1.Crmf::CertRequest
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(106))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::CertRequest*
class CORDL_TYPE CertRequest : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field certReqId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certReqId, put = __cordl_internal_set_certReqId))::Org::BouncyCastle::Asn1::DerInteger* certReqId;

  /// @brief Field certTemplate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certTemplate, put = __cordl_internal_set_certTemplate))::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certTemplate;

  /// @brief Field controls, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_controls, put = __cordl_internal_set_controls))::Org::BouncyCastle::Asn1::Crmf::Controls* controls;

  __declspec(property(get = get_CertReqID))::Org::BouncyCastle::Asn1::DerInteger* CertReqID;

  __declspec(property(get = get_CertTemplate))::Org::BouncyCastle::Asn1::Crmf::CertTemplate* CertTemplate;

  __declspec(property(get = get_Controls))::Org::BouncyCastle::Asn1::Crmf::Controls* Controls;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_certReqId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_certReqId() const;

  constexpr void __cordl_internal_set_certReqId(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplate*& __cordl_internal_get_certTemplate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*> const& __cordl_internal_get_certTemplate() const;

  constexpr void __cordl_internal_set_certTemplate(::Org::BouncyCastle::Asn1::Crmf::CertTemplate* value);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::Controls*& __cordl_internal_get_controls();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::Controls*> const& __cordl_internal_get_controls() const;

  constexpr void __cordl_internal_set_controls(::Org::BouncyCastle::Asn1::Crmf::Controls* value);

  static inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe84788, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xe841e8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* New_ctor(int32_t certReqId, ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certTemplate,
                                                                       ::Org::BouncyCastle::Asn1::Crmf::Controls* controls);

  /// @brief Method .ctor, addr 0xe84a54, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t certReqId, ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certTemplate, ::Org::BouncyCastle::Asn1::Crmf::Controls* controls);

  static inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certTemplate,
                                                                       ::Org::BouncyCastle::Asn1::Crmf::Controls* controls);

  /// @brief Method .ctor, addr 0xe84ae0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certTemplate, ::Org::BouncyCastle::Asn1::Crmf::Controls* controls);

  /// @brief Method get_CertReqID, addr 0xe84b1c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_CertReqID();

  /// @brief Method get_CertTemplate, addr 0xe84b24, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* get_CertTemplate();

  /// @brief Method get_Controls, addr 0xe84b2c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::Controls* get_Controls();

  /// @brief Method ToAsn1Object, addr 0xe84b34, size 0x174, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CertRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertRequest(CertRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertRequest(CertRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertRequest();

public:
  /// @brief Field certReqId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___certReqId;

  /// @brief Field certTemplate, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* ___certTemplate;

  /// @brief Field controls, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::Controls* ___controls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::CertRequest, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertRequest, ___certReqId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertRequest, ___certTemplate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertRequest, ___controls) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::CertRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::CertRequest*, "Org.BouncyCastle.Asn1.Crmf", "CertRequest");
