#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SafeBag)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class SafeBag;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::SafeBag);
// Type: Org.BouncyCastle.Asn1.Pkcs::SafeBag
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::SafeBag*
class CORDL_TYPE SafeBag : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_BagAttributes))::Org::BouncyCastle::Asn1::Asn1Set* BagAttributes;

  __declspec(property(get = get_BagID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* BagID;

  __declspec(property(get = get_BagValue))::Org::BouncyCastle::Asn1::Asn1Object* BagValue;

  /// @brief Field bagAttributes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_bagAttributes, put = __cordl_internal_set_bagAttributes))::Org::BouncyCastle::Asn1::Asn1Set* bagAttributes;

  /// @brief Field bagID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bagID, put = __cordl_internal_set_bagID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* bagID;

  /// @brief Field bagValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_bagValue, put = __cordl_internal_set_bagValue))::Org::BouncyCastle::Asn1::Asn1Object* bagValue;

  /// @brief Method GetInstance, addr 0x100021c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::SafeBag* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::SafeBag* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::Asn1Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::SafeBag* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::Asn1Object* obj,
                                                                   ::Org::BouncyCastle::Asn1::Asn1Set* bagAttributes);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::SafeBag* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x1000510, size 0x1a4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_bagAttributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get_bagAttributes() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_bagID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_bagID() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __cordl_internal_get_bagValue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> const& __cordl_internal_get_bagValue() const;

  constexpr void __cordl_internal_set_bagAttributes(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_bagID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_bagValue(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method .ctor, addr 0x100048c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::Asn1Object* obj);

  /// @brief Method .ctor, addr 0x10004bc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::Asn1Object* obj, ::Org::BouncyCastle::Asn1::Asn1Set* bagAttributes);

  /// @brief Method .ctor, addr 0x10002c0, size 0x1cc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_BagAttributes, addr 0x1000508, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_BagAttributes();

  /// @brief Method get_BagID, addr 0x10004f8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_BagID();

  /// @brief Method get_BagValue, addr 0x1000500, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_BagValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafeBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeBag(SafeBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeBag(SafeBag const&) = delete;

  /// @brief Field bagID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___bagID;

  /// @brief Field bagValue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___bagValue;

  /// @brief Field bagAttributes, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___bagAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::SafeBag, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SafeBag, ___bagID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SafeBag, ___bagValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SafeBag, ___bagAttributes) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::SafeBag);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::SafeBag*, "Org.BouncyCastle.Asn1.Pkcs", "SafeBag");
