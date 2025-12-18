#pragma once
// IWYU pragma private; include "TMPro/TMP_VertexDataUpdateFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_VertexDataUpdateFlags)
// Forward declare root types
namespace TMPro {
struct TMP_VertexDataUpdateFlags;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_VertexDataUpdateFlags);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_VertexDataUpdateFlags
struct CORDL_TYPE TMP_VertexDataUpdateFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TMP_VertexDataUpdateFlags_Unwrapped
  enum struct __TMP_VertexDataUpdateFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Vertices = static_cast<int32_t>(0x1),
    __E_Uv0 = static_cast<int32_t>(0x2),
    __E_Uv2 = static_cast<int32_t>(0x4),
    __E_Uv4 = static_cast<int32_t>(0x8),
    __E_Colors32 = static_cast<int32_t>(0x10),
    __E_All = static_cast<int32_t>(0xff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TMP_VertexDataUpdateFlags_Unwrapped() const noexcept {
    return static_cast<__TMP_VertexDataUpdateFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_VertexDataUpdateFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TMP_VertexDataUpdateFlags(int32_t value__) noexcept;

  /// @brief Field All value: I32(255)
  static ::TMPro::TMP_VertexDataUpdateFlags const All;

  /// @brief Field Colors32 value: I32(16)
  static ::TMPro::TMP_VertexDataUpdateFlags const Colors32;

  /// @brief Field None value: I32(0)
  static ::TMPro::TMP_VertexDataUpdateFlags const None;

  /// @brief Field Uv0 value: I32(2)
  static ::TMPro::TMP_VertexDataUpdateFlags const Uv0;

  /// @brief Field Uv2 value: I32(4)
  static ::TMPro::TMP_VertexDataUpdateFlags const Uv2;

  /// @brief Field Uv4 value: I32(8)
  static ::TMPro::TMP_VertexDataUpdateFlags const Uv4;

  /// @brief Field Vertices value: I32(1)
  static ::TMPro::TMP_VertexDataUpdateFlags const Vertices;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15841 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_VertexDataUpdateFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_VertexDataUpdateFlags, 0x4>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_VertexDataUpdateFlags, "TMPro", "TMP_VertexDataUpdateFlags");
