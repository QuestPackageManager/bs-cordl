#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SignatureDescription_def.hpp"
CORDL_MODULE_EXPORT(DSASignatureDescription)
// Forward declare root types
namespace System::Security::Cryptography {
class DSASignatureDescription;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::DSASignatureDescription);
// Type: System.Security.Cryptography::DSASignatureDescription
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::DSASignatureDescription*
class CORDL_TYPE DSASignatureDescription : public ::System::Security::Cryptography::SignatureDescription {
public:
  // Declarations
  static inline ::System::Security::Cryptography::DSASignatureDescription* New_ctor();

  /// @brief Method .ctor, addr 0x255e010, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DSASignatureDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DSASignatureDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DSASignatureDescription(DSASignatureDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DSASignatureDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DSASignatureDescription(DSASignatureDescription const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DSASignatureDescription, 0x30>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DSASignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSASignatureDescription*, "System.Security.Cryptography", "DSASignatureDescription");
