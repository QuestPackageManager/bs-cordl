#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FieldPrecision.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FieldPrecision)
// Forward declare root types
namespace UnityEngine::Rendering {
struct FieldPrecision;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::FieldPrecision);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.FieldPrecision
struct CORDL_TYPE FieldPrecision {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FieldPrecision_Unwrapped
  enum struct __FieldPrecision_Unwrapped : int32_t {
    __E_Half = static_cast<int32_t>(0x0),
    __E_Real = static_cast<int32_t>(0x1),
    __E_Default = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FieldPrecision_Unwrapped() const noexcept {
    return static_cast<__FieldPrecision_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldPrecision();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FieldPrecision(int32_t value__) noexcept;

  /// @brief Field Default value: I32(2)
  static ::UnityEngine::Rendering::FieldPrecision const Default;

  /// @brief Field Half value: I32(0)
  static ::UnityEngine::Rendering::FieldPrecision const Half;

  /// @brief Field Real value: I32(1)
  static ::UnityEngine::Rendering::FieldPrecision const Real;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12171 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FieldPrecision, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FieldPrecision, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FieldPrecision, "UnityEngine.Rendering", "FieldPrecision");
