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
struct CipherMode;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
class KeySizes;
}
namespace System::Security::Cryptography {
struct PaddingMode;
}
namespace System {
class IDisposable;
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
// CS Name: ::System.Security.Cryptography::SymmetricAlgorithm*
class CORDL_TYPE SymmetricAlgorithm : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BlockSize, put = set_BlockSize)) int32_t BlockSize;

  /// @brief Field BlockSizeValue, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_BlockSizeValue, put = __cordl_internal_set_BlockSizeValue)) int32_t BlockSizeValue;

  __declspec(property(get = get_FeedbackSize)) int32_t FeedbackSize;

  /// @brief Field FeedbackSizeValue, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_FeedbackSizeValue, put = __cordl_internal_set_FeedbackSizeValue)) int32_t FeedbackSizeValue;

  __declspec(property(get = get_IV, put = set_IV))::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  /// @brief Field IVValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_IVValue, put = __cordl_internal_set_IVValue))::ArrayW<uint8_t, ::Array<uint8_t>*> IVValue;

  __declspec(property(get = get_Key, put = set_Key))::ArrayW<uint8_t, ::Array<uint8_t>*> Key;

  __declspec(property(get = get_KeySize, put = set_KeySize)) int32_t KeySize;

  /// @brief Field KeySizeValue, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_KeySizeValue, put = __cordl_internal_set_KeySizeValue)) int32_t KeySizeValue;

  /// @brief Field KeyValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyValue, put = __cordl_internal_set_KeyValue))::ArrayW<uint8_t, ::Array<uint8_t>*> KeyValue;

  /// @brief Field LegalBlockSizesValue, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get_LegalBlockSizesValue,
               put = __cordl_internal_set_LegalBlockSizesValue))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> LegalBlockSizesValue;

  __declspec(property(get = get_LegalKeySizes))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> LegalKeySizes;

  /// @brief Field LegalKeySizesValue, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_LegalKeySizesValue,
                      put = __cordl_internal_set_LegalKeySizesValue))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> LegalKeySizesValue;

  __declspec(property(get = get_Mode, put = set_Mode))::System::Security::Cryptography::CipherMode Mode;

  /// @brief Field ModeValue, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_ModeValue, put = __cordl_internal_set_ModeValue))::System::Security::Cryptography::CipherMode ModeValue;

  __declspec(property(get = get_Padding, put = set_Padding))::System::Security::Cryptography::PaddingMode Padding;

  /// @brief Field PaddingValue, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_PaddingValue, put = __cordl_internal_set_PaddingValue))::System::Security::Cryptography::PaddingMode PaddingValue;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Clear, addr 0x255e158, size 0x94, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Create, addr 0x255e9d0, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::SymmetricAlgorithm* Create(::StringW algName);

  /// @brief Method CreateDecryptor, addr 0x255eb18, size 0x50, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor();

  /// @brief Method CreateDecryptor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method CreateEncryptor, addr 0x255eac8, size 0x50, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor();

  /// @brief Method CreateEncryptor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method Dispose, addr 0x255e0ec, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x255e1ec, size 0x4c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GenerateIV, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GenerateIV();

  /// @brief Method GenerateKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GenerateKey();

  static inline ::System::Security::Cryptography::SymmetricAlgorithm* New_ctor();

  /// @brief Method ValidKeySize, addr 0x255e728, size 0x9c, virtual false, abstract: false, final false
  inline bool ValidKeySize(int32_t bitLength);

  constexpr int32_t const& __cordl_internal_get_BlockSizeValue() const;

  constexpr int32_t& __cordl_internal_get_BlockSizeValue();

  constexpr int32_t const& __cordl_internal_get_FeedbackSizeValue() const;

  constexpr int32_t& __cordl_internal_get_FeedbackSizeValue();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_IVValue() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_IVValue();

  constexpr int32_t const& __cordl_internal_get_KeySizeValue() const;

  constexpr int32_t& __cordl_internal_get_KeySizeValue();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_KeyValue() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_KeyValue();

  constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> const& __cordl_internal_get_LegalBlockSizesValue() const;

  constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>& __cordl_internal_get_LegalBlockSizesValue();

  constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> const& __cordl_internal_get_LegalKeySizesValue() const;

  constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>& __cordl_internal_get_LegalKeySizesValue();

  constexpr ::System::Security::Cryptography::CipherMode const& __cordl_internal_get_ModeValue() const;

  constexpr ::System::Security::Cryptography::CipherMode& __cordl_internal_get_ModeValue();

  constexpr ::System::Security::Cryptography::PaddingMode const& __cordl_internal_get_PaddingValue() const;

  constexpr ::System::Security::Cryptography::PaddingMode& __cordl_internal_get_PaddingValue();

  constexpr void __cordl_internal_set_BlockSizeValue(int32_t value);

  constexpr void __cordl_internal_set_FeedbackSizeValue(int32_t value);

  constexpr void __cordl_internal_set_IVValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_KeySizeValue(int32_t value);

  constexpr void __cordl_internal_set_KeyValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_LegalBlockSizesValue(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  constexpr void __cordl_internal_set_LegalKeySizesValue(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  constexpr void __cordl_internal_set_ModeValue(::System::Security::Cryptography::CipherMode value);

  constexpr void __cordl_internal_set_PaddingValue(::System::Security::Cryptography::PaddingMode value);

  /// @brief Method .ctor, addr 0x255e0c8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BlockSize, addr 0x255e238, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_BlockSize();

  /// @brief Method get_FeedbackSize, addr 0x255e330, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_FeedbackSize();

  /// @brief Method get_IV, addr 0x255e338, size 0x94, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_IV();

  /// @brief Method get_Key, addr 0x255e534, size 0x94, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Key();

  /// @brief Method get_KeySize, addr 0x255e83c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Method get_LegalKeySizes, addr 0x255e7c4, size 0x78, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> get_LegalKeySizes();

  /// @brief Method get_Mode, addr 0x255e8c8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::CipherMode get_Mode();

  /// @brief Method get_Padding, addr 0x255e94c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::PaddingMode get_Padding();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_BlockSize, addr 0x255e240, size 0xf0, virtual true, abstract: false, final false
  inline void set_BlockSize(int32_t value);

  /// @brief Method set_IV, addr 0x255e3cc, size 0x168, virtual true, abstract: false, final false
  inline void set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_Key, addr 0x255e5c8, size 0x160, virtual true, abstract: false, final false
  inline void set_Key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_KeySize, addr 0x255e844, size 0x84, virtual true, abstract: false, final false
  inline void set_KeySize(int32_t value);

  /// @brief Method set_Mode, addr 0x255e8d0, size 0x7c, virtual true, abstract: false, final false
  inline void set_Mode(::System::Security::Cryptography::CipherMode value);

  /// @brief Method set_Padding, addr 0x255e954, size 0x7c, virtual true, abstract: false, final false
  inline void set_Padding(::System::Security::Cryptography::PaddingMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SymmetricAlgorithm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SymmetricAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SymmetricAlgorithm(SymmetricAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SymmetricAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SymmetricAlgorithm(SymmetricAlgorithm const&) = delete;

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

static_assert(offsetof(::System::Security::Cryptography::SymmetricAlgorithm, ___BlockSizeValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SymmetricAlgorithm, ___FeedbackSizeValue) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SymmetricAlgorithm, ___IVValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SymmetricAlgorithm, ___KeyValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SymmetricAlgorithm, ___LegalBlockSizesValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SymmetricAlgorithm, ___LegalKeySizesValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SymmetricAlgorithm, ___KeySizeValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SymmetricAlgorithm, ___ModeValue) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SymmetricAlgorithm, ___PaddingValue) == 0x40, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::SymmetricAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SymmetricAlgorithm*, "System.Security.Cryptography", "SymmetricAlgorithm");
