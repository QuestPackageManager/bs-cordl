#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__CipherMode_def.hpp"
#include "System/Security/Cryptography/zzzz__PaddingMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SymmetricAlgorithm)
namespace System::Security::Cryptography {
struct PaddingMode;
}
namespace System::Security::Cryptography {
struct CipherMode;
}
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class SymmetricAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::SymmetricAlgorithm);
// Type: System.Security.Cryptography::SymmetricAlgorithm
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2922)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2921))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2973))
// CS Name: ::System.Security.Cryptography::SymmetricAlgorithm*
class CORDL_TYPE SymmetricAlgorithm : public ::System::Object {
public:
  // Declarations
  /// @brief Field BlockSizeValue, offset 0x10, size 0x4
  __declspec(property(get = __get_BlockSizeValue, put = __set_BlockSizeValue)) int32_t BlockSizeValue;

  /// @brief Field FeedbackSizeValue, offset 0x14, size 0x4
  __declspec(property(get = __get_FeedbackSizeValue, put = __set_FeedbackSizeValue)) int32_t FeedbackSizeValue;

  /// @brief Field IVValue, offset 0x18, size 0x8
  __declspec(property(get = __get_IVValue, put = __set_IVValue))::ArrayW<uint8_t, ::Array<uint8_t>*> IVValue;

  /// @brief Field KeyValue, offset 0x20, size 0x8
  __declspec(property(get = __get_KeyValue, put = __set_KeyValue))::ArrayW<uint8_t, ::Array<uint8_t>*> KeyValue;

  /// @brief Field LegalBlockSizesValue, offset 0x28, size 0x8
  __declspec(property(get = __get_LegalBlockSizesValue,
                      put = __set_LegalBlockSizesValue))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> LegalBlockSizesValue;

  /// @brief Field LegalKeySizesValue, offset 0x30, size 0x8
  __declspec(property(get = __get_LegalKeySizesValue,
                      put = __set_LegalKeySizesValue))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> LegalKeySizesValue;

  /// @brief Field KeySizeValue, offset 0x38, size 0x4
  __declspec(property(get = __get_KeySizeValue, put = __set_KeySizeValue)) int32_t KeySizeValue;

  /// @brief Field ModeValue, offset 0x3c, size 0x4
  __declspec(property(get = __get_ModeValue, put = __set_ModeValue))::System::Security::Cryptography::CipherMode ModeValue;

  /// @brief Field PaddingValue, offset 0x40, size 0x4
  __declspec(property(get = __get_PaddingValue, put = __set_PaddingValue))::System::Security::Cryptography::PaddingMode PaddingValue;

  __declspec(property(get = get_BlockSize, put = set_BlockSize)) int32_t BlockSize;

  __declspec(property(get = get_FeedbackSize)) int32_t FeedbackSize;

  __declspec(property(get = get_IV, put = set_IV))::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  __declspec(property(get = get_Key, put = set_Key))::ArrayW<uint8_t, ::Array<uint8_t>*> Key;

  __declspec(property(get = get_LegalKeySizes))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> LegalKeySizes;

  __declspec(property(get = get_KeySize, put = set_KeySize)) int32_t KeySize;

  __declspec(property(get = get_Mode, put = set_Mode))::System::Security::Cryptography::CipherMode Mode;

  __declspec(property(get = get_Padding, put = set_Padding))::System::Security::Cryptography::PaddingMode Padding;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get_BlockSizeValue();

  constexpr int32_t const& __get_BlockSizeValue() const;

  constexpr void __set_BlockSizeValue(int32_t value);

  constexpr int32_t& __get_FeedbackSizeValue();

  constexpr int32_t const& __get_FeedbackSizeValue() const;

  constexpr void __set_FeedbackSizeValue(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_IVValue();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_IVValue() const;

  constexpr void __set_IVValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_KeyValue();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_KeyValue() const;

  constexpr void __set_KeyValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>& __get_LegalBlockSizesValue();

  constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> const& __get_LegalBlockSizesValue() const;

  constexpr void __set_LegalBlockSizesValue(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>& __get_LegalKeySizesValue();

  constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> const& __get_LegalKeySizesValue() const;

  constexpr void __set_LegalKeySizesValue(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  constexpr int32_t& __get_KeySizeValue();

  constexpr int32_t const& __get_KeySizeValue() const;

  constexpr void __set_KeySizeValue(int32_t value);

  constexpr ::System::Security::Cryptography::CipherMode& __get_ModeValue();

  constexpr ::System::Security::Cryptography::CipherMode const& __get_ModeValue() const;

  constexpr void __set_ModeValue(::System::Security::Cryptography::CipherMode value);

  constexpr ::System::Security::Cryptography::PaddingMode& __get_PaddingValue();

  constexpr ::System::Security::Cryptography::PaddingMode const& __get_PaddingValue() const;

  constexpr void __set_PaddingValue(::System::Security::Cryptography::PaddingMode value);

  static inline ::System::Security::Cryptography::SymmetricAlgorithm* New_ctor();

  /// @brief Method .ctor addr 0x246a35c size 0x24 virtual false final false
  inline void _ctor();

  /// @brief Method Dispose addr 0x246a380 size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Clear addr 0x246a3ec size 0x94 virtual false final false
  inline void Clear();

  /// @brief Method Dispose addr 0x246a480 size 0x4c virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method get_BlockSize addr 0x246a4cc size 0x8 virtual true final false
  inline int32_t get_BlockSize();

  /// @brief Method set_BlockSize addr 0x246a4d4 size 0xf0 virtual true final false
  inline void set_BlockSize(int32_t value);

  /// @brief Method get_FeedbackSize addr 0x246a5c4 size 0x8 virtual true final false
  inline int32_t get_FeedbackSize();

  /// @brief Method get_IV addr 0x246a5cc size 0x94 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_IV();

  /// @brief Method set_IV addr 0x246a660 size 0x168 virtual true final false
  inline void set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_Key addr 0x246a7c8 size 0x94 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Key();

  /// @brief Method set_Key addr 0x246a85c size 0x160 virtual true final false
  inline void set_Key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_LegalKeySizes addr 0x246aa58 size 0x78 virtual true final false
  inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> get_LegalKeySizes();

  /// @brief Method get_KeySize addr 0x246aad0 size 0x8 virtual true final false
  inline int32_t get_KeySize();

  /// @brief Method set_KeySize addr 0x246aad8 size 0x84 virtual true final false
  inline void set_KeySize(int32_t value);

  /// @brief Method get_Mode addr 0x246ab5c size 0x8 virtual true final false
  inline ::System::Security::Cryptography::CipherMode get_Mode();

  /// @brief Method set_Mode addr 0x246ab64 size 0x7c virtual true final false
  inline void set_Mode(::System::Security::Cryptography::CipherMode value);

  /// @brief Method get_Padding addr 0x246abe0 size 0x8 virtual true final false
  inline ::System::Security::Cryptography::PaddingMode get_Padding();

  /// @brief Method set_Padding addr 0x246abe8 size 0x7c virtual true final false
  inline void set_Padding(::System::Security::Cryptography::PaddingMode value);

  /// @brief Method ValidKeySize addr 0x246a9bc size 0x9c virtual false final false
  inline bool ValidKeySize(int32_t bitLength);

  /// @brief Method Create addr 0x246ac64 size 0xa0 virtual false final false
  static inline ::System::Security::Cryptography::SymmetricAlgorithm* Create(::StringW algName);

  /// @brief Method CreateEncryptor addr 0x246ad5c size 0x50 virtual true final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor();

  /// @brief Method CreateEncryptor addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method CreateDecryptor addr 0x246adac size 0x50 virtual true final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor();

  /// @brief Method CreateDecryptor addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method GenerateKey addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GenerateKey();

  /// @brief Method GenerateIV addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GenerateIV();

  // Ctor Parameters [CppParam { name: "", ty: "SymmetricAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SymmetricAlgorithm(SymmetricAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SymmetricAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SymmetricAlgorithm(SymmetricAlgorithm const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SymmetricAlgorithm();

public:
  /// @brief Field BlockSizeValue, offset: 0x10, size: 0x4, def value: None
  int32_t ___BlockSizeValue;

  /// @brief Field FeedbackSizeValue, offset: 0x14, size: 0x4, def value: None
  int32_t ___FeedbackSizeValue;

  /// @brief Field IVValue, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___IVValue;

  /// @brief Field KeyValue, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___KeyValue;

  /// @brief Field LegalBlockSizesValue, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> ___LegalBlockSizesValue;

  /// @brief Field LegalKeySizesValue, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> ___LegalKeySizesValue;

  /// @brief Field KeySizeValue, offset: 0x38, size: 0x4, def value: None
  int32_t ___KeySizeValue;

  /// @brief Field ModeValue, offset: 0x3c, size: 0x4, def value: None
  ::System::Security::Cryptography::CipherMode ___ModeValue;

  /// @brief Field PaddingValue, offset: 0x40, size: 0x4, def value: None
  ::System::Security::Cryptography::PaddingMode ___PaddingValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::SymmetricAlgorithm, 0x48>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::SymmetricAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SymmetricAlgorithm*, "System.Security.Cryptography", "SymmetricAlgorithm");
