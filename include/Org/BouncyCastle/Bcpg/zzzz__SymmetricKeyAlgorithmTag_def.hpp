#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/SymmetricKeyAlgorithmTag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SymmetricKeyAlgorithmTag)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag);
// Dependencies
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// CS Name: Org.BouncyCastle.Bcpg.SymmetricKeyAlgorithmTag
struct CORDL_TYPE SymmetricKeyAlgorithmTag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SymmetricKeyAlgorithmTag_Unwrapped
  enum struct __SymmetricKeyAlgorithmTag_Unwrapped : int32_t {
    __E_Null = static_cast<int32_t>(0x0),
    __E_Idea = static_cast<int32_t>(0x1),
    __E_TripleDes = static_cast<int32_t>(0x2),
    __E_Cast5 = static_cast<int32_t>(0x3),
    __E_Blowfish = static_cast<int32_t>(0x4),
    __E_Safer = static_cast<int32_t>(0x5),
    __E_Des = static_cast<int32_t>(0x6),
    __E_Aes128 = static_cast<int32_t>(0x7),
    __E_Aes192 = static_cast<int32_t>(0x8),
    __E_Aes256 = static_cast<int32_t>(0x9),
    __E_Twofish = static_cast<int32_t>(0xa),
    __E_Camellia128 = static_cast<int32_t>(0xb),
    __E_Camellia192 = static_cast<int32_t>(0xc),
    __E_Camellia256 = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SymmetricKeyAlgorithmTag_Unwrapped() const noexcept {
    return static_cast<__SymmetricKeyAlgorithmTag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SymmetricKeyAlgorithmTag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SymmetricKeyAlgorithmTag(int32_t value__) noexcept;

  /// @brief Field Aes128 value: I32(7)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Aes128;

  /// @brief Field Aes192 value: I32(8)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Aes192;

  /// @brief Field Aes256 value: I32(9)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Aes256;

  /// @brief Field Blowfish value: I32(4)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Blowfish;

  /// @brief Field Camellia128 value: I32(11)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Camellia128;

  /// @brief Field Camellia192 value: I32(12)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Camellia192;

  /// @brief Field Camellia256 value: I32(13)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Camellia256;

  /// @brief Field Cast5 value: I32(3)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Cast5;

  /// @brief Field Des value: I32(6)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Des;

  /// @brief Field Idea value: I32(1)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Idea;

  /// @brief Field Null value: I32(0)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Null;

  /// @brief Field Safer value: I32(5)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Safer;

  /// @brief Field TripleDes value: I32(2)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const TripleDes;

  /// @brief Field Twofish value: I32(10)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Twofish;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 594 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, "Org.BouncyCastle.Bcpg", "SymmetricKeyAlgorithmTag");
