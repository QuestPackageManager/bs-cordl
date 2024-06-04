#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X9/OtherInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OtherInfo)
namespace Org::BouncyCastle::Asn1::X9 {
class KeySpecificInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class OtherInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::OtherInfo);
// Type: Org.BouncyCastle.Asn1.X9::OtherInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X9::OtherInfo*
class CORDL_TYPE OtherInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_KeyInfo))::Org::BouncyCastle::Asn1::X9::KeySpecificInfo* KeyInfo;

  __declspec(property(get = get_PartyAInfo))::Org::BouncyCastle::Asn1::Asn1OctetString* PartyAInfo;

  __declspec(property(get = get_SuppPubInfo))::Org::BouncyCastle::Asn1::Asn1OctetString* SuppPubInfo;

  /// @brief Field keyInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyInfo, put = __cordl_internal_set_keyInfo))::Org::BouncyCastle::Asn1::X9::KeySpecificInfo* keyInfo;

  /// @brief Field partyAInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_partyAInfo, put = __cordl_internal_set_partyAInfo))::Org::BouncyCastle::Asn1::Asn1OctetString* partyAInfo;

  /// @brief Field suppPubInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_suppPubInfo, put = __cordl_internal_set_suppPubInfo))::Org::BouncyCastle::Asn1::Asn1OctetString* suppPubInfo;

  static inline ::Org::BouncyCastle::Asn1::X9::OtherInfo* New_ctor(::Org::BouncyCastle::Asn1::X9::KeySpecificInfo* keyInfo, ::Org::BouncyCastle::Asn1::Asn1OctetString* partyAInfo,
                                                                   ::Org::BouncyCastle::Asn1::Asn1OctetString* suppPubInfo);

  static inline ::Org::BouncyCastle::Asn1::X9::OtherInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x1413c5c, size 0x168, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X9::KeySpecificInfo*& __cordl_internal_get_keyInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X9::KeySpecificInfo*> const& __cordl_internal_get_keyInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_partyAInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_partyAInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_suppPubInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_suppPubInfo() const;

  constexpr void __cordl_internal_set_keyInfo(::Org::BouncyCastle::Asn1::X9::KeySpecificInfo* value);

  constexpr void __cordl_internal_set_partyAInfo(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_suppPubInfo(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method .ctor, addr 0x1413848, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X9::KeySpecificInfo* keyInfo, ::Org::BouncyCastle::Asn1::Asn1OctetString* partyAInfo, ::Org::BouncyCastle::Asn1::Asn1OctetString* suppPubInfo);

  /// @brief Method .ctor, addr 0x1413884, size 0x3a8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_KeyInfo, addr 0x1413c44, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X9::KeySpecificInfo* get_KeyInfo();

  /// @brief Method get_PartyAInfo, addr 0x1413c4c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_PartyAInfo();

  /// @brief Method get_SuppPubInfo, addr 0x1413c54, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_SuppPubInfo();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OtherInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherInfo(OtherInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherInfo(OtherInfo const&) = delete;

  /// @brief Field keyInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X9::KeySpecificInfo* ___keyInfo;

  /// @brief Field partyAInfo, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___partyAInfo;

  /// @brief Field suppPubInfo, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___suppPubInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::OtherInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::OtherInfo, ___keyInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::OtherInfo, ___partyAInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::OtherInfo, ___suppPubInfo) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::OtherInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::OtherInfo*, "Org.BouncyCastle.Asn1.X9", "OtherInfo");
