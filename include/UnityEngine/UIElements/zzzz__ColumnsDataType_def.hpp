#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ColumnsDataType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColumnsDataType)
// Forward declare root types
namespace UnityEngine::UIElements {
struct ColumnsDataType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ColumnsDataType);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.ColumnsDataType
struct CORDL_TYPE ColumnsDataType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ColumnsDataType_Unwrapped
  enum struct __ColumnsDataType_Unwrapped : int32_t {
    __E_PrimaryColumn = static_cast<int32_t>(0x0),
    __E_StretchMode = static_cast<int32_t>(0x1),
    __E_Reorderable = static_cast<int32_t>(0x2),
    __E_Resizable = static_cast<int32_t>(0x3),
    __E_ResizePreview = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ColumnsDataType_Unwrapped() const noexcept {
    return static_cast<__ColumnsDataType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColumnsDataType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ColumnsDataType(int32_t value__) noexcept;

  /// @brief Field PrimaryColumn value: I32(0)
  static ::UnityEngine::UIElements::ColumnsDataType const PrimaryColumn;

  /// @brief Field Reorderable value: I32(2)
  static ::UnityEngine::UIElements::ColumnsDataType const Reorderable;

  /// @brief Field Resizable value: I32(3)
  static ::UnityEngine::UIElements::ColumnsDataType const Resizable;

  /// @brief Field ResizePreview value: I32(4)
  static ::UnityEngine::UIElements::ColumnsDataType const ResizePreview;

  /// @brief Field StretchMode value: I32(1)
  static ::UnityEngine::UIElements::ColumnsDataType const StretchMode;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4260 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ColumnsDataType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ColumnsDataType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ColumnsDataType, "UnityEngine.UIElements", "ColumnsDataType");
