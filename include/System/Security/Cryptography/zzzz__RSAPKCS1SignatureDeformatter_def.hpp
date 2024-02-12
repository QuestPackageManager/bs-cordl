#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureDeformatter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Security.Cryptography::RSAPKCS1SignatureDeformatter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2919))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2983))
// CS Name: ::System.Security.Cryptography::RSAPKCS1SignatureDeformatter*
class CORDL_TYPE RSAPKCS1SignatureDeformatter : public ::System::Security::Cryptography::AsymmetricSignatureDeformatter {
public:
  // Declarations
  /// @brief Field rsa, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_rsa, put = __cordl_internal_set_rsa))::System::Security::Cryptography::RSA* rsa;

  /// @brief Field hashName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_hashName, put = __cordl_internal_set_hashName))::StringW hashName;

  constexpr ::System::Security::Cryptography::RSA*& __cordl_internal_get_rsa();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RSA*> const& __cordl_internal_get_rsa() const;

  constexpr void __cordl_internal_set_rsa(::System::Security::Cryptography::RSA* value);

  constexpr ::StringW& __cordl_internal_get_hashName();

  constexpr ::StringW const& __cordl_internal_get_hashName() const;

  constexpr void __cordl_internal_set_hashName(::StringW value);

  static inline ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter* New_ctor();

  /// @brief Method .ctor, addr 0x2490534, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter* New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  /// @brief Method .ctor, addr 0x24951c4, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  /// @brief Method SetHashAlgorithm, addr 0x24951f8, size 0x60, virtual true, abstract: false, final false
  inline void SetHashAlgorithm(::StringW strName);

  /// @brief Method SetKey, addr 0x2495258, size 0xec, virtual true, abstract: false, final false
  inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  /// @brief Method VerifySignature, addr 0x2495344, size 0x160, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  // Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureDeformatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSAPKCS1SignatureDeformatter(RSAPKCS1SignatureDeformatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureDeformatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSAPKCS1SignatureDeformatter(RSAPKCS1SignatureDeformatter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSAPKCS1SignatureDeformatter();

public:
  /// @brief Field rsa, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::RSA* ___rsa;

  /// @brief Field hashName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___hashName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAPKCS1SignatureDeformatter, ___rsa) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAPKCS1SignatureDeformatter, ___hashName) == 0x18, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SignatureDeformatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*, "System.Security.Cryptography", "RSAPKCS1SignatureDeformatter");
