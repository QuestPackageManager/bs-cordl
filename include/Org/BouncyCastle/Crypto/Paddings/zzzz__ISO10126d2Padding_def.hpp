#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Paddings/ISO10126d2Padding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISO10126d2Padding)
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Paddings {
class ISO10126d2Padding;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Paddings.ISO10126d2Padding
class CORDL_TYPE ISO10126d2Padding : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PaddingName)) ::StringW PaddingName;

  /// @brief Field random, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random)) ::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding"
  constexpr operator ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*() noexcept;

  /// @brief Method AddPadding, addr 0x330fb00, size 0xb0, virtual true, abstract: false, final true
  inline int32_t AddPadding(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method Init, addr 0x330fa40, size 0x7c, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding* New_ctor();

  /// @brief Method PadCount, addr 0x330fbb0, size 0x7c, virtual true, abstract: false, final true
  inline int32_t PadCount(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_random() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x330fc2c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PaddingName, addr 0x330fabc, size 0x44, virtual true, abstract: false, final true
  inline ::StringW get_PaddingName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding"
  constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* i___Org__BouncyCastle__Crypto__Paddings__IBlockCipherPadding() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ISO10126d2Padding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ISO10126d2Padding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISO10126d2Padding(ISO10126d2Padding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISO10126d2Padding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISO10126d2Padding(ISO10126d2Padding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1006 };

  /// @brief Field random, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding, ___random) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Paddings
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding*, "Org.BouncyCastle.Crypto.Paddings", "ISO10126d2Padding");
