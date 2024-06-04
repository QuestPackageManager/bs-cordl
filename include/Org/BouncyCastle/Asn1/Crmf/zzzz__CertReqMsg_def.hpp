#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/CertReqMsg.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CertReqMsg)
namespace Org::BouncyCastle::Asn1::Crmf {
class AttributeTypeAndValue;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertRequest;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class ProofOfPossession;
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
namespace Org::BouncyCastle::Asn1::Crmf {
class CertReqMsg;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg);
// Type: Org.BouncyCastle.Asn1.Crmf::CertReqMsg
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::CertReqMsg*
class CORDL_TYPE CertReqMsg : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CertReq))::Org::BouncyCastle::Asn1::Crmf::CertRequest* CertReq;

  __declspec(property(get = get_Popo))::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* Popo;

  /// @brief Field certReq, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certReq, put = __cordl_internal_set_certReq))::Org::BouncyCastle::Asn1::Crmf::CertRequest* certReq;

  /// @brief Field popo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_popo, put = __cordl_internal_set_popo))::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* popo;

  /// @brief Field regInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_regInfo, put = __cordl_internal_set_regInfo))::Org::BouncyCastle::Asn1::Asn1Sequence* regInfo;

  /// @brief Method GetInstance, addr 0x10e9490, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x10e9068, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* GetInstance(::System::Object* obj);

  /// @brief Method GetRegInfo, addr 0x10e9594, size 0xfc, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>*> GetRegInfo();

  static inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*
  New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertRequest* certReq, ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* popo,
           ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>*> regInfo);

  static inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x10e9690, size 0x174, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertRequest*& __cordl_internal_get_certReq();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::CertRequest*> const& __cordl_internal_get_certReq() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*& __cordl_internal_get_popo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*> const& __cordl_internal_get_popo() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_regInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_regInfo() const;

  constexpr void __cordl_internal_set_certReq(::Org::BouncyCastle::Asn1::Crmf::CertRequest* value);

  constexpr void __cordl_internal_set_popo(::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* value);

  constexpr void __cordl_internal_set_regInfo(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x10e94a8, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::CertRequest* certReq, ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* popo,
                    ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>*> regInfo);

  /// @brief Method .ctor, addr 0x10e9114, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CertReq, addr 0x10e9584, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* get_CertReq();

  /// @brief Method get_Popo, addr 0x10e958c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* get_Popo();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertReqMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertReqMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertReqMsg(CertReqMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertReqMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertReqMsg(CertReqMsg const&) = delete;

  /// @brief Field certReq, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::CertRequest* ___certReq;

  /// @brief Field popo, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* ___popo;

  /// @brief Field regInfo, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___regInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg, ___certReq) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg, ___popo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg, ___regInfo) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*, "Org.BouncyCastle.Asn1.Crmf", "CertReqMsg");
