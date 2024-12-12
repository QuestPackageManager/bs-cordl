#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAPKCS1SignatureFormatter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_def.hpp"
CORDL_MODULE_EXPORT(RSAPKCS1SignatureFormatter)
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SignatureFormatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSAPKCS1SignatureFormatter);
// Dependencies System.Security.Cryptography.AsymmetricSignatureFormatter
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RSAPKCS1SignatureFormatter
class CORDL_TYPE RSAPKCS1SignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter {
public:
  // Declarations
  static inline ::System::Security::Cryptography::RSAPKCS1SignatureFormatter* New_ctor();

  /// @brief Method .ctor, addr 0x3cb40fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSAPKCS1SignatureFormatter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureFormatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSAPKCS1SignatureFormatter(RSAPKCS1SignatureFormatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureFormatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSAPKCS1SignatureFormatter(RSAPKCS1SignatureFormatter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2983 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAPKCS1SignatureFormatter, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SignatureFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SignatureFormatter*, "System.Security.Cryptography", "RSAPKCS1SignatureFormatter");
