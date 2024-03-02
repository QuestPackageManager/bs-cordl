#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UAObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::UA {
class UAObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::UA::UAObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.UA::UAObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::UA {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.UA::UAObjectIdentifiers*
class CORDL_TYPE UAObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field UaOid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UaOid, put = setStaticF_UaOid))::Org::BouncyCastle::Asn1::DerObjectIdentifier* UaOid;

  /// @brief Field dstu4145be, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu4145be, put = setStaticF_dstu4145be))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu4145be;

  /// @brief Field dstu4145le, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu4145le, put = setStaticF_dstu4145le))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu4145le;

  /// @brief Field dstu7564digest_256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7564digest_256, put = setStaticF_dstu7564digest_256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7564digest_256;

  /// @brief Field dstu7564digest_384, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7564digest_384, put = setStaticF_dstu7564digest_384))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7564digest_384;

  /// @brief Field dstu7564digest_512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7564digest_512, put = setStaticF_dstu7564digest_512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7564digest_512;

  /// @brief Field dstu7564mac_256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7564mac_256, put = setStaticF_dstu7564mac_256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7564mac_256;

  /// @brief Field dstu7564mac_384, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7564mac_384, put = setStaticF_dstu7564mac_384))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7564mac_384;

  /// @brief Field dstu7564mac_512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7564mac_512, put = setStaticF_dstu7564mac_512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7564mac_512;

  /// @brief Field dstu7624cbc_128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624cbc_128, put = setStaticF_dstu7624cbc_128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624cbc_128;

  /// @brief Field dstu7624cbc_256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624cbc_256, put = setStaticF_dstu7624cbc_256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624cbc_256;

  /// @brief Field dstu7624cbc_512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624cbc_512, put = setStaticF_dstu7624cbc_512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624cbc_512;

  /// @brief Field dstu7624ccm_128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624ccm_128, put = setStaticF_dstu7624ccm_128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624ccm_128;

  /// @brief Field dstu7624ccm_256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624ccm_256, put = setStaticF_dstu7624ccm_256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624ccm_256;

  /// @brief Field dstu7624ccm_512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624ccm_512, put = setStaticF_dstu7624ccm_512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624ccm_512;

  /// @brief Field dstu7624cfb_128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624cfb_128, put = setStaticF_dstu7624cfb_128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624cfb_128;

  /// @brief Field dstu7624cfb_256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624cfb_256, put = setStaticF_dstu7624cfb_256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624cfb_256;

  /// @brief Field dstu7624cfb_512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624cfb_512, put = setStaticF_dstu7624cfb_512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624cfb_512;

  /// @brief Field dstu7624cmac_128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624cmac_128, put = setStaticF_dstu7624cmac_128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624cmac_128;

  /// @brief Field dstu7624cmac_256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624cmac_256, put = setStaticF_dstu7624cmac_256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624cmac_256;

  /// @brief Field dstu7624cmac_512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624cmac_512, put = setStaticF_dstu7624cmac_512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624cmac_512;

  /// @brief Field dstu7624ctr_128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624ctr_128, put = setStaticF_dstu7624ctr_128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624ctr_128;

  /// @brief Field dstu7624ctr_256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624ctr_256, put = setStaticF_dstu7624ctr_256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624ctr_256;

  /// @brief Field dstu7624ctr_512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624ctr_512, put = setStaticF_dstu7624ctr_512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624ctr_512;

  /// @brief Field dstu7624ecb_128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624ecb_128, put = setStaticF_dstu7624ecb_128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624ecb_128;

  /// @brief Field dstu7624ecb_256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624ecb_256, put = setStaticF_dstu7624ecb_256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624ecb_256;

  /// @brief Field dstu7624ecb_512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624ecb_512, put = setStaticF_dstu7624ecb_512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624ecb_512;

  /// @brief Field dstu7624gmac_128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624gmac_128, put = setStaticF_dstu7624gmac_128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624gmac_128;

  /// @brief Field dstu7624gmac_256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624gmac_256, put = setStaticF_dstu7624gmac_256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624gmac_256;

  /// @brief Field dstu7624gmac_512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624gmac_512, put = setStaticF_dstu7624gmac_512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624gmac_512;

  /// @brief Field dstu7624kw_128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624kw_128, put = setStaticF_dstu7624kw_128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624kw_128;

  /// @brief Field dstu7624kw_256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624kw_256, put = setStaticF_dstu7624kw_256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624kw_256;

  /// @brief Field dstu7624kw_512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624kw_512, put = setStaticF_dstu7624kw_512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624kw_512;

  /// @brief Field dstu7624ofb_128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624ofb_128, put = setStaticF_dstu7624ofb_128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624ofb_128;

  /// @brief Field dstu7624ofb_256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624ofb_256, put = setStaticF_dstu7624ofb_256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624ofb_256;

  /// @brief Field dstu7624ofb_512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624ofb_512, put = setStaticF_dstu7624ofb_512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624ofb_512;

  /// @brief Field dstu7624xts_128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624xts_128, put = setStaticF_dstu7624xts_128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624xts_128;

  /// @brief Field dstu7624xts_256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624xts_256, put = setStaticF_dstu7624xts_256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624xts_256;

  /// @brief Field dstu7624xts_512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dstu7624xts_512, put = setStaticF_dstu7624xts_512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dstu7624xts_512;

  static inline ::Org::BouncyCastle::Asn1::UA::UAObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x10ecf60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_UaOid();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu4145be();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu4145le();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7564digest_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7564digest_384();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7564digest_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7564mac_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7564mac_384();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7564mac_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cbc_128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cbc_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cbc_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ccm_128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ccm_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ccm_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cfb_128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cfb_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cfb_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cmac_128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cmac_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cmac_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ctr_128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ctr_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ctr_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ecb_128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ecb_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ecb_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624gmac_128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624gmac_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624gmac_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624kw_128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624kw_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624kw_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ofb_128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ofb_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ofb_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624xts_128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624xts_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624xts_512();

  static inline void setStaticF_UaOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu4145be(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu4145le(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7564digest_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7564digest_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7564digest_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7564mac_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7564mac_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7564mac_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624cbc_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624cbc_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624cbc_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624ccm_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624ccm_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624ccm_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624cfb_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624cfb_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624cfb_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624cmac_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624cmac_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624cmac_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624ctr_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624ctr_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624ctr_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624ecb_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624ecb_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624ecb_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624gmac_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624gmac_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624gmac_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624kw_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624kw_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624kw_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624ofb_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624ofb_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624ofb_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624xts_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624xts_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_dstu7624xts_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UAObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UAObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UAObjectIdentifiers(UAObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UAObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UAObjectIdentifiers(UAObjectIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::UA::UAObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::UA
NEED_NO_BOX(::Org::BouncyCastle::Asn1::UA::UAObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::UA::UAObjectIdentifiers*, "Org.BouncyCastle.Asn1.UA", "UAObjectIdentifiers");
