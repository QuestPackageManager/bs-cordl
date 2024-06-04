#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IsisMtt/Ocsp/CertHash.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertHash)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
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
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
class CertHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash);
// Type: Org.BouncyCastle.Asn1.IsisMtt.Ocsp::CertHash
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.Ocsp::CertHash*
class CORDL_TYPE CertHash : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CertificateHash))::ArrayW<uint8_t, ::Array<uint8_t>*> CertificateHash;

  __declspec(property(get = get_HashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  /// @brief Field certificateHash, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certificateHash, put = __cordl_internal_set_certificateHash))::ArrayW<uint8_t, ::Array<uint8_t>*> certificateHash;

  /// @brief Field hashAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_hashAlgorithm, put = __cordl_internal_set_hashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm;

  /// @brief Method GetInstance, addr 0x11dac38, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> certificateHash);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x11db08c, size 0x11c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_certificateHash() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_certificateHash();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_hashAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_hashAlgorithm() const;

  constexpr void __cordl_internal_set_certificateHash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  /// @brief Method .ctor, addr 0x11daedc, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> certificateHash);

  /// @brief Method .ctor, addr 0x11dadc0, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CertificateHash, addr 0x11db014, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_CertificateHash();

  /// @brief Method get_HashAlgorithm, addr 0x11db00c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertHash();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertHash(CertHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertHash(CertHash const&) = delete;

  /// @brief Field hashAlgorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___hashAlgorithm;

  /// @brief Field certificateHash, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___certificateHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash, ___hashAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash, ___certificateHash) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash*, "Org.BouncyCastle.Asn1.IsisMtt.Ocsp", "CertHash");
