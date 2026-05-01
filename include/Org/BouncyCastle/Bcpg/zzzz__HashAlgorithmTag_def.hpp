#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/HashAlgorithmTag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashAlgorithmTag)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::HashAlgorithmTag);
// Dependencies
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// CS Name: Org.BouncyCastle.Bcpg.HashAlgorithmTag
struct CORDL_TYPE HashAlgorithmTag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HashAlgorithmTag_Unwrapped
  enum struct __HashAlgorithmTag_Unwrapped : int32_t {
    __E_MD5 = static_cast<int32_t>(0x1),
    __E_Sha1 = static_cast<int32_t>(0x2),
    __E_RipeMD160 = static_cast<int32_t>(0x3),
    __E_DoubleSha = static_cast<int32_t>(0x4),
    __E_MD2 = static_cast<int32_t>(0x5),
    __E_Tiger192 = static_cast<int32_t>(0x6),
    __E_Haval5pass160 = static_cast<int32_t>(0x7),
    __E_Sha256 = static_cast<int32_t>(0x8),
    __E_Sha384 = static_cast<int32_t>(0x9),
    __E_Sha512 = static_cast<int32_t>(0xa),
    __E_Sha224 = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HashAlgorithmTag_Unwrapped() const noexcept {
    return static_cast<__HashAlgorithmTag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HashAlgorithmTag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HashAlgorithmTag(int32_t value__) noexcept;

  /// @brief Field DoubleSha value: I32(4)
  static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const DoubleSha;

  /// @brief Field Haval5pass160 value: I32(7)
  static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const Haval5pass160;

  /// @brief Field MD2 value: I32(5)
  static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const MD2;

  /// @brief Field MD5 value: I32(1)
  static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const MD5;

  /// @brief Field RipeMD160 value: I32(3)
  static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const RipeMD160;

  /// @brief Field Sha1 value: I32(2)
  static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const Sha1;

  /// @brief Field Sha224 value: I32(11)
  static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const Sha224;

  /// @brief Field Sha256 value: I32(8)
  static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const Sha256;

  /// @brief Field Sha384 value: I32(9)
  static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const Sha384;

  /// @brief Field Sha512 value: I32(10)
  static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const Sha512;

  /// @brief Field Tiger192 value: I32(6)
  static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const Tiger192;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 572 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::HashAlgorithmTag, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::HashAlgorithmTag, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::HashAlgorithmTag, "Org.BouncyCastle.Bcpg", "HashAlgorithmTag");
