#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAPKCS1SignatureDeformatter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureDeformatter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSAPKCS1SignatureDeformatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SignatureDeformatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSAPKCS1SignatureDeformatter);
// Dependencies System.Security.Cryptography.AsymmetricSignatureDeformatter
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RSAPKCS1SignatureDeformatter
class CORDL_TYPE RSAPKCS1SignatureDeformatter : public ::System::Security::Cryptography::AsymmetricSignatureDeformatter {
public:
  // Declarations
  /// @brief Field hashName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_hashName, put = __cordl_internal_set_hashName)) ::StringW hashName;

  /// @brief Field rsa, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_rsa, put = __cordl_internal_set_rsa)) ::System::Security::Cryptography::RSA* rsa;

  static inline ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter* New_ctor();

  static inline ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter* New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  /// @brief Method SetHashAlgorithm, addr 0x595f75c, size 0x58, virtual true, abstract: false, final false
  inline void SetHashAlgorithm(::StringW strName);

  /// @brief Method SetKey, addr 0x595f7b4, size 0xf8, virtual true, abstract: false, final false
  inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  /// @brief Method VerifySignature, addr 0x595f8ac, size 0x14c, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  constexpr ::StringW const& __cordl_internal_get_hashName() const;

  constexpr ::StringW& __cordl_internal_get_hashName();

  constexpr ::System::Security::Cryptography::RSA* const& __cordl_internal_get_rsa() const;

  constexpr ::System::Security::Cryptography::RSA*& __cordl_internal_get_rsa();

  constexpr void __cordl_internal_set_hashName(::StringW value);

  constexpr void __cordl_internal_set_rsa(::System::Security::Cryptography::RSA* value);

  /// @brief Method .ctor, addr 0x595f74c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x595f750, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSAPKCS1SignatureDeformatter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureDeformatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSAPKCS1SignatureDeformatter(RSAPKCS1SignatureDeformatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureDeformatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSAPKCS1SignatureDeformatter(RSAPKCS1SignatureDeformatter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2999 };

  /// @brief Field rsa, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::RSA* ___rsa;

  /// @brief Field hashName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___hashName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::RSAPKCS1SignatureDeformatter, ___rsa) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAPKCS1SignatureDeformatter, ___hashName) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter, 0x20>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SignatureDeformatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*, "System.Security.Cryptography", "RSAPKCS1SignatureDeformatter");
