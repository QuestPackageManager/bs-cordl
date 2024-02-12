#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CbcBlockCipherMac)
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
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
namespace Org::BouncyCastle::Crypto::Macs {
class CbcBlockCipherMac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac);
// Type: Org.BouncyCastle.Crypto.Macs::CbcBlockCipherMac
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(935))
// CS Name: ::Org.BouncyCastle.Crypto.Macs::CbcBlockCipherMac*
class CORDL_TYPE CbcBlockCipherMac : public ::System::Object {
public:
  // Declarations
  /// @brief Field buf, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buf, put = __cordl_internal_set_buf))::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field bufOff, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_bufOff, put = __cordl_internal_set_bufOff)) int32_t bufOff;

  /// @brief Field cipher, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher))::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  /// @brief Field padding, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_padding, put = __cordl_internal_set_padding))::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding;

  /// @brief Field macSize, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_macSize, put = __cordl_internal_set_macSize)) int32_t macSize;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
  constexpr ::Org::BouncyCastle::Crypto::IMac* i___Org__BouncyCastle__Crypto__IMac() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buf() const;

  constexpr void __cordl_internal_set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __cordl_internal_get_bufOff();

  constexpr int32_t const& __cordl_internal_get_bufOff() const;

  constexpr void __cordl_internal_set_bufOff(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __cordl_internal_get_cipher() const;

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*& __cordl_internal_get_padding();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*> const& __cordl_internal_get_padding() const;

  constexpr void __cordl_internal_set_padding(::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* value);

  constexpr int32_t& __cordl_internal_get_macSize();

  constexpr int32_t const& __cordl_internal_get_macSize() const;

  constexpr void __cordl_internal_set_macSize(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method .ctor, addr 0xf34fd0, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  static inline ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);

  /// @brief Method .ctor, addr 0xf35224, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);

  static inline ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t macSizeInBits);

  /// @brief Method .ctor, addr 0xf352fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t macSizeInBits);

  static inline ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t macSizeInBits,
                                                                               ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);

  /// @brief Method .ctor, addr 0xf3509c, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t macSizeInBits, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);

  /// @brief Method get_AlgorithmName, addr 0xf35404, size 0xa0, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init, addr 0xf354a4, size 0xb8, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetMacSize, addr 0xf3561c, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetMacSize();

  /// @brief Method Update, addr 0xf35624, size 0x114, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate, addr 0xf35738, size 0x28c, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal, addr 0xf359c4, size 0x2b0, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xf3555c, size 0xc0, virtual true, abstract: false, final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "CbcBlockCipherMac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CbcBlockCipherMac(CbcBlockCipherMac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CbcBlockCipherMac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CbcBlockCipherMac(CbcBlockCipherMac const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CbcBlockCipherMac();

public:
  /// @brief Field buf, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buf;

  /// @brief Field bufOff, offset: 0x18, size: 0x4, def value: None
  int32_t ___bufOff;

  /// @brief Field cipher, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___cipher;

  /// @brief Field padding, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* ___padding;

  /// @brief Field macSize, offset: 0x30, size: 0x4, def value: None
  int32_t ___macSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac, ___buf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac, ___bufOff) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac, ___cipher) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac, ___padding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac, ___macSize) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*, "Org.BouncyCastle.Crypto.Macs", "CbcBlockCipherMac");
