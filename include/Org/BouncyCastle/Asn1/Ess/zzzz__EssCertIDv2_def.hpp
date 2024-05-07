#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ess/EssCertIDv2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EssCertIDv2)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class EssCertIDv2;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2);
// Type: Org.BouncyCastle.Asn1.Ess::EssCertIDv2
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Ess::EssCertIDv2*
class CORDL_TYPE EssCertIDv2 : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field DefaultAlgID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultAlgID, put = setStaticF_DefaultAlgID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DefaultAlgID;

  __declspec(property(get = get_HashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  __declspec(property(get = get_IssuerSerial))::Org::BouncyCastle::Asn1::X509::IssuerSerial* IssuerSerial;

  /// @brief Field certHash, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certHash, put = __cordl_internal_set_certHash))::ArrayW<uint8_t, ::Array<uint8_t>*> certHash;

  /// @brief Field hashAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_hashAlgorithm, put = __cordl_internal_set_hashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm;

  /// @brief Field issuerSerial, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_issuerSerial, put = __cordl_internal_set_issuerSerial))::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial;

  /// @brief Method GetCertHash, addr 0x10f8fc0, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCertHash();

  /// @brief Method GetInstance, addr 0x10f8bfc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t, ::Array<uint8_t>*> certHash);

  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t, ::Array<uint8_t>*> certHash,
                                                                      ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> certHash);

  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> certHash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x10f9024, size 0x1b4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_certHash() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_certHash();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_hashAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_hashAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& __cordl_internal_get_issuerSerial();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::IssuerSerial*> const& __cordl_internal_get_issuerSerial() const;

  constexpr void __cordl_internal_set_certHash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_issuerSerial(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value);

  /// @brief Method .ctor, addr 0x10f8fa0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t, ::Array<uint8_t>*> certHash);

  /// @brief Method .ctor, addr 0x10f8f10, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t, ::Array<uint8_t>*> certHash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  /// @brief Method .ctor, addr 0x10f8f00, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> certHash);

  /// @brief Method .ctor, addr 0x10f8fa8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> certHash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  /// @brief Method .ctor, addr 0x10f8ca0, size 0x260, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* getStaticF_DefaultAlgID();

  /// @brief Method get_HashAlgorithm, addr 0x10f8fb8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

  /// @brief Method get_IssuerSerial, addr 0x10f901c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_IssuerSerial();

  static inline void setStaticF_DefaultAlgID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EssCertIDv2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EssCertIDv2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EssCertIDv2(EssCertIDv2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EssCertIDv2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EssCertIDv2(EssCertIDv2 const&) = delete;

  /// @brief Field hashAlgorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___hashAlgorithm;

  /// @brief Field certHash, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___certHash;

  /// @brief Field issuerSerial, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::IssuerSerial* ___issuerSerial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2, ___hashAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2, ___certHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2, ___issuerSerial) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ess
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*, "Org.BouncyCastle.Asn1.Ess", "EssCertIDv2");
