#pragma once
// IWYU pragma private; include "System/Security/Cryptography/SignatureDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SignatureDescription)
// Forward declare root types
namespace System::Security::Cryptography {
class SignatureDescription;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::SignatureDescription);
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.SignatureDescription
class CORDL_TYPE SignatureDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_DeformatterAlgorithm)) ::StringW DeformatterAlgorithm;

  __declspec(property(put = set_DigestAlgorithm)) ::StringW DigestAlgorithm;

  __declspec(property(put = set_FormatterAlgorithm)) ::StringW FormatterAlgorithm;

  __declspec(property(put = set_KeyAlgorithm)) ::StringW KeyAlgorithm;

  /// @brief Field _strDeformatter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__strDeformatter, put = __cordl_internal_set__strDeformatter)) ::StringW _strDeformatter;

  /// @brief Field _strDigest, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__strDigest, put = __cordl_internal_set__strDigest)) ::StringW _strDigest;

  /// @brief Field _strFormatter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__strFormatter, put = __cordl_internal_set__strFormatter)) ::StringW _strFormatter;

  /// @brief Field _strKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__strKey, put = __cordl_internal_set__strKey)) ::StringW _strKey;

  static inline ::System::Security::Cryptography::SignatureDescription* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__strDeformatter() const;

  constexpr ::StringW& __cordl_internal_get__strDeformatter();

  constexpr ::StringW const& __cordl_internal_get__strDigest() const;

  constexpr ::StringW& __cordl_internal_get__strDigest();

  constexpr ::StringW const& __cordl_internal_get__strFormatter() const;

  constexpr ::StringW& __cordl_internal_get__strFormatter();

  constexpr ::StringW const& __cordl_internal_get__strKey() const;

  constexpr ::StringW& __cordl_internal_get__strKey();

  constexpr void __cordl_internal_set__strDeformatter(::StringW value);

  constexpr void __cordl_internal_set__strDigest(::StringW value);

  constexpr void __cordl_internal_set__strFormatter(::StringW value);

  constexpr void __cordl_internal_set__strKey(::StringW value);

  /// @brief Method .ctor, addr 0x3cac85c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_DeformatterAlgorithm, addr 0x3cac87c, size 0x8, virtual false, abstract: false, final false
  inline void set_DeformatterAlgorithm(::StringW value);

  /// @brief Method set_DigestAlgorithm, addr 0x3cac86c, size 0x8, virtual false, abstract: false, final false
  inline void set_DigestAlgorithm(::StringW value);

  /// @brief Method set_FormatterAlgorithm, addr 0x3cac874, size 0x8, virtual false, abstract: false, final false
  inline void set_FormatterAlgorithm(::StringW value);

  /// @brief Method set_KeyAlgorithm, addr 0x3cac864, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyAlgorithm(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignatureDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureDescription(SignatureDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureDescription(SignatureDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2965 };

  /// @brief Field _strKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ____strKey;

  /// @brief Field _strDigest, offset: 0x18, size: 0x8, def value: None
  ::StringW ____strDigest;

  /// @brief Field _strFormatter, offset: 0x20, size: 0x8, def value: None
  ::StringW ____strFormatter;

  /// @brief Field _strDeformatter, offset: 0x28, size: 0x8, def value: None
  ::StringW ____strDeformatter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::SignatureDescription, ____strKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SignatureDescription, ____strDigest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SignatureDescription, ____strFormatter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SignatureDescription, ____strDeformatter) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::SignatureDescription, 0x30>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SignatureDescription*, "System.Security.Cryptography", "SignatureDescription");
