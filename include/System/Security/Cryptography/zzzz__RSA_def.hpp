#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSA.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSA)
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
// CS Name: ::System.Security.Cryptography::RSA*
class CORDL_TYPE RSA : public ::System::Security::Cryptography::AsymmetricAlgorithm {
public:
  // Declarations
  /// @brief Method Create, addr 0x27e61e8, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* Create();

  /// @brief Method EncryptValue, addr 0x27e6288, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptValue(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb);

  /// @brief Method ExportParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);

  /// @brief Method FromXmlString, addr 0x27e62e8, size 0x538, virtual true, abstract: false, final false
  inline void FromXmlString(::StringW xmlString);

  /// @brief Method ImportParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ImportParameters(::System::Security::Cryptography::RSAParameters parameters);

  static inline ::System::Security::Cryptography::RSA* New_ctor();

  /// @brief Method ToXmlString, addr 0x27e683c, size 0x43c, virtual true, abstract: false, final false
  inline ::StringW ToXmlString(bool includePrivateParameters);

  /// @brief Method .ctor, addr 0x27e61e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSA();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RSA", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSA(RSA&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSA", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSA(RSA const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSA, 0x20>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSA);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSA*, "System.Security.Cryptography", "RSA");
