#pragma once
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
// Type: Org.BouncyCastle.Bcpg::SymmetricKeyAlgorithmTag
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// CS Name: ::Org.BouncyCastle.Bcpg::SymmetricKeyAlgorithmTag
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
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SymmetricKeyAlgorithmTag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SymmetricKeyAlgorithmTag(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Aes128 value: static_cast<int32_t>(0x7)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Aes128;

  /// @brief Field Aes192 value: static_cast<int32_t>(0x8)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Aes192;

  /// @brief Field Aes256 value: static_cast<int32_t>(0x9)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Aes256;

  /// @brief Field Blowfish value: static_cast<int32_t>(0x4)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Blowfish;

  /// @brief Field Camellia128 value: static_cast<int32_t>(0xb)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Camellia128;

  /// @brief Field Camellia192 value: static_cast<int32_t>(0xc)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Camellia192;

  /// @brief Field Camellia256 value: static_cast<int32_t>(0xd)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Camellia256;

  /// @brief Field Cast5 value: static_cast<int32_t>(0x3)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Cast5;

  /// @brief Field Des value: static_cast<int32_t>(0x6)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Des;

  /// @brief Field Idea value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Idea;

  /// @brief Field Null value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Null;

  /// @brief Field Safer value: static_cast<int32_t>(0x5)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Safer;

  /// @brief Field TripleDes value: static_cast<int32_t>(0x2)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const TripleDes;

  /// @brief Field Twofish value: static_cast<int32_t>(0xa)
  static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Twofish;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, 0x4>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, value__) == 0x0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, "Org.BouncyCastle.Bcpg", "SymmetricKeyAlgorithmTag");
