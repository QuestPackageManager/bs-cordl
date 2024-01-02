#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GeneralDigest)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class GeneralDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::GeneralDigest);
// Type: Org.BouncyCastle.Crypto.Digests::GeneralDigest
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(750))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::GeneralDigest*
class CORDL_TYPE GeneralDigest : public ::System::Object {
public:
  // Declarations
  /// @brief Field xBuf, offset 0x10, size 0x8
  __declspec(property(get = __get_xBuf, put = __set_xBuf))::ArrayW<uint8_t, ::Array<uint8_t>*> xBuf;

  /// @brief Field xBufOff, offset 0x18, size 0x4
  __declspec(property(get = __get_xBufOff, put = __set_xBufOff)) int32_t xBufOff;

  /// @brief Field byteCount, offset 0x20, size 0x8
  __declspec(property(get = __get_byteCount, put = __set_byteCount)) int64_t byteCount;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_xBuf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_xBuf() const;

  constexpr void __set_xBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_xBufOff();

  constexpr int32_t const& __get_xBufOff() const;

  constexpr void __set_xBufOff(int32_t value);

  constexpr int64_t& __get_byteCount();

  constexpr int64_t const& __get_byteCount() const;

  constexpr void __set_byteCount(int64_t value);

  static inline ::Org::BouncyCastle::Crypto::Digests::GeneralDigest* New_ctor();

  /// @brief Method .ctor, addr 0x1221530, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::GeneralDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::GeneralDigest* t);

  /// @brief Method .ctor, addr 0x122158c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::GeneralDigest* t);

  /// @brief Method CopyIn, addr 0x1221604, size 0x54, virtual false, abstract: false, final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::GeneralDigest* t);

  /// @brief Method Update, addr 0x1221658, size 0x80, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate, addr 0x12216d8, size 0x1c0, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Finish, addr 0x1221898, size 0x64, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method Reset, addr 0x12218fc, size 0x30, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method GetByteLength, addr 0x122192c, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetByteLength();

  /// @brief Method ProcessWord, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessWord(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method ProcessLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessLength(int64_t bitLength);

  /// @brief Method ProcessBlock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessBlock();

  /// @brief Method get_AlgorithmName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetDigestSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetDigestSize();

  /// @brief Method DoFinal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* t);

  // Ctor Parameters [CppParam { name: "", ty: "GeneralDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeneralDigest(GeneralDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeneralDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneralDigest(GeneralDigest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneralDigest();

public:
  /// @brief Field xBuf, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___xBuf;

  /// @brief Field xBufOff, offset: 0x18, size: 0x4, def value: None
  int32_t ___xBufOff;

  /// @brief Field byteCount, offset: 0x20, size: 0x8, def value: None
  int64_t ___byteCount;

  /// @brief Field BYTE_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t BYTE_LENGTH{ static_cast<int32_t>(0x40) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::GeneralDigest, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::GeneralDigest, ___xBuf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::GeneralDigest, ___xBufOff) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::GeneralDigest, ___byteCount) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::GeneralDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::GeneralDigest*, "Org.BouncyCastle.Crypto.Digests", "GeneralDigest");
