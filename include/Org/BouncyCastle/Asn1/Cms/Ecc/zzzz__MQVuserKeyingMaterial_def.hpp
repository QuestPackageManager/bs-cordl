#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(MQVuserKeyingMaterial)
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorPublicKey;
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
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms::Ecc {
class MQVuserKeyingMaterial;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial);
// Type: Org.BouncyCastle.Asn1.Cms.Ecc::MQVuserKeyingMaterial
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms::Ecc {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cms.Ecc::MQVuserKeyingMaterial*
class CORDL_TYPE MQVuserKeyingMaterial : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_AddedUkm))::Org::BouncyCastle::Asn1::Asn1OctetString* AddedUkm;

  __declspec(property(get = get_EphemeralPublicKey))::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* EphemeralPublicKey;

  /// @brief Field addedukm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_addedukm, put = __cordl_internal_set_addedukm))::Org::BouncyCastle::Asn1::Asn1OctetString* addedukm;

  /// @brief Field ephemeralPublicKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ephemeralPublicKey, put = __cordl_internal_set_ephemeralPublicKey))::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* ephemeralPublicKey;

  /// @brief Method GetInstance, addr 0x10ce0ac, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x10ce0c4, size 0x178, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial* New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* ephemeralPublicKey,
                                                                                     ::Org::BouncyCastle::Asn1::Asn1OctetString* addedukm);

  static inline ::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x10ce24c, size 0x114, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_addedukm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_addedukm() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey*& __cordl_internal_get_ephemeralPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey*> const& __cordl_internal_get_ephemeralPublicKey() const;

  constexpr void __cordl_internal_set_addedukm(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_ephemeralPublicKey(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* value);

  /// @brief Method .ctor, addr 0x10cde40, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* ephemeralPublicKey, ::Org::BouncyCastle::Asn1::Asn1OctetString* addedukm);

  /// @brief Method .ctor, addr 0x10cde6c, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_AddedUkm, addr 0x10ce244, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_AddedUkm();

  /// @brief Method get_EphemeralPublicKey, addr 0x10ce23c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* get_EphemeralPublicKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MQVuserKeyingMaterial();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MQVuserKeyingMaterial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MQVuserKeyingMaterial(MQVuserKeyingMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MQVuserKeyingMaterial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MQVuserKeyingMaterial(MQVuserKeyingMaterial const&) = delete;

  /// @brief Field ephemeralPublicKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* ___ephemeralPublicKey;

  /// @brief Field addedukm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___addedukm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial, ___ephemeralPublicKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial, ___addedukm) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms::Ecc
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial*, "Org.BouncyCastle.Asn1.Cms.Ecc", "MQVuserKeyingMaterial");
