#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EaxBlockCipher)
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
class SicBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
struct __EaxBlockCipher__Tag;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
struct __EaxBlockCipher__Tag;
}
namespace Org::BouncyCastle::Crypto::Modes {
class EaxBlockCipher;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher);
// Type: ::Tag
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(968))
// CS Name: ::EaxBlockCipher::Tag
struct CORDL_TYPE __EaxBlockCipher__Tag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____EaxBlockCipher__Tag_Unwrapped
  enum struct ____EaxBlockCipher__Tag_Unwrapped : uint8_t {
    __E_N = static_cast<uint8_t>(0x0u),
    __E_H = static_cast<uint8_t>(0x1u),
    __E_C = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EaxBlockCipher__Tag_Unwrapped() const noexcept {
    return static_cast<____EaxBlockCipher__Tag_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __EaxBlockCipher__Tag(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EaxBlockCipher__Tag();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field N value: static_cast<uint8_t>(0x0u)
  static ::Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag const N;

  /// @brief Field H value: static_cast<uint8_t>(0x1u)
  static ::Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag const H;

  /// @brief Field C value: static_cast<uint8_t>(0x2u)
  static ::Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag const C;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag, 0x1>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag, value__) == 0x0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
// Type: Org.BouncyCastle.Crypto.Modes::EaxBlockCipher
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(969))
// CS Name: ::Org.BouncyCastle.Crypto.Modes::EaxBlockCipher*
class CORDL_TYPE EaxBlockCipher : public ::System::Object {
public:
  // Declarations
  using Tag = ::Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag;

  /// @brief Field cipher, offset 0x10, size 0x8
  __declspec(property(get = __get_cipher, put = __set_cipher))::Org::BouncyCastle::Crypto::Modes::SicBlockCipher* cipher;

  /// @brief Field forEncryption, offset 0x18, size 0x1
  __declspec(property(get = __get_forEncryption, put = __set_forEncryption)) bool forEncryption;

  /// @brief Field blockSize, offset 0x1c, size 0x4
  __declspec(property(get = __get_blockSize, put = __set_blockSize)) int32_t blockSize;

  /// @brief Field mac, offset 0x20, size 0x8
  __declspec(property(get = __get_mac, put = __set_mac))::Org::BouncyCastle::Crypto::IMac* mac;

  /// @brief Field nonceMac, offset 0x28, size 0x8
  __declspec(property(get = __get_nonceMac, put = __set_nonceMac))::ArrayW<uint8_t, ::Array<uint8_t>*> nonceMac;

  /// @brief Field associatedTextMac, offset 0x30, size 0x8
  __declspec(property(get = __get_associatedTextMac, put = __set_associatedTextMac))::ArrayW<uint8_t, ::Array<uint8_t>*> associatedTextMac;

  /// @brief Field macBlock, offset 0x38, size 0x8
  __declspec(property(get = __get_macBlock, put = __set_macBlock))::ArrayW<uint8_t, ::Array<uint8_t>*> macBlock;

  /// @brief Field macSize, offset 0x40, size 0x4
  __declspec(property(get = __get_macSize, put = __set_macSize)) int32_t macSize;

  /// @brief Field bufBlock, offset 0x48, size 0x8
  __declspec(property(get = __get_bufBlock, put = __set_bufBlock))::ArrayW<uint8_t, ::Array<uint8_t>*> bufBlock;

  /// @brief Field bufOff, offset 0x50, size 0x4
  __declspec(property(get = __get_bufOff, put = __set_bufOff)) int32_t bufOff;

  /// @brief Field cipherInitialized, offset 0x54, size 0x1
  __declspec(property(get = __get_cipherInitialized, put = __set_cipherInitialized)) bool cipherInitialized;

  /// @brief Field initialAssociatedText, offset 0x58, size 0x8
  __declspec(property(get = __get_initialAssociatedText, put = __set_initialAssociatedText))::ArrayW<uint8_t, ::Array<uint8_t>*> initialAssociatedText;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*& __get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*> const& __get_cipher() const;

  constexpr void __set_cipher(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher* value);

  constexpr bool& __get_forEncryption();

  constexpr bool const& __get_forEncryption() const;

  constexpr void __set_forEncryption(bool value);

  constexpr int32_t& __get_blockSize();

  constexpr int32_t const& __get_blockSize() const;

  constexpr void __set_blockSize(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __get_mac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __get_mac() const;

  constexpr void __set_mac(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_nonceMac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_nonceMac() const;

  constexpr void __set_nonceMac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_associatedTextMac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_associatedTextMac() const;

  constexpr void __set_associatedTextMac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_macBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_macBlock() const;

  constexpr void __set_macBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_macSize();

  constexpr int32_t const& __get_macSize() const;

  constexpr void __set_macSize(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_bufBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_bufBlock() const;

  constexpr void __set_bufBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_bufOff();

  constexpr int32_t const& __get_bufOff() const;

  constexpr void __set_bufOff(int32_t value);

  constexpr bool& __get_cipherInitialized();

  constexpr bool const& __get_cipherInitialized() const;

  constexpr void __set_cipherInitialized(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_initialAssociatedText();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_initialAssociatedText() const;

  constexpr void __set_initialAssociatedText(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method .ctor, addr 0xf1bd7c, size 0x24c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method get_AlgorithmName, addr 0xf1bfc8, size 0xd4, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetUnderlyingCipher, addr 0xf1c09c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method GetBlockSize, addr 0xf1c0a4, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0xf1c0c8, size 0x490, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method InitCipher, addr 0xf1c558, size 0x198, virtual false, abstract: false, final false
  inline void InitCipher();

  /// @brief Method CalculateMac, addr 0xf1c6f0, size 0x158, virtual false, abstract: false, final false
  inline void CalculateMac();

  /// @brief Method Reset, addr 0xf1c848, size 0x8, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0xf1c850, size 0x1f8, virtual false, abstract: false, final false
  inline void Reset(bool clearMac);

  /// @brief Method ProcessAadByte, addr 0xf1ca48, size 0x100, virtual true, abstract: false, final false
  inline void ProcessAadByte(uint8_t input);

  /// @brief Method ProcessAadBytes, addr 0xf1cb48, size 0x118, virtual true, abstract: false, final false
  inline void ProcessAadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len);

  /// @brief Method ProcessByte, addr 0xf1cc60, size 0x40, virtual true, abstract: false, final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method ProcessBytes, addr 0xf1cefc, size 0x94, virtual true, abstract: false, final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method DoFinal, addr 0xf1cf90, size 0x350, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GetMac, addr 0xf1d374, size 0x74, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method GetUpdateOutputSize, addr 0xf1d3e8, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetUpdateOutputSize(int32_t len);

  /// @brief Method GetOutputSize, addr 0xf1d41c, size 0x1028, virtual true, abstract: false, final false
  inline int32_t GetOutputSize(int32_t len);

  /// @brief Method Process, addr 0xf1cca0, size 0x25c, virtual false, abstract: false, final false
  inline int32_t Process(uint8_t b, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method VerifyMac, addr 0xf1d2e0, size 0x94, virtual false, abstract: false, final false
  inline bool VerifyMac(::ArrayW<uint8_t, ::Array<uint8_t>*> mac, int32_t off);

  // Ctor Parameters [CppParam { name: "", ty: "EaxBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EaxBlockCipher(EaxBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EaxBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EaxBlockCipher(EaxBlockCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EaxBlockCipher();

public:
  /// @brief Field cipher, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher* ___cipher;

  /// @brief Field forEncryption, offset: 0x18, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field blockSize, offset: 0x1c, size: 0x4, def value: None
  int32_t ___blockSize;

  /// @brief Field mac, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___mac;

  /// @brief Field nonceMac, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___nonceMac;

  /// @brief Field associatedTextMac, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___associatedTextMac;

  /// @brief Field macBlock, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___macBlock;

  /// @brief Field macSize, offset: 0x40, size: 0x4, def value: None
  int32_t ___macSize;

  /// @brief Field bufBlock, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___bufBlock;

  /// @brief Field bufOff, offset: 0x50, size: 0x4, def value: None
  int32_t ___bufOff;

  /// @brief Field cipherInitialized, offset: 0x54, size: 0x1, def value: None
  bool ___cipherInitialized;

  /// @brief Field initialAssociatedText, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___initialAssociatedText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher, 0x60>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher, ___cipher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher, ___forEncryption) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher, ___blockSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher, ___mac) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher, ___nonceMac) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher, ___associatedTextMac) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher, ___macBlock) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher, ___macSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher, ___bufBlock) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher, ___bufOff) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher, ___cipherInitialized) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher, ___initialAssociatedText) == 0x58, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag, "Org.BouncyCastle.Crypto.Modes", "EaxBlockCipher/Tag");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "EaxBlockCipher");
