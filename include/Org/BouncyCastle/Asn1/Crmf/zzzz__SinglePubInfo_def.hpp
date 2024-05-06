#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/SinglePubInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SinglePubInfo)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
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
class SinglePubInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo);
// Type: Org.BouncyCastle.Asn1.Crmf::SinglePubInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::SinglePubInfo*
class CORDL_TYPE SinglePubInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_PubLocation))::Org::BouncyCastle::Asn1::X509::GeneralName* PubLocation;

  /// @brief Field pubLocation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pubLocation, put = __cordl_internal_set_pubLocation))::Org::BouncyCastle::Asn1::X509::GeneralName* pubLocation;

  /// @brief Field pubMethod, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pubMethod, put = __cordl_internal_set_pubMethod))::Org::BouncyCastle::Asn1::DerInteger* pubMethod;

  /// @brief Method GetInstance, addr 0x10e5b14, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x10e71f0, size 0x148, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_pubLocation();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __cordl_internal_get_pubLocation() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_pubMethod();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_pubMethod() const;

  constexpr void __cordl_internal_set_pubLocation(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr void __cordl_internal_set_pubMethod(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x10e7164, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_PubLocation, addr 0x10e71e8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_PubLocation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SinglePubInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SinglePubInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SinglePubInfo(SinglePubInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SinglePubInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SinglePubInfo(SinglePubInfo const&) = delete;

  /// @brief Field pubMethod, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___pubMethod;

  /// @brief Field pubLocation, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___pubLocation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo, ___pubMethod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo, ___pubLocation) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*, "Org.BouncyCastle.Asn1.Crmf", "SinglePubInfo");
