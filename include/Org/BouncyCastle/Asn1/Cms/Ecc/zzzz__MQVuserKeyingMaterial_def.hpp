#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(MQVuserKeyingMaterial)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorPublicKey;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(54))
// CS Name: ::Org.BouncyCastle.Asn1.Cms.Ecc::MQVuserKeyingMaterial*
class CORDL_TYPE MQVuserKeyingMaterial : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field ephemeralPublicKey, offset 0x10, size 0x8
  __declspec(property(get = __get_ephemeralPublicKey, put = __set_ephemeralPublicKey))::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* ephemeralPublicKey;

  /// @brief Field addedukm, offset 0x18, size 0x8
  __declspec(property(get = __get_addedukm, put = __set_addedukm))::Org::BouncyCastle::Asn1::Asn1OctetString* addedukm;

  __declspec(property(get = get_EphemeralPublicKey))::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* EphemeralPublicKey;

  __declspec(property(get = get_AddedUkm))::Org::BouncyCastle::Asn1::Asn1OctetString* AddedUkm;

  constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey*& __get_ephemeralPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey*> const& __get_ephemeralPublicKey() const;

  constexpr void __set_ephemeralPublicKey(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_addedukm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_addedukm() const;

  constexpr void __set_addedukm(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial* New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* ephemeralPublicKey,
                                                                                     ::Org::BouncyCastle::Asn1::Asn1OctetString* addedukm);

  /// @brief Method .ctor addr 0xe6f634 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* ephemeralPublicKey, ::Org::BouncyCastle::Asn1::Asn1OctetString* addedukm);

  static inline ::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe6f660 size 0xe8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe6f8a0 size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance addr 0xe6f8b8 size 0x178 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial* GetInstance(::System::Object* obj);

  /// @brief Method get_EphemeralPublicKey addr 0xe6fa30 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* get_EphemeralPublicKey();

  /// @brief Method get_AddedUkm addr 0xe6fa38 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_AddedUkm();

  /// @brief Method ToAsn1Object addr 0xe6fa40 size 0x114 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "MQVuserKeyingMaterial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MQVuserKeyingMaterial(MQVuserKeyingMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MQVuserKeyingMaterial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MQVuserKeyingMaterial(MQVuserKeyingMaterial const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MQVuserKeyingMaterial();

public:
  /// @brief Field ephemeralPublicKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* ___ephemeralPublicKey;

  /// @brief Field addedukm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___addedukm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms::Ecc
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::Ecc::MQVuserKeyingMaterial*, "Org.BouncyCastle.Asn1.Cms.Ecc", "MQVuserKeyingMaterial");
