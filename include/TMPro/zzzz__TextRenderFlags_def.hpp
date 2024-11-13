#pragma once
// IWYU pragma private; include "TMPro/TextRenderFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextRenderFlags)
// Forward declare root types
namespace TMPro {
struct TextRenderFlags;
}
// Write type traits
MARK_VAL_T(::TMPro::TextRenderFlags);
// Type: TMPro::TextRenderFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMPro::TextRenderFlags
struct CORDL_TYPE TextRenderFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextRenderFlags_Unwrapped
  enum struct __TextRenderFlags_Unwrapped : int32_t {
    __E_DontRender = static_cast<int32_t>(0x0),
    __E_Render = static_cast<int32_t>(0xff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextRenderFlags_Unwrapped() const noexcept {
    return static_cast<__TextRenderFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextRenderFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextRenderFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DontRender value: static_cast<int32_t>(0x0)
  static ::TMPro::TextRenderFlags const DontRender;

  /// @brief Field Render value: static_cast<int32_t>(0xff)
  static ::TMPro::TextRenderFlags const Render;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14515 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TextRenderFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::TextRenderFlags, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextRenderFlags, "TMPro", "TextRenderFlags");
