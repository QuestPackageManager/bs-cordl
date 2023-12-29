#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsymmetricSignatureDeformatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsymmetricSignatureDeformatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::AsymmetricSignatureDeformatter);
// Type: System.Security.Cryptography::AsymmetricSignatureDeformatter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2918))
// CS Name: ::System.Security.Cryptography::AsymmetricSignatureDeformatter*
class CORDL_TYPE AsymmetricSignatureDeformatter : public ::System::Object {
public:
  // Declarations
  static inline ::System::Security::Cryptography::AsymmetricSignatureDeformatter* New_ctor();

  /// @brief Method .ctor addr 0x2302914 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method SetKey addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  /// @brief Method SetHashAlgorithm addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SetHashAlgorithm(::StringW strName);

  /// @brief Method VerifySignature addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricSignatureDeformatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsymmetricSignatureDeformatter(AsymmetricSignatureDeformatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricSignatureDeformatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsymmetricSignatureDeformatter(AsymmetricSignatureDeformatter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsymmetricSignatureDeformatter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AsymmetricSignatureDeformatter, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AsymmetricSignatureDeformatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsymmetricSignatureDeformatter*, "System.Security.Cryptography", "AsymmetricSignatureDeformatter");
