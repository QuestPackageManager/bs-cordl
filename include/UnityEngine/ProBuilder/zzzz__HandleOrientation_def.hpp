#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandleOrientation)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct HandleOrientation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::HandleOrientation);
// Type: UnityEngine.ProBuilder::HandleOrientation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12127))
// CS Name: ::UnityEngine.ProBuilder::HandleOrientation
struct CORDL_TYPE HandleOrientation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HandleOrientation_Unwrapped
  enum struct __HandleOrientation_Unwrapped : int32_t {
    __E_World = static_cast<int32_t>(0x0),
    __E_ActiveObject = static_cast<int32_t>(0x1),
    __E_ActiveElement = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HandleOrientation_Unwrapped() const noexcept {
    return static_cast<__HandleOrientation_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HandleOrientation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HandleOrientation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field World value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::HandleOrientation const World;

  /// @brief Field ActiveObject value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::HandleOrientation const ActiveObject;

  /// @brief Field ActiveElement value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::HandleOrientation const ActiveElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::HandleOrientation, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::HandleOrientation, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::HandleOrientation, "UnityEngine.ProBuilder", "HandleOrientation");
