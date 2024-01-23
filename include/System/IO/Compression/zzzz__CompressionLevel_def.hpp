#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompressionLevel)
// Forward declare root types
namespace System::IO::Compression {
struct CompressionLevel;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::CompressionLevel);
// Type: System.IO.Compression::CompressionLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::IO::Compression {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9545))
// CS Name: ::System.IO.Compression::CompressionLevel
struct CORDL_TYPE CompressionLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CompressionLevel_Unwrapped
  enum struct __CompressionLevel_Unwrapped : int32_t {
    __E_Optimal = static_cast<int32_t>(0x0),
    __E_Fastest = static_cast<int32_t>(0x1),
    __E_NoCompression = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CompressionLevel_Unwrapped() const noexcept {
    return static_cast<__CompressionLevel_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CompressionLevel(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CompressionLevel();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Optimal value: static_cast<int32_t>(0x0)
  static ::System::IO::Compression::CompressionLevel const Optimal;

  /// @brief Field Fastest value: static_cast<int32_t>(0x1)
  static ::System::IO::Compression::CompressionLevel const Fastest;

  /// @brief Field NoCompression value: static_cast<int32_t>(0x2)
  static ::System::IO::Compression::CompressionLevel const NoCompression;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::CompressionLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::IO::Compression::CompressionLevel, value__) == 0x0, "Offset mismatch!");

} // namespace System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::CompressionLevel, "System.IO.Compression", "CompressionLevel");
