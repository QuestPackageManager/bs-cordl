#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSA)
namespace System {
class Exception;
}
namespace System::Security::Cryptography {
class RSASignaturePadding;
}
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
namespace System::Security::Cryptography {
struct RSAParameters;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSA;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSA);
// Type: System.Security.Cryptography::RSA
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2917))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2955))
// CS Name: ::System.Security.Cryptography::RSA*
class CORDL_TYPE RSA : public ::System::Security::Cryptography::AsymmetricAlgorithm {
public:
  // Declarations
  static inline ::System::Security::Cryptography::RSA* New_ctor();

  /// @brief Method .ctor addr 0x230c008 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Create addr 0x230c010 size 0x74 virtual false final false
  static inline ::System::Security::Cryptography::RSA* Create();

  /// @brief Method VerifyHash addr 0x230c0b0 size 0x24 virtual true final false
  inline bool VerifyHash(::ArrayW<uint8_t, ::Array<uint8_t>*> hash, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                         ::System::Security::Cryptography::RSASignaturePadding* padding);

  /// @brief Method HashData addr 0x230c15c size 0x24 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method VerifyData addr 0x230c180 size 0x200 virtual true final false
  inline bool VerifyData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature,
                         ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding* padding);

  /// @brief Method DerivedClassMustOverride addr 0x230c0d4 size 0x88 virtual false final false
  static inline ::System::Exception* DerivedClassMustOverride();

  /// @brief Method HashAlgorithmNameNullOrEmpty addr 0x230c380 size 0xa0 virtual false final false
  static inline ::System::Exception* HashAlgorithmNameNullOrEmpty();

  /// @brief Method EncryptValue addr 0x230c420 size 0x60 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptValue(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb);

  /// @brief Method FromXmlString addr 0x230c480 size 0x558 virtual true final false
  inline void FromXmlString(::StringW xmlString);

  /// @brief Method ToXmlString addr 0x230c9d8 size 0x440 virtual true final false
  inline ::StringW ToXmlString(bool includePrivateParameters);

  /// @brief Method ExportParameters addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);

  /// @brief Method ImportParameters addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ImportParameters(::System::Security::Cryptography::RSAParameters parameters);

  // Ctor Parameters [CppParam { name: "", ty: "RSA", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSA(RSA&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSA", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSA(RSA const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSA();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSA, 0x20>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSA);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSA*, "System.Security.Cryptography", "RSA");
