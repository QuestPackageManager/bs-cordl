#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompressionAlgorithmTag)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct CompressionAlgorithmTag;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag);
// Type: Org.BouncyCastle.Bcpg::CompressionAlgorithmTag
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// CS Name: ::Org.BouncyCastle.Bcpg::CompressionAlgorithmTag
struct CORDL_TYPE CompressionAlgorithmTag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CompressionAlgorithmTag_Unwrapped
  enum struct __CompressionAlgorithmTag_Unwrapped : int32_t {
    __E_Uncompressed = static_cast<int32_t>(0x0),
    __E_Zip = static_cast<int32_t>(0x1),
    __E_ZLib = static_cast<int32_t>(0x2),
    __E_BZip2 = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CompressionAlgorithmTag_Unwrapped() const noexcept {
    return static_cast<__CompressionAlgorithmTag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CompressionAlgorithmTag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CompressionAlgorithmTag(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BZip2 value: static_cast<int32_t>(0x3)
  static ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const BZip2;

  /// @brief Field Uncompressed value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const Uncompressed;

  /// @brief Field ZLib value: static_cast<int32_t>(0x2)
  static ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const ZLib;

  /// @brief Field Zip value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const Zip;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, 0x4>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, value__) == 0x0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, "Org.BouncyCastle.Bcpg", "CompressionAlgorithmTag");
