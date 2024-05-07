#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/RecipientKeyIdentifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RecipientKeyIdentifier)
namespace Org::BouncyCastle::Asn1::Cms {
class OtherKeyAttribute;
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
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientKeyIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier);
// Type: Org.BouncyCastle.Asn1.Cms::RecipientKeyIdentifier
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cms::RecipientKeyIdentifier*
class CORDL_TYPE RecipientKeyIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Date))::Org::BouncyCastle::Asn1::DerGeneralizedTime* Date;

  __declspec(property(get = get_OtherKeyAttribute))::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* OtherKeyAttribute;

  __declspec(property(get = get_SubjectKeyIdentifier))::Org::BouncyCastle::Asn1::Asn1OctetString* SubjectKeyIdentifier;

  /// @brief Field date, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_date, put = __cordl_internal_set_date))::Org::BouncyCastle::Asn1::DerGeneralizedTime* date;

  /// @brief Field other, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_other, put = __cordl_internal_set_other))::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* other;

  /// @brief Field subjectKeyIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subjectKeyIdentifier, put = __cordl_internal_set_subjectKeyIdentifier))::Org::BouncyCastle::Asn1::Asn1OctetString* subjectKeyIdentifier;

  /// @brief Method GetInstance, addr 0x10d7ea0, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* ato, bool explicitly);

  /// @brief Method GetInstance, addr 0x10dba40, size 0x178, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* date,
                                                                                 ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* other);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* subjectKeyIdentifier, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* date,
                                                                                 ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* other);

  /// @brief Method ToAsn1Object, addr 0x10dbbd0, size 0x174, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_date();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __cordl_internal_get_date() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*& __cordl_internal_get_other();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*> const& __cordl_internal_get_other() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_subjectKeyIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_subjectKeyIdentifier() const;

  constexpr void __cordl_internal_set_date(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr void __cordl_internal_set_other(::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* value);

  constexpr void __cordl_internal_set_subjectKeyIdentifier(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method .ctor, addr 0x10db80c, size 0x234, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x10db770, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier);

  /// @brief Method .ctor, addr 0x10db77c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* date, ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* other);

  /// @brief Method .ctor, addr 0x10db734, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* subjectKeyIdentifier, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* date, ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* other);

  /// @brief Method get_Date, addr 0x10dbbc0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_Date();

  /// @brief Method get_OtherKeyAttribute, addr 0x10dbbc8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* get_OtherKeyAttribute();

  /// @brief Method get_SubjectKeyIdentifier, addr 0x10dbbb8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_SubjectKeyIdentifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecipientKeyIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecipientKeyIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecipientKeyIdentifier(RecipientKeyIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecipientKeyIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecipientKeyIdentifier(RecipientKeyIdentifier const&) = delete;

  /// @brief Field subjectKeyIdentifier, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___subjectKeyIdentifier;

  /// @brief Field date, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___date;

  /// @brief Field other, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* ___other;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier, ___subjectKeyIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier, ___date) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier, ___other) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*, "Org.BouncyCastle.Asn1.Cms", "RecipientKeyIdentifier");
