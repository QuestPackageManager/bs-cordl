#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BC/BCObjectIdentifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BCObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::BC {
class BCObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BC::BCObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.BC::BCObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::BC {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.BC::BCObjectIdentifiers*
class CORDL_TYPE BCObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field bc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc, put = setStaticF_bc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc;

  /// @brief Field bc_exch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_exch, put = setStaticF_bc_exch)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_exch;

  /// @brief Field bc_ext, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_ext, put = setStaticF_bc_ext)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_ext;

  /// @brief Field bc_pbe, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe, put = setStaticF_bc_pbe)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe;

  /// @brief Field bc_pbe_sha1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe_sha1, put = setStaticF_bc_pbe_sha1)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe_sha1;

  /// @brief Field bc_pbe_sha1_pkcs12, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe_sha1_pkcs12, put = setStaticF_bc_pbe_sha1_pkcs12)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe_sha1_pkcs12;

  /// @brief Field bc_pbe_sha1_pkcs12_aes128_cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe_sha1_pkcs12_aes128_cbc,
                             put = setStaticF_bc_pbe_sha1_pkcs12_aes128_cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe_sha1_pkcs12_aes128_cbc;

  /// @brief Field bc_pbe_sha1_pkcs12_aes192_cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe_sha1_pkcs12_aes192_cbc,
                             put = setStaticF_bc_pbe_sha1_pkcs12_aes192_cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe_sha1_pkcs12_aes192_cbc;

  /// @brief Field bc_pbe_sha1_pkcs12_aes256_cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe_sha1_pkcs12_aes256_cbc,
                             put = setStaticF_bc_pbe_sha1_pkcs12_aes256_cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe_sha1_pkcs12_aes256_cbc;

  /// @brief Field bc_pbe_sha1_pkcs5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe_sha1_pkcs5, put = setStaticF_bc_pbe_sha1_pkcs5)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe_sha1_pkcs5;

  /// @brief Field bc_pbe_sha224, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe_sha224, put = setStaticF_bc_pbe_sha224)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe_sha224;

  /// @brief Field bc_pbe_sha256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe_sha256, put = setStaticF_bc_pbe_sha256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe_sha256;

  /// @brief Field bc_pbe_sha256_pkcs12, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe_sha256_pkcs12, put = setStaticF_bc_pbe_sha256_pkcs12)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe_sha256_pkcs12;

  /// @brief Field bc_pbe_sha256_pkcs12_aes128_cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe_sha256_pkcs12_aes128_cbc,
                             put = setStaticF_bc_pbe_sha256_pkcs12_aes128_cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe_sha256_pkcs12_aes128_cbc;

  /// @brief Field bc_pbe_sha256_pkcs12_aes192_cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe_sha256_pkcs12_aes192_cbc,
                             put = setStaticF_bc_pbe_sha256_pkcs12_aes192_cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe_sha256_pkcs12_aes192_cbc;

  /// @brief Field bc_pbe_sha256_pkcs12_aes256_cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe_sha256_pkcs12_aes256_cbc,
                             put = setStaticF_bc_pbe_sha256_pkcs12_aes256_cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe_sha256_pkcs12_aes256_cbc;

  /// @brief Field bc_pbe_sha256_pkcs5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe_sha256_pkcs5, put = setStaticF_bc_pbe_sha256_pkcs5)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe_sha256_pkcs5;

  /// @brief Field bc_pbe_sha384, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe_sha384, put = setStaticF_bc_pbe_sha384)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe_sha384;

  /// @brief Field bc_pbe_sha512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_pbe_sha512, put = setStaticF_bc_pbe_sha512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_pbe_sha512;

  /// @brief Field bc_sig, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bc_sig, put = setStaticF_bc_sig)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* bc_sig;

  /// @brief Field linkedCertificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_linkedCertificate, put = setStaticF_linkedCertificate)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* linkedCertificate;

  /// @brief Field newHope, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_newHope, put = setStaticF_newHope)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* newHope;

  /// @brief Field sphincs256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sphincs256, put = setStaticF_sphincs256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* sphincs256;

  /// @brief Field sphincs256_with_BLAKE512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sphincs256_with_BLAKE512, put = setStaticF_sphincs256_with_BLAKE512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* sphincs256_with_BLAKE512;

  /// @brief Field sphincs256_with_SHA3_512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sphincs256_with_SHA3_512, put = setStaticF_sphincs256_with_SHA3_512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* sphincs256_with_SHA3_512;

  /// @brief Field sphincs256_with_SHA512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sphincs256_with_SHA512, put = setStaticF_sphincs256_with_SHA512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* sphincs256_with_SHA512;

  /// @brief Field xmss, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xmss, put = setStaticF_xmss)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* xmss;

  /// @brief Field xmss_mt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xmss_mt, put = setStaticF_xmss_mt)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* xmss_mt;

  /// @brief Field xmss_mt_with_SHA256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xmss_mt_with_SHA256, put = setStaticF_xmss_mt_with_SHA256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* xmss_mt_with_SHA256;

  /// @brief Field xmss_mt_with_SHA512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xmss_mt_with_SHA512, put = setStaticF_xmss_mt_with_SHA512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* xmss_mt_with_SHA512;

  /// @brief Field xmss_mt_with_SHAKE128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xmss_mt_with_SHAKE128, put = setStaticF_xmss_mt_with_SHAKE128)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* xmss_mt_with_SHAKE128;

  /// @brief Field xmss_mt_with_SHAKE256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xmss_mt_with_SHAKE256, put = setStaticF_xmss_mt_with_SHAKE256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* xmss_mt_with_SHAKE256;

  /// @brief Field xmss_with_SHA256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xmss_with_SHA256, put = setStaticF_xmss_with_SHA256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* xmss_with_SHA256;

  /// @brief Field xmss_with_SHA512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xmss_with_SHA512, put = setStaticF_xmss_with_SHA512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* xmss_with_SHA512;

  /// @brief Field xmss_with_SHAKE128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xmss_with_SHAKE128, put = setStaticF_xmss_with_SHAKE128)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* xmss_with_SHAKE128;

  /// @brief Field xmss_with_SHAKE256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xmss_with_SHAKE256, put = setStaticF_xmss_with_SHAKE256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* xmss_with_SHAKE256;

  static inline ::Org::BouncyCastle::Asn1::BC::BCObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x22bd1ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_exch();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_ext();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha1_pkcs12();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha1_pkcs12_aes128_cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha1_pkcs12_aes192_cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha1_pkcs12_aes256_cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha1_pkcs5();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha224();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha256_pkcs12();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha256_pkcs12_aes128_cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha256_pkcs12_aes192_cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha256_pkcs12_aes256_cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha256_pkcs5();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha384();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_sig();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_linkedCertificate();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_newHope();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sphincs256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sphincs256_with_BLAKE512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sphincs256_with_SHA3_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sphincs256_with_SHA512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_mt();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_mt_with_SHA256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_mt_with_SHA512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_mt_with_SHAKE128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_mt_with_SHAKE256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_with_SHA256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_with_SHA512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_with_SHAKE128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_with_SHAKE256();

  static inline void setStaticF_bc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_exch(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_ext(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe_sha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe_sha1_pkcs12(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe_sha1_pkcs12_aes128_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe_sha1_pkcs12_aes192_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe_sha1_pkcs12_aes256_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe_sha1_pkcs5(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe_sha224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe_sha256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe_sha256_pkcs12(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe_sha256_pkcs12_aes128_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe_sha256_pkcs12_aes192_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe_sha256_pkcs12_aes256_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe_sha256_pkcs5(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe_sha384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_pbe_sha512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_bc_sig(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_linkedCertificate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_newHope(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_sphincs256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_sphincs256_with_BLAKE512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_sphincs256_with_SHA3_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_sphincs256_with_SHA512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_xmss(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_xmss_mt(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_xmss_mt_with_SHA256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_xmss_mt_with_SHA512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_xmss_mt_with_SHAKE128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_xmss_mt_with_SHAKE256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_xmss_with_SHA256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_xmss_with_SHA512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_xmss_with_SHAKE128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_xmss_with_SHAKE256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BCObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BCObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BCObjectIdentifiers(BCObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BCObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BCObjectIdentifiers(BCObjectIdentifiers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BC::BCObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::BC
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BC::BCObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BC::BCObjectIdentifiers*, "Org.BouncyCastle.Asn1.BC", "BCObjectIdentifiers");
