#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OtherRevocationInfoFormat)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
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
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class OtherRevocationInfoFormat;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::OtherRevocationInfoFormat);
// Type: Org.BouncyCastle.Asn1.Cms::OtherRevocationInfoFormat
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cms::OtherRevocationInfoFormat*
class CORDL_TYPE OtherRevocationInfoFormat : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Info))::Org::BouncyCastle::Asn1::Asn1Encodable* Info;

  __declspec(property(get = get_InfoFormat))::Org::BouncyCastle::Asn1::DerObjectIdentifier* InfoFormat;

  /// @brief Field otherRevInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_otherRevInfo, put = __cordl_internal_set_otherRevInfo))::Org::BouncyCastle::Asn1::Asn1Encodable* otherRevInfo;

  /// @brief Field otherRevInfoFormat, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_otherRevInfoFormat, put = __cordl_internal_set_otherRevInfoFormat))::Org::BouncyCastle::Asn1::DerObjectIdentifier* otherRevInfoFormat;

  /// @brief Method GetInstance, addr 0x10da4dc, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OtherRevocationInfoFormat* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x10da4f4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OtherRevocationInfoFormat* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::OtherRevocationInfoFormat* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* otherRevInfoFormat,
                                                                                    ::Org::BouncyCastle::Asn1::Asn1Encodable* otherRevInfo);

  static inline ::Org::BouncyCastle::Asn1::Cms::OtherRevocationInfoFormat* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x10da5a8, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_otherRevInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __cordl_internal_get_otherRevInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_otherRevInfoFormat();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_otherRevInfoFormat() const;

  constexpr void __cordl_internal_set_otherRevInfo(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  constexpr void __cordl_internal_set_otherRevInfoFormat(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method .ctor, addr 0x10da404, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* otherRevInfoFormat, ::Org::BouncyCastle::Asn1::Asn1Encodable* otherRevInfo);

  /// @brief Method .ctor, addr 0x10da430, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Info, addr 0x10da5a0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Info();

  /// @brief Method get_InfoFormat, addr 0x10da598, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_InfoFormat();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherRevocationInfoFormat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OtherRevocationInfoFormat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherRevocationInfoFormat(OtherRevocationInfoFormat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherRevocationInfoFormat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherRevocationInfoFormat(OtherRevocationInfoFormat const&) = delete;

  /// @brief Field otherRevInfoFormat, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___otherRevInfoFormat;

  /// @brief Field otherRevInfo, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___otherRevInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::OtherRevocationInfoFormat, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::OtherRevocationInfoFormat, ___otherRevInfoFormat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::OtherRevocationInfoFormat, ___otherRevInfo) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::OtherRevocationInfoFormat);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::OtherRevocationInfoFormat*, "Org.BouncyCastle.Asn1.Cms", "OtherRevocationInfoFormat");
