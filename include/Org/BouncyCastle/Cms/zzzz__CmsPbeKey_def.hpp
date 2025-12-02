#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsPbeKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsPbeKey)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsPbeKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsPbeKey);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsPbeKey
class CORDL_TYPE CmsPbeKey : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Algorithm)) ::StringW Algorithm;

  __declspec(property(get = get_Format)) ::StringW Format;

  __declspec(property(get = get_IterationCount)) int32_t IterationCount;

  __declspec(property(get = get_Password)) ::StringW Password;

  __declspec(property(get = get_Salt)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Salt;

  /// @brief Field iterationCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_iterationCount, put = __cordl_internal_set_iterationCount)) int32_t iterationCount;

  /// @brief Field password, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_password, put = __cordl_internal_set_password)) ::ArrayW<char16_t, ::Array<char16_t>*> password;

  /// @brief Field salt, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_salt, put = __cordl_internal_set_salt)) ::ArrayW<uint8_t, ::Array<uint8_t>*> salt;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  /// @brief Method Finalize, addr 0x3589ec4, size 0x5c, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetEncoded, addr 0x358a01c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetEncoded, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* GetEncoded(::StringW algorithmOid);

  /// @brief Method GetSalt, addr 0x3589f88, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSalt();

  static inline ::Org::BouncyCastle::Cms::CmsPbeKey* New_ctor(::ArrayW<char16_t, ::Array<char16_t>*> password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm);

  static inline ::Org::BouncyCastle::Cms::CmsPbeKey* New_ctor(::ArrayW<char16_t, ::Array<char16_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  static inline ::Org::BouncyCastle::Cms::CmsPbeKey* New_ctor(::StringW password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm);

  static inline ::Org::BouncyCastle::Cms::CmsPbeKey* New_ctor(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  constexpr int32_t const& __cordl_internal_get_iterationCount() const;

  constexpr int32_t& __cordl_internal_get_iterationCount();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_password() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_password();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_salt() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_salt();

  constexpr void __cordl_internal_set_iterationCount(int32_t value);

  constexpr void __cordl_internal_set_password(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3589cb0, size 0x214, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm);

  /// @brief Method .ctor, addr 0x3589b88, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  /// @brief Method .ctor, addr 0x3589c74, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm);

  /// @brief Method .ctor, addr 0x3589b44, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  /// @brief Method get_Algorithm, addr 0x3589f94, size 0x44, virtual false, abstract: false, final false
  inline ::StringW get_Algorithm();

  /// @brief Method get_Format, addr 0x3589fd8, size 0x44, virtual false, abstract: false, final false
  inline ::StringW get_Format();

  /// @brief Method get_IterationCount, addr 0x3589f8c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_IterationCount();

  /// @brief Method get_Password, addr 0x3589f20, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Password();

  /// @brief Method get_Salt, addr 0x3589f28, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Salt();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsPbeKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsPbeKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsPbeKey(CmsPbeKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsPbeKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsPbeKey(CmsPbeKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 642 };

  /// @brief Field password, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___password;

  /// @brief Field salt, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___salt;

  /// @brief Field iterationCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___iterationCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsPbeKey, ___password) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsPbeKey, ___salt) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsPbeKey, ___iterationCount) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsPbeKey, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsPbeKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsPbeKey*, "Org.BouncyCastle.Cms", "CmsPbeKey");
