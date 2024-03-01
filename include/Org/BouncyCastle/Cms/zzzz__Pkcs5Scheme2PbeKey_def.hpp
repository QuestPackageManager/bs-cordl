#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsPbeKey_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs5Scheme2PbeKey)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class Pkcs5Scheme2PbeKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::Pkcs5Scheme2PbeKey);
// Type: Org.BouncyCastle.Cms::Pkcs5Scheme2PbeKey
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cms::Pkcs5Scheme2PbeKey*
class CORDL_TYPE Pkcs5Scheme2PbeKey : public ::Org::BouncyCastle::Cms::CmsPbeKey {
public:
  // Declarations
  /// @brief Method GetEncoded, addr 0x1278f58, size 0x12c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* GetEncoded(::StringW algorithmOid);

  static inline ::Org::BouncyCastle::Cms::Pkcs5Scheme2PbeKey* New_ctor(::ArrayW<char16_t, ::Array<char16_t>*> password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm);

  static inline ::Org::BouncyCastle::Cms::Pkcs5Scheme2PbeKey* New_ctor(::ArrayW<char16_t, ::Array<char16_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  static inline ::Org::BouncyCastle::Cms::Pkcs5Scheme2PbeKey* New_ctor(::StringW password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm);

  static inline ::Org::BouncyCastle::Cms::Pkcs5Scheme2PbeKey* New_ctor(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  /// @brief Method .ctor, addr 0x1278f54, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm);

  /// @brief Method .ctor, addr 0x1278f14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  /// @brief Method .ctor, addr 0x1278f18, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm);

  /// @brief Method .ctor, addr 0x1278ed0, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs5Scheme2PbeKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pkcs5Scheme2PbeKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs5Scheme2PbeKey(Pkcs5Scheme2PbeKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs5Scheme2PbeKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs5Scheme2PbeKey(Pkcs5Scheme2PbeKey const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::Pkcs5Scheme2PbeKey, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::Pkcs5Scheme2PbeKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::Pkcs5Scheme2PbeKey*, "Org.BouncyCastle.Cms", "Pkcs5Scheme2PbeKey");
