#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC532Engine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RC532Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RC532Engine);
// Type: Org.BouncyCastle.Crypto.Engines::RC532Engine
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(857))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::RC532Engine*
class CORDL_TYPE RC532Engine : public ::System::Object {
public:
  // Declarations
  /// @brief Field _noRounds, offset 0x10, size 0x4
  __declspec(property(get = __get__noRounds, put = __set__noRounds)) int32_t _noRounds;

  /// @brief Field _S, offset 0x18, size 0x8
  __declspec(property(get = __get__S, put = __set__S))::ArrayW<int32_t, ::Array<int32_t>*> _S;

  /// @brief Field forEncryption, offset 0x20, size 0x1
  __declspec(property(get = __get_forEncryption, put = __set_forEncryption)) bool forEncryption;

  /// @brief Field P32, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_P32, put = setStaticF_P32)) int32_t P32;

  /// @brief Field Q32, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Q32, put = setStaticF_Q32)) int32_t Q32;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  constexpr int32_t& __get__noRounds();

  constexpr int32_t const& __get__noRounds() const;

  constexpr void __set__noRounds(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__S();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__S() const;

  constexpr void __set__S(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr bool& __get_forEncryption();

  constexpr bool const& __get_forEncryption() const;

  constexpr void __set_forEncryption(bool value);

  static inline void setStaticF_P32(int32_t value);

  static inline int32_t getStaticF_P32();

  static inline void setStaticF_Q32(int32_t value);

  static inline int32_t getStaticF_Q32();

  static inline ::Org::BouncyCastle::Crypto::Engines::RC532Engine* New_ctor();

  /// @brief Method .ctor, addr 0xedac2c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AlgorithmName, addr 0xedac4c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0xedac8c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Method GetBlockSize, addr 0xedac94, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0xedac9c, size 0x234, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method ProcessBlock, addr 0xedb120, size 0x24, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xedb360, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SetKey, addr 0xedaed0, size 0x250, virtual false, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method EncryptBlock, addr 0xedb250, size 0x110, virtual false, abstract: false, final false
  inline int32_t EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method DecryptBlock, addr 0xedb144, size 0x10c, virtual false, abstract: false, final false
  inline int32_t DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method RotateLeft, addr 0xedb364, size 0xc, virtual false, abstract: false, final false
  inline int32_t RotateLeft(int32_t x, int32_t y);

  /// @brief Method RotateRight, addr 0xedb460, size 0x8, virtual false, abstract: false, final false
  inline int32_t RotateRight(int32_t x, int32_t y);

  /// @brief Method BytesToWord, addr 0xedb370, size 0x70, virtual false, abstract: false, final false
  inline int32_t BytesToWord(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcOff);

  /// @brief Method WordToBytes, addr 0xedb3e0, size 0x80, virtual false, abstract: false, final false
  inline void WordToBytes(int32_t word, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstOff);

  // Ctor Parameters [CppParam { name: "", ty: "RC532Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC532Engine(RC532Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC532Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC532Engine(RC532Engine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC532Engine();

public:
  /// @brief Field _noRounds, offset: 0x10, size: 0x4, def value: None
  int32_t ____noRounds;

  /// @brief Field _S, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____S;

  /// @brief Field forEncryption, offset: 0x20, size: 0x1, def value: None
  bool ___forEncryption;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RC532Engine, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC532Engine, ____noRounds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC532Engine, ____S) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC532Engine, ___forEncryption) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RC532Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RC532Engine*, "Org.BouncyCastle.Crypto.Engines", "RC532Engine");
