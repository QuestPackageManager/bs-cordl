#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Modes/GOfbBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GOfbBlockCipher)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class GOfbBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher);
// Dependencies Org.BouncyCastle.Crypto.IBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher
class CORDL_TYPE GOfbBlockCipher : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field IV, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_IV, put = __cordl_internal_set_IV)) ::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field N3, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_N3, put = __cordl_internal_set_N3)) int32_t N3;

  /// @brief Field N4, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_N4, put = __cordl_internal_set_N4)) int32_t N4;

  /// @brief Field blockSize, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_blockSize, put = __cordl_internal_set_blockSize)) int32_t blockSize;

  /// @brief Field cipher, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher)) ::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  /// @brief Field firstStep, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_firstStep, put = __cordl_internal_set_firstStep)) bool firstStep;

  /// @brief Field ofbOutV, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ofbOutV, put = __cordl_internal_set_ofbOutV)) ::ArrayW<uint8_t, ::Array<uint8_t>*> ofbOutV;

  /// @brief Field ofbV, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ofbV, put = __cordl_internal_set_ofbV)) ::ArrayW<uint8_t, ::Array<uint8_t>*> ofbV;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method GetBlockSize, addr 0x23a9900, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetBlockSize();

  /// @brief Method GetUnderlyingCipher, addr 0x23a95a4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method Init, addr 0x23a95ac, size 0x1c8, virtual true, abstract: false, final true
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method ProcessBlock, addr 0x23a9908, size 0x340, virtual true, abstract: false, final true
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x23a9774, size 0xc4, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_IV() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_IV();

  constexpr int32_t const& __cordl_internal_get_N3() const;

  constexpr int32_t& __cordl_internal_get_N3();

  constexpr int32_t const& __cordl_internal_get_N4() const;

  constexpr int32_t& __cordl_internal_get_N4();

  constexpr int32_t const& __cordl_internal_get_blockSize() const;

  constexpr int32_t& __cordl_internal_get_blockSize();

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& __cordl_internal_get_cipher() const;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_cipher();

  constexpr bool const& __cordl_internal_get_firstStep() const;

  constexpr bool& __cordl_internal_get_firstStep();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_ofbOutV() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_ofbOutV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_ofbV() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_ofbV();

  constexpr void __cordl_internal_set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_N3(int32_t value);

  constexpr void __cordl_internal_set_N4(int32_t value);

  constexpr void __cordl_internal_set_blockSize(int32_t value);

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr void __cordl_internal_set_firstStep(bool value);

  constexpr void __cordl_internal_set_ofbOutV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_ofbV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x23a9324, size 0x280, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method bytesToint, addr 0x23a9c48, size 0x74, virtual false, abstract: false, final false
  inline int32_t bytesToint(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff);

  /// @brief Method get_AlgorithmName, addr 0x23a9838, size 0xc0, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x23a98f8, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  /// @brief Method intTobytes, addr 0x23a9cbc, size 0x80, virtual false, abstract: false, final false
  inline void intTobytes(int32_t num, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GOfbBlockCipher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GOfbBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GOfbBlockCipher(GOfbBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GOfbBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GOfbBlockCipher(GOfbBlockCipher const&) = delete;

  /// @brief Field C1 offset 0xffffffff size 0x4
  static constexpr int32_t C1{ static_cast<int32_t>(0x1010104) };

  /// @brief Field C2 offset 0xffffffff size 0x4
  static constexpr int32_t C2{ static_cast<int32_t>(0x1010101) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 971 };

  /// @brief Field IV, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___IV;

  /// @brief Field ofbV, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___ofbV;

  /// @brief Field ofbOutV, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___ofbOutV;

  /// @brief Field blockSize, offset: 0x28, size: 0x4, def value: None
  int32_t ___blockSize;

  /// @brief Field cipher, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___cipher;

  /// @brief Field firstStep, offset: 0x38, size: 0x1, def value: None
  bool ___firstStep;

  /// @brief Field N3, offset: 0x3c, size: 0x4, def value: None
  int32_t ___N3;

  /// @brief Field N4, offset: 0x40, size: 0x4, def value: None
  int32_t ___N4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___IV) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___ofbV) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___ofbOutV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___blockSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___cipher) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___firstStep) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___N3) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___N4) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "GOfbBlockCipher");
