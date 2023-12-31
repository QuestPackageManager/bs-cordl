#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::NonMemoableDigest);
// Type: Org.BouncyCastle.Crypto.Digests::NonMemoableDigest
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(760))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::NonMemoableDigest*
class CORDL_TYPE NonMemoableDigest : public ::System::Object {
public:
  // Declarations
  /// @brief Field mBaseDigest, offset 0x10, size 0x8
  __declspec(property(get = __get_mBaseDigest, put = __set_mBaseDigest))::Org::BouncyCastle::Crypto::IDigest* mBaseDigest;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_mBaseDigest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_mBaseDigest() const;

  constexpr void __set_mBaseDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  static inline ::Org::BouncyCastle::Crypto::Digests::NonMemoableDigest* New_ctor(::Org::BouncyCastle::Crypto::IDigest* baseDigest);

  /// @brief Method .ctor, addr 0x122983c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* baseDigest);

  /// @brief Method get_AlgorithmName, addr 0x12298b4, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetDigestSize, addr 0x1229954, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  /// @brief Method Update, addr 0x12299f8, size 0xac, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate, addr 0x1229aa4, size 0xc4, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal, addr 0x1229b68, size 0xbc, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x1229c24, size 0xa4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method GetByteLength, addr 0x1229cc8, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetByteLength();

  // Ctor Parameters [CppParam { name: "", ty: "NonMemoableDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NonMemoableDigest(NonMemoableDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NonMemoableDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NonMemoableDigest(NonMemoableDigest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NonMemoableDigest();

public:
  /// @brief Field mBaseDigest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___mBaseDigest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::NonMemoableDigest, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::NonMemoableDigest, ___mBaseDigest) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::NonMemoableDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::NonMemoableDigest*, "Org.BouncyCastle.Crypto.Digests", "NonMemoableDigest");
