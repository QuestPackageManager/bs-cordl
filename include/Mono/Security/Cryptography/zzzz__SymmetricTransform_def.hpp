#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/SymmetricTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__PaddingMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SymmetricTransform)
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
struct PaddingMode;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System::Security::Cryptography {
class SymmetricAlgorithm;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class SymmetricTransform;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::SymmetricTransform);
// Type: Mono.Security.Cryptography::SymmetricTransform
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: ::Mono.Security.Cryptography::SymmetricTransform*
class CORDL_TYPE SymmetricTransform : public ::System::Object {
public:
  // Declarations
  /// @brief Field BlockSizeByte, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_BlockSizeByte, put = __cordl_internal_set_BlockSizeByte)) int32_t BlockSizeByte;

  __declspec(property(get = get_CanTransformMultipleBlocks)) bool CanTransformMultipleBlocks;

  /// @brief Field FeedBackByte, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_FeedBackByte, put = __cordl_internal_set_FeedBackByte)) int32_t FeedBackByte;

  __declspec(property(get = get_InputBlockSize)) int32_t InputBlockSize;

  __declspec(property(get = get_KeepLastBlock)) bool KeepLastBlock;

  __declspec(property(get = get_OutputBlockSize)) int32_t OutputBlockSize;

  /// @brief Field _rng, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__rng, put = __cordl_internal_set__rng))::System::Security::Cryptography::RandomNumberGenerator* _rng;

  /// @brief Field algo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_algo, put = __cordl_internal_set_algo))::System::Security::Cryptography::SymmetricAlgorithm* algo;

  /// @brief Field encrypt, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_encrypt, put = __cordl_internal_set_encrypt)) bool encrypt;

  /// @brief Field lastBlock, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get_lastBlock, put = __cordl_internal_set_lastBlock)) bool lastBlock;

  /// @brief Field m_disposed, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_m_disposed, put = __cordl_internal_set_m_disposed)) bool m_disposed;

  /// @brief Field padmode, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_padmode, put = __cordl_internal_set_padmode))::System::Security::Cryptography::PaddingMode padmode;

  /// @brief Field temp, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_temp, put = __cordl_internal_set_temp))::ArrayW<uint8_t, ::Array<uint8_t>*> temp;

  /// @brief Field temp2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_temp2, put = __cordl_internal_set_temp2))::ArrayW<uint8_t, ::Array<uint8_t>*> temp2;

  /// @brief Field workBuff, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_workBuff, put = __cordl_internal_set_workBuff))::ArrayW<uint8_t, ::Array<uint8_t>*> workBuff;

  /// @brief Field workout, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_workout, put = __cordl_internal_set_workout))::ArrayW<uint8_t, ::Array<uint8_t>*> workout;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
  constexpr operator ::System::Security::Cryptography::ICryptoTransform*() noexcept;

  /// @brief Method CBC, addr 0x27d0928, size 0x164, virtual true, abstract: false, final false
  inline void CBC(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method CFB, addr 0x27d0a8c, size 0x1c8, virtual true, abstract: false, final false
  inline void CFB(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method CTS, addr 0x27d0ca4, size 0x50, virtual true, abstract: false, final false
  inline void CTS(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method CheckInput, addr 0x27d0cf4, size 0x154, virtual false, abstract: false, final false
  inline void CheckInput(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  /// @brief Method Dispose, addr 0x27d0670, size 0x54, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method ECB, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ECB(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method FinalDecrypt, addr 0x27d177c, size 0x2ac, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FinalDecrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  /// @brief Method FinalEncrypt, addr 0x27d14dc, size 0x2a0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FinalEncrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  /// @brief Method Finalize, addr 0x27d0564, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method InternalTransformBlock, addr 0x27d1084, size 0x1bc, virtual false, abstract: false, final false
  inline int32_t InternalTransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer,
                                        int32_t outputOffset);

  static inline ::Mono::Security::Cryptography::SymmetricTransform* New_ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption,
                                                                             ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method OFB, addr 0x27d0c54, size 0x50, virtual true, abstract: false, final false
  inline void OFB(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method Random, addr 0x27d1240, size 0xb0, virtual false, abstract: false, final false
  inline void Random(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t start, int32_t length);

  /// @brief Method System.IDisposable.Dispose, addr 0x27d0604, size 0x6c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method ThrowBadPaddingException, addr 0x27d12f0, size 0x1a8, virtual false, abstract: false, final false
  inline void ThrowBadPaddingException(::System::Security::Cryptography::PaddingMode padding, int32_t length, int32_t position);

  /// @brief Method Transform, addr 0x27d06dc, size 0x164, virtual true, abstract: false, final false
  inline void Transform(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method TransformBlock, addr 0x27d0e48, size 0x218, virtual true, abstract: false, final false
  inline int32_t TransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, int32_t outputOffset);

  /// @brief Method TransformFinalBlock, addr 0x27d1a28, size 0xb4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> TransformFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  constexpr int32_t const& __cordl_internal_get_BlockSizeByte() const;

  constexpr int32_t& __cordl_internal_get_BlockSizeByte();

  constexpr int32_t const& __cordl_internal_get_FeedBackByte() const;

  constexpr int32_t& __cordl_internal_get_FeedBackByte();

  constexpr ::System::Security::Cryptography::RandomNumberGenerator*& __cordl_internal_get__rng();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RandomNumberGenerator*> const& __cordl_internal_get__rng() const;

  constexpr ::System::Security::Cryptography::SymmetricAlgorithm*& __cordl_internal_get_algo();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::SymmetricAlgorithm*> const& __cordl_internal_get_algo() const;

  constexpr bool const& __cordl_internal_get_encrypt() const;

  constexpr bool& __cordl_internal_get_encrypt();

  constexpr bool const& __cordl_internal_get_lastBlock() const;

  constexpr bool& __cordl_internal_get_lastBlock();

  constexpr bool const& __cordl_internal_get_m_disposed() const;

  constexpr bool& __cordl_internal_get_m_disposed();

  constexpr ::System::Security::Cryptography::PaddingMode const& __cordl_internal_get_padmode() const;

  constexpr ::System::Security::Cryptography::PaddingMode& __cordl_internal_get_padmode();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_temp() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_temp();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_temp2() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_temp2();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_workBuff() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_workBuff();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_workout() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_workout();

  constexpr void __cordl_internal_set_BlockSizeByte(int32_t value);

  constexpr void __cordl_internal_set_FeedBackByte(int32_t value);

  constexpr void __cordl_internal_set__rng(::System::Security::Cryptography::RandomNumberGenerator* value);

  constexpr void __cordl_internal_set_algo(::System::Security::Cryptography::SymmetricAlgorithm* value);

  constexpr void __cordl_internal_set_encrypt(bool value);

  constexpr void __cordl_internal_set_lastBlock(bool value);

  constexpr void __cordl_internal_set_m_disposed(bool value);

  constexpr void __cordl_internal_set_padmode(::System::Security::Cryptography::PaddingMode value);

  constexpr void __cordl_internal_set_temp(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_temp2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_workBuff(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_workout(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x27d029c, size 0x2c8, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method get_CanTransformMultipleBlocks, addr 0x27d06c4, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanTransformMultipleBlocks();

  /// @brief Method get_InputBlockSize, addr 0x27d06cc, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_InputBlockSize();

  /// @brief Method get_KeepLastBlock, addr 0x27d1060, size 0x24, virtual false, abstract: false, final false
  inline bool get_KeepLastBlock();

  /// @brief Method get_OutputBlockSize, addr 0x27d06d4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_OutputBlockSize();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
  constexpr ::System::Security::Cryptography::ICryptoTransform* i___System__Security__Cryptography__ICryptoTransform() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SymmetricTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SymmetricTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SymmetricTransform(SymmetricTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SymmetricTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SymmetricTransform(SymmetricTransform const&) = delete;

  /// @brief Field algo, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::SymmetricAlgorithm* ___algo;

  /// @brief Field encrypt, offset: 0x18, size: 0x1, def value: None
  bool ___encrypt;

  /// @brief Field BlockSizeByte, offset: 0x1c, size: 0x4, def value: None
  int32_t ___BlockSizeByte;

  /// @brief Field temp, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___temp;

  /// @brief Field temp2, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___temp2;

  /// @brief Field workBuff, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___workBuff;

  /// @brief Field workout, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___workout;

  /// @brief Field padmode, offset: 0x40, size: 0x4, def value: None
  ::System::Security::Cryptography::PaddingMode ___padmode;

  /// @brief Field FeedBackByte, offset: 0x44, size: 0x4, def value: None
  int32_t ___FeedBackByte;

  /// @brief Field m_disposed, offset: 0x48, size: 0x1, def value: None
  bool ___m_disposed;

  /// @brief Field lastBlock, offset: 0x49, size: 0x1, def value: None
  bool ___lastBlock;

  /// @brief Field _rng, offset: 0x50, size: 0x8, def value: None
  ::System::Security::Cryptography::RandomNumberGenerator* ____rng;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::SymmetricTransform, 0x58>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::SymmetricTransform, ___algo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::SymmetricTransform, ___encrypt) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::SymmetricTransform, ___BlockSizeByte) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::SymmetricTransform, ___temp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::SymmetricTransform, ___temp2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::SymmetricTransform, ___workBuff) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::SymmetricTransform, ___workout) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::SymmetricTransform, ___padmode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::SymmetricTransform, ___FeedBackByte) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::SymmetricTransform, ___m_disposed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::SymmetricTransform, ___lastBlock) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::SymmetricTransform, ____rng) == 0x50, "Offset mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::SymmetricTransform);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::SymmetricTransform*, "Mono.Security.Cryptography", "SymmetricTransform");
