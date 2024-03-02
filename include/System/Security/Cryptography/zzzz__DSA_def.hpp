#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DSA)
namespace System::Security::Cryptography {
struct DSAParameters;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DSA;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::DSA);
// Type: System.Security.Cryptography::DSA
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::DSA*
class CORDL_TYPE DSA : public ::System::Security::Cryptography::AsymmetricAlgorithm {
public:
  // Declarations
  /// @brief Method Create, addr 0x2550f60, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::DSA* Create();

  /// @brief Method ExportParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters);

  /// @brief Method FromXmlString, addr 0x2550fbc, size 0x6ac, virtual true, abstract: false, final false
  inline void FromXmlString(::StringW xmlString);

  /// @brief Method ImportParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ImportParameters(::System::Security::Cryptography::DSAParameters parameters);

  static inline ::System::Security::Cryptography::DSA* New_ctor();

  /// @brief Method ToXmlString, addr 0x2551668, size 0x468, virtual true, abstract: false, final false
  inline ::StringW ToXmlString(bool includePrivateParameters);

  /// @brief Method VerifySignature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  /// @brief Method .ctor, addr 0x2550f58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DSA();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DSA", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DSA(DSA&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DSA", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DSA(DSA const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DSA, 0x20>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DSA);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSA*, "System.Security.Cryptography", "DSA");
