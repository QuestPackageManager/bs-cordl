#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AsymmetricAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsymmetricAlgorithm)
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::AsymmetricAlgorithm);
// Dependencies System.IDisposable, System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.AsymmetricAlgorithm
class CORDL_TYPE AsymmetricAlgorithm : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_KeySize, put = set_KeySize)) int32_t KeySize;

  /// @brief Field KeySizeValue, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_KeySizeValue, put = __cordl_internal_set_KeySizeValue)) int32_t KeySizeValue;

  /// @brief Field LegalKeySizesValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_LegalKeySizesValue,
                      put = __cordl_internal_set_LegalKeySizesValue)) ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>
      LegalKeySizesValue;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Clear, addr 0x3ca06dc, size 0x6c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x3ca06d8, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x3ca0748, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method FromXmlString, addr 0x3ca0850, size 0x38, virtual true, abstract: false, final false
  inline void FromXmlString(::StringW xmlString);

  static inline ::System::Security::Cryptography::AsymmetricAlgorithm* New_ctor();

  /// @brief Method ToXmlString, addr 0x3ca0888, size 0x38, virtual true, abstract: false, final false
  inline ::StringW ToXmlString(bool includePrivateParameters);

  constexpr int32_t const& __cordl_internal_get_KeySizeValue() const;

  constexpr int32_t& __cordl_internal_get_KeySizeValue();

  constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> const& __cordl_internal_get_LegalKeySizesValue() const;

  constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>& __cordl_internal_get_LegalKeySizesValue();

  constexpr void __cordl_internal_set_KeySizeValue(int32_t value);

  constexpr void __cordl_internal_set_LegalKeySizesValue(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  /// @brief Method .ctor, addr 0x3ca06d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_KeySize, addr 0x3ca074c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_KeySize, addr 0x3ca0754, size 0xd4, virtual true, abstract: false, final false
  inline void set_KeySize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsymmetricAlgorithm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsymmetricAlgorithm(AsymmetricAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsymmetricAlgorithm(AsymmetricAlgorithm const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2917 };

  /// @brief Field KeySizeValue, offset: 0x10, size: 0x4, def value: None
  int32_t ___KeySizeValue;

  /// @brief Field LegalKeySizesValue, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> ___LegalKeySizesValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::AsymmetricAlgorithm, ___KeySizeValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::AsymmetricAlgorithm, ___LegalKeySizesValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AsymmetricAlgorithm, 0x20>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AsymmetricAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsymmetricAlgorithm*, "System.Security.Cryptography", "AsymmetricAlgorithm");
