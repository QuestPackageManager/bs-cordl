#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/IdeaEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IdeaEngine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class IdeaEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::IdeaEngine);
// Dependencies Org.BouncyCastle.Crypto.IBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.IdeaEngine
class CORDL_TYPE IdeaEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field BASE, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BASE, put = setStaticF_BASE)) int32_t BASE;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field MASK, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MASK, put = setStaticF_MASK)) int32_t MASK;

  /// @brief Field workingKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_workingKey, put = __cordl_internal_set_workingKey)) ::ArrayW<int32_t, ::Array<int32_t>*> workingKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method AddInv, addr 0x23604c4, size 0x64, virtual false, abstract: false, final false
  inline int32_t AddInv(int32_t x);

  /// @brief Method BytesToWord, addr 0x2360040, size 0x40, virtual false, abstract: false, final false
  inline int32_t BytesToWord(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method ExpandKey, addr 0x23601bc, size 0x1f8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> ExpandKey(::ArrayW<uint8_t, ::Array<uint8_t>*> uKey);

  /// @brief Method GenerateWorkingKey, addr 0x235fc28, size 0x28, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GenerateWorkingKey(bool forEncryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> userKey);

  /// @brief Method GetBlockSize, addr 0x235fc98, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method IdeaFunc, addr 0x235fdb4, size 0x288, virtual false, abstract: false, final false
  inline void IdeaFunc(::ArrayW<int32_t, ::Array<int32_t>*> workingKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method Init, addr 0x235fb10, size 0x118, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method InvertKey, addr 0x2360528, size 0x244, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> InvertKey(::ArrayW<int32_t, ::Array<int32_t>*> inKey);

  /// @brief Method Mul, addr 0x23600c8, size 0xf4, virtual false, abstract: false, final false
  inline int32_t Mul(int32_t x, int32_t y);

  /// @brief Method MulInv, addr 0x23603b4, size 0x110, virtual false, abstract: false, final false
  inline int32_t MulInv(int32_t x);

  static inline ::Org::BouncyCastle::Crypto::Engines::IdeaEngine* New_ctor();

  /// @brief Method ProcessBlock, addr 0x235fca0, size 0x114, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x236003c, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method WordToBytes, addr 0x2360080, size 0x48, virtual false, abstract: false, final false
  inline void WordToBytes(int32_t word, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_workingKey() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_workingKey();

  constexpr void __cordl_internal_set_workingKey(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x235fb08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_BASE();

  static inline int32_t getStaticF_MASK();

  /// @brief Method get_AlgorithmName, addr 0x235fc50, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x235fc90, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  static inline void setStaticF_BASE(int32_t value);

  static inline void setStaticF_MASK(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdeaEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IdeaEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdeaEngine(IdeaEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdeaEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdeaEngine(IdeaEngine const&) = delete;

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x8) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 848 };

  /// @brief Field workingKey, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___workingKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IdeaEngine, ___workingKey) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::IdeaEngine, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::IdeaEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::IdeaEngine*, "Org.BouncyCastle.Crypto.Engines", "IdeaEngine");
