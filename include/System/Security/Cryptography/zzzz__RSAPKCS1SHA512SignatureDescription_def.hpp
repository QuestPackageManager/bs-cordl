#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAPKCS1SHA512SignatureDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDescription_def.hpp"
CORDL_MODULE_EXPORT(RSAPKCS1SHA512SignatureDescription)
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SHA512SignatureDescription;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSAPKCS1SHA512SignatureDescription);
// Dependencies System.Security.Cryptography.RSAPKCS1SignatureDescription
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RSAPKCS1SHA512SignatureDescription
class CORDL_TYPE RSAPKCS1SHA512SignatureDescription : public ::System::Security::Cryptography::RSAPKCS1SignatureDescription {
public:
  // Declarations
  static inline ::System::Security::Cryptography::RSAPKCS1SHA512SignatureDescription* New_ctor();

  /// @brief Method .ctor, addr 0x3caca60, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSAPKCS1SHA512SignatureDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SHA512SignatureDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSAPKCS1SHA512SignatureDescription(RSAPKCS1SHA512SignatureDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SHA512SignatureDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSAPKCS1SHA512SignatureDescription(RSAPKCS1SHA512SignatureDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2970 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAPKCS1SHA512SignatureDescription, 0x38>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SHA512SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SHA512SignatureDescription*, "System.Security.Cryptography", "RSAPKCS1SHA512SignatureDescription");
