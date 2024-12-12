#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/RC532Engine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC532Engine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RC532Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RC532Engine);
// Dependencies Org.BouncyCastle.Crypto.IBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.RC532Engine
class CORDL_TYPE RC532Engine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field P32, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_P32, put = setStaticF_P32)) int32_t P32;

  /// @brief Field Q32, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Q32, put = setStaticF_Q32)) int32_t Q32;

  /// @brief Field _S, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__S, put = __cordl_internal_set__S)) ::ArrayW<int32_t, ::Array<int32_t>*> _S;

  /// @brief Field _noRounds, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__noRounds, put = __cordl_internal_set__noRounds)) int32_t _noRounds;

  /// @brief Field forEncryption, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method BytesToWord, addr 0x2364d2c, size 0x70, virtual false, abstract: false, final false
  inline int32_t BytesToWord(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcOff);

  /// @brief Method DecryptBlock, addr 0x2364b00, size 0x10c, virtual false, abstract: false, final false
  inline int32_t DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method EncryptBlock, addr 0x2364c0c, size 0x110, virtual false, abstract: false, final false
  inline int32_t EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GetBlockSize, addr 0x2364660, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0x2364668, size 0x22c, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::RC532Engine* New_ctor();

  /// @brief Method ProcessBlock, addr 0x2364adc, size 0x24, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x2364d1c, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method RotateLeft, addr 0x2364d20, size 0xc, virtual false, abstract: false, final false
  inline int32_t RotateLeft(int32_t x, int32_t y);

  /// @brief Method RotateRight, addr 0x2364e1c, size 0x8, virtual false, abstract: false, final false
  inline int32_t RotateRight(int32_t x, int32_t y);

  /// @brief Method SetKey, addr 0x2364894, size 0x248, virtual false, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method WordToBytes, addr 0x2364d9c, size 0x80, virtual false, abstract: false, final false
  inline void WordToBytes(int32_t word, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstOff);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__S() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__S();

  constexpr int32_t const& __cordl_internal_get__noRounds() const;

  constexpr int32_t& __cordl_internal_get__noRounds();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr void __cordl_internal_set__S(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__noRounds(int32_t value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  /// @brief Method .ctor, addr 0x23645f8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_P32();

  static inline int32_t getStaticF_Q32();

  /// @brief Method get_AlgorithmName, addr 0x2364618, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x2364658, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  static inline void setStaticF_P32(int32_t value);

  static inline void setStaticF_Q32(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC532Engine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RC532Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC532Engine(RC532Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC532Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC532Engine(RC532Engine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 857 };

  /// @brief Field _noRounds, offset: 0x10, size: 0x4, def value: None
  int32_t ____noRounds;

  /// @brief Field _S, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____S;

  /// @brief Field forEncryption, offset: 0x20, size: 0x1, def value: None
  bool ___forEncryption;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC532Engine, ____noRounds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC532Engine, ____S) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC532Engine, ___forEncryption) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RC532Engine, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RC532Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RC532Engine*, "Org.BouncyCastle.Crypto.Engines", "RC532Engine");
