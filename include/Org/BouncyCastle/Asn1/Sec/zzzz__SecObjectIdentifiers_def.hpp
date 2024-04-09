#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SecObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Sec {
class SecObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Sec::SecObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Sec::SecObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Sec {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Sec::SecObjectIdentifiers*
class CORDL_TYPE SecObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field EllipticCurve, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EllipticCurve, put = setStaticF_EllipticCurve))::Org::BouncyCastle::Asn1::DerObjectIdentifier* EllipticCurve;

  /// @brief Field SecP112r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecP112r1, put = setStaticF_SecP112r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecP112r1;

  /// @brief Field SecP112r2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecP112r2, put = setStaticF_SecP112r2))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecP112r2;

  /// @brief Field SecP128r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecP128r1, put = setStaticF_SecP128r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecP128r1;

  /// @brief Field SecP128r2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecP128r2, put = setStaticF_SecP128r2))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecP128r2;

  /// @brief Field SecP160k1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecP160k1, put = setStaticF_SecP160k1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecP160k1;

  /// @brief Field SecP160r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecP160r1, put = setStaticF_SecP160r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecP160r1;

  /// @brief Field SecP160r2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecP160r2, put = setStaticF_SecP160r2))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecP160r2;

  /// @brief Field SecP192k1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecP192k1, put = setStaticF_SecP192k1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecP192k1;

  /// @brief Field SecP192r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecP192r1, put = setStaticF_SecP192r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecP192r1;

  /// @brief Field SecP224k1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecP224k1, put = setStaticF_SecP224k1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecP224k1;

  /// @brief Field SecP224r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecP224r1, put = setStaticF_SecP224r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecP224r1;

  /// @brief Field SecP256k1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecP256k1, put = setStaticF_SecP256k1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecP256k1;

  /// @brief Field SecP256r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecP256r1, put = setStaticF_SecP256r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecP256r1;

  /// @brief Field SecP384r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecP384r1, put = setStaticF_SecP384r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecP384r1;

  /// @brief Field SecP521r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecP521r1, put = setStaticF_SecP521r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecP521r1;

  /// @brief Field SecT113r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT113r1, put = setStaticF_SecT113r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT113r1;

  /// @brief Field SecT113r2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT113r2, put = setStaticF_SecT113r2))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT113r2;

  /// @brief Field SecT131r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT131r1, put = setStaticF_SecT131r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT131r1;

  /// @brief Field SecT131r2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT131r2, put = setStaticF_SecT131r2))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT131r2;

  /// @brief Field SecT163k1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT163k1, put = setStaticF_SecT163k1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT163k1;

  /// @brief Field SecT163r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT163r1, put = setStaticF_SecT163r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT163r1;

  /// @brief Field SecT163r2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT163r2, put = setStaticF_SecT163r2))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT163r2;

  /// @brief Field SecT193r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT193r1, put = setStaticF_SecT193r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT193r1;

  /// @brief Field SecT193r2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT193r2, put = setStaticF_SecT193r2))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT193r2;

  /// @brief Field SecT233k1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT233k1, put = setStaticF_SecT233k1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT233k1;

  /// @brief Field SecT233r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT233r1, put = setStaticF_SecT233r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT233r1;

  /// @brief Field SecT239k1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT239k1, put = setStaticF_SecT239k1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT239k1;

  /// @brief Field SecT283k1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT283k1, put = setStaticF_SecT283k1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT283k1;

  /// @brief Field SecT283r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT283r1, put = setStaticF_SecT283r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT283r1;

  /// @brief Field SecT409k1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT409k1, put = setStaticF_SecT409k1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT409k1;

  /// @brief Field SecT409r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT409r1, put = setStaticF_SecT409r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT409r1;

  /// @brief Field SecT571k1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT571k1, put = setStaticF_SecT571k1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT571k1;

  /// @brief Field SecT571r1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecT571r1, put = setStaticF_SecT571r1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecT571r1;

  static inline ::Org::BouncyCastle::Asn1::Sec::SecObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x11e339c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EllipticCurve();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP112r1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP112r2();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP128r1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP128r2();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP160k1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP160r1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP160r2();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP192k1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP192r1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP224k1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP224r1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP256k1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP256r1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP384r1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP521r1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT113r1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT113r2();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT131r1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT131r2();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT163k1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT163r1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT163r2();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT193r1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT193r2();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT233k1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT233r1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT239k1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT283k1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT283r1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT409k1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT409r1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT571k1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT571r1();

  static inline void setStaticF_EllipticCurve(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecP112r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecP112r2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecP128r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecP128r2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecP160k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecP160r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecP160r2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecP192k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecP192r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecP224k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecP224r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecP256k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecP256r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecP384r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecP521r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT113r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT113r2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT131r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT131r2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT163k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT163r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT163r2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT193r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT193r2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT233k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT233r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT239k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT283k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT283r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT409k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT409r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT571k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecT571r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecObjectIdentifiers(SecObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecObjectIdentifiers(SecObjectIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Sec::SecObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Sec
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Sec::SecObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Sec::SecObjectIdentifiers*, "Org.BouncyCastle.Asn1.Sec", "SecObjectIdentifiers");
