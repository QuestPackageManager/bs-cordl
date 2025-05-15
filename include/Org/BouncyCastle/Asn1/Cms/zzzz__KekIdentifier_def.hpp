#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/KekIdentifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KekIdentifier)
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
class KekIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::KekIdentifier);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.KekIdentifier
class CORDL_TYPE KekIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Date)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Date;

  __declspec(property(get = get_KeyIdentifier)) ::Org::BouncyCastle::Asn1::Asn1OctetString* KeyIdentifier;

  __declspec(property(get = get_Other)) ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* Other;

  /// @brief Field date, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_date, put = __cordl_internal_set_date)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* date;

  /// @brief Field keyIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyIdentifier, put = __cordl_internal_set_keyIdentifier)) ::Org::BouncyCastle::Asn1::Asn1OctetString* keyIdentifier;

  /// @brief Field other, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_other, put = __cordl_internal_set_other)) ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* other;

  /// @brief Method GetInstance, addr 0x2307d2c, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::KekIdentifier* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x2307d44, size 0x168, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::KekIdentifier* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::KekIdentifier* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* date,
                                                                        ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* other);

  static inline ::Org::BouncyCastle::Asn1::Cms::KekIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2307ec4, size 0x170, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& __cordl_internal_get_date() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_date();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_keyIdentifier() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_keyIdentifier();

  constexpr ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* const& __cordl_internal_get_other() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*& __cordl_internal_get_other();

  constexpr void __cordl_internal_set_date(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr void __cordl_internal_set_keyIdentifier(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_other(::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* value);

  /// @brief Method .ctor, addr 0x230788c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* date, ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* other);

  /// @brief Method .ctor, addr 0x2307914, size 0x29c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Date, addr 0x2307eb4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_Date();

  /// @brief Method get_KeyIdentifier, addr 0x2307eac, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_KeyIdentifier();

  /// @brief Method get_Other, addr 0x2307ebc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* get_Other();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KekIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KekIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KekIdentifier(KekIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KekIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KekIdentifier(KekIdentifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 75 };

  /// @brief Field keyIdentifier, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___keyIdentifier;

  /// @brief Field date, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___date;

  /// @brief Field other, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* ___other;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KekIdentifier, ___keyIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KekIdentifier, ___date) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KekIdentifier, ___other) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::KekIdentifier, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::KekIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::KekIdentifier*, "Org.BouncyCastle.Asn1.Cms", "KekIdentifier");
