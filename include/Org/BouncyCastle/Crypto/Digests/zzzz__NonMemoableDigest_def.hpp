#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Digests\NonMemoableDigest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NonMemoableDigest)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class NonMemoableDigest;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Digests::NonMemoableDigest*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Digests::NonMemoableDigest*, "Org.BouncyCastle.Crypto.Digests", "NonMemoableDigest");
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Digests.NonMemoableDigest
class CORDL_TYPE NonMemoableDigest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field mBaseDigest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mBaseDigest, put = __cordl_internal_set_mBaseDigest)) ::Org::BouncyCastle::Crypto::IDigest* mBaseDigest;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Method BlockUpdate, addr 0x36f354c, size 0xd0, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal, addr 0x36f361c, size 0xc0, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff);

  /// @brief Method GetByteLength, addr 0x36f3784, size 0xa8, virtual true, abstract: false, final false
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0x36f33ec, size 0xa8, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  static inline ::Org::BouncyCastle::Crypto::Digests::NonMemoableDigest* New_ctor(::Org::BouncyCastle::Crypto::IDigest* baseDigest);

  /// @brief Method Reset, addr 0x36f36dc, size 0xa8, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x36f3494, size 0xb8, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_mBaseDigest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_mBaseDigest();

  constexpr void __cordl_internal_set_mBaseDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  /// @brief Method .ctor, addr 0x36f32f0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* baseDigest);

  /// @brief Method get_AlgorithmName, addr 0x36f3348, size 0xa4, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NonMemoableDigest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NonMemoableDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NonMemoableDigest(NonMemoableDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NonMemoableDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NonMemoableDigest(NonMemoableDigest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 760 };

  /// @brief Field mBaseDigest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___mBaseDigest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::NonMemoableDigest, ___mBaseDigest) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Crypto::Digests::NonMemoableDigest) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
