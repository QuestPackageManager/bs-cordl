#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsymmetricAlgorithm)
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::AsymmetricAlgorithm);
// Type: System.Security.Cryptography::AsymmetricAlgorithm
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2918))
// CS Name: ::System.Security.Cryptography::AsymmetricAlgorithm*
class CORDL_TYPE AsymmetricAlgorithm : public ::System::Object {
public:
  // Declarations
  /// @brief Field KeySizeValue, offset 0x10, size 0x4
  __declspec(property(get = __get_KeySizeValue, put = __set_KeySizeValue)) int32_t KeySizeValue;

  /// @brief Field LegalKeySizesValue, offset 0x18, size 0x8
  __declspec(property(get = __get_LegalKeySizesValue,
                      put = __set_LegalKeySizesValue))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> LegalKeySizesValue;

  __declspec(property(get = get_KeySize, put = set_KeySize)) int32_t KeySize;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get_KeySizeValue();

  constexpr int32_t const& __get_KeySizeValue() const;

  constexpr void __set_KeySizeValue(int32_t value);

  constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>& __get_LegalKeySizesValue();

  constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> const& __get_LegalKeySizesValue() const;

  constexpr void __set_LegalKeySizesValue(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  static inline ::System::Security::Cryptography::AsymmetricAlgorithm* New_ctor();

  /// @brief Method .ctor, addr 0x245bde8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Dispose, addr 0x245bdf0, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Clear, addr 0x245bdf4, size 0x6c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x245be60, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method get_KeySize, addr 0x245be64, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Method set_KeySize, addr 0x245be6c, size 0xdc, virtual true, abstract: false, final false
  inline void set_KeySize(int32_t value);

  /// @brief Method FromXmlString, addr 0x245bf70, size 0x40, virtual true, abstract: false, final false
  inline void FromXmlString(::StringW xmlString);

  /// @brief Method ToXmlString, addr 0x245bfb0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW ToXmlString(bool includePrivateParameters);

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsymmetricAlgorithm(AsymmetricAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsymmetricAlgorithm(AsymmetricAlgorithm const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsymmetricAlgorithm();

public:
  /// @brief Field KeySizeValue, offset: 0x10, size: 0x4, def value: None
  int32_t ___KeySizeValue;

  /// @brief Field LegalKeySizesValue, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> ___LegalKeySizesValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AsymmetricAlgorithm, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::AsymmetricAlgorithm, ___KeySizeValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::AsymmetricAlgorithm, ___LegalKeySizesValue) == 0x18, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AsymmetricAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsymmetricAlgorithm*, "System.Security.Cryptography", "AsymmetricAlgorithm");
