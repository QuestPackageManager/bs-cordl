#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PivotReferenceSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PivotReferenceSize)
// Forward declare root types
namespace UnityEngine::UIElements {
struct PivotReferenceSize;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::PivotReferenceSize);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PivotReferenceSize, "UnityEngine.UIElements", "PivotReferenceSize");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.PivotReferenceSize
struct CORDL_TYPE PivotReferenceSize {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PivotReferenceSize_Unwrapped
  enum struct __PivotReferenceSize_Unwrapped : int32_t {
    __E_BoundingBox = static_cast<int32_t>(0x0),
    __E_Layout = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PivotReferenceSize_Unwrapped() const noexcept {
    return static_cast<__PivotReferenceSize_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PivotReferenceSize();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PivotReferenceSize(int32_t value__) noexcept;

  /// @brief Field BoundingBox value: I32(0)
  static ::UnityEngine::UIElements::PivotReferenceSize const BoundingBox;

  /// @brief Field Layout value: I32(1)
  static ::UnityEngine::UIElements::PivotReferenceSize const Layout;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4635 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PivotReferenceSize, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PivotReferenceSize) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
