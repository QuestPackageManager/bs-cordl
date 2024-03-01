#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteLineLayer)
// Forward declare root types
namespace GlobalNamespace {
struct NoteLineLayer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NoteLineLayer);
// Type: ::NoteLineLayer
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::NoteLineLayer
struct CORDL_TYPE NoteLineLayer {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NoteLineLayer_Unwrapped
  enum struct __NoteLineLayer_Unwrapped : int32_t {
    __E_Base = static_cast<int32_t>(0x0),
    __E_Upper = static_cast<int32_t>(0x1),
    __E_Top = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NoteLineLayer_Unwrapped() const noexcept {
    return static_cast<__NoteLineLayer_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__NoteLineLayer_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteLineLayer();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NoteLineLayer(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Base value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::NoteLineLayer const Base;

  /// @brief Field Top value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::NoteLineLayer const Top;

  /// @brief Field Upper value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::NoteLineLayer const Upper;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteLineLayer, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteLineLayer, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteLineLayer, "", "NoteLineLayer");
