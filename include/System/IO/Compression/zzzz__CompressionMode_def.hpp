#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompressionMode)
// Forward declare root types
namespace System::IO::Compression {
struct CompressionMode;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::CompressionMode);
// Type: System.IO.Compression::CompressionMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::IO::Compression {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7557))
// CS Name: ::System.IO.Compression::CompressionMode
struct CORDL_TYPE CompressionMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CompressionMode_Unwrapped
  enum struct __CompressionMode_Unwrapped : int32_t {
    __E_Decompress = static_cast<int32_t>(0x0),
    __E_Compress = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CompressionMode_Unwrapped() const noexcept {
    return static_cast<__CompressionMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CompressionMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CompressionMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Decompress value: static_cast<int32_t>(0x0)
  static ::System::IO::Compression::CompressionMode const Decompress;

  /// @brief Field Compress value: static_cast<int32_t>(0x1)
  static ::System::IO::Compression::CompressionMode const Compress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::CompressionMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::IO::Compression::CompressionMode, value__) == 0x0, "Offset mismatch!");

} // namespace System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::CompressionMode, "System.IO.Compression", "CompressionMode");
