#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC6Engine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RC6Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RC6Engine);
// Type: Org.BouncyCastle.Crypto.Engines::RC6Engine
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::RC6Engine*
class CORDL_TYPE RC6Engine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field LGW, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_LGW, put = setStaticF_LGW)) int32_t LGW;

  /// @brief Field P32, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_P32, put = setStaticF_P32)) int32_t P32;

  /// @brief Field Q32, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Q32, put = setStaticF_Q32)) int32_t Q32;

  /// @brief Field _S, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__S, put = __cordl_internal_set__S))::ArrayW<int32_t, ::Array<int32_t>*> _S;

  /// @brief Field _noRounds, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__noRounds, put = setStaticF__noRounds)) int32_t _noRounds;

  /// @brief Field bytesPerWord, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_bytesPerWord, put = setStaticF_bytesPerWord)) int32_t bytesPerWord;

  /// @brief Field forEncryption, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field wordSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_wordSize, put = setStaticF_wordSize)) int32_t wordSize;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method BytesToWord, addr 0xf4eaa0, size 0xb0, virtual false, abstract: false, final false
  inline int32_t BytesToWord(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcOff);

  /// @brief Method DecryptBlock, addr 0xf4e46c, size 0x2d4, virtual false, abstract: false, final false
  inline int32_t DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method EncryptBlock, addr 0xf4e740, size 0x2dc, virtual false, abstract: false, final false
  inline int32_t EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GetBlockSize, addr 0xf4decc, size 0x5c, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0xf4df28, size 0x140, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::RC6Engine* New_ctor();

  /// @brief Method ProcessBlock, addr 0xf4e31c, size 0x150, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xf4ea1c, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method RotateLeft, addr 0xf4ea20, size 0x80, virtual false, abstract: false, final false
  inline int32_t RotateLeft(int32_t x, int32_t y);

  /// @brief Method RotateRight, addr 0xf4ec10, size 0x80, virtual false, abstract: false, final false
  inline int32_t RotateRight(int32_t x, int32_t y);

  /// @brief Method SetKey, addr 0xf4e068, size 0x2b4, virtual false, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method WordToBytes, addr 0xf4eb50, size 0xc0, virtual false, abstract: false, final false
  inline void WordToBytes(int32_t word, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstOff);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__S() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__S();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr void __cordl_internal_set__S(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  /// @brief Method .ctor, addr 0xf4de7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_LGW();

  static inline int32_t getStaticF_P32();

  static inline int32_t getStaticF_Q32();

  static inline int32_t getStaticF__noRounds();

  static inline int32_t getStaticF_bytesPerWord();

  static inline int32_t getStaticF_wordSize();

  /// @brief Method get_AlgorithmName, addr 0xf4de84, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0xf4dec4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  static inline void setStaticF_LGW(int32_t value);

  static inline void setStaticF_P32(int32_t value);

  static inline void setStaticF_Q32(int32_t value);

  static inline void setStaticF__noRounds(int32_t value);

  static inline void setStaticF_bytesPerWord(int32_t value);

  static inline void setStaticF_wordSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC6Engine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RC6Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC6Engine(RC6Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC6Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC6Engine(RC6Engine const&) = delete;

  /// @brief Field _S, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____S;

  /// @brief Field forEncryption, offset: 0x18, size: 0x1, def value: None
  bool ___forEncryption;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RC6Engine, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC6Engine, ____S) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC6Engine, ___forEncryption) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RC6Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RC6Engine*, "Org.BouncyCastle.Crypto.Engines", "RC6Engine");
