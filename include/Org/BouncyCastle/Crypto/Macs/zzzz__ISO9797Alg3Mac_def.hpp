#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISO9797Alg3Mac)
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class ISO9797Alg3Mac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac);
// Type: Org.BouncyCastle.Crypto.Macs::ISO9797Alg3Mac
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(944))
// CS Name: ::Org.BouncyCastle.Crypto.Macs::ISO9797Alg3Mac*
class CORDL_TYPE ISO9797Alg3Mac : public ::System::Object {
public:
  // Declarations
  /// @brief Field mac, offset 0x10, size 0x8
  __declspec(property(get = __get_mac, put = __set_mac))::ArrayW<uint8_t, ::Array<uint8_t>*> mac;

  /// @brief Field buf, offset 0x18, size 0x8
  __declspec(property(get = __get_buf, put = __set_buf))::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field bufOff, offset 0x20, size 0x4
  __declspec(property(get = __get_bufOff, put = __set_bufOff)) int32_t bufOff;

  /// @brief Field cipher, offset 0x28, size 0x8
  __declspec(property(get = __get_cipher, put = __set_cipher))::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  /// @brief Field padding, offset 0x30, size 0x8
  __declspec(property(get = __get_padding, put = __set_padding))::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding;

  /// @brief Field macSize, offset 0x38, size 0x4
  __declspec(property(get = __get_macSize, put = __set_macSize)) int32_t macSize;

  /// @brief Field lastKey2, offset 0x40, size 0x8
  __declspec(property(get = __get_lastKey2, put = __set_lastKey2))::Org::BouncyCastle::Crypto::Parameters::KeyParameter* lastKey2;

  /// @brief Field lastKey3, offset 0x48, size 0x8
  __declspec(property(get = __get_lastKey3, put = __set_lastKey3))::Org::BouncyCastle::Crypto::Parameters::KeyParameter* lastKey3;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mac() const;

  constexpr void __set_mac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buf() const;

  constexpr void __set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_bufOff();

  constexpr int32_t const& __get_bufOff() const;

  constexpr void __set_bufOff(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __get_cipher() const;

  constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*& __get_padding();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*> const& __get_padding() const;

  constexpr void __set_padding(::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* value);

  constexpr int32_t& __get_macSize();

  constexpr int32_t const& __get_macSize() const;

  constexpr void __set_macSize(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& __get_lastKey2();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> const& __get_lastKey2() const;

  constexpr void __set_lastKey2(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& __get_lastKey3();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> const& __get_lastKey3() const;

  constexpr void __set_lastKey3(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  static inline ::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method .ctor addr 0xe99974 size 0xb8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  static inline ::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);

  /// @brief Method .ctor addr 0xe99c90 size 0xc4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);

  static inline ::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t macSizeInBits);

  /// @brief Method .ctor addr 0xe99d54 size 0x8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t macSizeInBits);

  static inline ::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t macSizeInBits,
                                                                            ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);

  /// @brief Method .ctor addr 0xe99a2c size 0x264 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t macSizeInBits, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);

  /// @brief Method get_AlgorithmName addr 0xe99d5c size 0x40 virtual true final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0xe99d9c size 0x3e0 virtual true final true
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetMacSize addr 0xe9a23c size 0x8 virtual true final true
  inline int32_t GetMacSize();

  /// @brief Method Update addr 0xe9a244 size 0x118 virtual true final true
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate addr 0xe9a35c size 0x294 virtual true final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal addr 0xe9a5f0 size 0x354 virtual true final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xe9a17c size 0xc0 virtual true final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "ISO9797Alg3Mac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISO9797Alg3Mac(ISO9797Alg3Mac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISO9797Alg3Mac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISO9797Alg3Mac(ISO9797Alg3Mac const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ISO9797Alg3Mac();

public:
  /// @brief Field mac, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mac;

  /// @brief Field buf, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buf;

  /// @brief Field bufOff, offset: 0x20, size: 0x4, def value: None
  int32_t ___bufOff;

  /// @brief Field cipher, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___cipher;

  /// @brief Field padding, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* ___padding;

  /// @brief Field macSize, offset: 0x38, size: 0x4, def value: None
  int32_t ___macSize;

  /// @brief Field lastKey2, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* ___lastKey2;

  /// @brief Field lastKey3, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* ___lastKey3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac, ___mac) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac, ___buf) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac, ___bufOff) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac, ___cipher) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac, ___padding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac, ___macSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac, ___lastKey2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac, ___lastKey3) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac*, "Org.BouncyCastle.Crypto.Macs", "ISO9797Alg3Mac");
