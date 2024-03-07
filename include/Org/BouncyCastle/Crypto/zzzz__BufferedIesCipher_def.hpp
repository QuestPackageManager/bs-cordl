#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__BufferedCipherBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedIesCipher)
namespace Org::BouncyCastle::Crypto::Engines {
class IesEngine;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class BufferedIesCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::BufferedIesCipher);
// Type: Org.BouncyCastle.Crypto::BufferedIesCipher
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::BufferedIesCipher*
class CORDL_TYPE BufferedIesCipher : public ::Org::BouncyCastle::Crypto::BufferedCipherBase {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field buffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer))::System::IO::MemoryStream* buffer;

  /// @brief Field engine, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine))::Org::BouncyCastle::Crypto::Engines::IesEngine* engine;

  /// @brief Field forEncryption, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Method DoFinal, addr 0x1058358, size 0x6c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DoFinal();

  /// @brief Method DoFinal, addr 0x10583c4, size 0x30, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method GetBlockSize, addr 0x1058168, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method GetOutputSize, addr 0x1058170, size 0xa0, virtual true, abstract: false, final false
  inline int32_t GetOutputSize(int32_t inputLen);

  /// @brief Method GetUpdateOutputSize, addr 0x1058210, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetUpdateOutputSize(int32_t inputLen);

  /// @brief Method Init, addr 0x105811c, size 0x4c, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::BufferedIesCipher* New_ctor(::Org::BouncyCastle::Crypto::Engines::IesEngine* engine);

  /// @brief Method ProcessByte, addr 0x1058218, size 0x2c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessByte(uint8_t input);

  /// @brief Method ProcessBytes, addr 0x1058244, size 0x114, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Reset, addr 0x10583f4, size 0x28, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get_buffer();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& __cordl_internal_get_buffer() const;

  constexpr ::Org::BouncyCastle::Crypto::Engines::IesEngine*& __cordl_internal_get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Engines::IesEngine*> const& __cordl_internal_get_engine() const;

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr void __cordl_internal_set_buffer(::System::IO::MemoryStream* value);

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Engines::IesEngine* value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  /// @brief Method .ctor, addr 0x1057fec, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Engines::IesEngine* engine);

  /// @brief Method get_AlgorithmName, addr 0x10580dc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedIesCipher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferedIesCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedIesCipher(BufferedIesCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedIesCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedIesCipher(BufferedIesCipher const&) = delete;

  /// @brief Field engine, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Engines::IesEngine* ___engine;

  /// @brief Field forEncryption, offset: 0x18, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field buffer, offset: 0x20, size: 0x8, def value: None
  ::System::IO::MemoryStream* ___buffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::BufferedIesCipher, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::BufferedIesCipher, ___engine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::BufferedIesCipher, ___forEncryption) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::BufferedIesCipher, ___buffer) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::BufferedIesCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::BufferedIesCipher*, "Org.BouncyCastle.Crypto", "BufferedIesCipher");
