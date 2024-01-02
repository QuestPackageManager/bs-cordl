#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CertReqMsg)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class AttributeTypeAndValue;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class ProofOfPossession;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertRequest;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(105))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::CertReqMsg*
class CORDL_TYPE CertReqMsg : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field certReq, offset 0x10, size 0x8
  __declspec(property(get = __get_certReq, put = __set_certReq))::Org::BouncyCastle::Asn1::Crmf::CertRequest* certReq;

  /// @brief Field popo, offset 0x18, size 0x8
  __declspec(property(get = __get_popo, put = __set_popo))::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* popo;

  /// @brief Field regInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_regInfo, put = __set_regInfo))::Org::BouncyCastle::Asn1::Asn1Sequence* regInfo;

  __declspec(property(get = get_CertReq))::Org::BouncyCastle::Asn1::Crmf::CertRequest* CertReq;

  __declspec(property(get = get_Popo))::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* Popo;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertRequest*& __get_certReq();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::CertRequest*> const& __get_certReq() const;

  constexpr void __set_certReq(::Org::BouncyCastle::Asn1::Crmf::CertRequest* value);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*& __get_popo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*> const& __get_popo() const;

  constexpr void __set_popo(::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_regInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_regInfo() const;

  constexpr void __set_regInfo(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  static inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe84098, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xe83fec, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance, addr 0xe84414, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*
  New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertRequest* certReq, ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* popo,
           ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>*> regInfo);

  /// @brief Method .ctor, addr 0xe8442c, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::CertRequest* certReq, ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* popo,
                    ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>*> regInfo);

  /// @brief Method get_CertReq, addr 0xe84508, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* get_CertReq();

  /// @brief Method get_Popo, addr 0xe84510, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* get_Popo();

  /// @brief Method GetRegInfo, addr 0xe84518, size 0xfc, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>*> GetRegInfo();

  /// @brief Method ToAsn1Object, addr 0xe84614, size 0x174, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CertReqMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertReqMsg(CertReqMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertReqMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertReqMsg(CertReqMsg const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertReqMsg();

public:
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
