#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/Pkcs5Scheme2Utf8PbeKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsPbeKey_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs5Scheme2Utf8PbeKey)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class Pkcs5Scheme2Utf8PbeKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey);
// Dependencies Org.BouncyCastle.Cms.CmsPbeKey
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.Pkcs5Scheme2Utf8PbeKey
class CORDL_TYPE Pkcs5Scheme2Utf8PbeKey : public ::Org::BouncyCastle::Cms::CmsPbeKey {
public:
  // Declarations
  /// @brief Method GetEncoded, addr 0x267d83c, size 0x12c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* GetEncoded(::StringW algorithmOid);

  static inline ::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey* New_ctor(::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                           ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm);

  static inline ::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey* New_ctor(::ArrayW<char16_t, ::Array<char16_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  static inline ::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey* New_ctor(::StringW password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm);

  static inline ::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey* New_ctor(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  /// @brief Method .ctor, addr 0x267d838, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm);

  /// @brief Method .ctor, addr 0x267d7f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  /// @brief Method .ctor, addr 0x267d7fc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm);

  /// @brief Method .ctor, addr 0x267d7b4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs5Scheme2Utf8PbeKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pkcs5Scheme2Utf8PbeKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs5Scheme2Utf8PbeKey(Pkcs5Scheme2Utf8PbeKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs5Scheme2Utf8PbeKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs5Scheme2Utf8PbeKey(Pkcs5Scheme2Utf8PbeKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 685 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*, "Org.BouncyCastle.Cms", "Pkcs5Scheme2Utf8PbeKey");
