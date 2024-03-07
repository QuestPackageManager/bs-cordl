#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EdECObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::EdEC {
class EdECObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.EdEC::EdECObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::EdEC {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.EdEC::EdECObjectIdentifiers*
class CORDL_TYPE EdECObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field id_Ed25519, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_Ed25519, put = setStaticF_id_Ed25519))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_Ed25519;

  /// @brief Field id_Ed448, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_Ed448, put = setStaticF_id_Ed448))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_Ed448;

  /// @brief Field id_X25519, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_X25519, put = setStaticF_id_X25519))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_X25519;

  /// @brief Field id_X448, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_X448, put = setStaticF_id_X448))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_X448;

  /// @brief Field id_edwards_curve_algs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_edwards_curve_algs, put = setStaticF_id_edwards_curve_algs))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_edwards_curve_algs;

  static inline ::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0xf20020, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_Ed25519();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_Ed448();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_X25519();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_X448();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_edwards_curve_algs();

  static inline void setStaticF_id_Ed25519(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_Ed448(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_X25519(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_X448(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_edwards_curve_algs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EdECObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EdECObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EdECObjectIdentifiers(EdECObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EdECObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EdECObjectIdentifiers(EdECObjectIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::EdEC
NEED_NO_BOX(::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers*, "Org.BouncyCastle.Asn1.EdEC", "EdECObjectIdentifiers");
