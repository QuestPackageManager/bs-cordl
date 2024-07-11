#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/PkiPublicationInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PkiPublicationInfo)
namespace Org::BouncyCastle::Asn1::Crmf {
class SinglePubInfo;
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
class PkiPublicationInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo);
// Type: Org.BouncyCastle.Asn1.Crmf::PkiPublicationInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::PkiPublicationInfo*
class CORDL_TYPE PkiPublicationInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Action))::Org::BouncyCastle::Asn1::DerInteger* Action;

  /// @brief Field action, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action))::Org::BouncyCastle::Asn1::DerInteger* action;

  /// @brief Field pubInfos, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pubInfos, put = __cordl_internal_set_pubInfos))::Org::BouncyCastle::Asn1::Asn1Sequence* pubInfos;

  /// @brief Method GetInstance, addr 0x10f73f0, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* GetInstance(::System::Object* obj);

  /// @brief Method GetPubInfos, addr 0x10f7580, size 0xfc, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*, ::Array<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*>*> GetPubInfos();

  static inline ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x10f7804, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_action();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_action() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_pubInfos();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_pubInfos() const;

  constexpr void __cordl_internal_set_action(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_pubInfos(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x10f7388, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Action, addr 0x10f7578, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Action();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiPublicationInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkiPublicationInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiPublicationInfo(PkiPublicationInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiPublicationInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiPublicationInfo(PkiPublicationInfo const&) = delete;

  /// @brief Field action, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___action;

  /// @brief Field pubInfos, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___pubInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo, ___action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo, ___pubInfos) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*, "Org.BouncyCastle.Asn1.Crmf", "PkiPublicationInfo");
