#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Bsi/BsiObjectIdentifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BsiObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Bsi {
class BsiObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Bsi::BsiObjectIdentifiers);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Bsi {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Bsi.BsiObjectIdentifiers
class CORDL_TYPE BsiObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field algorithm, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_algorithm, put = setStaticF_algorithm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm;

  /// @brief Field bsi_de, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_bsi_de, put = setStaticF_bsi_de)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bsi_de;

  /// @brief Field ecdsa_plain_RIPEMD160, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecdsa_plain_RIPEMD160, put = setStaticF_ecdsa_plain_RIPEMD160)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecdsa_plain_RIPEMD160;

  /// @brief Field ecdsa_plain_SHA1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecdsa_plain_SHA1, put = setStaticF_ecdsa_plain_SHA1)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecdsa_plain_SHA1;

  /// @brief Field ecdsa_plain_SHA224, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecdsa_plain_SHA224, put = setStaticF_ecdsa_plain_SHA224)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecdsa_plain_SHA224;

  /// @brief Field ecdsa_plain_SHA256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecdsa_plain_SHA256, put = setStaticF_ecdsa_plain_SHA256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecdsa_plain_SHA256;

  /// @brief Field ecdsa_plain_SHA384, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecdsa_plain_SHA384, put = setStaticF_ecdsa_plain_SHA384)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecdsa_plain_SHA384;

  /// @brief Field ecdsa_plain_SHA512, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecdsa_plain_SHA512, put = setStaticF_ecdsa_plain_SHA512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecdsa_plain_SHA512;

  /// @brief Field ecdsa_plain_signatures, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecdsa_plain_signatures, put = setStaticF_ecdsa_plain_signatures)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecdsa_plain_signatures;

  /// @brief Field ecka_eg, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecka_eg, put = setStaticF_ecka_eg)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecka_eg;

  /// @brief Field ecka_eg_SessionKDF, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecka_eg_SessionKDF, put = setStaticF_ecka_eg_SessionKDF)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecka_eg_SessionKDF;

  /// @brief Field ecka_eg_SessionKDF_3DES, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecka_eg_SessionKDF_3DES, put = setStaticF_ecka_eg_SessionKDF_3DES)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecka_eg_SessionKDF_3DES;

  /// @brief Field ecka_eg_SessionKDF_AES128, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecka_eg_SessionKDF_AES128, put = setStaticF_ecka_eg_SessionKDF_AES128)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecka_eg_SessionKDF_AES128;

  /// @brief Field ecka_eg_SessionKDF_AES192, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecka_eg_SessionKDF_AES192, put = setStaticF_ecka_eg_SessionKDF_AES192)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecka_eg_SessionKDF_AES192;

  /// @brief Field ecka_eg_SessionKDF_AES256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecka_eg_SessionKDF_AES256, put = setStaticF_ecka_eg_SessionKDF_AES256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecka_eg_SessionKDF_AES256;

  /// @brief Field ecka_eg_X963kdf, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecka_eg_X963kdf, put = setStaticF_ecka_eg_X963kdf)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecka_eg_X963kdf;

  /// @brief Field ecka_eg_X963kdf_RIPEMD160, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecka_eg_X963kdf_RIPEMD160, put = setStaticF_ecka_eg_X963kdf_RIPEMD160)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecka_eg_X963kdf_RIPEMD160;

  /// @brief Field ecka_eg_X963kdf_SHA1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecka_eg_X963kdf_SHA1, put = setStaticF_ecka_eg_X963kdf_SHA1)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecka_eg_X963kdf_SHA1;

  /// @brief Field ecka_eg_X963kdf_SHA224, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecka_eg_X963kdf_SHA224, put = setStaticF_ecka_eg_X963kdf_SHA224)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecka_eg_X963kdf_SHA224;

  /// @brief Field ecka_eg_X963kdf_SHA256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecka_eg_X963kdf_SHA256, put = setStaticF_ecka_eg_X963kdf_SHA256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecka_eg_X963kdf_SHA256;

  /// @brief Field ecka_eg_X963kdf_SHA384, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecka_eg_X963kdf_SHA384, put = setStaticF_ecka_eg_X963kdf_SHA384)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecka_eg_X963kdf_SHA384;

  /// @brief Field ecka_eg_X963kdf_SHA512, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecka_eg_X963kdf_SHA512, put = setStaticF_ecka_eg_X963kdf_SHA512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ecka_eg_X963kdf_SHA512;

  /// @brief Field id_ecc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_id_ecc, put = setStaticF_id_ecc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_ecc;

  static inline ::Org::BouncyCastle::Asn1::Bsi::BsiObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x22f3560, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_algorithm();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bsi_de();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecdsa_plain_RIPEMD160();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecdsa_plain_SHA1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecdsa_plain_SHA224();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecdsa_plain_SHA256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecdsa_plain_SHA384();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecdsa_plain_SHA512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecdsa_plain_signatures();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_SessionKDF();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_SessionKDF_3DES();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_SessionKDF_AES128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_SessionKDF_AES192();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_SessionKDF_AES256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_X963kdf();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_X963kdf_RIPEMD160();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_X963kdf_SHA1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_X963kdf_SHA224();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_X963kdf_SHA256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_X963kdf_SHA384();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_X963kdf_SHA512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_ecc();

  static inline void setStaticF_algorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bsi_de(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecdsa_plain_RIPEMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecdsa_plain_SHA1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecdsa_plain_SHA224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecdsa_plain_SHA256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecdsa_plain_SHA384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecdsa_plain_SHA512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecdsa_plain_signatures(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecka_eg(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecka_eg_SessionKDF(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecka_eg_SessionKDF_3DES(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecka_eg_SessionKDF_AES128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecka_eg_SessionKDF_AES192(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecka_eg_SessionKDF_AES256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecka_eg_X963kdf(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecka_eg_X963kdf_RIPEMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecka_eg_X963kdf_SHA1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecka_eg_X963kdf_SHA224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecka_eg_X963kdf_SHA256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecka_eg_X963kdf_SHA384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ecka_eg_X963kdf_SHA512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_ecc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsiObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BsiObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsiObjectIdentifiers(BsiObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsiObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsiObjectIdentifiers(BsiObjectIdentifiers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Bsi::BsiObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Bsi
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Bsi::BsiObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Bsi::BsiObjectIdentifiers*, "Org.BouncyCastle.Asn1.Bsi", "BsiObjectIdentifiers");
