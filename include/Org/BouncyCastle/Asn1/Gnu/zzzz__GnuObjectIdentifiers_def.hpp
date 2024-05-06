#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Gnu/GnuObjectIdentifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GnuObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Gnu {
class GnuObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Gnu::GnuObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Gnu::GnuObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Gnu {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Gnu::GnuObjectIdentifiers*
class CORDL_TYPE GnuObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field Crc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Crc, put = setStaticF_Crc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Crc;

  /// @brief Field Crc32, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Crc32, put = setStaticF_Crc32))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Crc32;

  /// @brief Field DigestAlgorithm, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DigestAlgorithm, put = setStaticF_DigestAlgorithm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DigestAlgorithm;

  /// @brief Field Ed25519, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Ed25519, put = setStaticF_Ed25519))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Ed25519;

  /// @brief Field EllipticCurve, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EllipticCurve, put = setStaticF_EllipticCurve))::Org::BouncyCastle::Asn1::DerObjectIdentifier* EllipticCurve;

  /// @brief Field EncryptionAlgorithm, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EncryptionAlgorithm, put = setStaticF_EncryptionAlgorithm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* EncryptionAlgorithm;

  /// @brief Field Gnu, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Gnu, put = setStaticF_Gnu))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Gnu;

  /// @brief Field GnuPG, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GnuPG, put = setStaticF_GnuPG))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GnuPG;

  /// @brief Field GnuRadar, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GnuRadar, put = setStaticF_GnuRadar))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GnuRadar;

  /// @brief Field Notation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Notation, put = setStaticF_Notation))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Notation;

  /// @brief Field PkaAddress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PkaAddress, put = setStaticF_PkaAddress))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PkaAddress;

  /// @brief Field Serpent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Serpent, put = setStaticF_Serpent))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Serpent;

  /// @brief Field Serpent128Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Serpent128Cbc, put = setStaticF_Serpent128Cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Serpent128Cbc;

  /// @brief Field Serpent128Cfb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Serpent128Cfb, put = setStaticF_Serpent128Cfb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Serpent128Cfb;

  /// @brief Field Serpent128Ecb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Serpent128Ecb, put = setStaticF_Serpent128Ecb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Serpent128Ecb;

  /// @brief Field Serpent128Ofb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Serpent128Ofb, put = setStaticF_Serpent128Ofb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Serpent128Ofb;

  /// @brief Field Serpent192Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Serpent192Cbc, put = setStaticF_Serpent192Cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Serpent192Cbc;

  /// @brief Field Serpent192Cfb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Serpent192Cfb, put = setStaticF_Serpent192Cfb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Serpent192Cfb;

  /// @brief Field Serpent192Ecb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Serpent192Ecb, put = setStaticF_Serpent192Ecb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Serpent192Ecb;

  /// @brief Field Serpent192Ofb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Serpent192Ofb, put = setStaticF_Serpent192Ofb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Serpent192Ofb;

  /// @brief Field Serpent256Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Serpent256Cbc, put = setStaticF_Serpent256Cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Serpent256Cbc;

  /// @brief Field Serpent256Cfb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Serpent256Cfb, put = setStaticF_Serpent256Cfb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Serpent256Cfb;

  /// @brief Field Serpent256Ecb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Serpent256Ecb, put = setStaticF_Serpent256Ecb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Serpent256Ecb;

  /// @brief Field Serpent256Ofb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Serpent256Ofb, put = setStaticF_Serpent256Ofb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Serpent256Ofb;

  /// @brief Field Tiger192, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Tiger192, put = setStaticF_Tiger192))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Tiger192;

  static inline ::Org::BouncyCastle::Asn1::Gnu::GnuObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x10fd4e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Crc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Crc32();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DigestAlgorithm();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Ed25519();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EllipticCurve();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EncryptionAlgorithm();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Gnu();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GnuPG();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GnuRadar();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Notation();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkaAddress();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Serpent();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Serpent128Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Serpent128Cfb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Serpent128Ecb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Serpent128Ofb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Serpent192Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Serpent192Cfb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Serpent192Ecb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Serpent192Ofb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Serpent256Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Serpent256Cfb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Serpent256Ecb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Serpent256Ofb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Tiger192();

  static inline void setStaticF_Crc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Crc32(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_DigestAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Ed25519(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_EllipticCurve(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_EncryptionAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Gnu(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_GnuPG(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_GnuRadar(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Notation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PkaAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Serpent(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Serpent128Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Serpent128Cfb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Serpent128Ecb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Serpent128Ofb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Serpent192Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Serpent192Cfb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Serpent192Ecb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Serpent192Ofb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Serpent256Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Serpent256Cfb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Serpent256Ecb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Serpent256Ofb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Tiger192(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GnuObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GnuObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GnuObjectIdentifiers(GnuObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GnuObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GnuObjectIdentifiers(GnuObjectIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Gnu::GnuObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Gnu
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Gnu::GnuObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Gnu::GnuObjectIdentifiers*, "Org.BouncyCastle.Asn1.Gnu", "GnuObjectIdentifiers");
