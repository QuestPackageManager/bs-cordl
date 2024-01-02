#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(775))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::ShortenedDigest*
class CORDL_TYPE ShortenedDigest : public ::System::Object {
public:
  // Declarations
  /// @brief Field baseDigest, offset 0x10, size 0x8
  __declspec(property(get = __get_baseDigest, put = __set_baseDigest))::Org::BouncyCastle::Crypto::IDigest* baseDigest;

  /// @brief Field length, offset 0x18, size 0x4
  __declspec(property(get = __get_length, put = __set_length)) int32_t length;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_baseDigest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_baseDigest() const;

  constexpr void __set_baseDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr int32_t& __get_length();

  constexpr int32_t const& __get_length() const;

  constexpr void __set_length(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Digests::ShortenedDigest* New_ctor(::Org::BouncyCastle::Crypto::IDigest* baseDigest, int32_t length);

  /// @brief Method .ctor, addr 0xea58fc, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* baseDigest, int32_t length);

  /// @brief Method get_AlgorithmName, addr 0xea5a4c, size 0x1f0, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetDigestSize, addr 0xea5c3c, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetDigestSize();

  /// @brief Method Update, addr 0xea5c44, size 0xac, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate, addr 0xea5cf0, size 0xc4, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method DoFinal, addr 0xea5db4, size 0x174, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xea5f28, size 0xa4, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method GetByteLength, addr 0xea5fcc, size 0xa4, virtual true, abstract: false, final true
  inline int32_t GetByteLength();

  // Ctor Parameters [CppParam { name: "", ty: "ShortenedDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShortenedDigest(ShortenedDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShortenedDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShortenedDigest(ShortenedDigest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShortenedDigest();

public:
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
