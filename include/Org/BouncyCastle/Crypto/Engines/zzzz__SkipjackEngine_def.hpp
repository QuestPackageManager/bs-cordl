#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SkipjackEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SkipjackEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine);
// Type: Org.BouncyCastle.Crypto.Engines::SkipjackEngine
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(871))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::SkipjackEngine*
class CORDL_TYPE SkipjackEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field key0, offset 0x10, size 0x8
  __declspec(property(get = __get_key0, put = __set_key0))::ArrayW<int32_t, ::Array<int32_t>*> key0;

  /// @brief Field key1, offset 0x18, size 0x8
  __declspec(property(get = __get_key1, put = __set_key1))::ArrayW<int32_t, ::Array<int32_t>*> key1;

  /// @brief Field key2, offset 0x20, size 0x8
  __declspec(property(get = __get_key2, put = __set_key2))::ArrayW<int32_t, ::Array<int32_t>*> key2;

  /// @brief Field key3, offset 0x28, size 0x8
  __declspec(property(get = __get_key3, put = __set_key3))::ArrayW<int32_t, ::Array<int32_t>*> key3;

  /// @brief Field encrypting, offset 0x30, size 0x1
  __declspec(property(get = __get_encrypting, put = __set_encrypting)) bool encrypting;

  /// @brief Field ftable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ftable, put = setStaticF_ftable))::ArrayW<int16_t, ::Array<int16_t>*> ftable;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_key0();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_key0() const;

  constexpr void __set_key0(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_key1();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_key1() const;

  constexpr void __set_key1(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_key2();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_key2() const;

  constexpr void __set_key2(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_key3();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_key3() const;

  constexpr void __set_key3(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr bool& __get_encrypting();

  constexpr bool const& __get_encrypting() const;

  constexpr void __set_encrypting(bool value);

  static inline void setStaticF_ftable(::ArrayW<int16_t, ::Array<int16_t>*> value);

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_ftable();

  /// @brief Method Init, addr 0xee76d0, size 0x304, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName, addr 0xee79d4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0xee7a14, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Method GetBlockSize, addr 0xee7a1c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method ProcessBlock, addr 0xee7a24, size 0x134, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xee7b58, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method G, addr 0xee7b5c, size 0x15c, virtual false, abstract: false, final false
  inline int32_t G(int32_t k, int32_t w);

  /// @brief Method EncryptBlock, addr 0xee7cb8, size 0x24c, virtual true, abstract: false, final false
  inline int32_t EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method H, addr 0xee7f04, size 0x15c, virtual false, abstract: false, final false
  inline int32_t H(int32_t k, int32_t w);

  /// @brief Method DecryptBlock, addr 0xee8060, size 0x260, virtual true, abstract: false, final false
  inline int32_t DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  static inline ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine* New_ctor();

  /// @brief Method .ctor, addr 0xee8354, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SkipjackEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkipjackEngine(SkipjackEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkipjackEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkipjackEngine(SkipjackEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkipjackEngine();

public:
  /// @brief Field key0, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___key0;

  /// @brief Field key1, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___key1;

  /// @brief Field key2, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___key2;

  /// @brief Field key3, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___key3;

  /// @brief Field encrypting, offset: 0x30, size: 0x1, def value: None
  bool ___encrypting;

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine, ___key0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine, ___key1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine, ___key2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine, ___key3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine, ___encrypting) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*, "Org.BouncyCastle.Crypto.Engines", "SkipjackEngine");
