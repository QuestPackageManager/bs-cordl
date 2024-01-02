#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EssCertIDv2)
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(163))
// CS Name: ::Org.BouncyCastle.Asn1.Ess::EssCertIDv2*
class CORDL_TYPE EssCertIDv2 : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field hashAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __get_hashAlgorithm, put = __set_hashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm;

  /// @brief Field certHash, offset 0x18, size 0x8
  __declspec(property(get = __get_certHash, put = __set_certHash))::ArrayW<uint8_t, ::Array<uint8_t>*> certHash;

  /// @brief Field issuerSerial, offset 0x20, size 0x8
  __declspec(property(get = __get_issuerSerial, put = __set_issuerSerial))::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial;

  /// @brief Field DefaultAlgID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultAlgID, put = setStaticF_DefaultAlgID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DefaultAlgID;

  __declspec(property(get = get_HashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  __declspec(property(get = get_IssuerSerial))::Org::BouncyCastle::Asn1::X509::IssuerSerial* IssuerSerial;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_hashAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_hashAlgorithm() const;

  constexpr void __set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_certHash();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_certHash() const;

  constexpr void __set_certHash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& __get_issuerSerial();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::IssuerSerial*> const& __get_issuerSerial() const;

  constexpr void __set_issuerSerial(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value);

  static inline void setStaticF_DefaultAlgID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* getStaticF_DefaultAlgID();

  /// @brief Method GetInstance, addr 0xe9a3f0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe9a494, size 0x260, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> certHash);

  /// @brief Method .ctor, addr 0xe9a6f4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> certHash);

  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t, ::Array<uint8_t>*> certHash);

  /// @brief Method .ctor, addr 0xe9a794, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t, ::Array<uint8_t>*> certHash);

  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> certHash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  /// @brief Method .ctor, addr 0xe9a79c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> certHash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t, ::Array<uint8_t>*> certHash,
                                                                      ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  /// @brief Method .ctor, addr 0xe9a704, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t, ::Array<uint8_t>*> certHash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  /// @brief Method get_HashAlgorithm, addr 0xe9a7ac, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

  /// @brief Method GetCertHash, addr 0xe9a7b4, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCertHash();

  /// @brief Method get_IssuerSerial, addr 0xe9a810, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_IssuerSerial();

  /// @brief Method ToAsn1Object, addr 0xe9a818, size 0x1b4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "EssCertIDv2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EssCertIDv2(EssCertIDv2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EssCertIDv2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EssCertIDv2(EssCertIDv2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EssCertIDv2();

public:
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
