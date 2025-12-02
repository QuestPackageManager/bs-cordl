#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAPKCS1SignatureDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SignatureDescription_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RSAPKCS1SignatureDescription)
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SignatureDescription;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSAPKCS1SignatureDescription);
// Dependencies System.Security.Cryptography.SignatureDescription
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RSAPKCS1SignatureDescription
class CORDL_TYPE RSAPKCS1SignatureDescription : public ::System::Security::Cryptography::SignatureDescription {
public:
  // Declarations
  /// @brief Field _hashAlgorithm, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hashAlgorithm, put = __cordl_internal_set__hashAlgorithm)) ::StringW _hashAlgorithm;

  static inline ::System::Security::Cryptography::RSAPKCS1SignatureDescription* New_ctor(::StringW hashAlgorithm, ::StringW digestAlgorithm);

  constexpr ::StringW const& __cordl_internal_get__hashAlgorithm() const;

  constexpr ::StringW& __cordl_internal_get__hashAlgorithm();

  constexpr void __cordl_internal_set__hashAlgorithm(::StringW value);

  /// @brief Method .ctor, addr 0x58f03f4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::StringW hashAlgorithm, ::StringW digestAlgorithm);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSAPKCS1SignatureDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSAPKCS1SignatureDescription(RSAPKCS1SignatureDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSAPKCS1SignatureDescription(RSAPKCS1SignatureDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2983 };

  /// @brief Field _hashAlgorithm, offset: 0x30, size: 0x8, def value: None
  ::StringW ____hashAlgorithm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::RSAPKCS1SignatureDescription, ____hashAlgorithm) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAPKCS1SignatureDescription, 0x38>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SignatureDescription*, "System.Security.Cryptography", "RSAPKCS1SignatureDescription");
