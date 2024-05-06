#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/ShortenedDigest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShortenedDigest)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class ShortenedDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::ShortenedDigest);
// Type: Org.BouncyCastle.Crypto.Digests::ShortenedDigest
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Digests::ShortenedDigest*
class CORDL_TYPE ShortenedDigest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field baseDigest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_baseDigest, put = __cordl_internal_set_baseDigest))::Org::BouncyCastle::Crypto::IDigest* baseDigest;

  /// @brief Field length, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) int32_t length;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Method BlockUpdate, addr 0x11044fc, size 0xc4, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method DoFinal, addr 0x11045c0, size 0x174, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetByteLength, addr 0x11047d8, size 0xa4, virtual true, abstract: false, final true
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0x1104448, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetDigestSize();

  static inline ::Org::BouncyCastle::Crypto::Digests::ShortenedDigest* New_ctor(::Org::BouncyCastle::Crypto::IDigest* baseDigest, int32_t length);

  /// @brief Method Reset, addr 0x1104734, size 0xa4, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Update, addr 0x1104450, size 0xac, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_baseDigest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __cordl_internal_get_baseDigest() const;

  constexpr int32_t const& __cordl_internal_get_length() const;

  constexpr int32_t& __cordl_internal_get_length();

  constexpr void __cordl_internal_set_baseDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_length(int32_t value);

  /// @brief Method .ctor, addr 0x1104108, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* baseDigest, int32_t length);

  /// @brief Method get_AlgorithmName, addr 0x1104258, size 0x1f0, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShortenedDigest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShortenedDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShortenedDigest(ShortenedDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShortenedDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShortenedDigest(ShortenedDigest const&) = delete;

  /// @brief Field baseDigest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___baseDigest;

  /// @brief Field length, offset: 0x18, size: 0x4, def value: None
  int32_t ___length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::ShortenedDigest, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::ShortenedDigest, ___baseDigest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::ShortenedDigest, ___length) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::ShortenedDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::ShortenedDigest*, "Org.BouncyCastle.Crypto.Digests", "ShortenedDigest");
