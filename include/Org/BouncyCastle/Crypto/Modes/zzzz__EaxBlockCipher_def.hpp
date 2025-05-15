#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Modes/EaxBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EaxBlockCipher)
namespace Org::BouncyCastle::Crypto::Modes {
struct EaxBlockCipher_Tag;
}
namespace Org::BouncyCastle::Crypto::Modes {
class SicBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
struct EaxBlockCipher_Tag;
}
namespace Org::BouncyCastle::Crypto::Modes {
class EaxBlockCipher;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher_Tag);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher);
// Dependencies
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: true
// CS Name: Org.BouncyCastle.Crypto.Modes.EaxBlockCipher/Tag
struct CORDL_TYPE EaxBlockCipher_Tag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __EaxBlockCipher_Tag_Unwrapped
  enum struct __EaxBlockCipher_Tag_Unwrapped : uint8_t {
    __E_N = static_cast<uint8_t>(0x0u),
    __E_H = static_cast<uint8_t>(0x1u),
    __E_C = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EaxBlockCipher_Tag_Unwrapped() const noexcept {
    return static_cast<__EaxBlockCipher_Tag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EaxBlockCipher_Tag();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr EaxBlockCipher_Tag(uint8_t value__) noexcept;

  /// @brief Field C value: U8(2)
  static ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher_Tag const C;

  /// @brief Field H value: U8(1)
  static ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher_Tag const H;

  /// @brief Field N value: U8(0)
  static ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher_Tag const N;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 968 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher_Tag, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher_Tag, 0x1>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
// Dependencies Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher, Org.BouncyCastle.Crypto.Modes.IAeadCipher, System.Object
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Modes.EaxBlockCipher
class CORDL_TYPE EaxBlockCipher : public ::System::Object {
public:
  // Declarations
  using Tag = ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher_Tag;

  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field associatedTextMac, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_associatedTextMac, put = __cordl_internal_set_associatedTextMac)) ::ArrayW<uint8_t, ::Array<uint8_t>*> associatedTextMac;

  /// @brief Field blockSize, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_blockSize, put = __cordl_internal_set_blockSize)) int32_t blockSize;

  /// @brief Field bufBlock, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_bufBlock, put = __cordl_internal_set_bufBlock)) ::ArrayW<uint8_t, ::Array<uint8_t>*> bufBlock;

  /// @brief Field bufOff, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_bufOff, put = __cordl_internal_set_bufOff)) int32_t bufOff;

  /// @brief Field cipher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher)) ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher* cipher;

  /// @brief Field cipherInitialized, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_cipherInitialized, put = __cordl_internal_set_cipherInitialized)) bool cipherInitialized;

  /// @brief Field forEncryption, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field initialAssociatedText, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_initialAssociatedText, put = __cordl_internal_set_initialAssociatedText)) ::ArrayW<uint8_t, ::Array<uint8_t>*> initialAssociatedText;

  /// @brief Field mac, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mac, put = __cordl_internal_set_mac)) ::Org::BouncyCastle::Crypto::IMac* mac;

  /// @brief Field macBlock, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_macBlock, put = __cordl_internal_set_macBlock)) ::ArrayW<uint8_t, ::Array<uint8_t>*> macBlock;

  /// @brief Field macSize, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_macSize, put = __cordl_internal_set_macSize)) int32_t macSize;

  /// @brief Field nonceMac, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nonceMac, put = __cordl_internal_set_nonceMac)) ::ArrayW<uint8_t, ::Array<uint8_t>*> nonceMac;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept;

  /// @brief Method CalculateMac, addr 0x23a670c, size 0x158, virtual false, abstract: false, final false
  inline void CalculateMac();

  /// @brief Method DoFinal, addr 0x23a6fac, size 0x348, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GetBlockSize, addr 0x23a60c8, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method GetMac, addr 0x23a7388, size 0x74, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method GetOutputSize, addr 0x23a7430, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetOutputSize(int32_t len);

  /// @brief Method GetUnderlyingCipher, addr 0x23a60c0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method GetUpdateOutputSize, addr 0x23a73fc, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetUpdateOutputSize(int32_t len);

  /// @brief Method Init, addr 0x23a60ec, size 0x488, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method InitCipher, addr 0x23a6574, size 0x198, virtual false, abstract: false, final false
  inline void InitCipher();

  static inline ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method Process, addr 0x23a6cb4, size 0x264, virtual false, abstract: false, final false
  inline int32_t Process(uint8_t b, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method ProcessAadByte, addr 0x23a6a64, size 0xfc, virtual true, abstract: false, final false
  inline void ProcessAadByte(uint8_t input);

  /// @brief Method ProcessAadBytes, addr 0x23a6b60, size 0x114, virtual true, abstract: false, final false
  inline void ProcessAadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len);

  /// @brief Method ProcessByte, addr 0x23a6c74, size 0x40, virtual true, abstract: false, final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method ProcessBytes, addr 0x23a6f18, size 0x94, virtual true, abstract: false, final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method Reset, addr 0x23a6864, size 0x8, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0x23a686c, size 0x1f8, virtual false, abstract: false, final false
  inline void Reset(bool clearMac);

  /// @brief Method VerifyMac, addr 0x23a72f4, size 0x94, virtual false, abstract: false, final false
  inline bool VerifyMac(::ArrayW<uint8_t, ::Array<uint8_t>*> mac, int32_t off);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_associatedTextMac() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_associatedTextMac();

  constexpr int32_t const& __cordl_internal_get_blockSize() const;

  constexpr int32_t& __cordl_internal_get_blockSize();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_bufBlock() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_bufBlock();

  constexpr int32_t const& __cordl_internal_get_bufOff() const;

  constexpr int32_t& __cordl_internal_get_bufOff();

  constexpr ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher* const& __cordl_internal_get_cipher() const;

  constexpr ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*& __cordl_internal_get_cipher();

  constexpr bool const& __cordl_internal_get_cipherInitialized() const;

  constexpr bool& __cordl_internal_get_cipherInitialized();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_initialAssociatedText() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_initialAssociatedText();

  constexpr ::Org::BouncyCastle::Crypto::IMac* const& __cordl_internal_get_mac() const;

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __cordl_internal_get_mac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_macBlock() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_macBlock();

  constexpr int32_t const& __cordl_internal_get_macSize() const;

  constexpr int32_t& __cordl_internal_get_macSize();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_nonceMac() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_nonceMac();

  constexpr void __cordl_internal_set_associatedTextMac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_blockSize(int32_t value);

  constexpr void __cordl_internal_set_bufBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_bufOff(int32_t value);

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher* value);

  constexpr void __cordl_internal_set_cipherInitialized(bool value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_initialAssociatedText(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mac(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr void __cordl_internal_set_macBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_macSize(int32_t value);

  constexpr void __cordl_internal_set_nonceMac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x23a5da8, size 0x244, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method get_AlgorithmName, addr 0x23a5fec, size 0xd4, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* i___Org__BouncyCastle__Crypto__Modes__IAeadBlockCipher() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* i___Org__BouncyCastle__Crypto__Modes__IAeadCipher() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EaxBlockCipher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EaxBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EaxBlockCipher(EaxBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EaxBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EaxBlockCipher(EaxBlockCipher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 969 };

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

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher_Tag, "Org.BouncyCastle.Crypto.Modes", "EaxBlockCipher/Tag");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "EaxBlockCipher");
