#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SliceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SliceType)
// Forward declare root types
namespace UnityEngine::UIElements {
struct SliceType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::SliceType);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::SliceType, "UnityEngine.UIElements", "SliceType");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.SliceType
struct CORDL_TYPE SliceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SliceType_Unwrapped
  enum struct __SliceType_Unwrapped : int32_t {
    __E_Sliced = static_cast<int32_t>(0x0),
    __E_Tiled = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SliceType_Unwrapped() const noexcept {
    return static_cast<__SliceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SliceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr SliceType(int32_t value__) noexcept;

  /// @brief Field Sliced value: I32(0)
  static ::UnityEngine::UIElements::SliceType const Sliced;

  /// @brief Field Tiled value: I32(1)
  static ::UnityEngine::UIElements::SliceType const Tiled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5093 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::SliceType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::SliceType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
