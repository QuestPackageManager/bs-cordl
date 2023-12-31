#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Asn1.Cms::KekIdentifier
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(75))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::KekIdentifier*
class CORDL_TYPE KekIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field keyIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __get_keyIdentifier, put = __set_keyIdentifier))::Org::BouncyCastle::Asn1::Asn1OctetString* keyIdentifier;

  /// @brief Field date, offset 0x18, size 0x8
  __declspec(property(get = __get_date, put = __set_date))::Org::BouncyCastle::Asn1::DerGeneralizedTime* date;

  /// @brief Field other, offset 0x20, size 0x8
  __declspec(property(get = __get_other, put = __set_other))::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* other;

  __declspec(property(get = get_KeyIdentifier))::Org::BouncyCastle::Asn1::Asn1OctetString* KeyIdentifier;

  __declspec(property(get = get_Date))::Org::BouncyCastle::Asn1::DerGeneralizedTime* Date;

  __declspec(property(get = get_Other))::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* Other;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_keyIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_keyIdentifier() const;

  constexpr void __set_keyIdentifier(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __get_date();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __get_date() const;

  constexpr void __set_date(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*& __get_other();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*> const& __get_other() const;

  constexpr void __set_other(::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::KekIdentifier* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* date,
                                                                        ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* other);

  /// @brief Method .ctor, addr 0xe78794, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* date, ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* other);

  static inline ::Org::BouncyCastle::Asn1::Cms::KekIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe78824, size 0x298, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xe78c44, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::KekIdentifier* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0xe78c5c, size 0x178, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::KekIdentifier* GetInstance(::System::Object* obj);

  /// @brief Method get_KeyIdentifier, addr 0xe78dd4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_KeyIdentifier();

  /// @brief Method get_Date, addr 0xe78ddc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_Date();

  /// @brief Method get_Other, addr 0xe78de4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* get_Other();

  /// @brief Method ToAsn1Object, addr 0xe78dec, size 0x174, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "KekIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KekIdentifier(KekIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KekIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KekIdentifier(KekIdentifier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KekIdentifier();

public:
  /// @brief Field keyIdentifier, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___keyIdentifier;

  /// @brief Field date, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___date;

  /// @brief Field other, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* ___other;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::KekIdentifier, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KekIdentifier, ___keyIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KekIdentifier, ___date) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KekIdentifier, ___other) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::KekIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::KekIdentifier*, "Org.BouncyCastle.Asn1.Cms", "KekIdentifier");
