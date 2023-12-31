#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Modes::GOfbBlockCipher
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(971))
// CS Name: ::Org.BouncyCastle.Crypto.Modes::GOfbBlockCipher*
class CORDL_TYPE GOfbBlockCipher : public ::System::Object {
public:
  // Declarations
  /// @brief Field IV, offset 0x10, size 0x8
  __declspec(property(get = __get_IV, put = __set_IV))::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  /// @brief Field ofbV, offset 0x18, size 0x8
  __declspec(property(get = __get_ofbV, put = __set_ofbV))::ArrayW<uint8_t, ::Array<uint8_t>*> ofbV;

  /// @brief Field ofbOutV, offset 0x20, size 0x8
  __declspec(property(get = __get_ofbOutV, put = __set_ofbOutV))::ArrayW<uint8_t, ::Array<uint8_t>*> ofbOutV;

  /// @brief Field blockSize, offset 0x28, size 0x4
  __declspec(property(get = __get_blockSize, put = __set_blockSize)) int32_t blockSize;

  /// @brief Field cipher, offset 0x30, size 0x8
  __declspec(property(get = __get_cipher, put = __set_cipher))::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  /// @brief Field firstStep, offset 0x38, size 0x1
  __declspec(property(get = __get_firstStep, put = __set_firstStep)) bool firstStep;

  /// @brief Field N3, offset 0x3c, size 0x4
  __declspec(property(get = __get_N3, put = __set_N3)) int32_t N3;

  /// @brief Field N4, offset 0x40, size 0x4
  __declspec(property(get = __get_N4, put = __set_N4)) int32_t N4;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_IV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_IV() const;

  constexpr void __set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_ofbV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_ofbV() const;

  constexpr void __set_ofbV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_ofbOutV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_ofbOutV() const;

  constexpr void __set_ofbOutV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_blockSize();

  constexpr int32_t const& __get_blockSize() const;

  constexpr void __set_blockSize(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __get_cipher() const;

  constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr bool& __get_firstStep();

  constexpr bool const& __get_firstStep() const;

  constexpr void __set_firstStep(bool value);

  constexpr int32_t& __get_N3();

  constexpr int32_t const& __get_N3() const;

  constexpr void __set_N3(int32_t value);

  constexpr int32_t& __get_N4();

  constexpr int32_t const& __get_N4() const;

  constexpr void __set_N4(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method .ctor, addr 0xf20338, size 0x284, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method GetUnderlyingCipher, addr 0xf205bc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method Init, addr 0xf205c4, size 0x1c8, virtual true, abstract: false, final true
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName, addr 0xf20850, size 0xc0, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0xf20910, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsPartialBlockOkay();

  /// @brief Method GetBlockSize, addr 0xf20918, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetBlockSize();

  /// @brief Method ProcessBlock, addr 0xf20920, size 0x34c, virtual true, abstract: false, final true
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xf2078c, size 0xc4, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method bytesToint, addr 0xf20c6c, size 0x74, virtual false, abstract: false, final false
  inline int32_t bytesToint(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff);

  /// @brief Method intTobytes, addr 0xf20ce0, size 0x80, virtual false, abstract: false, final false
  inline void intTobytes(int32_t num, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  // Ctor Parameters [CppParam { name: "", ty: "GOfbBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GOfbBlockCipher(GOfbBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GOfbBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GOfbBlockCipher(GOfbBlockCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GOfbBlockCipher();

public:
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

  /// @brief Field C1 offset 0xffffffff size 0x4
  static constexpr int32_t C1{ static_cast<int32_t>(0x1010104) };

  /// @brief Field C2 offset 0xffffffff size 0x4
  static constexpr int32_t C2{ static_cast<int32_t>(0x1010101) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___IV) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___ofbV) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___ofbOutV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___blockSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___cipher) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___firstStep) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___N3) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, ___N4) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "GOfbBlockCipher");
