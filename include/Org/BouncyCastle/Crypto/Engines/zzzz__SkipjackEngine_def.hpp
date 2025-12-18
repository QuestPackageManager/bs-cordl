#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/SkipjackEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.SkipjackEngine
class CORDL_TYPE SkipjackEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field encrypting, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_encrypting, put = __cordl_internal_set_encrypting)) bool encrypting;

  /// @brief Field ftable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ftable, put = setStaticF_ftable)) ::ArrayW<int16_t, ::Array<int16_t>*> ftable;

  /// @brief Field key0, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key0, put = __cordl_internal_set_key0)) ::ArrayW<int32_t, ::Array<int32_t>*> key0;

  /// @brief Field key1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key1, put = __cordl_internal_set_key1)) ::ArrayW<int32_t, ::Array<int32_t>*> key1;

  /// @brief Field key2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_key2, put = __cordl_internal_set_key2)) ::ArrayW<int32_t, ::Array<int32_t>*> key2;

  /// @brief Field key3, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_key3, put = __cordl_internal_set_key3)) ::ArrayW<int32_t, ::Array<int32_t>*> key3;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method DecryptBlock, addr 0x32cafb8, size 0x260, virtual true, abstract: false, final false
  inline int32_t DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method EncryptBlock, addr 0x32cac04, size 0x254, virtual true, abstract: false, final false
  inline int32_t EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method G, addr 0x32caaa4, size 0x160, virtual false, abstract: false, final false
  inline int32_t G(int32_t k, int32_t w);

  /// @brief Method GetBlockSize, addr 0x32ca954, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method H, addr 0x32cae58, size 0x160, virtual false, abstract: false, final false
  inline int32_t H(int32_t k, int32_t w);

  /// @brief Method Init, addr 0x32ca5f4, size 0x314, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine* New_ctor();

  /// @brief Method ProcessBlock, addr 0x32ca95c, size 0x144, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x32caaa0, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  constexpr bool const& __cordl_internal_get_encrypting() const;

  constexpr bool& __cordl_internal_get_encrypting();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_key0() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_key0();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_key1() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_key1();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_key2() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_key2();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_key3() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_key3();

  constexpr void __cordl_internal_set_encrypting(bool value);

  constexpr void __cordl_internal_set_key0(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_key1(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_key2(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_key3(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x32cb2b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_ftable();

  /// @brief Method get_AlgorithmName, addr 0x32ca908, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x32ca94c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  static inline void setStaticF_ftable(::ArrayW<int16_t, ::Array<int16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkipjackEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SkipjackEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkipjackEngine(SkipjackEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkipjackEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkipjackEngine(SkipjackEngine const&) = delete;

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x8) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 871 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine, ___key0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine, ___key1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine, ___key2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine, ___key3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine, ___encrypting) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*, "Org.BouncyCastle.Crypto.Engines", "SkipjackEngine");
