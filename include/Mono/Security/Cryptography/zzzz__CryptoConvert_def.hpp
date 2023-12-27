#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoConvert)
namespace System::Security::Cryptography {
class RSA;
}
namespace System::Security::Cryptography {
struct RSAParameters;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class CryptoConvert;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::CryptoConvert);
// Type: Mono.Security.Cryptography::CryptoConvert
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13788))
// CS Name: ::Mono.Security.Cryptography::CryptoConvert*
class CORDL_TYPE CryptoConvert : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToInt32LE addr 0x2403d24 size 0x74 virtual false final false
  static inline int32_t ToInt32LE(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset);

  /// @brief Method ToUInt32LE addr 0x2403d98 size 0x74 virtual false final false
  static inline uint32_t ToUInt32LE(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset);

  /// @brief Method Trim addr 0x2403e0c size 0xac virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Trim(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  /// @brief Method FromCapiPrivateKeyBlob addr 0x2403eb8 size 0x8 virtual false final false
  static inline ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> blob);

  /// @brief Method FromCapiPrivateKeyBlob addr 0x2403ec0 size 0x224 virtual false final false
  static inline ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> blob, int32_t offset);

  /// @brief Method GetParametersFromCapiPrivateKeyBlob addr 0x24040e4 size 0x5a0 virtual false final false
  static inline ::System::Security::Cryptography::RSAParameters GetParametersFromCapiPrivateKeyBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> blob, int32_t offset);

  /// @brief Method ToHex addr 0x2404684 size 0x134 virtual false final false
  static inline ::StringW ToHex(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  // Ctor Parameters [CppParam { name: "", ty: "CryptoConvert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoConvert(CryptoConvert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoConvert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoConvert(CryptoConvert const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoConvert();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::CryptoConvert, 0x10>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::CryptoConvert);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::CryptoConvert*, "Mono.Security.Cryptography", "CryptoConvert");
