#pragma once
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
// Type: System.Security.Cryptography::SignatureDescription
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2965))
// CS Name: ::System.Security.Cryptography::SignatureDescription*
class CORDL_TYPE SignatureDescription : public ::System::Object {
public:
  // Declarations
  /// @brief Field _strKey, offset 0x10, size 0x8
  __declspec(property(get = __get__strKey, put = __set__strKey))::StringW _strKey;

  /// @brief Field _strDigest, offset 0x18, size 0x8
  __declspec(property(get = __get__strDigest, put = __set__strDigest))::StringW _strDigest;

  /// @brief Field _strFormatter, offset 0x20, size 0x8
  __declspec(property(get = __get__strFormatter, put = __set__strFormatter))::StringW _strFormatter;

  /// @brief Field _strDeformatter, offset 0x28, size 0x8
  __declspec(property(get = __get__strDeformatter, put = __set__strDeformatter))::StringW _strDeformatter;

  __declspec(property(put = set_KeyAlgorithm))::StringW KeyAlgorithm;

  __declspec(property(put = set_DigestAlgorithm))::StringW DigestAlgorithm;

  __declspec(property(put = set_FormatterAlgorithm))::StringW FormatterAlgorithm;

  __declspec(property(put = set_DeformatterAlgorithm))::StringW DeformatterAlgorithm;

  constexpr ::StringW& __get__strKey();

  constexpr ::StringW const& __get__strKey() const;

  constexpr void __set__strKey(::StringW value);

  constexpr ::StringW& __get__strDigest();

  constexpr ::StringW const& __get__strDigest() const;

  constexpr void __set__strDigest(::StringW value);

  constexpr ::StringW& __get__strFormatter();

  constexpr ::StringW const& __get__strFormatter() const;

  constexpr void __set__strFormatter(::StringW value);

  constexpr ::StringW& __get__strDeformatter();

  constexpr ::StringW const& __get__strDeformatter() const;

  constexpr void __set__strDeformatter(::StringW value);

  static inline ::System::Security::Cryptography::SignatureDescription* New_ctor();

  /// @brief Method .ctor addr 0x23112c4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method set_KeyAlgorithm addr 0x23112cc size 0x8 virtual false final false
  inline void set_KeyAlgorithm(::StringW value);

  /// @brief Method set_DigestAlgorithm addr 0x23112d4 size 0x8 virtual false final false
  inline void set_DigestAlgorithm(::StringW value);

  /// @brief Method set_FormatterAlgorithm addr 0x23112dc size 0x8 virtual false final false
  inline void set_FormatterAlgorithm(::StringW value);

  /// @brief Method set_DeformatterAlgorithm addr 0x23112e4 size 0x8 virtual false final false
  inline void set_DeformatterAlgorithm(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "SignatureDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureDescription(SignatureDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureDescription(SignatureDescription const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureDescription();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::SignatureDescription, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SignatureDescription, ____strKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SignatureDescription, ____strDigest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SignatureDescription, ____strFormatter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SignatureDescription, ____strDeformatter) == 0x28, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SignatureDescription*, "System.Security.Cryptography", "SignatureDescription");
