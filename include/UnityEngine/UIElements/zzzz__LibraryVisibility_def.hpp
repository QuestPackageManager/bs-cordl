#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/LibraryVisibility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LibraryVisibility)
// Forward declare root types
namespace UnityEngine::UIElements {
struct LibraryVisibility;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::LibraryVisibility);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::LibraryVisibility, "UnityEngine.UIElements", "LibraryVisibility");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.LibraryVisibility
struct CORDL_TYPE LibraryVisibility {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LibraryVisibility_Unwrapped
  enum struct __LibraryVisibility_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Visible = static_cast<int32_t>(0x1),
    __E_Hidden = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LibraryVisibility_Unwrapped() const noexcept {
    return static_cast<__LibraryVisibility_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LibraryVisibility();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr LibraryVisibility(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::UIElements::LibraryVisibility const Default;

  /// @brief Field Hidden value: I32(2)
  static ::UnityEngine::UIElements::LibraryVisibility const Hidden;

  /// @brief Field Visible value: I32(1)
  static ::UnityEngine::UIElements::LibraryVisibility const Visible;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5271 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::LibraryVisibility, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::LibraryVisibility) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
