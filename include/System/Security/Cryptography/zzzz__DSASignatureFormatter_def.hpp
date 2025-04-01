#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DSASignatureFormatter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DSASignatureFormatter)
// Forward declare root types
namespace System::Security::Cryptography {
class DSASignatureFormatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::DSASignatureFormatter);
// Dependencies System.Security.Cryptography.AsymmetricSignatureFormatter
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.DSASignatureFormatter
class CORDL_TYPE DSASignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter {
public:
  // Declarations
  /// @brief Field _oid, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__oid, put = __cordl_internal_set__oid)) ::StringW _oid;

  static inline ::System::Security::Cryptography::DSASignatureFormatter* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__oid() const;

  constexpr ::StringW& __cordl_internal_get__oid();

  constexpr void __cordl_internal_set__oid(::StringW value);

  /// @brief Method .ctor, addr 0x3c9bfb8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DSASignatureFormatter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DSASignatureFormatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DSASignatureFormatter(DSASignatureFormatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DSASignatureFormatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DSASignatureFormatter(DSASignatureFormatter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2932 };

  /// @brief Field _oid, offset: 0x10, size: 0x8, def value: None
  ::StringW ____oid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::DSASignatureFormatter, ____oid) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DSASignatureFormatter, 0x18>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DSASignatureFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSASignatureFormatter*, "System.Security.Cryptography", "DSASignatureFormatter");
