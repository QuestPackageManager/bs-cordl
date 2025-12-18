#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/GeneralDigest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Digests.GeneralDigest
class CORDL_TYPE GeneralDigest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field byteCount, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_byteCount, put = __cordl_internal_set_byteCount)) int64_t byteCount;

  /// @brief Field xBuf, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_xBuf, put = __cordl_internal_set_xBuf)) ::ArrayW<uint8_t, ::Array<uint8_t>*> xBuf;

  /// @brief Field xBufOff, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_xBufOff, put = __cordl_internal_set_xBufOff)) int32_t xBufOff;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  /// @brief Method BlockUpdate, addr 0x35ef6a8, size 0x1c0, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Copy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method CopyIn, addr 0x35ef5d4, size 0x54, virtual false, abstract: false, final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::GeneralDigest* t);

  /// @brief Method DoFinal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Finish, addr 0x35ef868, size 0x60, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method GetByteLength, addr 0x35ef8f4, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  static inline ::Org::BouncyCastle::Crypto::Digests::GeneralDigest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::GeneralDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::GeneralDigest* t);

  /// @brief Method ProcessBlock, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessBlock();

  /// @brief Method ProcessLength, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessLength(int64_t bitLength);

  /// @brief Method ProcessWord, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessWord(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method Reset, addr 0x35ef8c8, size 0x2c, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* t);

  /// @brief Method Update, addr 0x35ef628, size 0x80, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  constexpr int64_t const& __cordl_internal_get_byteCount() const;

  constexpr int64_t& __cordl_internal_get_byteCount();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_xBuf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_xBuf();

  constexpr int32_t const& __cordl_internal_get_xBufOff() const;

  constexpr int32_t& __cordl_internal_get_xBufOff();

  constexpr void __cordl_internal_set_byteCount(int64_t value);

  constexpr void __cordl_internal_set_xBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_xBufOff(int32_t value);

  /// @brief Method .ctor, addr 0x35ef504, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x35ef558, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::GeneralDigest* t);

  /// @brief Method get_AlgorithmName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr ::Org::BouncyCastle::Utilities::IMemoable* i___Org__BouncyCastle__Utilities__IMemoable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneralDigest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeneralDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeneralDigest(GeneralDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeneralDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneralDigest(GeneralDigest const&) = delete;

  /// @brief Field BYTE_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t BYTE_LENGTH{ static_cast<int32_t>(0x40) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 750 };

  /// @brief Field xBuf, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___xBuf;

  /// @brief Field xBufOff, offset: 0x18, size: 0x4, def value: None
  int32_t ___xBufOff;

  /// @brief Field byteCount, offset: 0x20, size: 0x8, def value: None
  int64_t ___byteCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::GeneralDigest, ___xBuf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::GeneralDigest, ___xBufOff) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::GeneralDigest, ___byteCount) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::GeneralDigest, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::GeneralDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::GeneralDigest*, "Org.BouncyCastle.Crypto.Digests", "GeneralDigest");
